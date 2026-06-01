__int64 __fastcall sub_718E70(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r8
  double v16; // xmm4_8
  double v17; // xmm5_8

  v12 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) == 6 )
  {
    if ( !v12 )
      goto LABEL_8;
  }
  else if ( !v12 )
  {
    v13 = 16;
    goto LABEL_5;
  }
  if ( (unsigned __int8)sub_718340(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8), a4, a5, a6, a7, a8, a9, a10, a11) )
  {
    v13 = 16;
    if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) != 6 )
    {
LABEL_5:
      v14 = sub_F6C520(*(_QWORD *)(a2 + 40));
      return sub_717AC0(
               a1,
               *(_QWORD *)(a2 + 40),
               v14 * ((a3 + v13 != 0) + (a3 + v13 - (unsigned __int64)(a3 + v13 != 0)) / v14),
               v14,
               v15,
               a4,
               a5,
               a6,
               a7,
               v16,
               v17,
               a10,
               a11);
    }
LABEL_8:
    v13 = 16LL * (*(_QWORD *)(a2 + 32) != 0);
    goto LABEL_5;
  }
  return 0;
}
