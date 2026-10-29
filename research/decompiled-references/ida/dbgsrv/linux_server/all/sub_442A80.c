/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442A80
// Address: 0x0000000000442A80

//----- (0000000000442A80) ----------------------------------------------------
__int64 __fastcall sub_442A80(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char v9; // al
  bool v10; // zf
  _BOOL8 v12; // rbp

  v9 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 == 7 )
  {
    v12 = *(_QWORD *)(a1 + 16) > 1u;
    sub_441540(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    *(_QWORD *)(a1 + 8) = v12;
    return 1;
  }
  if ( v9 > 7 )
  {
    if ( v9 == 9 )
    {
      v10 = *(_QWORD *)(a1 + 8) == 0;
      *(_BYTE *)a1 = 2;
      *(_QWORD *)(a1 + 8) = !v10;
      return 1;
    }
  }
  else
  {
    if ( v9 == 2 )
      return 1;
    if ( v9 == 5 )
    {
      sub_441540(a1, a2, a3, a4, a5, a6, a7, a8, a9);
      *(_QWORD *)(a1 + 8) = 1;
      return 1;
    }
  }
  sub_479EB0(0x3Du);
  return 0;
}
