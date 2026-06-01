__int64 __fastcall sub_1233750(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // rbp
  const void *v4; // r14
  int v5; // eax
  signed __int64 v6; // rax
  size_t v7; // r12
  size_t v8; // r13
  const void *v9; // r15
  signed __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // r12
  size_t v13; // rcx
  size_t v14; // rdx
  const void *v15; // rsi
  signed __int64 v16; // rax
  size_t v17; // r13
  size_t v18; // rdx
  int v19; // eax
  __int64 v20; // r13
  __m128i v21; // xmm0
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v23.m128i_i64[0] = a1 + 8;
  if ( !v2 )
  {
LABEL_41:
    v21 = _mm_loadl_epi64(&v23);
    v23 = _mm_unpacklo_epi64(v21, v21);
    return v23.m128i_i64[0];
  }
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(const void **)a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v2 + 40);
      v8 = v3;
      v9 = *(const void **)(v2 + 32);
      if ( v7 <= v3 )
        v8 = *(_QWORD *)(v2 + 40);
      if ( v8 )
        break;
      v10 = v7 - v3;
      if ( (__int64)(v7 - v3) <= 0x7FFFFFFF )
        goto LABEL_14;
LABEL_6:
      v6 = v3 - v7;
      if ( (__int64)(v3 - v7) > 0x7FFFFFFF )
        goto LABEL_18;
LABEL_7:
      if ( v6 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_8:
        if ( (int)v6 >= 0 )
          goto LABEL_18;
      }
      v23.m128i_i64[0] = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_41;
    }
    v5 = memcmp(*(const void **)(v2 + 32), v4, v8);
    if ( !v5 )
      break;
    if ( v5 >= 0 )
      goto LABEL_5;
LABEL_40:
    v2 = *(_QWORD *)(v2 + 24);
    if ( !v2 )
      goto LABEL_41;
  }
  v10 = v7 - v3;
  if ( (__int64)(v7 - v3) > 0x7FFFFFFF )
    goto LABEL_5;
LABEL_14:
  if ( v10 < (__int64)0xFFFFFFFF80000000LL || (int)v10 < 0 )
    goto LABEL_40;
  if ( v8 )
  {
LABEL_5:
    LODWORD(v6) = memcmp(v4, v9, v8);
    if ( (_DWORD)v6 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v6 = v3 - v7;
  if ( (__int64)(v3 - v7) <= 0x7FFFFFFF )
    goto LABEL_7;
LABEL_18:
  v11 = *(_QWORD **)(v2 + 24);
  v12 = *(_QWORD *)(v2 + 16);
  while ( v11 )
  {
    while ( 1 )
    {
      v13 = v11[5];
      v14 = v13;
      if ( v3 <= v13 )
        v14 = v3;
      if ( !v14 )
        break;
      v15 = (const void *)v11[4];
      v24 = v11[5];
      LODWORD(v16) = memcmp(v4, v15, v14);
      v13 = v24;
      if ( !(_DWORD)v16 )
        break;
LABEL_27:
      if ( (int)v16 >= 0 )
        goto LABEL_28;
LABEL_20:
      v23.m128i_i64[0] = (__int64)v11;
      v11 = (_QWORD *)v11[2];
      if ( !v11 )
        goto LABEL_29;
    }
    v16 = v3 - v13;
    if ( (__int64)(v3 - v13) <= 0x7FFFFFFF )
    {
      if ( v16 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_20;
      goto LABEL_27;
    }
LABEL_28:
    v11 = (_QWORD *)v11[3];
  }
LABEL_29:
  while ( v12 )
  {
    v17 = *(_QWORD *)(v12 + 40);
    v18 = v17;
    if ( v3 <= v17 )
      v18 = v3;
    if ( !v18 || (v19 = memcmp(*(const void **)(v12 + 32), v4, v18)) == 0 )
    {
      v20 = v17 - v3;
      if ( v20 > 0x7FFFFFFF )
        goto LABEL_43;
      if ( v20 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_38;
      v19 = v20;
    }
    if ( v19 >= 0 )
    {
LABEL_43:
      v2 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      continue;
    }
LABEL_38:
    v12 = *(_QWORD *)(v12 + 24);
  }
  v24 = v2;
  v23 = (__m128i)_mm_loadh_ps((const double *)v23.m128i_i64);
  return v23.m128i_i64[0];
}
