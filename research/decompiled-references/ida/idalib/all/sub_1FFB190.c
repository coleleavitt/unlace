__int64 __fastcall sub_1FFB190(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  size_t v5; // rbx
  int v6; // eax
  __int64 v7; // r10
  size_t v8; // r13
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  size_t v11; // r12
  void *v12; // rcx
  const void *v13; // rdi
  int v14; // eax
  __m128i v15; // xmm0
  __int64 v17; // r12
  bool v18; // zf
  __int64 v19; // rbp
  size_t v20; // rdx
  const void **v21; // r10
  size_t v22; // rcx
  const void *v23; // rdi
  int v24; // eax
  __int64 v25; // r15
  __int64 v26; // r12
  size_t v27; // rdx
  __int64 v28; // r13
  __int64 v29; // rcx
  size_t v30; // r14
  const void *v31; // rsi
  int v32; // eax
  void *v33; // rsi
  __m128i v34; // [rsp+0h] [rbp-68h] BYREF
  void *s1; // [rsp+18h] [rbp-50h]
  void *s2; // [rsp+20h] [rbp-48h]
  __int64 v37; // [rsp+28h] [rbp-40h]

  v3 = a2 - a1;
  v34.m128i_i64[0] = a1;
  if ( v3 > 0 )
  {
    v4 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 3);
    v5 = *(_QWORD *)(a3 + 8);
    s1 = *(void **)a3;
    do
    {
      while ( 1 )
      {
        v8 = v5;
        v7 = v4 >> 1;
        v9 = 24 * (v4 >> 1);
        v10 = v34.m128i_i64[0] + v9;
        v11 = *(_QWORD *)(v34.m128i_i64[0] + v9 + 8);
        v12 = *(void **)(v34.m128i_i64[0] + v9);
        if ( v11 <= v5 )
          v8 = *(_QWORD *)(v34.m128i_i64[0] + v9 + 8);
        if ( !v8 )
          break;
        v13 = *(const void **)(v34.m128i_i64[0] + v9);
        v37 = v4 >> 1;
        s2 = v12;
        v14 = memcmp(v13, s1, v8);
        v12 = s2;
        v7 = v4 >> 1;
        if ( !v14 )
          break;
        if ( v14 < 0 )
          goto LABEL_13;
        v33 = s2;
        s2 = (void *)v37;
        v6 = memcmp(s1, v33, v8);
        v7 = v37;
        if ( !v6 )
        {
          if ( v11 == v5 )
            goto LABEL_19;
LABEL_5:
          if ( v11 <= v5 )
            goto LABEL_19;
          goto LABEL_6;
        }
LABEL_18:
        if ( v6 >= 0 )
          goto LABEL_19;
LABEL_6:
        v4 = v7;
        if ( v7 <= 0 )
          goto LABEL_14;
      }
      if ( v11 == v5 )
      {
        if ( !v5 || (s2 = (void *)v7, v6 = memcmp(s1, v12, v5), v7 = (__int64)s2, !v6) )
        {
LABEL_19:
          v17 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 3);
          v18 = v9 == 0;
          v19 = v34.m128i_i64[0];
          if ( v18 )
          {
LABEL_30:
            v25 = v10 + 24;
            v26 = 0xAAAAAAAAAAAAAAABLL * ((v34.m128i_i64[0] + 24 * v4 - v25) >> 3);
            if ( v34.m128i_i64[0] + 24 * v4 - v25 <= 0 )
            {
LABEL_41:
              v34.m128i_i64[0] = v25;
              v34 = (__m128i)_mm_loadh_ps((const double *)v34.m128i_i64);
              return v34.m128i_i64[0];
            }
            while ( 1 )
            {
              v27 = v5;
              v28 = v26 >> 1;
              v29 = v25 + 24 * (v26 >> 1);
              v30 = *(_QWORD *)(v29 + 8);
              if ( v30 <= v5 )
                v27 = *(_QWORD *)(v29 + 8);
              if ( v27
                && (v31 = *(const void **)v29,
                    v34.m128i_i64[0] = v25 + 24 * (v26 >> 1),
                    v32 = memcmp(s1, v31, v27),
                    v29 = v34.m128i_i64[0],
                    v32) )
              {
                if ( v32 < 0 )
                  goto LABEL_32;
                v25 = v34.m128i_i64[0] + 24;
                v26 = v26 - v28 - 1;
              }
              else
              {
                if ( v30 != v5 && v30 > v5 )
                {
LABEL_32:
                  v26 >>= 1;
                  if ( v28 <= 0 )
                    goto LABEL_41;
                  continue;
                }
                v25 = v29 + 24;
                v26 = v26 - v28 - 1;
              }
              if ( v26 <= 0 )
                goto LABEL_41;
            }
          }
          while ( 1 )
          {
            v20 = v5;
            v21 = (const void **)(v19 + 24 * (v17 >> 1));
            v22 = (size_t)v21[1];
            if ( v22 <= v5 )
              v20 = (size_t)v21[1];
            if ( v20
              && (v23 = *v21,
                  v37 = (__int64)v21[1],
                  s2 = (void *)(v19 + 24 * (v17 >> 1)),
                  v24 = memcmp(v23, s1, v20),
                  v21 = (const void **)s2,
                  v22 = v37,
                  v24) )
            {
              if ( v24 < 0 )
                goto LABEL_21;
              v17 >>= 1;
            }
            else
            {
              if ( v22 != v5 && v22 < v5 )
              {
LABEL_21:
                v19 = (__int64)(v21 + 3);
                v17 = v17 - (v17 >> 1) - 1;
                if ( v17 <= 0 )
                  goto LABEL_30;
                continue;
              }
              v17 >>= 1;
            }
            if ( v17 <= 0 )
              goto LABEL_30;
          }
        }
        goto LABEL_18;
      }
      if ( v11 >= v5 )
      {
        if ( !v8 )
          goto LABEL_5;
        s2 = (void *)v7;
        v6 = memcmp(s1, v12, v8);
        v7 = (__int64)s2;
        if ( !v6 )
          goto LABEL_5;
        goto LABEL_18;
      }
LABEL_13:
      v34.m128i_i64[0] = v10 + 24;
      v4 = v4 - v7 - 1;
    }
    while ( v4 > 0 );
  }
LABEL_14:
  v15 = _mm_loadl_epi64(&v34);
  v34 = _mm_unpacklo_epi64(v15, v15);
  return v34.m128i_i64[0];
}
