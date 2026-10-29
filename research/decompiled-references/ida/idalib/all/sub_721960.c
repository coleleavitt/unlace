__int64 __fastcall sub_721960(
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
  __int64 *v10; // rbx
  __int64 v11; // r13
  unsigned int v12; // r13d
  __int64 *v14; // rbx
  double v15; // xmm4_8
  double v16; // xmm5_8
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // rax
  __int64 *v20; // rbx
  __int64 *v21; // r14
  __int64 *v22; // rbx
  __int64 *v23; // r14
  __int64 *v24; // rbx
  __int64 *v25; // r14
  __int64 *v26; // rbx
  __int64 *v27; // r12
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 v30; // rdx

  v10 = (__int64 *)(a2 + 64);
  v11 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 64;
  if ( v11 != a2 + 64 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v10, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    {
      if ( (__int64 *)v11 == ++v10 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v14 = (__int64 *)(a2 + 24);
  if ( !a2 )
    v14 = nullptr;
  if ( !(unsigned __int8)sub_70DBE0(a1, *v14, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v12 = sub_70DBE0(a1, v14[2], 0, a3, a4, a5, a6, v15, v16, a9, a10);
  if ( !(_BYTE)v12 )
    return 0;
  v19 = *(unsigned int *)(a2 + 16);
  v20 = (__int64 *)(a2 + 8 * v19 + 64);
  v21 = &v20[v19];
  if ( v21 != v20 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v20, 0, a3, a4, a5, a6, v17, v18, a9, a10) )
    {
      if ( v21 == ++v20 )
      {
        v19 = *(unsigned int *)(a2 + 16);
        v28 = v19;
        goto LABEL_17;
      }
    }
    return 0;
  }
  v28 = 0;
LABEL_17:
  v22 = (__int64 *)(a2 + 16 * v19 + 64);
  v23 = &v22[v28];
  if ( v22 != v23 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v22, 0, a3, a4, a5, a6, v17, v18, a9, a10) )
    {
      if ( v23 == ++v22 )
      {
        v19 = *(unsigned int *)(a2 + 16);
        v29 = v19;
        goto LABEL_23;
      }
    }
    return 0;
  }
  v29 = 0;
LABEL_23:
  v24 = (__int64 *)(a2 + 24 * v19 + 64);
  v25 = &v24[v29];
  if ( v24 != v25 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v24, 0, a3, a4, a5, a6, v17, v18, a9, a10) )
    {
      if ( v25 == ++v24 )
      {
        v19 = *(unsigned int *)(a2 + 16);
        v30 = v19;
        goto LABEL_29;
      }
    }
    return 0;
  }
  v30 = 0;
LABEL_29:
  v26 = (__int64 *)(a2 + 32 * v19 + 64);
  v27 = &v26[v30];
  if ( v26 != &v26[v30] )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v26, 0, a3, a4, a5, a6, v17, v18, a9, a10) )
    {
      if ( v27 == ++v26 )
        return v12;
    }
    return 0;
  }
  return v12;
}
