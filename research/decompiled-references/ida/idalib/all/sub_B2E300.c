void *__fastcall sub_B2E300(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        const void *a4,
        __int64 a5,
        __int64 a6,
        void *src,
        __int64 a8)
{
  __int32 v10; // eax
  __int64 v11; // rax
  void *result; // rax

  *(__m128i *)a1 = _mm_loadu_si128(a3);
  *(__m128i *)(a1 + 16) = _mm_loadu_si128(a3 + 1);
  v10 = a3[2].m128i_i32[0];
  *(_BYTE *)(a1 + 38) &= 0xE0u;
  *(_DWORD *)(a1 + 32) = v10;
  *(_DWORD *)(a1 + 40) = a5;
  *(_WORD *)(a1 + 36) = 199;
  v11 = sub_9C3B30((__int64 *)(a2 + 2352), (unsigned int)a5, 0);
  *(_DWORD *)(a1 + 56) = a8;
  *(_QWORD *)(a1 + 48) = v11;
  result = (void *)sub_9C3B30((__int64 *)(a2 + 2352), (unsigned int)a8, 0);
  *(_QWORD *)(a1 + 64) = result;
  if ( !a5 )
  {
    if ( !a8 )
      return result;
    return memcpy(*(void **)(a1 + 64), src, *(unsigned int *)(a1 + 56));
  }
  result = memcpy(*(void **)(a1 + 48), a4, *(unsigned int *)(a1 + 40));
  if ( a8 )
    return memcpy(*(void **)(a1 + 64), src, *(unsigned int *)(a1 + 56));
  return result;
}
