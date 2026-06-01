/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E250
// Address: 0x0003E250

//----- (0003E250) --------------------------------------------------------
unsigned int __cdecl sub_3E250(int a1, unsigned int a2)
{
  unsigned int v2; // edi
  int v3; // ecx
  int *v4; // esi
  __int64 v5; // rax
  int v6; // ecx
  int *v7; // ebx
  int v8; // esi
  int v9; // edi
  unsigned __int64 v10; // rax
  int *v11; // edi
  int v12; // eax
  int v13; // edx
  size_t v14; // esi
  char v15; // al
  unsigned int v16; // esi
  int v17; // edx
  __m128i *v18; // ecx
  __m128i si128; // xmm0
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  unsigned int v22; // esi
  unsigned __int64 *v23; // esi
  unsigned int i; // edi
  __int64 v26; // [esp-10h] [ebp-3Ch]
  unsigned int v27; // [esp+Ch] [ebp-20h]
  unsigned int v28; // [esp+14h] [ebp-18h]
  unsigned int v29; // [esp+18h] [ebp-14h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( v2 == 16 || v2 == 8 )
  {
    if ( !*(_QWORD *)(a1 + 40) || (v3 = 0, 0xFFFFFFFFFFFFFFFFLL / v2 >= *(_QWORD *)(a1 + 40)) )
    {
      if ( !a2 || (v3 = 0, 0xFFFFFFFF / v2 >= a2) )
      {
        v4 = *(int **)(a1 + 4);
        LODWORD(v5) = qlseek(v4[90], 0, 1);
        v6 = v4[92];
        v7 = v4;
        v8 = v4[91];
        v29 = v5 - v8;
        v28 = (v5 - __PAIR64__(v6, v8)) >> 32;
        LODWORD(v5) = *(_DWORD *)(a1 + 24);
        v9 = v5 * *(_DWORD *)(a1 + 44);
        v10 = *(unsigned int *)(a1 + 40) * (unsigned __int64)(unsigned int)v5;
        HIDWORD(v10) += v9;
        v11 = v7;
        v12 = qlseek(v7[90], v10 + *(_QWORD *)(a1 + 8) + __PAIR64__(v6, v8), 0);
        v27 = 0;
        if ( (v13 & v12) != 0xFFFFFFFF )
        {
          v14 = a2 * *(_DWORD *)(a1 + 24);
          HIDWORD(v26) = *(_DWORD *)(a1 + 28);
          LODWORD(v26) = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 360);
          if ( qlread(v26, v14) == v14 )
          {
            v15 = *(_BYTE *)(*(_DWORD *)(a1 + 4) + 476);
            if ( *(_DWORD *)(a1 + 24) == 8 )
            {
              v16 = a2;
              if ( a2 )
              {
                v17 = *(_DWORD *)(a1 + 28);
                v18 = (__m128i *)(v17 + 16 * (a2 - 1));
                si128 = _mm_load_si128((const __m128i *)(&qword_13ACD8 - 38411));
                v20 = _mm_load_si128((const __m128i *)(&qword_13ACD8 - 38409));
                do
                {
                  v21 = _mm_unpacklo_epi64(
                          _mm_cvtsi32_si128(*(_DWORD *)(v17 + 8 * v16 - 8)),
                          _mm_cvtsi32_si128(*(_DWORD *)(v17 + 8 * v16 - 4)));
                  if ( v15 )
                    v21 = _mm_srli_epi64(_mm_shuffle_epi8(v21, si128), 0x20u);
                  *v18-- = _mm_and_si128(v21, v20);
                  --v16;
                }
                while ( v16 );
                v27 = a2;
              }
            }
            else
            {
              v22 = 0;
              if ( !v15 )
                v22 = a2;
              v27 = v22;
              if ( a2 && v15 )
              {
                v23 = *(unsigned __int64 **)(a1 + 28);
                for ( i = 0; i < a2; ++i )
                {
                  *v23 = swap64(*v23);
                  v23[1] = swap64(v23[1]);
                  v23 += 2;
                }
                v27 = a2;
                v11 = v7;
              }
            }
          }
        }
        qlseek(v11[90], *(_QWORD *)(v11 + 91) + __PAIR64__(v28, v29), 0);
        return v27;
      }
    }
  }
  return v3;
}
// 3E300: variable 'v5' is possibly undefined
// 3E340: variable 'v13' is possibly undefined
// 13ACD8: using guessed type __int64 qword_13ACD8;
