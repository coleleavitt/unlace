/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: freadbytes
// Address: 0x000000010007C7C0

//----- (000000010007C7C0) ----------------------------------------------------
__int64 __fastcall freadbytes(FILE *a1, char *a2, int a3, int a4)
{
  __int64 v7; // r15
  size_t v8; // rcx
  __int64 result; // rax
  char *v10; // rdx
  __int64 v11; // rcx
  char *v12; // rsi
  const __m128i *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i si128; // xmm0
  __m128i v17; // xmm2
  __int64 v18; // rdi
  const __m128i *v19; // r8
  __int64 v20; // rdi
  __m128i v21; // xmm0
  char *v22; // rsi
  _BYTE __src[16]; // [rsp+0h] [rbp-50h] BYREF
  char v24; // [rsp+10h] [rbp-40h] BYREF

  v7 = a3;
  v8 = qfread(a1, __src, a3);
  result = 0xFFFFFFFFLL;
  if ( v8 == v7 )
  {
    if ( !a4 )
    {
      result = 0;
      if ( a3 <= 0 )
        return result;
      memcpy(a2, __src, (unsigned int)a3);
      return 0;
    }
    if ( a3 <= 0 )
      return 0;
    v10 = &a2[v7];
    if ( (unsigned int)a3 < 8 )
    {
      v11 = 0;
LABEL_6:
      v12 = v10;
LABEL_18:
      v22 = v12 - 1;
      do
        *v22-- = __src[v11++];
      while ( a3 != v11 );
      return 0;
    }
    if ( (unsigned int)a3 >= 0x20 )
    {
      v11 = a3 & 0x7FFFFFE0;
      v13 = (const __m128i *)&v24;
      v14 = (__int64)&a2[v7 - 16];
      v15 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1000A1720);
      do
      {
        v17 = _mm_load_si128(v13);
        *(__m128i *)(v14 + v15) = _mm_shuffle_epi8(_mm_load_si128(v13 - 1), si128);
        *(__m128i *)(v14 + v15 - 16) = _mm_shuffle_epi8(v17, si128);
        v13 += 2;
        v15 -= 32;
      }
      while ( -(__int64)(a3 & 0x7FFFFFE0) != v15 );
      if ( (_DWORD)v11 == a3 )
        return 0;
      if ( (a3 & 0x18) == 0 )
      {
        v10 -= v11;
        goto LABEL_6;
      }
    }
    else
    {
      v11 = 0;
    }
    v18 = v11;
    v11 = a3 & 0x7FFFFFF8;
    v12 = &v10[-v11];
    v19 = (const __m128i *)&__src[v18];
    v20 = -v18;
    v21 = _mm_loadl_epi64((const __m128i *)&qword_1000A1730);
    do
    {
      *(_QWORD *)&v10[v20 - 8] = _mm_shuffle_epi8(_mm_loadl_epi64(v19), v21).u64[0];
      v19 = (const __m128i *)((char *)v19 + 8);
      v20 -= 8;
    }
    while ( -(__int64)(a3 & 0x7FFFFFF8) != v20 );
    if ( (_DWORD)v11 == a3 )
      return 0;
    goto LABEL_18;
  }
  return result;
}
// 1000A1720: using guessed type __int128 xmmword_1000A1720;
// 1000A1730: using guessed type __int64 qword_1000A1730;
