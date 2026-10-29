__m128i *__fastcall sub_205BE40(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 v12; // rcx
  __int64 *v13; // r15
  __int64 v14; // rcx
  __m128i *v15; // rdx
  unsigned __int64 v16; // rsi
  __m128i si128; // xmm0
  __int64 *i; // r13
  __int64 v19; // rdi
  int v20; // r14d
  __int64 *v21; // rbx
  int v22; // r14d
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 *v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __m128i *v29; // rdx
  unsigned __int64 v30; // rsi
  __m128i v31; // xmm0
  int v32; // edi
  __int64 *v33; // r9
  __int64 v34; // [rsp+8h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(__int64 **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (__m128i *)sub_22300B0(8LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v34 = 8 * v8;
    v13 = &v9[v8];
    v14 = 8 * v12;
    if ( result != (__m128i *)&result->m128i_i8[v14] )
    {
      v15 = result;
      v16 = ((unsigned __int64)(v14 - 8) >> 3) + 1;
      if ( v14 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v15++ = si128;
      while ( v15 != &result[v16 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v16 & 0xFFFFFFFFFFFFFFFELL));
      if ( v16 != (v16 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    for ( i = v9; v13 != i; ++i )
    {
      v19 = *i;
      if ( *i != -8192 && v19 != -4096 )
      {
        v20 = *(_DWORD *)(a1 + 16);
        if ( !v20 )
        {
          *(_QWORD *)&dword_0 = *i;
          BUG();
        }
        v21 = *(__int64 **)a1;
        v22 = v20 - 1;
        v23 = sub_205A060(v19);
        v24 = *i;
        v25 = v22 & v23;
        v26 = &v21[v25];
        v27 = *v26;
        if ( *v26 != *i )
        {
          v32 = 1;
          v33 = nullptr;
          if ( v27 != -4096 )
          {
            while ( 1 )
            {
              if ( v27 == -8192 && !v33 )
                v33 = v26;
              v25 = v22 & (v32 + v25);
              v26 = &v21[v25];
              v27 = *v26;
              if ( *v26 == v24 )
                break;
              if ( v27 == -4096 )
              {
                if ( v33 )
                  v26 = v33;
                break;
              }
              ++v32;
            }
          }
        }
        *v26 = v24;
        ++*(_DWORD *)(a1 + 8);
      }
    }
    return (__m128i *)operator delete(v9, v34, 8);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    v28 = 8LL * *(unsigned int *)(a1 + 16);
    if ( result != (__m128i *)&result->m128i_i8[v28] )
    {
      v29 = result;
      v30 = ((unsigned __int64)(v28 - 8) >> 3) + 1;
      if ( v28 == 8 )
        goto LABEL_23;
      v31 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v29++ = v31;
      while ( &result[v30 >> 1] != v29 );
      result = (__m128i *)((char *)result + 8 * (v30 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v30 & 0xFFFFFFFFFFFFFFFELL) != v30 )
LABEL_23:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
