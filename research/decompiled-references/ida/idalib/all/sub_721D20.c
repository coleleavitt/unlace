__int64 __fastcall sub_721D20(
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
  double v10; // xmm4_8
  double v11; // xmm5_8
  unsigned int v12; // r13d
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 *v16; // rbp
  __int64 v17; // r13
  __int64 *v18; // rbp
  double v19; // xmm4_8
  double v20; // xmm5_8
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rax
  __int64 *v24; // rbp
  __int64 *v25; // r14
  __int64 v26; // r14
  __int64 *v27; // rbp
  __int64 *v28; // r14
  __int64 v29; // r14
  __int64 *v30; // rbp
  __int64 *v31; // r14
  __int64 v32; // rdx
  __int64 *v33; // rbp
  __int64 *v34; // r12

  if ( !(unsigned __int8)sub_70DBE0(
                           a1,
                           *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64),
                           0,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10)
    || !(unsigned __int8)sub_70DBE0(
                           a1,
                           *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 72),
                           0,
                           a3,
                           a4,
                           a5,
                           a6,
                           v10,
                           v11,
                           a9,
                           a10) )
  {
    return 0;
  }
  v16 = (__int64 *)(a2 + 64);
  v17 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 64;
  if ( v17 != a2 + 64 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v16, 0, a3, a4, a5, a6, v14, v15, a9, a10) )
    {
      if ( (__int64 *)v17 == ++v16 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v18 = (__int64 *)(a2 + 24);
  if ( !a2 )
    v18 = nullptr;
  if ( !(unsigned __int8)sub_70DBE0(a1, *v18, 0, a3, a4, a5, a6, v14, v15, a9, a10) )
    return 0;
  v12 = sub_70DBE0(a1, v18[2], 0, a3, a4, a5, a6, v19, v20, a9, a10);
  if ( !(_BYTE)v12 )
    return 0;
  v23 = *(unsigned int *)(a2 + 16);
  v24 = (__int64 *)(a2 + 8 * v23 + 64);
  v25 = &v24[v23];
  if ( v24 != v25 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v24, 0, a3, a4, a5, a6, v21, v22, a9, a10) )
    {
      if ( v25 == ++v24 )
      {
        v23 = *(unsigned int *)(a2 + 16);
        v26 = v23;
        goto LABEL_16;
      }
    }
    return 0;
  }
  v26 = 0;
LABEL_16:
  v27 = (__int64 *)(a2 + 16 * v23 + 64);
  v28 = &v27[v26];
  if ( v27 != v28 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v27, 0, a3, a4, a5, a6, v21, v22, a9, a10) )
    {
      if ( v28 == ++v27 )
      {
        v23 = *(unsigned int *)(a2 + 16);
        v29 = v23;
        goto LABEL_20;
      }
    }
    return 0;
  }
  v29 = 0;
LABEL_20:
  v30 = (__int64 *)(a2 + 24 * v23 + 64);
  v31 = &v30[v29];
  if ( v30 != v31 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v30, 0, a3, a4, a5, a6, v21, v22, a9, a10) )
    {
      if ( v31 == ++v30 )
      {
        v23 = *(unsigned int *)(a2 + 16);
        v32 = v23;
        goto LABEL_24;
      }
    }
    return 0;
  }
  v32 = 0;
LABEL_24:
  v33 = (__int64 *)(a2 + 32 * v23 + 64);
  v34 = &v33[v32];
  if ( v33 != &v33[v32] )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v33, 0, a3, a4, a5, a6, v21, v22, a9, a10) )
    {
      if ( v34 == ++v33 )
        return v12;
    }
    return 0;
  }
  return v12;
}
