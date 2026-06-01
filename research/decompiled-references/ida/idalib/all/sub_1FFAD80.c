unsigned __int64 __fastcall sub_1FFAD80(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        unsigned __int64 a8)
{
  char *v8; // r12
  __int64 v9; // r15
  char *v10; // r9
  int v11; // eax
  const void *v12; // r10
  const void *v13; // r11
  size_t v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  __m128i *v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // rax
  __m128i *v20; // rax
  __m128i *v21; // r12
  size_t v22; // r14
  size_t v23; // r13
  __m128i v24; // kr00_16
  __int64 v25; // r14
  __int64 i; // rbp
  size_t v27; // r9
  unsigned __int64 v28; // r15
  const void *v29; // r10
  int v30; // eax
  int v31; // eax
  __int64 v33; // rax
  __m128i *v34; // rax
  const __m128i *v35; // rax
  void *s2; // [rsp+0h] [rbp-A8h]
  void *s2b; // [rsp+0h] [rbp-A8h]
  void *s2a; // [rsp+0h] [rbp-A8h]
  void *s1; // [rsp+8h] [rbp-A0h]
  char *s1b; // [rsp+8h] [rbp-A0h]
  void *s1a; // [rsp+8h] [rbp-A0h]
  size_t n; // [rsp+10h] [rbp-98h]
  char *v43; // [rsp+20h] [rbp-88h]
  __int64 v44; // [rsp+30h] [rbp-78h]
  unsigned __int64 v45; // [rsp+38h] [rbp-70h]
  __int64 v46; // [rsp+40h] [rbp-68h]
  __m128i v48; // [rsp+50h] [rbp-58h] BYREF
  __int64 v49; // [rsp+60h] [rbp-48h]

  v8 = a1;
  v46 = a3 & 1;
  v45 = a8;
  v44 = (a3 - 1) / 2;
  if ( a2 < v44 )
  {
    v9 = a2;
    v10 = a1;
    while ( 1 )
    {
      v15 = 2 * (v9 + 1);
      v18 = v15 - 1;
      v21 = (__m128i *)&v10[48 * v9 + 48];
      v17 = (__m128i *)&v10[24 * v15 - 24];
      v22 = v21->m128i_u64[1];
      v12 = (const void *)v21->m128i_i64[0];
      v23 = v17->m128i_u64[1];
      v13 = (const void *)v17->m128i_i64[0];
      v14 = v23;
      if ( v22 <= v23 )
        v14 = v21->m128i_u64[1];
      if ( !v14 )
        break;
      v43 = v10;
      n = v14;
      s1 = (void *)v17->m128i_i64[0];
      s2 = (void *)v21->m128i_i64[0];
      v11 = memcmp((const void *)v21->m128i_i64[0], (const void *)v17->m128i_i64[0], v14);
      v12 = s2;
      v13 = s1;
      v14 = n;
      v15 = 2 * (v9 + 1);
      v10 = v43;
      if ( v11 )
      {
        if ( v11 < 0 )
          goto LABEL_11;
        v16 = memcmp(s1, s2, n);
        v15 = 2 * (v9 + 1);
        v10 = v43;
        if ( v16 )
          goto LABEL_22;
        if ( v22 != v23 )
          goto LABEL_8;
      }
      else
      {
        if ( v22 != v23 )
          goto LABEL_5;
        v16 = memcmp(s1, s2, n);
        v15 = 2 * (v9 + 1);
        v10 = v43;
        if ( v16 )
          goto LABEL_22;
      }
LABEL_9:
      if ( v21[1].m128i_i64[0] >= (unsigned __int64)v17[1].m128i_i64[0] )
        goto LABEL_10;
LABEL_11:
      v19 = 3 * v9;
      v9 = v18;
      v20 = (__m128i *)&v10[8 * v19];
      *v20 = _mm_loadu_si128(v17);
      v20[1].m128i_i64[0] = v17[1].m128i_i64[0];
      if ( v18 >= v44 )
      {
        v8 = v10;
        if ( v46 )
          goto LABEL_25;
        goto LABEL_52;
      }
    }
    if ( v22 == v23 )
      goto LABEL_9;
LABEL_5:
    if ( v22 < v23 )
      goto LABEL_11;
    if ( v14 )
    {
      s1b = v10;
      s2b = (void *)v15;
      v16 = memcmp(v13, v12, v14);
      v15 = (__int64)s2b;
      v10 = s1b;
      if ( v16 )
      {
LABEL_22:
        if ( v16 < 0 )
        {
LABEL_10:
          v17 = v21;
          v18 = v15;
          goto LABEL_11;
        }
        goto LABEL_9;
      }
    }
LABEL_8:
    if ( v22 > v23 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v17 = (__m128i *)&a1[24 * a2];
  if ( (a3 & 1) != 0 )
  {
    v48 = _mm_loadu_si128((const __m128i *)&a7);
    goto LABEL_38;
  }
  v18 = a2;
LABEL_52:
  if ( (a3 - 2) / 2 == v18 )
  {
    v18 = 2 * v18 + 1;
    v35 = (const __m128i *)&v8[24 * v18];
    *v17 = _mm_loadu_si128(v35);
    v17[1].m128i_i64[0] = v35[1].m128i_i64[0];
    v17 = (__m128i *)v35;
  }
LABEL_25:
  v49 = a8;
  v48 = _mm_loadu_si128((const __m128i *)&a7);
  if ( v18 > a2 )
  {
    v24 = v48;
    v25 = v18;
    for ( i = (v18 - 1) / 2; ; i = (i - 1) / 2 )
    {
      v27 = v24.m128i_u64[1];
      v17 = (__m128i *)&v8[24 * i];
      v28 = v17->m128i_u64[1];
      v29 = (const void *)v17->m128i_i64[0];
      if ( v28 <= v24.m128i_i64[1] )
        v27 = v17->m128i_u64[1];
      if ( !v27 )
        break;
      s1a = (void *)v27;
      s2a = (void *)v17->m128i_i64[0];
      v30 = memcmp((const void *)v17->m128i_i64[0], (const void *)v24.m128i_i64[0], v27);
      v29 = s2a;
      v27 = (size_t)s1a;
      if ( v30 )
      {
        if ( v30 < 0 )
          goto LABEL_39;
        v31 = memcmp((const void *)v24.m128i_i64[0], s2a, (size_t)s1a);
        if ( v31 )
        {
LABEL_48:
          if ( v31 < 0 )
          {
LABEL_37:
            v17 = (__m128i *)&v8[24 * v25];
            goto LABEL_38;
          }
          goto LABEL_36;
        }
        if ( v28 != v24.m128i_i64[1] )
          goto LABEL_35;
      }
      else
      {
        if ( v28 != v24.m128i_i64[1] )
          goto LABEL_32;
        v31 = memcmp((const void *)v24.m128i_i64[0], s2a, (size_t)s1a);
        if ( v31 )
          goto LABEL_48;
      }
LABEL_36:
      if ( v17[1].m128i_i64[0] >= v45 )
        goto LABEL_37;
LABEL_39:
      v33 = 3 * v25;
      v25 = i;
      v34 = (__m128i *)&v8[8 * v33];
      *v34 = _mm_loadu_si128(v17);
      v34[1].m128i_i64[0] = v17[1].m128i_i64[0];
      if ( a2 >= i )
        goto LABEL_38;
    }
    if ( v28 == v24.m128i_i64[1] )
      goto LABEL_36;
LABEL_32:
    if ( v28 < v24.m128i_i64[1] )
      goto LABEL_39;
    if ( v27 )
    {
      v31 = memcmp((const void *)v24.m128i_i64[0], v29, v27);
      if ( v31 )
        goto LABEL_48;
    }
LABEL_35:
    if ( v28 > v24.m128i_i64[1] )
      goto LABEL_37;
    goto LABEL_36;
  }
LABEL_38:
  *v17 = _mm_loadu_si128(&v48);
  v17[1].m128i_i64[0] = v45;
  return v45;
}
