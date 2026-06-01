__int64 __fastcall sub_722BA0(
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
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // r13
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 *v18; // rbx
  unsigned int v19; // r13d
  unsigned int *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 *v24; // rbx
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rsi
  __int64 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  double v32; // xmm4_8
  double v33; // xmm5_8
  __int64 v34; // rdx
  __int64 v35; // r14

  v12 = sub_EF5320(*(_QWORD *)(a2 + 40));
  v13 = *(_QWORD *)(a2 + 40);
  v14 = (__int64 *)(v12 + 8LL * *(unsigned int *)(v13 + 4));
  v15 = sub_EF5320(v13);
  if ( (__int64 *)v15 != v14 )
  {
    v18 = (__int64 *)v15;
    while ( (unsigned __int8)sub_70DBE0(a1, *v18, 0, a3, a4, a5, a6, v16, v17, a9, a10) )
    {
      if ( v14 == ++v18 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v21 = *(unsigned int **)(a2 + 40);
  v22 = 2LL * *v21;
  v23 = (__int64)&v21[v22 + 4];
  v24 = (__int64 *)(v21 + 4);
  if ( v22 * 4 )
  {
    while ( (unsigned __int8)sub_722170(a1, *v24, a3, a4, a5, a6, v16, v17, a9, a10) )
    {
      if ( (__int64 *)v23 == ++v24 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v27 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v27 = sub_B8D340(a2, 0);
  v19 = sub_70A970(a1, v27, a3, a4, a5, a6, v25, v26, a9, a10);
  if ( !(_BYTE)v19 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v28 = nullptr;
    v29 = sub_B8C3D0(a2);
    v34 = *(unsigned int *)(v29 + 8);
    v35 = *(_QWORD *)v29 + 8 * v34;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v28 = *(__int64 **)sub_B8C3D0(a2);
    while ( (__int64 *)v35 != v28 )
    {
      if ( !(unsigned __int8)sub_71D160(a1, *v28, a3, a4, a5, a6, v32, v33, a9, a10, v34, v30, v31) )
        return 0;
      ++v28;
    }
  }
  return v19;
}
