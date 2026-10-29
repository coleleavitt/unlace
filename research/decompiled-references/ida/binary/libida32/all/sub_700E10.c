__int64 __fastcall sub_700E10(
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
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64); // rax
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
  __int64 v28; // rbx
  __int64 v29; // rax
  double v30; // xmm4_8
  double v31; // xmm5_8

  if ( !(unsigned __int8)sub_6F4EF0(a1, *(_QWORD *)(a2 + 56), a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v13 = *(_QWORD *)(a2 + 48);
  if ( v13 )
  {
    if ( !(unsigned __int8)sub_6E9260(a1, v13, a3, a4, a5, a6, v11, v12, a9, a10) )
      return 0;
  }
  v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v14 == sub_6CE2A0 )
  {
    if ( *(_QWORD *)(a2 + 72) != a2 )
      goto LABEL_6;
  }
  else if ( v14(a2) != a2 )
  {
    goto LABEL_6;
  }
  v28 = *(_QWORD *)(sub_B9FCB0(a2) + 16);
  v29 = sub_B9FCB0(a2);
  if ( *(_QWORD *)(v29 + 16) + 8 * (unsigned __int64)*(unsigned int *)(v29 + 24) - v28 <= 0x100
    && !(unsigned __int8)sub_6EA630(a1, a2, a3, a4, a5, a6, v30, v31, a9, a10) )
  {
    return 0;
  }
LABEL_6:
  v17 = 0;
  if ( (unsigned __int8)sub_B6A370(a2) )
    v17 = sub_B69600(a2, 0);
  v18 = sub_6EA390(a1, v17, a3, a4, a5, a6, v15, v16, a9, a10);
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
      if ( !(unsigned __int8)sub_6FCB80(a1, *v19, a3, a4, a5, a6, v23, v24, a9, a10, v25, v21, v22) )
        return 0;
      ++v19;
    }
  }
  return v18;
}

