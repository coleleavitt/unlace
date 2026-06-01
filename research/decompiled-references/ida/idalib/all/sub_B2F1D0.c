void *__fastcall sub_B2F1D0(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        int a4,
        __int64 a5,
        const void *a6,
        unsigned int a7,
        const void *a8,
        unsigned int a9,
        const void *a10,
        unsigned int a11,
        const void *a12,
        unsigned int a13,
        const void *a14,
        unsigned int a15,
        const void *a16,
        unsigned int a17)
{
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  void *result; // rax
  __int64 v21; // rdx
  size_t v22; // rdx
  size_t v23; // rdx
  size_t v24; // rdx
  size_t v25; // rdx
  size_t v26; // rdx
  size_t v27; // rdx

  *(__m128i *)a1 = _mm_loadu_si128(a3);
  *(__m128i *)(a1 + 16) = _mm_loadu_si128(a3 + 1);
  *(_DWORD *)(a1 + 32) = a3[2].m128i_i32[0];
  *(_WORD *)(a1 + 36) = 423;
  *(_BYTE *)(a1 + 38) &= 0xE0u;
  *(_QWORD *)(a1 + 48) = a5;
  *(_DWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 56) = a7;
  *(_QWORD *)(a1 + 64) = sub_9C3B30((__int64 *)(a2 + 2352), 8LL * a7, 4u);
  *(_DWORD *)(a1 + 72) = a9;
  v17 = sub_9C3B30((__int64 *)(a2 + 2352), 8LL * a9, 4u);
  *(_DWORD *)(a1 + 88) = a11;
  *(_QWORD *)(a1 + 80) = v17;
  v18 = sub_9C3B30((__int64 *)(a2 + 2352), 8LL * a11, 4u);
  *(_DWORD *)(a1 + 104) = a13;
  *(_QWORD *)(a1 + 96) = v18;
  v19 = sub_9C3B30((__int64 *)(a2 + 2352), 8LL * a13, 4u);
  *(_DWORD *)(a1 + 120) = a15;
  *(_QWORD *)(a1 + 112) = v19;
  *(_QWORD *)(a1 + 128) = sub_9C3B30((__int64 *)(a2 + 2352), 4LL * a15, 4u);
  *(_DWORD *)(a1 + 136) = a17;
  result = (void *)sub_9C3B30((__int64 *)(a2 + 2352), 8LL * a17, 4u);
  v21 = *(unsigned int *)(a1 + 56);
  *(_QWORD *)(a1 + 144) = result;
  v22 = 8 * v21;
  if ( v22 )
    result = memmove(*(void **)(a1 + 64), a6, v22);
  v23 = 8LL * *(unsigned int *)(a1 + 72);
  if ( v23 )
    result = memmove(*(void **)(a1 + 80), a8, v23);
  v24 = 8LL * *(unsigned int *)(a1 + 88);
  if ( v24 )
    result = memmove(*(void **)(a1 + 96), a10, v24);
  v25 = 8LL * *(unsigned int *)(a1 + 104);
  if ( v25 )
    result = memmove(*(void **)(a1 + 112), a12, v25);
  v26 = 4LL * *(unsigned int *)(a1 + 120);
  if ( v26 )
    result = memmove(*(void **)(a1 + 128), a14, v26);
  v27 = 8LL * *(unsigned int *)(a1 + 136);
  if ( v27 )
    return memmove(*(void **)(a1 + 144), a16, v27);
  return result;
}
