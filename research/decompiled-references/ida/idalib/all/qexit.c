void __fastcall __noreturn qexit(int status)
{
  sub_840BF0(1, status);
  if ( !byte_2CD6F01 )
  {
    byte_2CD6F01 = 1;
    if ( !under_debugger )
      interr(546);
    BUG();
  }
  exit(status);
}
