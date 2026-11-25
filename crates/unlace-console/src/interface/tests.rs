use super::*;

// ---- CommandStream token extraction --------------------------------

#[test]
fn cmdstream_basic_tokens() {
    let mut s = CommandStream::new("load file foo");
    assert!(!s.eof());
    assert_eq!(s.read_token(), "load");
    assert!(!s.eof());
    assert_eq!(s.read_token(), "file");
    assert!(!s.eof());
    assert_eq!(s.read_token(), "foo");
    assert!(s.eof()); // token to end-of-string latches eof
}

/// A quoted filename keeps its spaces, and the eof contract matches
/// `read_token`'s: latched when the argument runs to the end of the line,
/// not while trailing whitespace remains.
#[test]
fn cmdstream_filename_quoted_keeps_spaces() {
    let mut s = CommandStream::new("load file \"/home/u/test dir/a.out\"");
    assert_eq!(s.read_token(), "load");
    assert_eq!(s.read_token(), "file");
    assert_eq!(s.read_filename(), "/home/u/test dir/a.out");
    assert!(s.eof());

    let mut s = CommandStream::new("\"/a b/c\"   ");
    assert_eq!(s.read_filename(), "/a b/c");
    assert!(!s.eof());
    s.skip_ws();
    assert!(s.eof());
}

/// Unquoted input is byte-identical to `read_token` — the vendored corpus
/// and every script written before quoting existed must not shift.
#[test]
fn cmdstream_filename_unquoted_is_read_token() {
    for line in ["/home/u/a.out", "  /home/u/a.out  ", "a.out b.out", ""] {
        let mut q = CommandStream::new(line);
        let mut t = CommandStream::new(line);
        assert_eq!(q.read_filename(), t.read_token(), "line: {line:?}");
        assert_eq!(q.eof(), t.eof(), "eof differs for {line:?}");
    }
}

