/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8065500
// Address: 0x08065500

//----- (08065500) --------------------------------------------------------
__m128i *__userpurge sub_8065500@<eax>(__m128i *a1, int a2, int a3, unsigned int *a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // esi
  unsigned int v12; // edx
  unsigned int *v13; // eax
  unsigned int v14; // ecx
  int v15; // [esp-14h] [ebp-3Ch]
  int v16; // [esp-10h] [ebp-38h]
  int v17; // [esp+0h] [ebp-28h]
  int v18; // [esp+4h] [ebp-24h]
  int v19; // [esp+8h] [ebp-20h]

  v17 = -1171354717 * ((a3 - a2) >> 2);
  v4 = *a4;
  v5 = a4[2];
  if ( a3 - a2 > 0 )
  {
    while ( 1 )
    {
      v6 = a2;
      v7 = -1171354717 * ((int)(v5 - v4) >> 2);
      if ( v7 > v17 )
        v7 = v17;
      v18 = v7;
      v8 = 44 * v7;
      a2 += v8;
      v9 = -1171354717 * (v8 >> 2);
      if ( v8 > 0 )
      {
        v19 = v8;
        do
        {
          v16 = v6;
          v6 += 44;
          v15 = v4;
          v4 += 44;
          sub_80C62B0(v15, v16);
          --v9;
        }
        while ( v9 );
        v8 = v19;
        v4 = *a4;
      }
      v10 = v18 - 1171354717 * ((int)(v4 - a4[1]) >> 2);
      if ( v10 < 0 )
        break;
      if ( v10 > 10 )
      {
        v12 = v10 / 11;
LABEL_14:
        v13 = (unsigned int *)(4 * v12 + a4[3]);
        a4[3] = (unsigned int)v13;
        v14 = *v13;
        a4[1] = *v13;
        v5 = v14 + 484;
        a4[2] = v14 + 484;
        v4 = v14 + 44 * (v10 - 11 * v12);
        *a4 = v4;
        goto LABEL_11;
      }
      v4 += v8;
      *a4 = v4;
      v5 = a4[2];
LABEL_11:
      v17 -= v18;
      if ( v17 <= 0 )
        goto LABEL_12;
    }
    v12 = ~(~v10 / 0xBu);
    goto LABEL_14;
  }
LABEL_12:
  *a1 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(a4[1])),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(a4[3])));
  return a1;
}
