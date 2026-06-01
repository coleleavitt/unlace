__int64 __fastcall sub_97D630(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        char a8,
        char a9,
        unsigned int a10)
{
  __int64 v10; // rax
  _DWORD *v15; // rdi
  char v16; // r10
  char v17; // r9
  unsigned int v18; // r8d
  __int64 v19; // rax
  void *v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // ebp
  __int64 result; // rax
  unsigned __int64 v24; // r12
  const void *v25; // rsi
  size_t v26; // rcx
  const void *v27; // rsi
  size_t v28; // rcx
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  char v31; // [rsp+0h] [rbp-44h]
  unsigned int v32; // [rsp+0h] [rbp-44h]
  unsigned int v33; // [rsp+0h] [rbp-44h]
  char v34; // [rsp+0h] [rbp-44h]
  char v35; // [rsp+4h] [rbp-40h]
  char v36; // [rsp+4h] [rbp-40h]
  char v37; // [rsp+4h] [rbp-40h]
  char v38; // [rsp+8h] [rbp-3Ch]

  v10 = a1 + 88;
  v15 = (_DWORD *)(a1 + 392);
  v16 = a8;
  v17 = a9;
  *(v15 - 93) = a4;
  *((_QWORD *)v15 - 40) = v10;
  *((_OWORD *)v15 - 23) = 0;
  *((_OWORD *)v15 - 22) = 0;
  *((_OWORD *)v15 - 21) = 0;
  *((_QWORD *)v15 - 39) = 0x200000000LL;
  *((_QWORD *)v15 - 49) = a2;
  *((_QWORD *)v15 - 48) = a3;
  *(v15 - 94) = 0;
  *(_QWORD *)(a1 + 376) = v15;
  *(_QWORD *)(a1 + 384) = 0x800000000LL;
  v18 = *(_DWORD *)(a5 + 8);
  if ( v18 && a5 != a1 + 376 )
  {
    v27 = *(const void **)a5;
    if ( *(_QWORD *)a5 != a5 + 16 )
    {
      v29 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 12));
      *(_QWORD *)a5 = a5 + 16;
      *(_QWORD *)(a1 + 376) = v27;
      *(_QWORD *)(a5 + 8) = 0;
      *(_QWORD *)(a1 + 384) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), v29).m128i_u64[0];
      goto LABEL_2;
    }
    v28 = 4LL * v18;
    if ( v18 > 8uLL )
    {
      v33 = v18;
      sub_25D6060(a1 + 376, v15, v18, 4);
      v18 = v33;
      v16 = a8;
      v17 = a9;
      v28 = 4LL * *(unsigned int *)(a5 + 8);
      if ( !v28 )
        goto LABEL_17;
      v15 = *(_DWORD **)(a1 + 376);
      v27 = *(const void **)a5;
    }
    v38 = v17;
    v36 = v16;
    v32 = v18;
    memcpy(v15, v27, v28);
    v17 = v38;
    v16 = v36;
    v18 = v32;
LABEL_17:
    *(_DWORD *)(a1 + 384) = v18;
    *(_DWORD *)(a5 + 8) = 0;
  }
LABEL_2:
  v19 = *a6;
  v20 = (void *)(a1 + 464);
  *a6 = 0;
  *(_QWORD *)(a1 + 424) = v19;
  v21 = a6[1];
  a6[1] = 0;
  *(_QWORD *)(a1 + 432) = v21;
  LODWORD(v21) = *((_DWORD *)a6 + 4);
  *((_DWORD *)a6 + 4) = 0;
  *(_DWORD *)(a1 + 440) = v21;
  *(_QWORD *)(a1 + 448) = a1 + 464;
  *(_QWORD *)(a1 + 456) = 0x800000000LL;
  v22 = *(_DWORD *)(a7 + 8);
  if ( v22 && a7 != a1 + 448 )
  {
    v25 = *(const void **)a7;
    if ( *(_QWORD *)a7 != a7 + 16 )
    {
      v30 = _mm_cvtsi32_si128(*(_DWORD *)(a7 + 12));
      *(_QWORD *)a7 = a7 + 16;
      *(_QWORD *)(a1 + 448) = v25;
      *(_QWORD *)(a7 + 8) = 0;
      *(_QWORD *)(a1 + 456) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), v30).m128i_u64[0];
      goto LABEL_3;
    }
    v26 = 4LL * v22;
    if ( v22 > 8uLL )
    {
      v37 = v17;
      v34 = v16;
      sub_25D6060(a1 + 448, a1 + 464, v22, 4);
      v16 = v34;
      v17 = v37;
      v26 = 4LL * *(unsigned int *)(a7 + 8);
      if ( !v26 )
        goto LABEL_12;
      v20 = *(void **)(a1 + 448);
      v25 = *(const void **)a7;
    }
    v35 = v17;
    v31 = v16;
    memcpy(v20, v25, v26);
    v17 = v35;
    v16 = v31;
LABEL_12:
    *(_DWORD *)(a1 + 456) = v22;
    *(_DWORD *)(a7 + 8) = 0;
  }
LABEL_3:
  *(_BYTE *)(a1 + 498) = v16;
  *(_WORD *)(a1 + 496) = 0;
  result = a10;
  *(_BYTE *)(a1 + 499) = v17;
  *(_WORD *)(a1 + 500) = 0;
  *(_BYTE *)(a1 + 502) = 0;
  *(_DWORD *)(a1 + 504) = a10;
  if ( a3 && (a3 & 4) == 0 )
  {
    v24 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v24 )
    {
      result = sub_77D8C0(v24);
      *(_BYTE *)(a1 + 502) = result;
    }
  }
  return result;
}

