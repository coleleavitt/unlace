__int64 __fastcall sub_70F660(
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
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 *v15; // r13
  __int64 *v16; // rbx
  __int64 *v17; // r13
  __int64 *v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // r13
  __int64 v21; // rdx

  v10 = *(unsigned int *)(a2 + 16);
  v11 = (__int64 *)(a2 + 24);
  v12 = v10;
  v13 = a2 + 8 * v10 + 24;
  if ( v13 != a2 + 24 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v11, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    {
      if ( (__int64 *)v13 == ++v11 )
      {
        v10 = *(unsigned int *)(a2 + 16);
        v12 = v10;
        v11 = (__int64 *)(a2 + 8 * v10 + 24);
        goto LABEL_7;
      }
    }
    return 0;
  }
LABEL_7:
  v15 = &v11[v12];
  if ( v15 != v11 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v11, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    {
      if ( v15 == ++v11 )
      {
        v10 = *(unsigned int *)(a2 + 16);
        v20 = v10;
        goto LABEL_13;
      }
    }
    return 0;
  }
  v20 = 0;
LABEL_13:
  v16 = (__int64 *)(a2 + 16 * v10 + 24);
  v17 = &v16[v20];
  if ( v16 != v17 )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v16, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    {
      if ( v17 == ++v16 )
      {
        v10 = *(unsigned int *)(a2 + 16);
        v21 = v10;
        goto LABEL_19;
      }
    }
    return 0;
  }
  v21 = 0;
LABEL_19:
  v18 = (__int64 *)(a2 + 8 * (3 * v10 + 3));
  v19 = &v18[v21];
  if ( v18 != &v18[v21] )
  {
    while ( (unsigned __int8)sub_70DBE0(a1, *v18, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    {
      if ( v19 == ++v18 )
        return 1;
    }
    return 0;
  }
  return 1;
}
