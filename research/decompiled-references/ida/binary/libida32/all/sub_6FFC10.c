__int64 __fastcall sub_6FFC10(
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
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // r12
  int *v17; // rbx
  int *v18; // r12
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rsi
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r12

  v14 = *(_QWORD *)(a2 + 120);
  if ( !v14 )
    goto LABEL_9;
  v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v14 & 4) != 0 )
  {
    if ( !v15 )
      goto LABEL_9;
    v15 = *(_QWORD *)v15;
  }
  if ( v15 )
  {
    v16 = *(unsigned int *)(v15 + 8);
    if ( (_DWORD)v16 )
    {
      v17 = (int *)(v15 + 16);
      v18 = &v17[8 * v16];
      while ( (unsigned __int8)sub_6F8260(a1, v17, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
      {
        v17 += 8;
        if ( v18 == v17 )
          goto LABEL_9;
      }
      return 0;
    }
  }
LABEL_9:
  if ( !(unsigned __int8)sub_6FB580(a1, a2, a6, a7, a8, a9, a10, a11, a12, a13) )
    return 0;
  v22 = 0;
  if ( (unsigned __int8)sub_B6A370(a2) )
    v22 = sub_B69600(a2, 0);
  if ( !(unsigned __int8)sub_6EA390(a1, v22, a6, a7, a8, a9, v20, v21, a12, a13) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v25 = nullptr;
    v26 = sub_B68690(a2);
    v29 = *(unsigned int *)(v26 + 8);
    v30 = *(_QWORD *)v26 + 8 * v29;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v25 = *(__int64 **)sub_B68690(a2);
    if ( (__int64 *)v30 != v25 )
    {
      while ( (unsigned __int8)sub_6FCB80(a1, *v25, a6, a7, a8, a9, v23, v24, a12, a13, v29, v27, v28) )
      {
        if ( (__int64 *)v30 == ++v25 )
          return sub_6CBF10(*a1, nullptr, a2, a6, a7, a8, a9, v23, v24, a12, a13);
      }
      return 0;
    }
  }
  return sub_6CBF10(*a1, nullptr, a2, a6, a7, a8, a9, v23, v24, a12, a13);
}

