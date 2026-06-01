__m128i *__fastcall sub_20842C0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 *v14; // r14
  __int64 v15; // rcx
  __m128i *v16; // rdx
  unsigned __int64 v17; // rsi
  __m128i si128; // xmm0
  __int64 *v19; // r13
  __int64 v20; // rcx
  __m128i *v21; // rdx
  unsigned __int64 v22; // rsi
  __m128i v23; // xmm0
  __int64 *v24; // [rsp+8h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
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
    v13 = 8 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = (__int64 *)(v9 + v13);
    v15 = 8 * v12;
    if ( result != (__m128i *)&result->m128i_i8[v15] )
    {
      v16 = result;
      v17 = ((unsigned __int64)(v15 - 8) >> 3) + 1;
      if ( v15 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v16++ = si128;
      while ( v16 != &result[v17 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v17 & 0xFFFFFFFFFFFFFFFELL));
      if ( v17 != (v17 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    if ( v14 != (__int64 *)v9 )
    {
      v19 = (__int64 *)v9;
      do
      {
        if ( *v19 != -8192 && *v19 != -4096 )
        {
          sub_207E530((__int64 *)a1, v19, &v24);
          *v24 = *v19;
          ++*(_DWORD *)(a1 + 8);
        }
        ++v19;
      }
      while ( v14 != v19 );
    }
    return (__m128i *)operator delete(v9, v13, 8);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    v20 = 8LL * *(unsigned int *)(a1 + 16);
    if ( result != (__m128i *)&result->m128i_i8[v20] )
    {
      v21 = result;
      v22 = ((unsigned __int64)(v20 - 8) >> 3) + 1;
      if ( v20 == 8 )
        goto LABEL_23;
      v23 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v21++ = v23;
      while ( &result[v22 >> 1] != v21 );
      result = (__m128i *)((char *)result + 8 * (v22 & 0xFFFFFFFFFFFFFFFELL));
      if ( v22 != (v22 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_23:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
