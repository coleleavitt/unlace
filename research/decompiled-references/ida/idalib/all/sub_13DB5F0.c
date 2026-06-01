__int64 __fastcall sub_13DB5F0(_BYTE *a1, __int64 a2, __m128i a3, double a4)
{
  char v4; // dl

  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( a1[160] )
  {
    *(_WORD *)(a2 + 18) = 1;
    a1[160] = 0;
  }
  if ( a1[162] )
  {
    *(_WORD *)(a2 + 18) |= 2u;
    a1[162] = 0;
  }
  if ( a1[163] )
  {
    *(_WORD *)(a2 + 18) |= 0x10u;
    a1[163] = 0;
  }
  v4 = a1[161];
  a1[161] = 0;
  return sub_13D8FD0((__int64)a1, a2, v4, a3, a4);
}
