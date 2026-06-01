unsigned __int64 __fastcall sub_105020(__int64 a1)
{
  unsigned int v1; // r13d
  __int64 v3; // rax
  pthread_mutex_t *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  void *v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm6
  __int64 v17; // rdx
  __m128i v18; // xmm7
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __int64 v21; // rax
  __m128i v23; // [rsp+0h] [rbp-98h] BYREF
  __m128i v24; // [rsp+10h] [rbp-88h] BYREF
  __int64 v25; // [rsp+20h] [rbp-78h]
  __m128i v26; // [rsp+30h] [rbp-68h] BYREF
  __m128i v27; // [rsp+40h] [rbp-58h] BYREF
  __m128i v28; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v29 = __readfsqword(0x28u);
  do
  {
    v3 = v1;
    v4 = *(pthread_mutex_t **)(a1 + 16);
    ++v1;
    v5 = 448 * v3;
    v6 = 448 * v3 + *(_QWORD *)(a1 + 8);
    v7 = _mm_loadu_si128((const __m128i *)(v6 + 16));
    v8 = _mm_loadu_si128((const __m128i *)(v6 + 32));
    v9 = _mm_loadu_si128((const __m128i *)(v6 + 56));
    v10 = _mm_loadu_si128((const __m128i *)(v6 + 72));
    v11 = _mm_loadu_si128((const __m128i *)(v6 + 88));
    v25 = *(_QWORD *)(v6 + 48);
    v12 = *(void **)(v6 + 136);
    v13 = *(_QWORD *)(v6 + 144);
    v23 = v7;
    v24 = v8;
    v26 = v9;
    v27 = v10;
    v28 = v11;
    sub_104FA0(v4, v12, v13);
    v14 = (_QWORD *)(v5 + *(_QWORD *)(a1 + 8));
    *v14 = 0;
    v14[55] = 0;
    memset(
      (void *)((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v14 - (((_DWORD)v14 + 8) & 0xFFFFFFF8) + 448) >> 3));
    v15 = *(_QWORD *)(a1 + 8);
    v16 = _mm_load_si128(&v24);
    v17 = v25;
    *(__m128i *)(v15 + v5 + 16) = _mm_load_si128(&v23);
    v18 = _mm_load_si128(&v26);
    v19 = _mm_load_si128(&v27);
    *(__m128i *)(v15 + v5 + 32) = v16;
    v20 = _mm_load_si128(&v28);
    *(_QWORD *)(v15 + v5 + 48) = v17;
    v21 = *(_QWORD *)(a1 + 8);
    *(__m128i *)(v21 + v5 + 56) = v18;
    *(__m128i *)(v21 + v5 + 72) = v19;
    *(__m128i *)(v21 + v5 + 88) = v20;
  }
  while ( *(_DWORD *)(a1 + 3008) >= v1 );
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 3024) = 1;
  return __readfsqword(0x28u) ^ v29;
}

