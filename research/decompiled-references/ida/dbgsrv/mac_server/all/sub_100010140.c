/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100010140
// Address: 0x0000000100010140

//----- (0000000100010140) ----------------------------------------------------
__int64 __fastcall sub_100010140(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v5; // r12d
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r15
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  unsigned __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rcx
  void **v24; // r12
  unsigned __int64 v25; // rcx
  char *v26; // rax
  char *v27; // r13
  unsigned int v28; // eax
  __m128i si128; // xmm0
  __m128i v30; // xmm1
  unsigned int epi32; // eax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  void *v34; // rdi
  unsigned __int8 v36; // [rsp+Eh] [rbp-32h] BYREF
  unsigned __int8 v37; // [rsp+Fh] [rbp-31h] BYREF

  v5 = a2;
  v7 = *(void **)(a1 + 136);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v8 = *(void **)(a1 + 200);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v9 = *(void **)(a1 + 224);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 240) = 0;
  }
  v10 = *(void **)(a1 + 248);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  v11 = *(void **)(a1 + 344);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 352);
    if ( v12 )
    {
      v13 = a3;
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(a1 + 344);
        v16 = *(void **)(v15 + v14);
        if ( v16 )
        {
          *(_QWORD *)(v15 + v14 + 8) = 0;
          qfree(v16);
          *(_QWORD *)(v15 + v14) = 0;
          *(_QWORD *)(v15 + v14 + 16) = 0;
        }
        v14 += 24;
        --v12;
      }
      while ( v12 );
      v11 = *(void **)(a1 + 344);
      a3 = v13;
      v5 = a2;
    }
    *(_QWORD *)(a1 + 352) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 360) = 0;
  }
  v17 = *(void **)(a1 + 368);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree(v17);
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 384) = 0;
  }
  v18 = *(void **)(a1 + 392);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 400) = 0;
    qfree(v18);
    *(_QWORD *)(a1 + 392) = 0;
    *(_QWORD *)(a1 + 408) = 0;
  }
  v19 = *(void **)(a1 + 416);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 424) = 0;
    qfree(v19);
    *(_QWORD *)(a1 + 416) = 0;
    *(_QWORD *)(a1 + 432) = 0;
  }
  *(_BYTE *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = -1;
  switch ( (unsigned int)sub_100010680(a1, v5, a3) )
  {
    case 0u:
    case 4u:
      return 0;
    case 1u:
      *(_BYTE *)(a1 + 161) = 0;
      v20 = 28;
      if ( !*(_BYTE *)(a1 + 44) )
        goto LABEL_30;
      v21 = 4;
      v22 = 16;
      break;
    case 2u:
      *(_BYTE *)(a1 + 161) = 1;
      v20 = 32;
      if ( *(_BYTE *)(a1 + 44) != 1 )
        goto LABEL_30;
      v21 = 8;
      v22 = 24;
      break;
    case 3u:
      return sub_10000FE40(a1, *(_QWORD *)(a1 + 120), *(_QWORD *)(a1 + 128));
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + v22);
  *(_DWORD *)(a1 + 40) = v21;
LABEL_30:
  v24 = (void **)(a1 + 136);
  v25 = *(_QWORD *)(a1 + 144);
  if ( v25 >= v20 )
  {
    if ( v25 != v20 )
    {
      v36 = 0;
      sub_10001CE90(a1 + 136, v20, &v36);
    }
  }
  else
  {
    v26 = *(char **)(a1 + 136);
    if ( *(_QWORD *)(a1 + 152) < v20 )
    {
      v26 = (char *)qvector_reserve(a1 + 136, *(void **)(a1 + 136), v20, 1u);
      *(_QWORD *)(a1 + 136) = v26;
      v25 = *(_QWORD *)(a1 + 144);
    }
    __bzero(&v26[v25], v20 - v25);
    *(_QWORD *)(a1 + 144) = v20;
  }
  if ( qlread(*(_QWORD *)(a1 + 48), *(void **)(a1 + 136), v20) == v20 )
  {
    v27 = *(char **)(a1 + 136);
    memcpy((void *)(a1 + 164), v27, v20);
    if ( !*(_BYTE *)(a1 + 161) )
      *(_DWORD *)(a1 + 192) = 0;
    v28 = *(_DWORD *)(a1 + 164);
    *(_BYTE *)(a1 + 160) = (v28 & 0xFEFFFFFF) == -822415874;
    if ( (v28 | 0x1000000) == 0xCFFAEDFE )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
      *(__m128i *)(a1 + 164) = _mm_shuffle_epi8(
                                 _mm_unpacklo_epi64(
                                   _mm_insert_epi32(_mm_cvtsi32_si128(v28), *(_DWORD *)(a1 + 168), 1),
                                   _mm_loadl_epi64((const __m128i *)(a1 + 172))),
                                 si128);
      v30 = _mm_shuffle_epi8(_mm_loadu_si128((const __m128i *)(a1 + 180)), si128);
      *(__m128i *)(a1 + 180) = v30;
      epi32 = _mm_extract_epi32(v30, 1);
    }
    else
    {
      epi32 = *(_DWORD *)(a1 + 184);
    }
    v32 = v20 + epi32;
    if ( v32 <= *(_QWORD *)(a1 + 128) )
    {
      v33 = *(_QWORD *)(a1 + 144);
      if ( v33 >= v32 )
      {
        if ( v33 != v32 )
        {
          v37 = 0;
          sub_10001CE90(a1 + 136, v32, &v37);
        }
      }
      else
      {
        if ( *(_QWORD *)(a1 + 152) < v32 )
        {
          v27 = (char *)qvector_reserve(a1 + 136, v27, v32, 1u);
          *(_QWORD *)(a1 + 136) = v27;
          v33 = *(_QWORD *)(a1 + 144);
        }
        __bzero(&v27[v33], v32 - v33);
        *(_QWORD *)(a1 + 144) = v32;
      }
      if ( qlread(*(_QWORD *)(a1 + 48), (void *)(*(_QWORD *)(a1 + 136) + v20), *(unsigned int *)(a1 + 184)) == *(_DWORD *)(a1 + 184) )
        return sub_1000108D0(a1, a4);
      v34 = *v24;
      if ( *v24 )
      {
        *(_QWORD *)(a1 + 144) = 0;
        qfree(v34);
        *(_QWORD *)(a1 + 136) = 0;
        *(_QWORD *)(a1 + 152) = 0;
      }
    }
  }
  return 0;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 10008FEB0: using guessed type __int128 xmmword_10008FEB0;
