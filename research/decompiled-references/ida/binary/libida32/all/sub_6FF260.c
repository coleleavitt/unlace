__int64 __fastcall sub_6FF260(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  unsigned int v14; // r13d
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rsi
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rdx
  __int64 v26; // r14

  if ( !(unsigned __int8)sub_6F74E0(
                           a1,
                           **(_QWORD **)(a2 + 64),
                           *(_QWORD *)(a2 + 64) + 8LL,
                           *(_QWORD *)(a2 + 64) + 8LL,
                           a13,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10) )
    return 0;
  v18 = 0;
  if ( (unsigned __int8)sub_B6A370(a2) )
    v18 = sub_B69600(a2, 0);
  v14 = sub_6EA390(a1, v18, a3, a4, a5, a6, v16, v17, a9, a10);
  if ( (_BYTE)v14 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v19 = nullptr;
      v20 = sub_B68690(a2);
      v25 = *(unsigned int *)(v20 + 8);
      v26 = *(_QWORD *)v20 + 8 * v25;
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v19 = *(__int64 **)sub_B68690(a2);
      while ( (__int64 *)v26 != v19 )
      {
        if ( !(unsigned __int8)sub_6FCB80(a1, *v19, a3, a4, a5, a6, v23, v24, a9, a10, v25, v21, v22) )
          return 0;
        ++v19;
      }
    }
  }
  else
  {
    return 0;
  }
  return v14;
}

