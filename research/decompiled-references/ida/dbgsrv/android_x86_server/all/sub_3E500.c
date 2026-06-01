/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E500
// Address: 0x0003E500

//----- (0003E500) --------------------------------------------------------
unsigned int __cdecl sub_3E500(int a1, unsigned int a2)
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
  int v17; // ecx
  int v18; // edx
  __m128i si128; // xmm0
  __m128i v20; // xmm1
  unsigned int v21; // eax
  __m128i v22; // xmm3
  __m128i v23; // xmm2
  int v24; // edi
  int v25; // eax
  __m128i v26; // xmm2
  unsigned int v27; // edx
  unsigned __int64 *v28; // esi
  unsigned int i; // edi
  __int64 v31; // [esp-10h] [ebp-3Ch]
  unsigned int v32; // [esp+Ch] [ebp-20h]
  char v33; // [esp+Ch] [ebp-20h]
  int *v34; // [esp+10h] [ebp-1Ch]
  unsigned int v35; // [esp+14h] [ebp-18h]
  unsigned int v36; // [esp+18h] [ebp-14h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( v2 == 24 || v2 == 12 )
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
        v36 = v5 - v8;
        v35 = (v5 - __PAIR64__(v6, v8)) >> 32;
        LODWORD(v5) = *(_DWORD *)(a1 + 24);
        v9 = v5 * *(_DWORD *)(a1 + 44);
        v10 = *(unsigned int *)(a1 + 40) * (unsigned __int64)(unsigned int)v5;
        HIDWORD(v10) += v9;
        v11 = v7;
        v12 = qlseek(v7[90], v10 + *(_QWORD *)(a1 + 8) + __PAIR64__(v6, v8), 0);
        v32 = 0;
        if ( (v13 & v12) == 0xFFFFFFFF )
          goto LABEL_24;
        v14 = a2 * *(_DWORD *)(a1 + 24);
        HIDWORD(v31) = *(_DWORD *)(a1 + 28);
        LODWORD(v31) = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 360);
        if ( qlread(v31, v14) != v14 )
          goto LABEL_24;
        v15 = *(_BYTE *)(*(_DWORD *)(a1 + 4) + 476);
        if ( *(_DWORD *)(a1 + 24) == 12 )
        {
          v16 = a2;
          if ( !a2 )
          {
LABEL_24:
            qlseek(v11[90], *(_QWORD *)(v11 + 91) + __PAIR64__(v35, v36), 0);
            return v32;
          }
          v33 = *(_BYTE *)(*(_DWORD *)(a1 + 4) + 476);
          v34 = v7;
          v17 = *(_DWORD *)(a1 + 28);
          v18 = 12 * a2 - 12;
          si128 = _mm_load_si128((const __m128i *)(&qword_13ACD8 - 38411));
          v20 = _mm_load_si128((const __m128i *)(&qword_13ACD8 - 38409));
          do
          {
            v21 = *(_DWORD *)(v17 + v18);
            v22 = _mm_cvtsi32_si128(*(_DWORD *)(v17 + v18 + 4));
            if ( v33 )
            {
              v23 = _mm_srli_epi64(_mm_shuffle_epi8(_mm_unpacklo_epi64(_mm_cvtsi32_si128(v21), v22), si128), 0x20u);
              v24 = _byteswap_ulong(*(_DWORD *)(v17 + v18 + 8));
              v25 = 0;
            }
            else
            {
              v24 = *(_DWORD *)(v17 + v18 + 8);
              v26 = _mm_cvtsi32_si128(v21);
              v25 = v24 >> 31;
              v23 = _mm_unpacklo_epi64(v26, v22);
            }
            *(__m128i *)(v17 + 2 * v18) = _mm_and_si128(v23, v20);
            *(_DWORD *)(v17 + 2 * v18 + 16) = v24;
            *(_DWORD *)(v17 + 2 * v18 + 20) = v25;
            v18 -= 12;
            --v16;
          }
          while ( v16 );
        }
        else
        {
          v27 = 0;
          if ( !v15 )
            v27 = a2;
          v32 = v27;
          if ( !a2 || !v15 )
            goto LABEL_24;
          v34 = v7;
          v28 = *(unsigned __int64 **)(a1 + 28);
          for ( i = 0; i < a2; ++i )
          {
            *v28 = swap64(*v28);
            v28[1] = swap64(v28[1]);
            v28[2] = swap64(v28[2]);
            v28 += 3;
          }
        }
        v32 = a2;
        v11 = v34;
        goto LABEL_24;
      }
    }
  }
  return v3;
}
// 3E5B0: variable 'v5' is possibly undefined
// 3E5F0: variable 'v13' is possibly undefined
// 13ACD8: using guessed type __int64 qword_13ACD8;
