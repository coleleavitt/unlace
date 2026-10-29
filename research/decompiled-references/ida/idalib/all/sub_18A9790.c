__m128i *__fastcall sub_18A9790(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 *v15; // r8
  __m128i *v16; // rdx
  unsigned __int64 v17; // rdi
  __m128i si128; // xmm0
  __int64 *v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  unsigned int v22; // edi
  __int64 *v23; // r10
  __int64 v24; // r11
  __int64 v25; // rcx
  __m128i *v26; // rdx
  unsigned __int64 v27; // rsi
  __m128i v28; // xmm0
  int v29; // r13d
  __int64 *v30; // r14

  v6 = (unsigned int)(a2 - 1);
  v8 = *(_DWORD *)(a1 + 16);
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
    *(_QWORD *)(a1 + 8) = 0;
    v12 = v8;
    v13 = *(unsigned int *)(a1 + 16);
    v14 = 8 * v13;
    v15 = &v9[v12];
    if ( result != (__m128i *)((char *)result + 8 * v13) )
    {
      v16 = result;
      v17 = ((unsigned __int64)(v14 - 8) >> 3) + 1;
      if ( v14 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v16++ = si128;
      while ( v16 != &result[v17 >> 1] );
      v16 = (__m128i *)((char *)result + 8 * (v17 & 0xFFFFFFFFFFFFFFFELL));
      if ( v17 != (v17 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        v16->m128i_i64[0] = -4096;
    }
    if ( v15 != v9 )
    {
      v19 = v9;
      v20 = v13 - 1;
      do
      {
        v21 = *v19;
        if ( *v19 != -8192 && v21 != -4096 )
        {
          if ( !(_DWORD)v13 )
          {
            *(_QWORD *)&dword_0 = *v19;
            BUG();
          }
          v22 = v20 & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
          v23 = &result->m128i_i64[v22];
          v24 = *v23;
          if ( v21 != *v23 )
          {
            v29 = 1;
            v30 = nullptr;
            if ( v24 != -4096 )
            {
              while ( 1 )
              {
                if ( v24 == -8192 && !v30 )
                  v30 = v23;
                v22 = v20 & (v29 + v22);
                v23 = &result->m128i_i64[v22];
                v24 = *v23;
                if ( v21 == *v23 )
                  break;
                if ( v24 == -4096 )
                {
                  if ( v30 )
                    v23 = v30;
                  break;
                }
                ++v29;
              }
            }
          }
          ++*(_DWORD *)(a1 + 8);
          *v23 = v21;
        }
        ++v19;
      }
      while ( v15 != v19 );
    }
    return (__m128i *)operator delete(v9, v12 * 8, 8);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    v25 = 8LL * *(unsigned int *)(a1 + 16);
    if ( result != (__m128i *)&result->m128i_i8[v25] )
    {
      v26 = result;
      v27 = ((unsigned __int64)(v25 - 8) >> 3) + 1;
      if ( v25 == 8 )
        goto LABEL_24;
      v28 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v26++ = v28;
      while ( &result[v27 >> 1] != v26 );
      result = (__m128i *)((char *)result + 8 * (v27 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v27 & 0xFFFFFFFFFFFFFFFELL) != v27 )
LABEL_24:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
