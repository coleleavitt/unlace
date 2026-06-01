void __fastcall sub_296F0(_QWORD *a1)
{
  bool v1; // zf

  v1 = a1[1] == 0;
  *a1 = &off_1612B0;
  if ( !v1 )
  {
    if ( !byte_1671A1 )
      sub_96F80(2600);
    BUG();
  }
  operator delete(a1, 0x18u);
}

