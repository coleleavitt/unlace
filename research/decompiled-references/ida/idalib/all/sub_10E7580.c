__int64 __fastcall sub_10E7580(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  const void *v3; // r14
  size_t v4; // rbp
  size_t v5; // r12
  size_t v6; // r13
  const void *v7; // r15
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // r12
  __int64 v11; // r13
  size_t v12; // rcx
  size_t v13; // rdx
  const void *v14; // rsi
  int v15; // eax
  size_t v16; // r12
  size_t v17; // rdx
  int v18; // eax
  __m128i v19; // xmm0
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v21.m128i_i64[0] = a1 + 8;
  if ( !v2 )
  {
LABEL_37:
    v19 = _mm_loadl_epi64(&v21);
    v21 = _mm_unpacklo_epi64(v19, v19);
    return v21.m128i_i64[0];
  }
  v3 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v5 = *(_QWORD *)(v2 + 40);
    v6 = v4;
    v7 = *(const void **)(v2 + 32);
    if ( v5 <= v4 )
      v6 = *(_QWORD *)(v2 + 40);
    if ( !v6 )
      break;
    v8 = memcmp(*(const void **)(v2 + 32), v3, v6);
    if ( !v8 )
      break;
    if ( v8 < 0 )
    {
LABEL_39:
      v2 = *(_QWORD *)(v2 + 24);
      goto LABEL_36;
    }
    v9 = memcmp(v3, v7, v6);
    if ( v9 )
      goto LABEL_34;
    if ( v5 == v4 )
      goto LABEL_12;
LABEL_11:
    if ( v5 <= v4 )
      goto LABEL_12;
LABEL_35:
    v21.m128i_i64[0] = v2;
    v2 = *(_QWORD *)(v2 + 16);
LABEL_36:
    if ( !v2 )
      goto LABEL_37;
  }
  if ( v5 != v4 )
  {
    if ( v5 < v4 )
      goto LABEL_39;
    if ( v6 )
    {
      v9 = memcmp(v3, v7, v6);
      if ( v9 )
        goto LABEL_34;
    }
    goto LABEL_11;
  }
  if ( v4 )
  {
    v9 = memcmp(v3, v7, v4);
    if ( v9 )
    {
LABEL_34:
      if ( v9 >= 0 )
        goto LABEL_12;
      goto LABEL_35;
    }
  }
LABEL_12:
  v10 = *(_QWORD **)(v2 + 24);
  v11 = *(_QWORD *)(v2 + 16);
  while ( v10 )
  {
    while ( 1 )
    {
      v12 = v10[5];
      v13 = v4;
      if ( v12 <= v4 )
        v13 = v10[5];
      if ( !v13 )
        break;
      v14 = (const void *)v10[4];
      v22 = v10[5];
      v15 = memcmp(v3, v14, v13);
      v12 = v22;
      if ( !v15 )
        break;
      if ( v15 >= 0 )
      {
        v10 = (_QWORD *)v10[3];
        goto LABEL_22;
      }
LABEL_14:
      v21.m128i_i64[0] = (__int64)v10;
      v10 = (_QWORD *)v10[2];
      if ( !v10 )
        goto LABEL_23;
    }
    if ( v12 != v4 && v12 > v4 )
      goto LABEL_14;
    v10 = (_QWORD *)v10[3];
LABEL_22:
    ;
  }
LABEL_23:
  while ( v11 )
  {
    v16 = *(_QWORD *)(v11 + 40);
    v17 = v4;
    if ( v16 <= v4 )
      v17 = *(_QWORD *)(v11 + 40);
    if ( v17 && (v18 = memcmp(*(const void **)(v11 + 32), v3, v17)) != 0 )
    {
      if ( v18 >= 0 )
        goto LABEL_45;
    }
    else if ( v16 == v4 || v16 >= v4 )
    {
LABEL_45:
      v2 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      continue;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  v22 = v2;
  v21 = (__m128i)_mm_loadh_ps((const double *)v21.m128i_i64);
  return v21.m128i_i64[0];
}
