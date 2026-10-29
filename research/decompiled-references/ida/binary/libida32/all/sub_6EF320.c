__int64 __fastcall sub_6EF320(
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
  __int64 *v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rdx
  __int64 *v18; // rbx
  __int64 *v19; // r14
  __int64 *v20; // rbx
  __int64 *v21; // r12
  __int64 v22; // rax

  v10 = (__int64 *)(a2 + 40);
  v11 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
  if ( v11 != a2 + 40 )
  {
    while ( (unsigned __int8)sub_6ED600(a1, *v10, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
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
  v12 = sub_6ED600(a1, *v14, 0, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( !(_BYTE)v12 )
    return 0;
  v17 = *(unsigned int *)(a2 + 16);
  v18 = (__int64 *)(a2 + 8 * v17 + 40);
  v19 = &v18[v17];
  if ( v18 != v19 )
  {
    while ( (unsigned __int8)sub_6ED600(a1, *v18, 0, a3, a4, a5, a6, v15, v16, a9, a10) )
    {
      if ( v19 == ++v18 )
      {
        v17 = *(unsigned int *)(a2 + 16);
        v22 = v17;
        goto LABEL_16;
      }
    }
    return 0;
  }
  v22 = 0;
LABEL_16:
  v20 = (__int64 *)(a2 + 16 * v17 + 40);
  v21 = &v20[v22];
  if ( v20 != &v20[v22] )
  {
    while ( (unsigned __int8)sub_6ED600(a1, *v20, 0, a3, a4, a5, a6, v15, v16, a9, a10) )
    {
      if ( v21 == ++v20 )
        return v12;
    }
    return 0;
  }
  return v12;
}

