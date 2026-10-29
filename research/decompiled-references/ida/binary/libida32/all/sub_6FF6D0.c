__int64 __fastcall sub_6FF6D0(
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
  __int64 *v14; // rax
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rsi
  unsigned int v17; // r12d
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rbx
  __int64 i; // r14
  __int64 v22; // rsi
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v29; // rdx
  __int64 v30; // r14

  v14 = *(__int64 **)(a2 + 96);
  if ( v14 && !(unsigned __int8)sub_6F74E0(a1, *v14, (__int64)(v14 + 1), *v14, a13, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  v16 = v15 == sub_6CE290 ? *(_QWORD *)(a2 + 88) : v15(a2);
  v17 = sub_6ED600(a1, v16, 0, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( !(_BYTE)v17 )
    return 0;
  v20 = *(_QWORD *)(a2 + 104);
  for ( i = v20 + 16LL * *(unsigned int *)(a2 + 112); i != v20; v20 += 16 )
  {
    v22 = *(_QWORD *)(v20 + 8);
    if ( v22 )
    {
      if ( !(unsigned __int8)sub_6ED600(a1, v22, 0, a3, a4, a5, a6, v18, v19, a9, a10) )
        return 0;
    }
  }
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
  return v17;
}