/// `\"` and `\\` are escapes inside quotes; any other backslash is literal,
/// so a Windows path survives whether or not its separators were doubled.
#[test]
fn cmdstream_filename_escapes() {
    let mut s = CommandStream::new(r#""C:\Users\John Doe\a.out""#);
    assert_eq!(s.read_filename(), r"C:\Users\John Doe\a.out");

    let mut s = CommandStream::new(r#""C:\\Users\\John Doe\\a.out""#);
    assert_eq!(s.read_filename(), r"C:\Users\John Doe\a.out");

    let mut s = CommandStream::new(r#""odd \"name\".c""#);
    assert_eq!(s.read_filename(), "odd \"name\".c");
}

/// Two quoted arguments still separate — `load file <target> <path>` must
/// keep reading a second filename after the first.
#[test]
fn cmdstream_filename_two_quoted_args() {
    let mut s = CommandStream::new("\"a target\" \"/a b/c.out\"");
    assert_eq!(s.read_filename(), "a target");
    s.skip_ws();
    assert!(!s.eof());
    assert_eq!(s.read_filename(), "/a b/c.out");
    assert!(s.eof());
}

/// An unterminated quote consumes the rest of the line and latches eof
/// rather than looping or panicking.
#[test]
fn cmdstream_filename_unterminated_quote() {
    let mut s = CommandStream::new("\"/a b/c.out");
    assert_eq!(s.read_filename(), "/a b/c.out");
    assert!(s.eof());
}

#[test]
fn cmdstream_leading_ws() {
    let mut s = CommandStream::new("   leading");
    s.skip_ws();
    assert!(!s.eof());
    assert_eq!(s.read_token(), "leading");
    assert!(s.eof());
}

#[test]
fn cmdstream_trailing_ws_no_eof_until_consumed() {
    let mut s = CommandStream::new("trailing   ");
    assert_eq!(s.read_token(), "trailing");
    // token NOT to end (trailing ws remains): eof stays false
    assert!(!s.eof());
    s.skip_ws();
    assert!(s.eof());
}

#[test]
fn cmdstream_empty_and_all_ws() {
    let mut s = CommandStream::new("");
    s.skip_ws();
    assert!(s.eof());
    let mut s = CommandStream::new("   ");
    s.skip_ws();
    assert!(s.eof());
    // read_token on all-ws yields empty + eof
    let mut s = CommandStream::new("   ");
    assert_eq!(s.read_token(), "");
    assert!(s.eof());
}

#[test]
fn cmdstream_get_and_rest() {
    let mut s = CommandStream::new("ab");
    assert_eq!(s.get(), Some(b'a'));
    assert_eq!(s.rest(), "b");
    assert_eq!(s.get(), Some(b'b'));
    assert_eq!(s.get(), None);
    assert!(s.eof());
}

// ---- maxmatch ------------------------------------------------------

#[test]
fn maxmatch_common_prefix() {
    assert_eq!(maxmatch("print", "printraw"), ("print".to_string(), true));
    assert_eq!(maxmatch("printraw", "print"), ("print".to_string(), true));
    assert_eq!(maxmatch("load", "list"), ("l".to_string(), false));
    assert_eq!(maxmatch("abc", "xyz"), (String::new(), false));
    assert_eq!(maxmatch("same", "same"), ("same".to_string(), true));
}

// ---- IfaceCommand::compare ----------------------------------------

#[test]
fn command_compare_orders_by_tokens() {
    let mk = |ws: &[&str]| {
        let mut c = IfaceCommand::new(Box::new(DummyAction));
        for w in ws {
            c.add_word(w);
        }
        c
    };
    let a = mk(&["load", "file"]);
    let b = mk(&["save"]);
    assert_eq!(a.compare(&b), -1); // 'l' < 's'
    assert_eq!(b.compare(&a), 1);
    let c = mk(&["load"]);
    let d = mk(&["load", "file"]);
    assert_eq!(c.compare(&d), -1); // prefix is less
    assert_eq!(d.compare(&c), 1);
    let e = mk(&["load", "file"]);
    assert_eq!(a.compare(&e), 0);
}

// ---- prefix resolution matrices -----------------------------------

/// A test action that records nothing; module name is parameterized.
struct TestAction {
    module: String,
}
impl IfaceCommandAction for TestAction {
    fn execute(&self, _s: &mut IfaceStatus, _is: &mut CommandStream) -> IfaceResult<()> {
        Ok(())
    }
    fn module(&self) -> String {
        self.module.clone()
    }
}

fn dummy_source() -> Box<dyn LineSource> {
    Box::new(VecSource::new(Vec::new()))
}

/// Minimal LineSource for resolution tests.
struct VecSource {
    stack: Vec<(Vec<String>, usize)>,
}
impl VecSource {
    fn new(lines: Vec<String>) -> Self {
        VecSource {
            stack: vec![(lines, 0)],
        }
    }
}
impl LineSource for VecSource {
    fn read_line(&mut self, _status: &mut IfaceStatus) -> String {
        let top = self.stack.last_mut().unwrap();
        if top.1 >= top.0.len() {
            return String::new();
        }
        let l = top.0[top.1].clone();
        top.1 += 1;
        l
    }
    fn push_input(&mut self, lines: Vec<String>) {
        self.stack.push((lines, 0));
    }
    fn pop_input(&mut self) {
        self.stack.pop();
    }
    fn current_stream_finished(&self) -> bool {
        let top = self.stack.last().unwrap();
        top.1 >= top.0.len()
    }
}

fn status_with_commands() -> IfaceStatus {
    let mut st = IfaceStatus::new("> ", dummy_source(), 10);
    let reg = |st: &mut IfaceStatus, ws: &[&str]| {
        st.register_com(
            Box::new(TestAction {
                module: "base".into(),
            }),
            ws,
        );
    };
    reg(&mut st, &["quit"]);
    reg(&mut st, &["load", "file"]);
    reg(&mut st, &["save"]);
    reg(&mut st, &["print", "C"]);
    reg(&mut st, &["print", "raw"]);
    reg(&mut st, &["restore"]);
    st
}

#[test]
fn resolve_unique_full() {
    let mut st = status_with_commands();
    assert_eq!(st.resolve("quit").unwrap(), vec!["quit"]);
    assert_eq!(st.resolve("save").unwrap(), vec!["save"]);
}

#[test]
fn resolve_unique_prefix_autocompletes() {
    let mut st = status_with_commands();
    // "q" uniquely => quit
    assert_eq!(st.resolve("q").unwrap(), vec!["quit"]);
    // "lo fi" => load file
    assert_eq!(st.resolve("lo fi").unwrap(), vec!["load", "file"]);
    // "sav" => save (unambiguous against save/restore? s -> save|... ;
    // "sav" is unique)
    assert_eq!(st.resolve("sav").unwrap(), vec!["save"]);
}

#[test]
fn resolve_ambiguous_first_token() {
    let mut st = status_with_commands();
    // "s" matches save & ... only save starts with s besides? restore
    // starts with r. So "s" => save uniquely. Use "print" prefix instead.
    // "print" alone is ambiguous (print C / print raw): complete-but-not-
    // unique => Incomplete command.
    let e = st.resolve("print").unwrap_err();
    assert!(e.is_parse());
    assert_eq!(e.explain, "Incomplete command");
}

#[test]
fn resolve_ambiguous_partial_token() {
    let mut st = status_with_commands();
    // "pr" is a partial of the shared "print" prefix; last token
    // incomplete => Incomplete command.
    let e = st.resolve("pr").unwrap_err();
    assert!(e.is_parse());
    assert_eq!(e.explain, "Incomplete command");
}

#[test]
fn resolve_print_subcommand_disambiguates() {
    let mut st = status_with_commands();
    assert_eq!(st.resolve("print C").unwrap(), vec!["print", "C"]);
    assert_eq!(st.resolve("pr r").unwrap(), vec!["print", "raw"]);
}

#[test]
fn resolve_unknown_is_invalid() {
    let mut st = status_with_commands();
    let e = st.resolve("zzz").unwrap_err();
    assert!(e.is_execution());
    assert_eq!(e.explain, "Invalid command");
}

// ---- runCommand diagnostics in optr --------------------------------

fn status_feeding(lines: &[&str]) -> IfaceStatus {
    let src = VecSource::new(lines.iter().map(|s| s.to_string()).collect());
    let mut st = IfaceStatus::new("> ", Box::new(src), 10);
    st.register_com(
        Box::new(TestAction {
            module: "base".into(),
        }),
        &["quit"],
    );
    st.register_com(
        Box::new(TestAction {
            module: "base".into(),
        }),
        &["load", "file"],
    );
    st.register_com(
        Box::new(TestAction {
            module: "base".into(),
        }),
        &["print", "C"],
    );
    st.register_com(
        Box::new(TestAction {
            module: "base".into(),
        }),
        &["print", "raw"],
    );
    st
}

#[test]
fn run_command_blank_line_returns_false() {
    let mut st = status_feeding(&[""]);
    assert!(!st.run_command().unwrap());
    assert_eq!(st.optr, "");
}

#[test]
fn run_command_invalid_emits_error() {
    let mut st = status_feeding(&["bogus"]);
    assert!(!st.run_command().unwrap());
    assert_eq!(st.optr, "ERROR: Invalid command\n");
}

#[test]
fn run_command_incomplete_ambiguous_emits_error() {
    let mut st = status_feeding(&["print"]);
    assert!(!st.run_command().unwrap());
    assert_eq!(st.optr, "ERROR: Incomplete command\n");
}

#[test]
fn run_command_unique_executes() {
    let mut st = status_feeding(&["quit"]);
    assert!(st.run_command().unwrap());
    assert_eq!(st.optr, "");
}

// ---- history -------------------------------------------------------

#[test]
fn history_circular() {
    let mut st = IfaceStatus::new("> ", dummy_source(), 3);
    st.save_history("a");
    st.save_history("b");
    st.save_history("c");
    st.save_history("d"); // overwrites slot 0
    let mut line = String::new();
    st.get_history(&mut line, 0);
    assert_eq!(line, "d"); // most recent
    st.get_history(&mut line, 1);
    assert_eq!(line, "c");
    st.get_history(&mut line, 2);
    assert_eq!(line, "b");
    // i too far back: unchanged
    let mut line = "keep".to_string();
    st.get_history(&mut line, 3);
    assert_eq!(line, "keep");
}

// ---- words_to_string ----------------------------------------------

#[test]
fn words_to_string_space_separated() {
    assert_eq!(
        words_to_string(&["a".into(), "b".into(), "c".into()]),
        "a b c"
    );
    assert_eq!(words_to_string(&[]), "");
    assert_eq!(words_to_string(&["solo".into()]), "solo");
}

// ---- script push/pop + evaluateError -------------------------------

#[test]
fn evaluate_error_aborts_process_when_errorisdone() {
    let mut st = IfaceStatus::new("> ", dummy_source(), 10);
    st.set_error_is_done(true);
    st.evaluate_error();
    assert!(st.done);
    assert!(st.inerror);
    assert_eq!(st.optr, "Aborting process\n");
}

#[test]
fn evaluate_error_aborts_script_when_nested() {
    let mut st = IfaceStatus::new("> ", dummy_source(), 10);
    st.push_script_lines(vec!["x".into()], "init> ");
    // inside a script errorisdone is forced true by push; clear it to test
    // the "abort the script" branch.
    st.errorisdone = false;
    st.evaluate_error();
    assert!(st.inerror);
    assert!(!st.done);
    assert_eq!(st.optr, "Aborting init> \n");
}

#[test]
fn push_pop_script_restores_prompt_and_flags() {
    let mut st = IfaceStatus::new("base> ", dummy_source(), 10);
    assert_eq!(st.prompt(), "base> ");
    st.push_script_lines(vec!["a".into()], "sub> ");
    assert_eq!(st.prompt(), "sub> ");
    assert_eq!(st.num_input_stream_size(), 1);
    st.pop_script();
    assert_eq!(st.prompt(), "base> ");
    assert_eq!(st.num_input_stream_size(), 0);
    assert!(!st.inerror);
}

// ---- VERIFIER adversarial tests (w9-con-interface) -----------------

// ---- IfaceBaseCommand "base" module commands -----------------------

fn bare_status() -> IfaceStatus {
    IfaceStatus::new("> ", dummy_source(), 10)
}

/// All six base commands report module "base" (C++
/// `IfaceBaseCommand::getModule`).
#[test]
fn base_commands_module_is_base() {
    assert_eq!(IfcQuit.module(), "base");
    assert_eq!(IfcHistory.module(), "base");
    assert_eq!(IfcOpenfile.module(), "base");
    assert_eq!(IfcOpenfileAppend.module(), "base");
    assert_eq!(IfcClosefile.module(), "base");
    assert_eq!(IfcEcho.module(), "base");
}

/// `IfcQuit`: with no params sets `done`; with extra params raises a parse
/// error (C++ "Too many parameters to quit").
#[test]
fn ifc_quit_sets_done_and_rejects_params() {
    let mut st = bare_status();
    // Stream positioned at end (as expandCom would leave it after "quit").
    let mut s = CommandStream::new("");
    s.skip_ws(); // latch eof, as the loop does
    assert!(IfcQuit.execute(&mut st, &mut s).is_ok());
    assert!(st.done);

    let mut st = bare_status();
    let mut s = CommandStream::new(" extra");
    let e = IfcQuit.execute(&mut st, &mut s).unwrap_err();
    assert!(e.is_parse());
    assert_eq!(e.explain, "Too many parameters to quit");
    assert!(!st.done);
}

/// `IfcHistory`: default lists 10 (capped at history size), oldest-to-newest;
/// a numeric arg limits the count; a trailing extra token is a parse error.
#[test]
fn ifc_history_lists_oldest_to_newest() {
    let mut st = bare_status();
    for s in ["one", "two", "three"] {
        st.save_history(s);
    }
    // No arg: defaults to 10, capped to 3, lists oldest->newest.
    let mut s = CommandStream::new("");
    s.skip_ws();
    assert!(IfcHistory.execute(&mut st, &mut s).is_ok());
    assert_eq!(st.optr, "one\ntwo\nthree\n");

    // Numeric arg limits to the newest N (here 2: two,three).
    let mut st = bare_status();
    for s in ["one", "two", "three"] {
        st.save_history(s);
    }
    let mut s = CommandStream::new("2");
    assert!(IfcHistory.execute(&mut st, &mut s).is_ok());
    assert_eq!(st.optr, "two\nthree\n");
}

#[test]
fn ifc_history_rejects_extra_param() {
    let mut st = bare_status();
    st.save_history("x");
    let mut s = CommandStream::new("2 junk");
    let e = IfcHistory.execute(&mut st, &mut s).unwrap_err();
    assert!(e.is_parse());
    assert_eq!(e.explain, "Too many parameters to history");
}

/// `IfcOpenfile`/`IfcClosefile`: open establishes a (non-append) redirect;
/// re-opening while open is an execution error; bulk output goes to the
/// redirect; close tears it down; closing with no file open is an error.
#[test]
fn ifc_openfile_close_redirect_cycle() {
    let mut st = bare_status();
    assert!(!st.is_file_open());

    // closefile with nothing open => execution error.
    let mut s = CommandStream::new("");
    let e = IfcClosefile.execute(&mut st, &mut s).unwrap_err();
    assert!(e.is_execution());
    assert_eq!(e.explain, "No file open");

    // openfile out.txt
    let mut s = CommandStream::new("out.txt");
    assert!(IfcOpenfile.execute(&mut st, &mut s).is_ok());
    assert!(st.is_file_open());

    // Bulk output now lands in the redirect, not optr.
    st.file_out("captured");
    assert!(st.optr.is_empty());

    // Re-opening while already open => execution error.
    let mut s = CommandStream::new("other.txt");
    let e = IfcOpenfile.execute(&mut st, &mut s).unwrap_err();
    assert!(e.is_execution());
    assert_eq!(e.explain, "Output file already opened");

    // closefile flushes the captured FileOut and returns to optr.
    let mut s = CommandStream::new("");
    assert!(IfcClosefile.execute(&mut st, &mut s).is_ok());
    assert!(!st.is_file_open());
    let fo = st.close_file_redirect();
    assert!(fo.is_none()); // already closed by the command
}

/// `IfcOpenfile` with no filename token is a parse error.
#[test]
fn ifc_openfile_no_filename() {
    let mut st = bare_status();
    let mut s = CommandStream::new("");
    let e = IfcOpenfile.execute(&mut st, &mut s).unwrap_err();
    assert!(e.is_parse());
    assert_eq!(e.explain, "No filename specified");
}

/// `IfcOpenfileAppend` sets the append flag (C++ `ios_base::app`).
#[test]
fn ifc_openfile_append_sets_flag() {
    let mut st = bare_status();
    let mut s = CommandStream::new("log.txt");
    assert!(IfcOpenfileAppend.execute(&mut st, &mut s).is_ok());
    let fo = st.close_file_redirect().expect("redirect open");
    assert!(fo.append);
    assert_eq!(fo.filename, "log.txt");
}

/// `IfcEcho` writes the rest of the command line plus a newline to the bulk
/// stream (to optr when no file is open), byte for byte including spaces.
#[test]
fn ifc_echo_writes_rest_plus_newline() {
    let mut st = bare_status();
    // expandCom would have consumed "echo"; the stream holds " hello world".
    let mut s = CommandStream::new(" hello world");
    assert!(IfcEcho.execute(&mut st, &mut s).is_ok());
    // get() reads raw bytes with no ws skipping, so the leading space and
    // the inter-word space are preserved verbatim.
    assert_eq!(st.optr, " hello world\n");

    // With a redirect open, the echo lands in the file, not optr.
    let mut st = bare_status();
    st.open_file_redirect("f.txt", false);
    let mut s = CommandStream::new(" body");
    assert!(IfcEcho.execute(&mut st, &mut s).is_ok());
    assert!(st.optr.is_empty());
    let fo = st.close_file_redirect().unwrap();
    assert_eq!(fo.contents, " body\n");
}

#[test]
fn ifc_echo_preserves_utf8() {
    let mut st = bare_status();
    let mut s = CommandStream::new(" 한글 📁 样本");
    assert!(IfcEcho.execute(&mut st, &mut s).is_ok());
    assert_eq!(st.optr, " 한글 📁 样本\n");
}

/// `CommandStream::read_int` parses a signed decimal, latching eof only when
/// the digits run to the buffer end (matching `std::istream >> int`).
#[test]
fn cmdstream_read_int() {
    let mut s = CommandStream::new("42");
    assert_eq!(s.read_int(), 42);
    assert!(s.eof()); // ran to end

    let mut s = CommandStream::new("  -7 rest");
    assert_eq!(s.read_int(), -7);
    assert!(!s.eof()); // more remains
    assert_eq!(s.read_token(), "rest");

    // No digits: extraction fails, value 0, get-pointer un-advanced past sign.
    let mut s = CommandStream::new("abc");
    assert_eq!(s.read_int(), 0);
    assert_eq!(s.read_token(), "abc");
}
