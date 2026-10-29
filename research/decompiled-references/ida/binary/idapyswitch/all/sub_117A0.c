void __fastcall __noreturn sub_117A0(int status)
{
  sub_11650(1, status);
  if ( !byte_1D3C1 )
  {
    byte_1D3C1 = 1;
    if ( !byte_1D3C0 )
      sub_11780(546);
    BUG();
  }
  exit(status);
}

