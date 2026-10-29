__int64 __fastcall sub_6FFD40(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // r13
  int *v20; // rbx
  int *v21; // r13
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 v24; // rsi
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r13

  if ( !(unsigned __int8)sub_6F4EF0(a1, *(_QWORD *)(a2 + 144), a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v17 = *(_QWORD *)(a2 + 120);
  v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v17 )
    goto LABEL_23;
  if ( (v17 & 4) == 0 )
  {
    v19 = *(unsigned int *)(v18 + 8);
    goto LABEL_6;
  }
  if ( v18 )
  {
    v18 = *(_QWORD *)v18;
    v19 = *(unsigned int *)(v18 + 8);
  }
  else
  {
LABEL_23:
    v19 = 0;
  }
LABEL_6:
  if ( (_DWORD)v19 )
  {
    v20 = (int *)(v18 + 16);
    v21 = &v20[8 * v19];
    while ( (unsigned __int8)sub_6F8260(a1, v20, v11, v12, v13, a3, a4, a5, a6, v14, v15, a9, a10) )
    {
      v20 += 8;
      if ( v21 == v20 )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  if ( !(unsigned __int8)sub_6FB580(a1, a2, a3, a4, a5, a6, v14, v15, a9, a10) )
    return 0;
  v24 = 0;
  if ( (unsigned __int8)sub_B6A370(a2) )
    v24 = sub_B69600(a2, 0);
  if ( !(unsigned __int8)sub_6EA390(a1, v24, a3, a4, a5, a6, v22, v23, a9, a10) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v27 = nullptr;
    v28 = sub_B68690(a2);
    v31 = *(unsigned int *)(v28 + 8);
    v32 = *(_QWORD *)v28 + 8 * v31;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v27 = *(__int64 **)sub_B68690(a2);
    if ( (__int64 *)v32 != v27 )
    {
      while ( (unsigned __int8)sub_6FCB80(a1, *v27, a3, a4, a5, a6, v25, v26, a9, a10, v31, v29, v30) )
      {
        if ( (__int64 *)v32 == ++v27 )
          return sub_6CBF10(*a1, nullptr, a2, a3, a4, a5, a6, v25, v26, a9, a10);
      }
      return 0;
    }
  }
  return sub_6CBF10(*a1, nullptr, a2, a3, a4, a5, a6, v25, v26, a9, a10);
}

