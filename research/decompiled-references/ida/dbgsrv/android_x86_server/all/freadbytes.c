/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: freadbytes
// Address: 0x000B03B0

//----- (000B03B0) --------------------------------------------------------
int __cdecl freadbytes(FILE *stream, char *dest, int n, int a4)
{
  int v4; // esi
  char *v5; // edx
  size_t v6; // esi
  size_t v7; // edx
  size_t v8; // ecx
  __m128i *v9; // esi
  char *v10; // eax
  const __m128i *v11; // edx
  __m128i si128; // xmm0
  __m128i v13; // xmm2
  char *v14; // eax
  size_t v15; // edi
  char *v16; // edx
  size_t v18; // [esp+4h] [ebp-38h]
  _BYTE src[16]; // [esp+8h] [ebp-34h] BYREF
  _DWORD v20[9]; // [esp+18h] [ebp-24h] BYREF

  v20[4] = __readgsdword(0x14u);
  v4 = -1;
  if ( qfread(stream, src, n) == n )
  {
    if ( a4 )
    {
      if ( n > 0 )
      {
        v5 = &dest[n];
        v6 = 0;
        if ( (unsigned int)n < 0x20 || &src[n] > dest && src < v5 )
          goto LABEL_10;
        v7 = n & 0x1F;
        v8 = n - v7;
        v9 = (__m128i *)&dest[n - 16];
        v10 = &dest[v7];
        v11 = (const __m128i *)v20;
        si128 = _mm_load_si128((const __m128i *)&xmmword_EFD20);
        v18 = v8;
        do
        {
          v13 = _mm_loadu_si128(v11);
          *v9 = _mm_shuffle_epi8(_mm_loadu_si128(v11 - 1), si128);
          v9[-1] = _mm_shuffle_epi8(v13, si128);
          v9 -= 2;
          v11 += 2;
          v8 -= 32;
        }
        while ( v8 );
        v5 = v10;
        v6 = v18;
        if ( (n & 0x1F) != 0 )
        {
LABEL_10:
          v14 = &src[v6];
          v15 = n - v6;
          v16 = v5 - 1;
          do
          {
            *v16-- = *v14++;
            --v15;
          }
          while ( v15 );
        }
      }
      return 0;
    }
    else
    {
      v4 = 0;
      if ( n > 0 )
        memcpy(dest, src, n);
    }
  }
  return v4;
}
// EFD20: using guessed type __int128 xmmword_EFD20;
