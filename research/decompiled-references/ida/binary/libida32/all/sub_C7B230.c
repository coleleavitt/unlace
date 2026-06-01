void __fastcall sub_C7B230(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r14
  __int64 v9; // r13
  const __m128i *v10; // r10
  unsigned __int64 v11; // rax
  __m128 *v12; // r8
  __int64 i; // rsi
  __int64 v14; // rax
  __m128 *v15; // rcx
  __m128i *v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  char *v20; // r14
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __m128i si128; // xmm0
  __m128i v29[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a3 )
    return;
  v3 = a2 + a3 - 1;
  v6 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v6 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 16LL * (unsigned int)v6;
    v9 = v8 - 16;
    v10 = (const __m128i *)(v7 + v8 - 16);
    v11 = v10->m128i_u64[1];
    if ( a2 < v11 )
    {
      v12 = *(__m128 **)(a1 + 16);
      for ( i = v8 >> 4; ; i = v14 )
      {
        v14 = i >> 1;
        v15 = &v12[i >> 1];
        if ( a2 >= v15->m128_u64[0] )
        {
          v12 = v15 + 1;
          v14 = i - v14 - 1;
          if ( v14 <= 0 )
            goto LABEL_9;
        }
        else if ( !v14 )
        {
LABEL_9:
          v16 = (__m128i *)(v7 + v8);
          v17 = a1 + 16;
          v18 = (unsigned int)v6 + 1LL;
          v19 = *(unsigned int *)(a1 + 28);
          if ( (__m128 *)(v7 + v8) == v12 )
          {
            v29[0].m128i_i64[0] = v3;
            si128 = (__m128i)_mm_loadh_ps((const double *)v29[0].m128i_i64);
            if ( v18 > v19 )
            {
              v29[0] = si128;
              sub_22134E0(v17, a1 + 32, v18, 16);
              si128 = _mm_load_si128(v29);
              v12 = (__m128 *)(*(_QWORD *)(a1 + 16) + 16LL * *(unsigned int *)(a1 + 24));
            }
            *v12 = (__m128)si128;
            ++*(_DWORD *)(a1 + 24);
          }
          else
          {
            v20 = (char *)v12 - v7;
            if ( v18 > v19 )
            {
              sub_22134E0(v17, a1 + 32, v18, 16);
              v27 = *(_QWORD *)(a1 + 16);
              v6 = *(unsigned int *)(a1 + 24);
              v12 = (__m128 *)&v20[v27];
              v9 = 16 * v6 - 16;
              v16 = (__m128i *)(v27 + 16 * v6);
              v10 = (const __m128i *)(v27 + v9);
            }
            v21 = v9 - (_QWORD)v20;
            v22 = 0xFFFFFFFFFFFFFFFLL;
            *v16 = _mm_loadu_si128(v10);
            v23 = v21 >> 4;
            if ( v21 > 0 )
            {
              do
              {
                v16[v22] = _mm_loadu_si128(&v10[v22]);
                --v22;
                --v23;
              }
              while ( v23 );
            }
            v29[0].m128i_i64[0] = v3;
            *(_DWORD *)(a1 + 24) = v6 + 1;
            *v12 = _mm_loadh_ps((const double *)v29[0].m128i_i64);
          }
          return;
        }
      }
    }
    if ( v11 == a2 - 1 )
    {
      v10->m128i_i64[1] = v3;
    }
    else
    {
      v24 = (unsigned int)v6 + 1LL;
      v29[0].m128i_i64[0] = v3;
      v25 = (__m128i)_mm_loadh_ps((const double *)v29[0].m128i_i64);
      if ( v24 > *(unsigned int *)(a1 + 28) )
      {
        v29[0] = v25;
        sub_22134E0(a1 + 16, a1 + 32, v24, 16);
        v7 = *(_QWORD *)(a1 + 16);
        v25 = _mm_load_si128(v29);
        v8 = 16LL * *(unsigned int *)(a1 + 24);
      }
      *(__m128i *)(v7 + v8) = v25;
      ++*(_DWORD *)(a1 + 24);
    }
  }
  else
  {
    v29[0].m128i_i64[0] = a2 + a3 - 1;
    v26 = (__m128i)_mm_loadh_ps((const double *)v29[0].m128i_i64);
    if ( !*(_DWORD *)(a1 + 28) )
    {
      v29[0] = v26;
      sub_22134E0(a1 + 16, a1 + 32, 1, 16);
      v6 = *(unsigned int *)(a1 + 24);
      v26 = _mm_load_si128(v29);
    }
    *(__m128i *)(16 * v6 + *(_QWORD *)(a1 + 16)) = v26;
    ++*(_DWORD *)(a1 + 24);
  }
}

