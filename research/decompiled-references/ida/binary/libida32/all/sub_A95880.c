__m128i *__fastcall sub_A95880(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 *v14; // r8
  __m128i *v15; // rdx
  unsigned __int64 v16; // rdi
  __m128i si128; // xmm0
  __int64 *v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 *v22; // r10
  __int64 v23; // r11
  __int64 v24; // rcx
  __m128i *v25; // rdx
  unsigned __int64 v26; // rsi
  __m128i v27; // xmm0
  int v28; // r13d
  __int64 *v29; // r14

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
  result = (__m128i *)sub_220C370(8LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 8 * v12;
    v14 = &v9[v8];
    if ( result != (__m128i *)((char *)result + 8 * v12) )
    {
      v15 = result;
      v16 = ((unsigned __int64)(v13 - 8) >> 3) + 1;
      if ( v13 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      do
        *v15++ = si128;
      while ( v15 != &result[v16 >> 1] );
      v15 = (__m128i *)((char *)result + 8 * (v16 & 0xFFFFFFFFFFFFFFFELL));
      if ( v16 != (v16 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        v15->m128i_i64[0] = -4096;
    }
    if ( v14 != v9 )
    {
      v18 = v9;
      v19 = v12 - 1;
      do
      {
        v20 = *v18;
        if ( *v18 != -8192 && v20 != -4096 )
        {
          if ( !(_DWORD)v12 )
          {
            *(_QWORD *)&dword_0 = *v18;
            BUG();
          }
          v21 = v19 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
          v22 = &result->m128i_i64[v21];
          v23 = *v22;
          if ( v20 != *v22 )
          {
            v28 = 1;
            v29 = nullptr;
            if ( v23 != -4096 )
            {
              while ( 1 )
              {
                if ( v23 == -8192 && !v29 )
                  v29 = v22;
                v21 = v19 & (v28 + v21);
                v22 = &result->m128i_i64[v21];
                v23 = *v22;
                if ( v20 == *v22 )
                  break;
                if ( v23 == -4096 )
                {
                  if ( v29 )
                    v22 = v29;
                  break;
                }
                ++v28;
              }
            }
          }
          ++*(_DWORD *)(a1 + 8);
          *v22 = v20;
        }
        ++v18;
      }
      while ( v14 != v18 );
    }
    return (__m128i *)operator delete();
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    v24 = 8LL * *(unsigned int *)(a1 + 16);
    if ( result != (__m128i *)&result->m128i_i8[v24] )
    {
      v25 = result;
      v26 = ((unsigned __int64)(v24 - 8) >> 3) + 1;
      if ( v24 == 8 )
        goto LABEL_24;
      v27 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      do
        *v25++ = v27;
      while ( &result[v26 >> 1] != v25 );
      result = (__m128i *)((char *)result + 8 * (v26 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v26 & 0xFFFFFFFFFFFFFFFELL) != v26 )
LABEL_24:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}

