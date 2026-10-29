/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806E590
// Address: 0x0806E590

//----- (0806E590) --------------------------------------------------------
int __cdecl sub_806E590(int a1, int a2, __int64 a3)
{
  __m128i v3; // xmm2
  int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // edx
  __m128i v7; // xmm1
  __m128i v8; // xmm3
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // edi
  void *v12; // eax
  signed int v13; // eax
  size_t v14; // esi
  int v15; // ecx
  size_t v16; // edx
  void *v17; // eax
  _DWORD *v18; // edi
  int v19; // esi
  int v21; // esi
  int v22; // ecx
  void *v23; // eax
  unsigned int v24; // edi
  void *v25; // eax
  _DWORD *v26; // edx
  _BYTE *v27; // ecx
  __m128i v28; // [esp+4h] [ebp-C8h] BYREF
  int v29; // [esp+14h] [ebp-B8h]
  int v30; // [esp+18h] [ebp-B4h]
  size_t v31; // [esp+1Ch] [ebp-B0h]
  int v32; // [esp+20h] [ebp-ACh]
  size_t v33; // [esp+24h] [ebp-A8h]
  size_t n; // [esp+2Ch] [ebp-A0h]
  int v35; // [esp+30h] [ebp-9Ch]
  void *src[4]; // [esp+34h] [ebp-98h] BYREF
  char v37; // [esp+44h] [ebp-88h] BYREF
  unsigned int v38; // [esp+B0h] [ebp-1Ch]

  v3 = _mm_loadl_epi64((const __m128i *)&a3);
  v32 = a1;
  v35 = a2;
  v4 = _mm_cvtsi128_si32(v3);
  *(_QWORD *)src = v3.m128i_i64[0];
  v38 = __readgsdword(0x14u);
  v5 = sub_80CD730(*(_DWORD *)(a1 + 360), 0, 1);
  v7 = _mm_loadl_epi64((const __m128i *)(a1 + 364));
  v8 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v6)), v7);
  v28.m128i_i64[0] = v8.m128i_i64[0];
  v29 = _mm_cvtsi128_si32(v8);
  *(__m128i *)src = _mm_add_epi64(_mm_loadl_epi64((const __m128i *)src), v7);
  v9 = sub_80CD730(*(_DWORD *)(a1 + 360), *(__int64 *)src, 0);
  if ( (v10 & v9) != 0xFFFFFFFF )
  {
    v11 = (_DWORD *)v35;
    v12 = *(void **)v35;
    if ( *(_DWORD *)v35 )
    {
      *(_DWORD *)(v35 + 4) = 0;
      sub_80CF780(v12);
      *v11 = 0;
      v11[2] = 0;
    }
    src[0] = &v37;
    while ( 1 )
    {
      v13 = sub_80CD690(*(_DWORD *)(v32 + 360), src[0], 100);
      if ( v13 < 0 )
        break;
      v14 = 0;
      if ( v13 )
      {
        do
        {
          if ( !*((_BYTE *)src[0] + v14) )
          {
            n = v14;
            goto LABEL_11;
          }
          ++v14;
        }
        while ( v13 != v14 );
        n = v14;
      }
      else
      {
        n = 0;
      }
LABEL_11:
      v15 = *(_DWORD *)(v35 + 4);
      v16 = n;
      if ( v15 )
      {
        --v15;
        v16 = n + v15;
      }
      v33 = v16 + 1;
      v17 = *(void **)v35;
      if ( *(_DWORD *)(v35 + 8) < v16 + 1 )
      {
        v30 = v15;
        v31 = v16;
        v17 = sub_80CF920(v35, v17, v16 + 1, 1u);
        v15 = v30;
        v16 = v31;
        *(_DWORD *)v35 = v17;
      }
      v18 = (_DWORD *)v35;
      *(_DWORD *)(v35 + 4) = v33;
      *((_BYTE *)v17 + v16) = 0;
      memmove((void *)(v15 + *v18), src[0], n);
      if ( v14 != 100 )
      {
        v19 = 1;
        goto LABEL_17;
      }
    }
    v21 = *(_DWORD *)(v35 + 4);
    if ( v21 )
    {
      v22 = v35;
      v23 = (void *)(v21 + 15);
      v24 = v21 + 16;
      --v21;
      src[0] = v23;
      v25 = *(void **)v35;
      if ( *(_DWORD *)(v35 + 8) >= v24 )
      {
LABEL_22:
        v26 = (_DWORD *)v35;
        v27 = src[0];
        *(_DWORD *)(v35 + 4) = v24;
        v27[(_DWORD)v25] = 0;
        *(__m128i *)(*v26 + v21) = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257620));
        v19 = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v22 = v35;
      v24 = 17;
      src[0] = (void *)16;
      v25 = *(void **)v35;
      if ( *(_DWORD *)(v35 + 8) >= 0x11u )
        goto LABEL_22;
    }
    v25 = sub_80CF920(v22, v25, v24, 1u);
    *(_DWORD *)v35 = v25;
    goto LABEL_22;
  }
  sub_805ED10((_DWORD *)v35, (char *)&qword_811CFF4 - 279969, v4);
  v19 = 0;
LABEL_17:
  *(__m128i *)src = _mm_add_epi64(_mm_load_si128(&v28), _mm_loadl_epi64((const __m128i *)(v32 + 364)));
  sub_80CD730(*(_DWORD *)(v32 + 360), *(__int64 *)src, 0);
  if ( v38 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v19;
}
// 806E5EF: variable 'v6' is possibly undefined
// 806E65C: variable 'v10' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
