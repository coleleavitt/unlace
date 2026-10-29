void __fastcall sub_1FFA910(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // rbx
  size_t v3; // rbp
  const void *v4; // r10
  size_t v5; // r14
  size_t v6; // r15
  const void *v7; // r12
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __m128i v11; // xmm4
  __m128i *v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __m128i *v15; // rax
  __int64 v16; // rcx
  __m128i si128; // xmm5
  __int64 v18; // rax
  __m128i v19; // xmm2
  __m128i *v20; // r14
  unsigned __int64 v21; // r12
  const void *v22; // r13
  size_t v23; // rbp
  int v24; // eax
  int v25; // eax
  __m128i v26; // xmm0
  __int64 v27; // rax
  void *s2; // [rsp+0h] [rbp-78h]
  unsigned __int64 v29; // [rsp+8h] [rbp-70h]
  size_t n[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+30h] [rbp-48h]

  if ( (__m128i *)a1 != a2 )
  {
    v2 = (const __m128i *)(a1 + 24);
    if ( a2 != (__m128i *)(a1 + 24) )
    {
      while ( 1 )
      {
        v3 = v2->m128i_u64[1];
        v4 = (const void *)v2->m128i_i64[0];
        v5 = *(_QWORD *)(a1 + 8);
        v6 = v3;
        v7 = *(const void **)a1;
        if ( v5 <= v3 )
          v6 = *(_QWORD *)(a1 + 8);
        v29 = v2[1].m128i_u64[0];
        if ( !v6 )
          break;
        s2 = (void *)v2->m128i_i64[0];
        v8 = memcmp(v4, v7, v6);
        v4 = s2;
        if ( !v8 )
        {
          if ( v5 == v3 )
          {
            v9 = memcmp(v7, s2, v6);
            if ( !v9 )
              goto LABEL_12;
            goto LABEL_19;
          }
LABEL_8:
          if ( v5 <= v3 )
          {
            if ( !v6 || (v9 = memcmp(v7, v4, v6)) == 0 )
            {
LABEL_11:
              if ( v5 < v3 )
                goto LABEL_20;
LABEL_12:
              if ( v29 >= *(_QWORD *)(a1 + 16) )
                goto LABEL_20;
              goto LABEL_13;
            }
            goto LABEL_19;
          }
          goto LABEL_13;
        }
        if ( v8 >= 0 )
        {
          v9 = memcmp(v7, s2, v6);
          if ( !v9 )
          {
            if ( v5 == v3 )
              goto LABEL_12;
            goto LABEL_11;
          }
LABEL_19:
          if ( v9 >= 0 )
            goto LABEL_12;
LABEL_20:
          v18 = v2[1].m128i_i64[0];
          v19 = _mm_loadu_si128(v2);
          v20 = (__m128i *)v2;
          *(__m128i *)n = v19;
          v32 = v18;
          while ( 2 )
          {
            v21 = v20[-1].m128i_u64[0];
            v22 = (const void *)v20[-2].m128i_i64[1];
            v23 = v21;
            if ( v19.m128i_i64[1] <= v21 )
              v23 = v19.m128i_u64[1];
            if ( v23 )
            {
              v24 = memcmp((const void *)v19.m128i_i64[0], (const void *)v20[-2].m128i_i64[1], v23);
              if ( !v24 )
              {
                if ( v19.m128i_i64[1] != v21 )
                  goto LABEL_26;
                v25 = memcmp(v22, (const void *)v19.m128i_i64[0], v23);
                if ( v25 )
                {
LABEL_32:
                  if ( v25 < 0 )
                    goto LABEL_30;
                }
                goto LABEL_33;
              }
              if ( v24 >= 0 )
              {
                v25 = memcmp(v22, (const void *)v19.m128i_i64[0], v23);
                if ( v25 )
                  goto LABEL_32;
                if ( v19.m128i_i64[1] == v21 )
                {
LABEL_33:
                  if ( v29 >= v20[-1].m128i_i64[1] )
                    goto LABEL_30;
                  goto LABEL_34;
                }
LABEL_29:
                if ( v19.m128i_i64[1] > v21 )
                  goto LABEL_30;
                goto LABEL_33;
              }
            }
            else
            {
              if ( v19.m128i_i64[1] == v21 )
              {
                if ( v29 >= v20[-1].m128i_i64[1] )
                {
LABEL_30:
                  v12 = (__m128i *)&v2[1].m128i_u64[1];
                  *v20 = _mm_load_si128((const __m128i *)n);
                  v20[1].m128i_i64[0] = v29;
                  goto LABEL_16;
                }
                goto LABEL_34;
              }
LABEL_26:
              if ( v19.m128i_i64[1] >= v21 )
              {
                if ( v23 )
                {
                  v25 = memcmp(v22, (const void *)v19.m128i_i64[0], v23);
                  if ( v25 )
                    goto LABEL_32;
                }
                goto LABEL_29;
              }
            }
LABEL_34:
            v26 = _mm_loadu_si128((__m128i *)((char *)v20 - 24));
            v27 = v20[-1].m128i_i64[1];
            v20 = (__m128i *)((char *)v20 - 24);
            *(__m128i *)((char *)v20 + 24) = v26;
            v20[2].m128i_i64[1] = v27;
            continue;
          }
        }
LABEL_13:
        v10 = v2[1].m128i_i64[0];
        v11 = _mm_loadu_si128(v2);
        v12 = (__m128i *)&v2[1].m128i_u64[1];
        v13 = (__int64)v2->m128i_i64 - a1;
        v32 = v10;
        *(__m128i *)n = v11;
        v14 = 0xAAAAAAAAAAAAAAABLL * (v13 >> 3);
        v15 = v12;
        if ( v13 > 0 )
        {
          do
          {
            v15 = (__m128i *)((char *)v15 - 24);
            v16 = v15[-1].m128i_i64[1];
            *v15 = _mm_loadu_si128((__m128i *)((char *)v15 - 24));
            v15[1].m128i_i64[0] = v16;
            --v14;
          }
          while ( v14 );
        }
        si128 = _mm_load_si128((const __m128i *)n);
        *(_QWORD *)(a1 + 16) = v29;
        *(__m128i *)a1 = si128;
LABEL_16:
        v2 = v12;
        if ( a2 == v12 )
          return;
      }
      if ( v5 == v3 )
        goto LABEL_12;
      goto LABEL_8;
    }
  }
}
