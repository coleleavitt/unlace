__int64 __fastcall sub_6FED60(
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
  __int64 v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rsi
  unsigned int v18; // r13d
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  double v23; // xmm4_8
  double v24; // xmm5_8
  __int64 v25; // rdx
  __int64 v26; // r14
  unsigned __int64 v28; // rax
  __int64 *v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rax

  v14 = *(_QWORD *)(a2 + 48);
  if ( v14
    && !(unsigned __int8)sub_6EE600(a1, v14 & 0xFFFFFFFFFFFFFFF0LL, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13)
    || (*(_BYTE *)(a2 + 60) & 4) != 0
    && !(unsigned __int8)sub_6F8C40(a1, *(_QWORD *)(a2 + 88), a6, a7, a8, a9, a10, a11, a12, a13) )
  {
    return 0;
  }
  if ( *(_QWORD *)(a2 + 72) > 7u && (*(_QWORD *)(a2 + 72) & 6LL) != 2 )
  {
    if ( !(_BYTE)byte_2CA2580 && __cxa_guard_acquire(&byte_2CA2580) )
    {
      qword_2CA25A0 = 0;
      qword_2CA25A8 = 0;
      qword_2CA25B8 = 0;
      __cxa_guard_release(&byte_2CA2580);
    }
    v28 = *(_QWORD *)(a2 + 72);
    v29 = &qword_2CA25A0;
    if ( v28 <= 7 )
    {
LABEL_20:
      if ( (unsigned __int8)sub_6F8260(a1, (int *)v29, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
        goto LABEL_7;
      return 0;
    }
    v30 = v28 & 0xFFFFFFFFFFFFFFF8LL;
    a3 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( a3 == 2 )
    {
      v31 = *(_QWORD *)(v30 + 72);
      v29 = nullptr;
      if ( !v31 )
        goto LABEL_20;
      v29 = (__int64 *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v31 & 6) != 4 || !v29 )
        goto LABEL_20;
    }
    else
    {
      v29 = (__int64 *)v30;
      if ( a3 != 4 )
        goto LABEL_20;
    }
    v29 = (__int64 *)v29[1];
    goto LABEL_20;
  }
LABEL_7:
  v17 = 0;
  if ( (unsigned __int8)sub_B6A370(a2) )
    v17 = sub_B69600(a2, 0);
  v18 = sub_6EA390(a1, v17, a6, a7, a8, a9, v15, v16, a12, a13);
  if ( !(_BYTE)v18 )
    return 0;
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
      if ( !(unsigned __int8)sub_6FCB80(a1, *v19, a6, a7, a8, a9, v23, v24, a12, a13, v25, v21, v22) )
        return 0;
      ++v19;
    }
  }
  return v18;
}

