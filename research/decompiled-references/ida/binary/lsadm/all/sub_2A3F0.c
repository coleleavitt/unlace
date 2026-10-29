void __fastcall __noreturn sub_2A3F0(int status)
{
  sub_2A2A0(1, status);
  if ( !byte_7BCA1 )
  {
    byte_7BCA1 = 1;
    if ( !byte_7BCA0 )
      sub_2A3D0(546);
    BUG();
  }
  exit(status);
}

