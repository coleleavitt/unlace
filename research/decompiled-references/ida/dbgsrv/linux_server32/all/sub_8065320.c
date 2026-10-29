/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8065320
// Address: 0x08065320

//----- (08065320) --------------------------------------------------------
__m128i *__userpurge sub_8065320@<eax>(__m128i *a1, int a2, int a3, unsigned int *a4)
{
  int v4; // edi
  __m128i *v5; // esi
  unsigned int v6; // edx
  unsigned int v7; // ecx
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // esi
  int v13; // eax
  unsigned int v14; // edx
  unsigned int *v15; // ecx
  int v17; // [esp+4h] [ebp-2Ch]
  int v18; // [esp+8h] [ebp-28h]
  int v19; // [esp+Ch] [ebp-24h]

  v4 = a3;
  v5 = a1;
  v17 = -1171354717 * ((a3 - a2) >> 2);
  v6 = *a4;
  v7 = a4[1];
  if ( a3 - a2 > 0 )
  {
    while ( 1 )
    {
      v8 = v6;
      v9 = -1171354717 * ((int)(v6 - v7) >> 2);
      v10 = v9;
      if ( v6 == v7 )
      {
        v10 = 11;
        v8 = *(_DWORD *)(a4[3] - 4) + 484;
      }
      if ( v17 <= v10 )
        v10 = v17;
      v18 = v10;
      v11 = 44 * v10;
      v19 = v4 - v11;
      v12 = -1171354717 * (v11 >> 2);
      if ( v11 > 0 )
      {
        do
        {
          v4 -= 44;
          v8 -= 44;
          sub_80C62B0(v8, v4);
          --v12;
        }
        while ( v12 );
        v6 = *a4;
        v7 = a4[1];
        v9 = -1171354717 * ((int)(*a4 - v7) >> 2);
      }
      v13 = v9 - v18;
      if ( v13 < 0 )
      {
        v14 = ~(~v13 / 0xBu);
      }
      else
      {
        if ( v13 <= 10 )
        {
          v6 -= v11;
          goto LABEL_12;
        }
        v14 = v13 / 11;
      }
      v15 = (unsigned int *)(4 * v14 + a4[3]);
      a4[3] = (unsigned int)v15;
      v7 = *v15;
      *(_QWORD *)(a4 + 1) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v7 + 484)).m128i_u64[0];
      v6 = v7 + 44 * (v13 - 11 * v14);
LABEL_12:
      v17 -= v18;
      *a4 = v6;
      if ( v17 <= 0 )
      {
        v5 = a1;
        break;
      }
      v4 = v19;
    }
  }
  *v5 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(v7)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4[2]), _mm_cvtsi32_si128(a4[3])));
  return v5;
}
