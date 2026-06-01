void __fastcall __noreturn sub_42D0(int status)
{
  sub_4180(1, status);
  if ( !byte_7022 )
  {
    byte_7022 = 1;
    if ( !byte_7021 )
      sub_42B0(546);
    BUG();
  }
  exit(status);
}

