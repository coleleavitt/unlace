/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fwritebytes
// Address: 0x000000010007C960

//----- (000000010007C960) ----------------------------------------------------
__int64 __fastcall fwritebytes(FILE *__stream, char *a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  size_t v5; // rbx
  const __m128i *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  char *v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // r9
  __int64 v12; // r8
  __m128i v13; // xmm0
  char *v14; // rdx
  _OWORD __dst[2]; // [rsp+0h] [rbp-40h] BYREF

  result = 0xFFFFFFFFLL;
  if ( a3 <= 0x20 )
  {
    v5 = (int)a3;
    if ( !a4 )
    {
      if ( a3 )
        memcpy(__dst, a2, a3);
      return (unsigned int)-(qfwrite(__stream, __dst, v5) != v5);
    }
    if ( !a3 )
      return (unsigned int)-(qfwrite(__stream, __dst, v5) != v5);
    v6 = (const __m128i *)&a2[a3];
    v7 = a3;
    if ( a3 < 8 )
    {
      v8 = 0;
LABEL_6:
      v9 = (char *)v6;
LABEL_14:
      v14 = v9 - 1;
      do
        *((_BYTE *)__dst + v8++) = *v14--;
      while ( v7 != v8 );
      return (unsigned int)-(qfwrite(__stream, __dst, v5) != v5);
    }
    if ( a3 >= 0x10 )
    {
      v8 = a3 & 0x30;
      __dst[0] = _mm_shuffle_epi8(_mm_loadu_si128(v6 - 1), (__m128i)xmmword_1000A1720);
      if ( v8 != 16 )
        __dst[1] = _mm_shuffle_epi8(_mm_loadu_si128(v6 - 2), (__m128i)xmmword_1000A1720);
      if ( (_DWORD)v8 == a3 )
        return (unsigned int)-(qfwrite(__stream, __dst, v5) != v5);
      if ( (a3 & 8) == 0 )
      {
        v6 = (const __m128i *)((char *)v6 - v8);
        goto LABEL_6;
      }
    }
    else
    {
      v8 = 0;
    }
    v10 = v8;
    v8 = a3 & 0x38;
    v9 = &v6->i8[-v8];
    v11 = (_QWORD *)((char *)__dst + v10);
    v12 = -v10;
    v13 = _mm_loadl_epi64((const __m128i *)&qword_1000A1730);
    do
    {
      *v11++ = _mm_shuffle_epi8(_mm_loadl_epi64((const __m128i *)((char *)v6 + v12 - 8)), v13).u64[0];
      v12 -= 8;
    }
    while ( -(v7 & 0x38) != v12 );
    if ( (_DWORD)v8 == (_DWORD)v7 )
      return (unsigned int)-(qfwrite(__stream, __dst, v5) != v5);
    goto LABEL_14;
  }
  return result;
}
// 1000A1720: using guessed type __int128 xmmword_1000A1720;
// 1000A1730: using guessed type __int64 qword_1000A1730;
