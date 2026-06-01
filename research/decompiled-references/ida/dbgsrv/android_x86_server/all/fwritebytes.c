/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fwritebytes
// Address: 0x000B04E0

//----- (000B04E0) --------------------------------------------------------
int __cdecl fwritebytes(FILE *s, unsigned int a2, size_t n, int a4)
{
  int result; // eax
  unsigned int v5; // edi
  size_t v6; // ebx
  size_t v7; // edi
  const __m128i *v8; // esi
  __m128i *v9; // eax
  __m128i si128; // xmm0
  size_t v11; // edx
  __m128i v12; // xmm1
  bool v13; // zf
  _BYTE *v14; // eax
  size_t v15; // ecx
  _BYTE *v16; // edi
  int v17; // edx
  int v18; // eax
  __m128i v19; // xmm1
  _BYTE ptr[16]; // [esp+8h] [ebp-34h] BYREF
  _BYTE v21[16]; // [esp+18h] [ebp-24h] BYREF
  unsigned int v22; // [esp+28h] [ebp-14h]

  v22 = __readgsdword(0x14u);
  result = -1;
  if ( n <= 0x20 )
  {
    if ( a4 )
    {
      if ( n )
      {
        v5 = a2 + n;
        v6 = 0;
        if ( n < 0x20 || (unsigned int)ptr < v5 && (unsigned int)&ptr[n] > a2 )
          goto LABEL_10;
        v7 = n & 0x1F;
        v6 = n - v7;
        v8 = (const __m128i *)(a2 + n - 16);
        v9 = (__m128i *)v21;
        si128 = _mm_load_si128((const __m128i *)(&qword_13ACD8 - 38391));
        v11 = n - v7;
        do
        {
          v12 = _mm_shuffle_epi8(_mm_loadu_si128(v8 - 1), si128);
          v9[-1] = _mm_shuffle_epi8(_mm_loadu_si128(v8), si128);
          *v9 = v12;
          v8 -= 2;
          v9 += 2;
          v11 -= 32;
        }
        while ( v11 );
        v13 = v7 == 0;
        v5 = v7 + a2;
        if ( !v13 )
        {
LABEL_10:
          v14 = &ptr[v6];
          v15 = n - v6;
          v16 = (_BYTE *)(v5 - 1);
          do
          {
            *v14++ = *v16--;
            --v15;
          }
          while ( v15 );
        }
      }
    }
    else if ( n )
    {
      v17 = 0;
      if ( n > 0x1F && ((unsigned int)ptr >= a2 + n || (unsigned int)&ptr[n] <= a2) )
      {
        v18 = 0;
        do
        {
          v19 = _mm_loadu_si128((const __m128i *)(a2 + v18 + 16));
          *(__m128i *)&ptr[v18] = _mm_loadu_si128((const __m128i *)(a2 + v18));
          *(__m128i *)&v21[v18] = v19;
          v18 += 32;
        }
        while ( (n & 0x20) != v18 );
      }
      else
      {
        do
        {
          ptr[v17] = *(_BYTE *)(a2 + v17);
          ++v17;
        }
        while ( n != v17 );
      }
    }
    return -(qfwrite(s, ptr, n) != n);
  }
  return result;
}
// B064B: mask 0xFFFFFFE0 is shortened because %n.4 <= 0x20
// B0680: conditional instruction was optimized away because %n.4==20
// 13ACD8: using guessed type __int64 qword_13ACD8;
