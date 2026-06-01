__int64 __fastcall sub_651490(__int64 *a1, __int64 a2, signed int a3)
{
  char v3; // cl

  v3 = 0;
  if ( a3 < 0 )
  {
    a3 &= ~0x80000000;
    v3 = 1;
  }
  if ( !a2 )
    a2 = a1[1];
  return sub_651240(a1, a2, a3, v3);
}
