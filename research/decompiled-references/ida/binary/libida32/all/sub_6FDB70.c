__int64 __fastcall sub_6FDB70(
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
  unsigned __int64 v16; // rax
  __int64 *v17; // rsi
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rsi
  unsigned int v21; // r13d
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v29; // rdx
  __int64 v30; // r14
  unsigned __int64 v31; // rax
  __int64 v32; // rax

  if ( !(unsigned __int8)sub_6FB4A0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  if ( *(_QWORD *)(a2 + 72) > 7u && (*(_QWORD *)(a2 + 72) & 6LL) != 2 )
  {
    if ( !(_BYTE)byte_2CA2540 && __cxa_guard_acquire(&byte_2CA2540) )
    {
      qword_2CA2560 = 0;
      qword_2CA2568 = 0;
      qword_2CA2578 = 0;
      __cxa_guard_release(&byte_2CA2540);
    }
    v16 = *(_QWORD *)(a2 + 72);
    v17 = &qword_2CA2560;
    if ( v16 <= 7 )
    {
LABEL_6:
      if ( (unsigned __int8)sub_6F8260(a1, (int *)v17, v11, v12, v13, a3, a4, a5, a6, v14, v15, a9, a10) )
        goto LABEL_7;
      return 0;
    }
    v31 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( v11 == 2 )
    {
      v32 = *(_QWORD *)(v31 + 72);
      v17 = nullptr;
      if ( !v32 )
        goto LABEL_6;
      v17 = (__int64 *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v32 & 6) != 4 || !v17 )
        goto LABEL_6;
    }
    else
    {
      v17 = (__int64 *)v31;
      if ( v11 != 4 )
        goto LABEL_6;
    }
    v17 = (__int64 *)v17[1];
    goto LABEL_6;
  }
LABEL_7:
  v20 = 0;
  if ( (unsigned __int8)sub_B6A370(a2) )
    v20 = sub_B69600(a2, 0);
  v21 = sub_6EA390(a1, v20, a3, a4, a5, a6, v18, v19, a9, a10);
  if ( !(_BYTE)v21 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v23 = nullptr;
    v24 = sub_B68690(a2);
    v29 = *(unsigned int *)(v24 + 8);
    v30 = *(_QWORD *)v24 + 8 * v29;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v23 = *(__int64 **)sub_B68690(a2);
    while ( (__int64 *)v30 != v23 )
    {
      if ( !(unsigned __int8)sub_6FCB80(a1, *v23, a3, a4, a5, a6, v27, v28, a9, a10, v29, v25, v26) )
        return 0;
      ++v23;
    }
  }
  return v21;
}

