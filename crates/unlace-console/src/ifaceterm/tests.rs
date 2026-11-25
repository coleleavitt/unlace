use super::*;
use crate::interface::{CommandStream, IfaceCommandAction, IfaceResult};

struct NoopAction;
impl IfaceCommandAction for NoopAction {
    fn execute(&self, _s: &mut IfaceStatus, _is: &mut CommandStream) -> IfaceResult<()> {
        Ok(())
    }
    fn module(&self) -> String {
        "base".into()
    }
}

fn term_status(input: &str) -> IfaceStatus {
    let mut st = IfaceTerm::into_status("[decomp]> ", input.as_bytes());
    st.register_com(Box::new(NoopAction), &["quit"]);
    st.register_com(Box::new(NoopAction), &["load", "file"]);
    st.register_com(Box::new(NoopAction), &["print", "C"]);
    st.register_com(Box::new(NoopAction), &["print", "raw"]);
    st
}

// ---- IfaceTerm batch readLine --------------------------------------

#[test]
fn term_reads_simple_line_and_echoes() {
    // Drive run_command through one line; assert the line executes and the
    // echo matches the C++ batch behavior (each char echoed, then newline).
    let mut st = term_status("quit\n");
    assert!(st.run_command().unwrap());
    // Echo: "quit" char-by-char, then '\n'.
    assert_eq!(st.optr, "quit\n");
}

#[test]
fn term_reads_multichar_with_params() {
    let mut st = term_status("load file foo\n");
    assert!(st.run_command().unwrap());
    assert_eq!(st.optr, "load file foo\n");
}

#[test]
fn term_eof_terminates_line() {
    // No trailing newline: eof supplies the '\n'.
    let mut st = term_status("quit");
    assert!(st.run_command().unwrap());
    assert_eq!(st.optr, "quit\n");
}

#[test]
fn term_blank_line_no_command() {
    let mut st = term_status("\n");
    // Empty line -> readLine returns "" -> run_command returns false.
    assert!(!st.run_command().unwrap());
    // The lone '\n' is echoed.
    assert_eq!(st.optr, "\n");
}

#[test]
fn term_stream_finished_after_input() {
    // Faithful to std::istream: reading "quit\n" in full does NOT set eof
    // (eof is latched only on the *next* get past the end), so the stream
    // is not yet finished after one command — mirroring C++ where the
    // mainloop makes one more (empty) readLine pass before eof shows.
    let mut st = term_status("quit\n");
    assert!(!st.is_stream_finished());
    st.run_command().unwrap();
    assert!(!st.is_stream_finished());
    // The trailing read sees eof, yields an empty line (no command).
    assert!(!st.run_command().unwrap());
    assert!(st.is_stream_finished());
}

#[test]
fn term_reads_unicode_path_as_utf8() {
    for path in ["/tmp/한글/샘플.exe", r"C:\Users\홍길동\📁 样本\sample.exe"] {
        let command = format!("load file \"{path}\"");
        let mut source = IfaceTerm::new(format!("{command}\n").as_bytes());
        let mut st = term_status("");
        assert_eq!(source.read_line(&mut st), command);
        assert_eq!(st.optr, format!("{command}\n"));
    }
}

// ---- doCompletion --------------------------------------------------

#[test]
fn term_tab_completes_unique() {
    // "q" + TAB should expand to "quit " and report complete.
    let mut st = term_status("q\t\n");
    // First run_command reads the "q<TAB>\n" line; TAB triggers completion
    // which writes to optr and rewrites the line, then '\n' ends it.
    st.run_command().unwrap();
    // The completion appended "Command is complete" once expanded uniquely.
    // After expansion the line became "quit " (oldsize<newsize) so it just
    // displays the expansion; assert the expanded command resolved.
    assert!(st.optr.contains("quit"));
}

#[test]
fn term_tab_ambiguous_expands_to_space() {
    // "print" + TAB expands the common stem and appends a trailing space
    // (line grows), so doCompletion returns the expansion and does NOT yet
    // list candidates — matching C++ doCompletion's `oldsize < line.size()`
    // early return.
    let mut st = term_status("print\t\n");
    st.run_command().unwrap();
    assert!(!st.optr.contains("print C"));
    assert!(!st.optr.contains("Command is complete"));
}

#[test]
fn term_tab_ambiguous_lists_candidates() {
    // "print " (trailing space) + TAB: the stem is already complete, the
    // line does not grow, so doCompletion lists both candidates.
    let mut st = term_status("print \t\n");
    st.run_command().unwrap();
    assert!(st.optr.contains("print C"));
    assert!(st.optr.contains("print raw"));
}

// ---- ConsoleCommands ----------------------------------------------

#[test]
fn console_commands_feed_in_order() {
    let mut cc = ConsoleCommands::new(vec!["a".into(), "b".into()]);
    let mut dummy = IfaceTerm::into_status("> ", b"");
    assert_eq!(cc.read_line(&mut dummy), "a");
    assert_eq!(cc.read_line(&mut dummy), "b");
    assert_eq!(cc.read_line(&mut dummy), ""); // exhausted
    assert!(cc.current_stream_finished());
}

#[test]
fn console_commands_rewind() {
    let mut cc = ConsoleCommands::new(vec!["x".into()]);
    let mut dummy = IfaceTerm::into_status("> ", b"");
    assert_eq!(cc.read_line(&mut dummy), "x");
    assert!(cc.current_stream_finished());
    cc.rewind();
    assert!(!cc.current_stream_finished());
    assert_eq!(cc.read_line(&mut dummy), "x");
}

#[test]
fn console_commands_drives_status() {
    let mut st = ConsoleCommands::into_status(vec!["quit".into()]);
    st.register_com(Box::new(NoopAction), &["quit"]);
    assert!(st.run_command().unwrap());
    // ConsoleCommands does not echo.
    assert_eq!(st.optr, "");
    assert!(st.is_stream_finished());
}

// ---- byte-edit helpers ---------------------------------------------

#[test]
fn string_edits() {
    let mut s = b"abc".to_vec();
    insert_at(&mut s, 1, b'X');
    assert_eq!(s, b"aXbc");
    erase_at(&mut s, 1, 1);
    assert_eq!(s, b"abc");
    erase_from(&mut s, 1);
    assert_eq!(s, b"a");
    let mut s = b"hello".to_vec();
    erase_range(&mut s, 0, 2);
    assert_eq!(s, b"llo");
}
