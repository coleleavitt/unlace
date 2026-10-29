void __fastcall __noreturn qexit(int status)
{
  sub_81D830(1, status);
  if ( !byte_2CACFE1 )
  {
    byte_2CACFE1 = 1;
    if ( !under_debugger )
      interr(546);
    BUG();
  }
  exit(status);
}

