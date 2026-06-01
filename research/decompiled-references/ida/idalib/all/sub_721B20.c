__int64 __fastcall sub_721B20(
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
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int v18; // r13d
  __m128i v20; // xmm0
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 *v23; // rbp
  __int64 v24; // r13
  __int64 *v25; // rbp
  double v26; // xmm4_8
  double v27; // xmm5_8
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rax
  __int64 *v31; // rbp
  __int64 *v32; // r14
  __int64 v33; // r14
  __int64 *v34; // rbp
  __int64 *v35; // r14
  __int64 v36; // r14
  __int64 *v37; // rbp
  __int64 *v38; // r14
  __int64 v39; // rdx
  __int64 *v40; // rbp
  __int64 *v41; // r12

  v11 = *(_QWORD *)(a2 + 56);
  if ( !(unsigned __int8)sub_718340(a1, v11, *(_QWORD *)(a2 + 64), a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v20 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  if ( !(unsigned __int8)sub_719170(
                           a1,
                           *(double *)v20.m128i_i64,
                           a4,
                           a5,
                           a6,
                           v16,
                           v17,
                           a9,
                           a10,
                           v11,
                           v12,
                           v13,
                           v14,
                           v15,
                           v20.m128i_i64[0],
                           v20.m128i_i32[2],
                           *(__int64 **)(a2 + 88)) )
    return 0;
  v23 = (__int64 *)(a2 + 96);
  v24 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 96;
  if ( v24 != a2 + 96 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v23, 0, *(double *)v20.m128i_i64, a4, a5, a6, v21, v22, a9, a10) )
    {
      if ( (__int64 *)v24 == ++v23 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v25 = (__int64 *)(a2 + 24);
  if ( !a2 )
    v25 = nullptr;
  if ( !(unsigned __int8)sub_70DBE0(a1, *v25, 0, *(double *)v20.m128i_i64, a4, a5, a6, v21, v22, a9, a10) )
    return 0;
  v18 = sub_70DBE0(a1, v25[2], 0, *(double *)v20.m128i_i64, a4, a5, a6, v26, v27, a9, a10);
  if ( !(_BYTE)v18 )
    return 0;
  v30 = *(unsigned int *)(a2 + 16);
  v31 = (__int64 *)(a2 + 8 * v30 + 96);
  v32 = &v31[v30];
  if ( v31 != v32 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v31, 0, *(double *)v20.m128i_i64, a4, a5, a6, v28, v29, a9, a10) )
    {
      if ( v32 == ++v31 )
      {
        v30 = *(unsigned int *)(a2 + 16);
        v33 = v30;
        goto LABEL_16;
      }
    }
    return 0;
  }
  v33 = 0;
LABEL_16:
  v34 = (__int64 *)(a2 + 16 * v30 + 96);
  v35 = &v34[v33];
  if ( v34 != v35 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v34, 0, *(double *)v20.m128i_i64, a4, a5, a6, v28, v29, a9, a10) )
    {
      if ( v35 == ++v34 )
      {
        v30 = *(unsigned int *)(a2 + 16);
        v36 = v30;
        goto LABEL_20;
      }
    }
    return 0;
  }
  v36 = 0;
LABEL_20:
  v37 = (__int64 *)(a2 + 24 * v30 + 96);
  v38 = &v37[v36];
  if ( v37 != v38 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v37, 0, *(double *)v20.m128i_i64, a4, a5, a6, v28, v29, a9, a10) )
    {
      if ( v38 == ++v37 )
      {
        v30 = *(unsigned int *)(a2 + 16);
        v39 = v30;
        goto LABEL_24;
      }
    }
    return 0;
  }
  v39 = 0;
LABEL_24:
  v40 = (__int64 *)(a2 + 32 * v30 + 96);
  v41 = &v40[v39];
  if ( v40 != &v40[v39] )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v40, 0, *(double *)v20.m128i_i64, a4, a5, a6, v28, v29, a9, a10) )
    {
      if ( v41 == ++v40 )
        return v18;
    }
    return 0;
  }
  return v18;
}
