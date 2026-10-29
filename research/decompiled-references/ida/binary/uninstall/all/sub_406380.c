__int64 __fastcall sub_406380(__int64 a1)
{
  const char *v1; // rax
  char *v2; // rbx
  int v3; // edx
  int v4; // eax
  unsigned int v5; // edx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  char *s1[31]; // [rsp+0h] [rbp-F8h] BYREF

  if ( !sub_45D780(2) )
  {
    v9 = sub_46CEC0(0, "/dev/null", 5319497, 0);
    v10 = v9;
    if ( v9 )
      sub_464490(0, v9, "-encoding", "utf-8");
    sub_45D460(v10, 2);
  }
  if ( !sub_45D780(4) )
  {
    v11 = sub_46CEC0(0, "/dev/null", 5319500, 0);
    v12 = v11;
    if ( v11 )
      sub_464490(0, v11, "-encoding", "utf-8");
    sub_45D460(v12, 4);
  }
  if ( !sub_45D780(8) )
  {
    v13 = sub_46CEC0(0, "/dev/null", 5319500, 0);
    v14 = v13;
    if ( v13 )
      sub_464490(0, v13, "-encoding", "utf-8");
    sub_45D460(v14, 8);
  }
  sub_472150(0, "Mk4tcl", sub_4D4730, 0);
  sub_472150(0, "tclkitpath", sub_406800, 0);
  sub_472150(0, "rechan", sub_405CA0, 0);
  sub_472150(0, "vfs", sub_4CA080, 0);
  sub_472150(0, "zlib", sub_4062E0, 0);
  sub_4A42F0(a1, "tcl_rcFileName", 0, "~/.tclkitrc", 1);
  sub_4AD780(s1);
  v1 = (const char *)sub_444150(0);
  v2 = s1[0];
  if ( strcmp(s1[0], v1) )
  {
    sub_445A60(0, v2);
    v2 = s1[0];
  }
  sub_4A42F0(a1, "tclkit_system_encoding", 0, v2, 0);
  sub_49F100(s1);
  sub_458D30(
    "set ::tclKitMkCounter 0\n"
    "proc tclKitMkFindBeginning {fileName {m r} {off 0} {seek 32768}} {\n"
    "set fd [open $fileName $m] ; fconfigure $fd -translation binary ; seek $fd 0 end ; set e [tell $fd] ; if {$e < $seek"
    "} {set seek $e}\n"
    "seek $fd -$seek end ; set last [read $fd] ; set end [tell $fd]\n"
    "if {[set idx [string first {bitrock-lzma-4.0} $last]] >= 0} { set off [expr {$seek - $idx}] } ; seek $fd [expr {-16-"
    "$off}] end ; binary scan [read $fd 16] IIII a b c d\n"
    "if {(($c >> 24) == -128) && ([format %x $a] eq {80000000} || [format %x $a] eq {ffffffff80000000})} { set start [exp"
    "r {$end - 16 - $b - $off}] } else { close $fd ; return {-} }\n"
    "seek $fd $start ; set e [read $fd 2] ; if {![string equal $e JL] && ![string equal $e JL]} { close $fd ; return {-} "
    "}\n"
    "seek $fd $start ; return [list $fd [expr {$end-$off-[tell $fd]}]]}\n"
    "proc tclKitMkHelperChan {cmd {a0 {}} {a1 {}} args} { switch -- $cmd {\n"
    "initialize {return {initialize finalize watch read}} finalize {close $::tclKitMkHelperChanHandle} watch {} read {\n"
    "if {$a1 > $::tclKitMkHelperChanLeft} {set a1 $::tclKitMkHelperChanLeft} ; set r [read $::tclKitMkHelperChanHandle $a"
    "1] ; incr ::tclKitMkHelperChanLeft -[string length $r] ; return $r ;\n"
    "} default {error Unsupported} } }\n"
    "proc tclKitMkOpen {p {n {}}} {if {$n == {}} {set n tclkitmk[incr ::tclKitMkCounter]} ; mk::file open $n\n"
    "foreach {::tclKitMkHelperChanHandle ::tclKitMkHelperChanLeft} [tclKitMkFindBeginning $p] break\n"
    "if {$::tclKitMkHelperChanHandle != {-}} {set chan [chan create read tclKitMkHelperChan] ; if {[catch {mk::file load "
    "$n $chan} err]} {set ei $::errorInfo; set ec $::errorCode; catch {close $chan} ; catch {close $::tclKitMkHelperChanH"
    "andle} ; error $err $ei $ec} ; close $chan}\n"
    "unset ::tclKitMkHelperChanHandle ; unset ::tclKitMkHelperChanLeft ; return $n}\n"
    "proc tclKitPreInit {} {\n"
    "if {[catch {\n"
    "rename tclKitPreInit {}\n"
    "load {} tclkitpath\n"
    "catch {load {} zlib}\n"
    "load {} Mk4tcl\n"
    "if {[file type $::tcl::kitpath] != \"directory\"} {tclKitMkOpen $::tcl::kitpath exe\n"
    "set n [mk::select exe.dirs!0.files name boot.tcl]\n"
    "if {[llength $n] == 1} {\n"
    "array set a [mk::get exe.dirs!0.files!$n]\n"
    "if {![info exists a(contents)]} { error {no boot file} }\n"
    "if {$a(size) != [string length $a(contents)]} {\n"
    "set a(contents) [zlib decompress $a(contents)]\n"
    "}\n"
    "if {$a(contents) eq \"\"} { error {empty boot file} }\n"
    "uplevel #0 $a(contents)\n"
    "} elseif {[lindex $::argv 0] eq \"-init-\"} {\n"
    "uplevel #0 { source [lindex $::argv 1] }\n"
    "exit\n"
    "} else {\n"
    "error \"invalid boot record count\"\n"
    "}\n"
    "} else {\n"
    "source [file join $::tcl::kitpath boot.tcl]\n"
    "}\n"
    "} err]} {\n"
    "set msg \"Installer payload initialization failed. This is likely due to an incomplete or corrupt downloaded file.\""
    "\n"
    "if {[info exists ::env(INITDEBUG)]} {append msg \"\\n$::errorInfo\"}\n"
    "puts stderr $msg\n"
    "exit 1\n"
    "}\n"
    "}\n"
    "tclKitPreInit",
    (unsigned int)"tclkit_system_encoding",
    v3);
  v4 = sub_458D40(a1);
  v5 = 1;
  if ( v4 != 1 )
  {
    if ( !(unsigned int)sub_40B700(
                          a1,
                          "if {[file isfile [file join $::tcl::kitpath main.tcl]]} {\n"
                          "if {[info commands console] != {}} { console hide }\n"
                          "set tcl_interactive 0\n"
                          "incr argc\n"
                          "set argv [linsert $argv 0 $argv0]\n"
                          "set argv0 [file join $::tcl::kitpath main.tcl]\n"
                          "} elseif {[file isfile [file join $::tcl::kitpath allow_interactive]]} {\n"
                          "continue\n"
                          "} else {\n"
                          "catch {puts stderr \"Installer payload initialization failed. This is likely due to an incompl"
                          "ete or corrupt downloaded file.\"}\n"
                          "exit 1\n"
                          "}",
                          0xFFFFFFFFLL,
                          0x20000) )
    {
      v7 = sub_472550();
      v8 = sub_48B5D0(a1);
      sub_472540(v8);
      if ( !v7 )
        sub_40BD00(a1, "incr argc -1; set argv [lrange $argv 1 end]");
    }
    sub_4A42F0(a1, "errorInfo", 0, 5275687, 1);
    sub_48B350(a1);
    return 0;
  }
  return v5;
}

