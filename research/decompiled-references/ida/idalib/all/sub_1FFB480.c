__int64 __fastcall sub_1FFB480(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  size_t v5; // r12
  int v6; // eax
  void *v7; // r10
  void *v8; // r11
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rbp
  unsigned __int64 v12; // r15
  void *v13; // r13
  size_t v14; // rdx
  __m128i v15; // xmm0
  __int64 v17; // r8
  bool v18; // zf
  __int64 v19; // rbp
  __int64 v20; // r9
  const void **v21; // r10
  size_t v22; // rdx
  const void *v23; // rdi
  int v24; // eax
  const void *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  const void *v29; // rsi
  int v30; // eax
  void *v31; // r8
  __int64 v32; // r13
  __int64 v33; // r15
  size_t v34; // r14
  __m128 v35; // [rsp+0h] [rbp-78h] BYREF
  void *s2; // [rsp+10h] [rbp-68h]
  void *v37; // [rsp+18h] [rbp-60h]
  size_t n; // [rsp+20h] [rbp-58h]
  const void **v39; // [rsp+28h] [rbp-50h]
  __int64 v40; // [rsp+30h] [rbp-48h]
  __int64 v41; // [rsp+38h] [rbp-40h]

  v3 = a2 - a1;
  v4 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 3);
  v35.m128_u64[0] = a1;
  v39 = (const void **)a3;
  if ( v3 > 0 )
  {
    v5 = *(_QWORD *)(a3 + 8);
    s2 = *(void **)a3;
    n = v5;
    while ( 1 )
    {
      v10 = v4 >> 1;
      v11 = 24 * (v4 >> 1);
      v12 = v35.m128_u64[0] + v11;
      v13 = *(void **)(v35.m128_u64[0] + v11 + 8);
      if ( (unsigned __int64)v13 >= v5 )
      {
        if ( !v5 )
          goto LABEL_20;
        v37 = *(void **)(v35.m128_u64[0] + v11);
        v6 = memcmp(v37, s2, v5);
        v7 = v37;
        if ( v6 )
          goto LABEL_5;
LABEL_6:
        v8 = (void *)v5;
        if ( (unsigned __int64)v13 <= v5 )
          v8 = v13;
        if ( !v8 )
          goto LABEL_20;
        v37 = v8;
        v9 = memcmp(s2, v7, (size_t)v8);
        if ( v9 )
        {
          if ( v9 >= 0 )
            goto LABEL_20;
        }
        else
        {
          if ( (unsigned __int64)v13 >= v5 )
          {
            n = (size_t)v37;
LABEL_20:
            v17 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 3);
            v18 = v11 == 0;
            v19 = v35.m128_u64[0];
            if ( !v18 )
            {
              while ( 2 )
              {
                v20 = v17 >> 1;
                v21 = (const void **)(v19 + 24 * (v17 >> 1));
                v22 = (size_t)v21[1];
                if ( v22 < n )
                {
                  if ( v22 )
                  {
                    v25 = *v21;
                    v40 = v17 >> 1;
                    n = v17;
                    v37 = (void *)(v19 + 24 * (v17 >> 1));
                    v24 = memcmp(v25, s2, v22);
                    v21 = (const void **)v37;
                    v17 = n;
                    v20 = v40;
                    if ( v24 )
                    {
LABEL_24:
                      if ( v24 >= 0 )
                        goto LABEL_25;
                    }
                  }
                  v19 = (__int64)(v21 + 3);
                  v17 = v17 - v20 - 1;
                  if ( v17 <= 0 )
                    break;
                }
                else
                {
                  if ( n )
                  {
                    v23 = *v21;
                    v41 = v17 >> 1;
                    v40 = v17;
                    v37 = (void *)(v19 + 24 * (v17 >> 1));
                    v24 = memcmp(v23, s2, n);
                    v21 = (const void **)v37;
                    v17 = v40;
                    v20 = v41;
                    if ( v24 )
                      goto LABEL_24;
                  }
LABEL_25:
                  v17 = v20;
                  if ( v20 <= 0 )
                    break;
                }
                n = v5;
                continue;
              }
            }
            v26 = v12 + 24;
            v27 = v35.m128_u64[0] + 24 * v4 - (v12 + 24);
            v28 = 0xAAAAAAAAAAAAAAABLL * (v27 >> 3);
            if ( v27 <= 0 )
            {
LABEL_41:
              v35.m128_u64[0] = v26;
              v35 = _mm_loadh_ps((const double *)v35.m128_u64);
              return v35.m128_u64[0];
            }
            while ( 2 )
            {
              while ( 2 )
              {
                v31 = (void *)v5;
                v35.m128_u64[0] = v26;
                v32 = v28 >> 1;
                v33 = v26 + 24 * (v28 >> 1);
                v34 = *(_QWORD *)(v33 + 8);
                if ( v34 <= v5 )
                  v31 = *(void **)(v33 + 8);
                if ( v31 )
                {
                  v29 = *(const void **)v33;
                  s2 = v31;
                  v30 = memcmp(*v39, v29, (size_t)v31);
                  v26 = v35.m128_u64[0];
                  if ( !v30 )
                  {
                    if ( v34 < v5 && (unsigned __int64)s2 > v5 )
                    {
LABEL_35:
                      v28 >>= 1;
                      if ( v32 <= 0 )
                        goto LABEL_41;
                      continue;
                    }
                    goto LABEL_39;
                  }
                  if ( v30 < 0 )
                    goto LABEL_35;
                  v26 = v33 + 24;
                  v28 = v28 - v32 - 1;
                }
                else
                {
LABEL_39:
                  v26 = v33 + 24;
                  v28 = v28 - v32 - 1;
                }
                break;
              }
              if ( v28 <= 0 )
                goto LABEL_41;
              continue;
            }
          }
          if ( v5 >= (unsigned __int64)v37 )
            goto LABEL_20;
        }
        v4 >>= 1;
        if ( v10 <= 0 )
          break;
      }
      else
      {
        if ( !v13 )
          goto LABEL_16;
        v14 = *(_QWORD *)(v35.m128_u64[0] + v11 + 8);
        v37 = *(void **)(v35.m128_u64[0] + v11);
        v6 = memcmp(v37, s2, v14);
        v7 = v37;
        if ( !v6 )
          goto LABEL_16;
LABEL_5:
        if ( v6 >= 0 )
          goto LABEL_6;
LABEL_16:
        v4 = v4 - v10 - 1;
        v35.m128_u64[0] = v12 + 24;
        if ( v4 <= 0 )
          break;
      }
    }
  }
  v15 = _mm_loadl_epi64((const __m128i *)&v35);
  v35 = (__m128)_mm_unpacklo_epi64(v15, v15);
  return v35.m128_u64[0];
}
