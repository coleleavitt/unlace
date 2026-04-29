__int64 __fastcall sub_3D0590(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // r9d

  v4 = a1 & 7;
  if ( v4 > 2 )
    return 0;
  if ( v4 - 1 <= 1 )
    sub_3D03A0(a4, v4, a1 >> 3, a2, a3);
  return 1;
}
