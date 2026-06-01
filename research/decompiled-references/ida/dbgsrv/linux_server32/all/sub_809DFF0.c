/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809DFF0
// Address: 0x0809DFF0

//----- (0809DFF0) --------------------------------------------------------
void *__cdecl sub_809DFF0(int a1, unsigned int *a2, signed int a3)
{
  unsigned int *v3; // ecx
  int v4; // edi
  _DWORD *v5; // eax
  void *v6; // ecx
  void *v7; // ecx
  void *result; // eax
  __m128i v9; // xmm0
  void *v10; // edi
  int v11; // edx
  char *v12; // eax
  unsigned int v13; // ebx
  char *v14; // eax
  __m128i v15; // xmm1
  unsigned int v16; // eax
  size_t size; // eax
  size_t v18; // edi
  size_t n; // [esp+8h] [ebp-44h]
  int v20; // [esp+10h] [ebp-3Ch]
  size_t v21; // [esp+14h] [ebp-38h]
  unsigned int v22; // [esp+18h] [ebp-34h]
  unsigned int v23; // [esp+1Ch] [ebp-30h]
  void *v24; // [esp+24h] [ebp-28h]
  _DWORD *v25; // [esp+28h] [ebp-24h]
  char *v26; // [esp+28h] [ebp-24h]
  int v27; // [esp+2Ch] [ebp-20h]
  unsigned int v28; // [esp+2Ch] [ebp-20h]
  unsigned int *v29; // [esp+54h] [ebp+8h]
  unsigned int *v30; // [esp+54h] [ebp+8h]
  unsigned int *v31; // [esp+54h] [ebp+8h]
  unsigned int *v32; // [esp+54h] [ebp+8h]

  v3 = a2;
  v20 = a1 + 20;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v4 = *(_DWORD *)(a1 + 24);
    v27 = 0;
    do
    {
      v5 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 32 * v27);
      v6 = (void *)v5[5];
      if ( v6 )
      {
        v5[6] = 0;
        v25 = v5;
        sub_80CF780(v6);
        v5 = v25;
      }
      v7 = (void *)v5[2];
      if ( v7 )
      {
        v5[3] = 0;
        sub_80CF780(v7);
      }
      ++v27;
    }
    while ( v4 != v27 );
    v3 = a2;
  }
  *(_DWORD *)(a1 + 24) = 0;
  result = (void *)a3;
  if ( *(_DWORD *)(a1 + 28) < (unsigned int)a3 )
  {
    v32 = v3;
    result = sub_80CF920(v20, *(void **)(a1 + 20), a3, 0x20u);
    v3 = v32;
    *(_DWORD *)(a1 + 20) = result;
  }
  if ( a3 > 0 )
  {
    v26 = nullptr;
    do
    {
      v16 = *v3;
      v3 += 8;
      v24 = nullptr;
      v23 = v16;
      v22 = *(v3 - 7);
      size = *(v3 - 5);
      v28 = size;
      if ( size )
      {
        v29 = v3;
        v18 = *(v3 - 5);
        v24 = sub_80CF8B0(size);
        n = v18;
        v10 = nullptr;
        memcpy(v24, (const void *)*(v29 - 6), n);
        v3 = v29;
        v9 = _mm_cvtsi32_si128(*(v29 - 2));
        if ( !_mm_cvtsi128_si32(v9) )
        {
LABEL_14:
          v11 = *(_DWORD *)(a1 + 24);
          v12 = *(char **)(a1 + 20);
          v13 = v11 + 1;
          if ( *(_DWORD *)(a1 + 28) < (unsigned int)(v11 + 1) )
            goto LABEL_19;
          goto LABEL_15;
        }
      }
      else
      {
        v9 = _mm_cvtsi32_si128(*(v3 - 2));
        v10 = nullptr;
        if ( !_mm_cvtsi128_si32(v9) )
          goto LABEL_14;
      }
      v30 = v3;
      v21 = _mm_cvtsi128_si32(v9);
      v10 = sub_80CF8B0(v21);
      memcpy(v10, (const void *)*(v30 - 3), _mm_cvtsi128_si32(_mm_cvtsi32_si128(v21)));
      v11 = *(_DWORD *)(a1 + 24);
      v9 = _mm_cvtsi32_si128(v21);
      v3 = v30;
      v12 = *(char **)(a1 + 20);
      v13 = v11 + 1;
      if ( *(_DWORD *)(a1 + 28) < (unsigned int)(v11 + 1) )
      {
LABEL_19:
        v31 = v3;
        v12 = (char *)sub_80CF920(v20, v12, v13, 0x20u);
        v11 = *(_DWORD *)(a1 + 24);
        v3 = v31;
        *(_DWORD *)(a1 + 20) = v12;
        v9 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v9));
      }
LABEL_15:
      v14 = &v12[32 * v11];
      ++v26;
      *((_DWORD *)v14 + 2) = v24;
      *((_DWORD *)v14 + 5) = v10;
      *(_QWORD *)v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v22)).m128i_u64[0];
      v15 = _mm_cvtsi32_si128(v28);
      *((_QWORD *)v14 + 3) = _mm_unpacklo_epi32(v9, v9).m128i_u64[0];
      *(_QWORD *)(v14 + 12) = _mm_unpacklo_epi32(v15, v15).m128i_u64[0];
      result = v26;
      ++*(_DWORD *)(a1 + 24);
    }
    while ( (char *)a3 != v26 );
  }
  return result;
}
