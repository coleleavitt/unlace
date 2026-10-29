void __fastcall __noreturn sub_96FA0(int status)
{
  sub_96E50(1, status);
  if ( !byte_1671A2 )
  {
    byte_1671A2 = 1;
    if ( !byte_1671A1 )
      sub_96F80(546);
    BUG();
  }
  exit(status);
}

