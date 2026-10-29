__int64 __fastcall sub_22A8730(__int64 a1)
{
  __int64 v1; // r14
  size_t v2; // rbx
  int v3; // eax
  __int64 v4; // r10
  size_t v5; // r13
  __int64 v6; // rbp
  unsigned __int64 v7; // r15
  size_t v8; // r12
  void *v9; // rcx
  const void *v10; // rdi
  int v11; // eax
  __m128i v12; // xmm0
  __int64 v14; // r12
  bool v15; // zf
  __int64 v16; // rbp
  size_t v17; // rdx
  const void **v18; // r10
  size_t v19; // rcx
  const void *v20; // rdi
  int v21; // eax
  __int64 v22; // r15
  __int64 v23; // r12
  size_t v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rcx
  size_t v27; // r14
  const void *v28; // rsi
  int v29; // eax
  void *v30; // rsi
  __m128i v31; // [rsp+0h] [rbp-68h] BYREF
  void *s1; // [rsp+18h] [rbp-50h]
  void *s2; // [rsp+20h] [rbp-48h]
  __int64 v34; // [rsp+28h] [rbp-40h]

  v1 = 165;
  v2 = *(_QWORD *)(a1 + 8);
  v31.m128i_i64[0] = (__int64)&off_2BF2B80;
  s1 = *(void **)a1;
  do
  {
    while ( 1 )
    {
      v5 = v2;
      v4 = v1 >> 1;
      v6 = 24 * (v1 >> 1);
      v7 = v31.m128i_i64[0] + v6;
      v8 = *(_QWORD *)(v31.m128i_i64[0] + v6 + 8);
      v9 = *(void **)(v31.m128i_i64[0] + v6);
      if ( v8 <= v2 )
        v5 = *(_QWORD *)(v31.m128i_i64[0] + v6 + 8);
      if ( !v5
        || (v10 = *(const void **)(v31.m128i_i64[0] + v6),
            v34 = v1 >> 1,
            s2 = v9,
            v11 = memcmp(v10, s1, v5),
            v9 = s2,
            v4 = v1 >> 1,
            !v11) )
      {
        if ( v8 == v2 )
        {
          if ( !v2 || (s2 = (void *)v4, v3 = memcmp(s1, v9, v2), v4 = (__int64)s2, !v3) )
          {
LABEL_18:
            v14 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 3);
            v15 = v6 == 0;
            v16 = v31.m128i_i64[0];
            if ( v15 )
            {
LABEL_29:
              v22 = v7 + 24;
              v23 = 0xAAAAAAAAAAAAAAABLL * ((v31.m128i_i64[0] + 24 * v1 - v22) >> 3);
              if ( v31.m128i_i64[0] + 24 * v1 - v22 <= 0 )
              {
LABEL_40:
                v31.m128i_i64[0] = v22;
                v31 = (__m128i)_mm_loadh_ps((const double *)v31.m128i_i64);
                return v31.m128i_i64[0];
              }
              while ( 1 )
              {
                v24 = v2;
                v25 = v23 >> 1;
                v26 = v22 + 24 * (v23 >> 1);
                v27 = *(_QWORD *)(v26 + 8);
                if ( v27 <= v2 )
                  v24 = *(_QWORD *)(v26 + 8);
                if ( v24
                  && (v28 = *(const void **)v26,
                      v31.m128i_i64[0] = v22 + 24 * (v23 >> 1),
                      v29 = memcmp(s1, v28, v24),
                      v26 = v31.m128i_i64[0],
                      v29) )
                {
                  if ( v29 < 0 )
                    goto LABEL_31;
                  v22 = v31.m128i_i64[0] + 24;
                  v23 = v23 - v25 - 1;
                }
                else
                {
                  if ( v27 != v2 && v27 > v2 )
                  {
LABEL_31:
                    v23 >>= 1;
                    if ( v25 <= 0 )
                      goto LABEL_40;
                    continue;
                  }
                  v22 = v26 + 24;
                  v23 = v23 - v25 - 1;
                }
                if ( v23 <= 0 )
                  goto LABEL_40;
              }
            }
            while ( 1 )
            {
              v17 = v2;
              v18 = (const void **)(v16 + 24 * (v14 >> 1));
              v19 = (size_t)v18[1];
              if ( v19 <= v2 )
                v17 = (size_t)v18[1];
              if ( v17
                && (v20 = *v18,
                    v34 = (__int64)v18[1],
                    s2 = (void *)(v16 + 24 * (v14 >> 1)),
                    v21 = memcmp(v20, s1, v17),
                    v18 = (const void **)s2,
                    v19 = v34,
                    v21) )
              {
                if ( v21 < 0 )
                  goto LABEL_20;
                v14 >>= 1;
              }
              else
              {
                if ( v19 != v2 && v19 < v2 )
                {
LABEL_20:
                  v16 = (__int64)(v18 + 3);
                  v14 = v14 - (v14 >> 1) - 1;
                  if ( v14 <= 0 )
                    goto LABEL_29;
                  continue;
                }
                v14 >>= 1;
              }
              if ( v14 <= 0 )
                goto LABEL_29;
            }
          }
        }
        else
        {
          if ( v8 < v2 )
            break;
          if ( !v5 )
            goto LABEL_4;
          s2 = (void *)v4;
          v3 = memcmp(s1, v9, v5);
          v4 = (__int64)s2;
          if ( !v3 )
            goto LABEL_4;
        }
        goto LABEL_17;
      }
      if ( v11 < 0 )
        break;
      v30 = s2;
      s2 = (void *)v34;
      v3 = memcmp(s1, v30, v5);
      v4 = v34;
      if ( !v3 )
      {
        if ( v8 == v2 )
          goto LABEL_18;
LABEL_4:
        if ( v8 <= v2 )
          goto LABEL_18;
        goto LABEL_5;
      }
LABEL_17:
      if ( v3 >= 0 )
        goto LABEL_18;
LABEL_5:
      v1 = v4;
      if ( v4 <= 0 )
        goto LABEL_13;
    }
    v31.m128i_i64[0] = v7 + 24;
    v1 = v1 - v4 - 1;
  }
  while ( v1 > 0 );
LABEL_13:
  v12 = _mm_loadl_epi64(&v31);
  v31 = _mm_unpacklo_epi64(v12, v12);
  return v31.m128i_i64[0];
}
