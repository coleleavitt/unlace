__int64 __fastcall sub_6FF4C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128i a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  int *v14; // rbx
  __int64 v15; // r12
  unsigned int v16; // r12d
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rsi
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rdx
  __int64 v28; // r14

  v14 = (int *)(a2 + 40);
  v15 = a2 + 40 + 24LL * *(unsigned int *)(a2 + 36);
  if ( a2 + 40 != v15 )
  {
    while ( (unsigned __int8)sub_6EED00(a1, v14, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
    {
      v14 += 6;
      if ( (int *)v15 == v14 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v20 = 0;
  if ( (unsigned __int8)sub_B6A370(a2) )
    v20 = sub_B69600(a2, 0);
  v16 = sub_6EA390(a1, v20, a6, a7, a8, a9, v18, v19, a12, a13);
  if ( !(_BYTE)v16 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v21 = nullptr;
    v22 = sub_B68690(a2);
    v27 = *(unsigned int *)(v22 + 8);
    v28 = *(_QWORD *)v22 + 8 * v27;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v21 = *(__int64 **)sub_B68690(a2);
    while ( (__int64 *)v28 != v21 )
    {
      if ( !(unsigned __int8)sub_6FCB80(a1, *v21, a6, a7, a8, a9, v25, v26, a12, a13, v27, v23, v24) )
        return 0;
      ++v21;
    }
  }
  return v16;
}

