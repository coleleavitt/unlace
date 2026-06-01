void *__fastcall sub_B2E4F0(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        const void *a5,
        __int64 a6,
        int a7,
        const void *a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int32 v12; // eax
  __int64 v13; // rax
  void *result; // rax

  *(__m128i *)a1 = _mm_loadu_si128(a3);
  *(__m128i *)(a1 + 16) = _mm_loadu_si128(a3 + 1);
  v12 = a3[2].m128i_i32[0];
  *(_QWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 32) = v12;
  *(_WORD *)(a1 + 36) = 202;
  LOBYTE(v12) = *(_BYTE *)(a1 + 38);
  *(_DWORD *)(a1 + 48) = a6;
  *(_BYTE *)(a1 + 38) = v12 & 0xE0 | 0x18;
  v13 = sub_9C3B30((__int64 *)(a2 + 2352), (unsigned int)a6, 0);
  *(_DWORD *)(a1 + 68) = a9;
  *(_QWORD *)(a1 + 56) = v13;
  *(_DWORD *)(a1 + 64) = a7;
  result = (void *)sub_9C3B30((__int64 *)(a2 + 2352), (unsigned int)a9, 0);
  *(_BYTE *)(a1 + 80) = a10;
  *(_QWORD *)(a1 + 72) = result;
  *(_QWORD *)(a1 + 88) = a11;
  if ( !a6 )
  {
    if ( !a9 )
      return result;
    return memcpy(*(void **)(a1 + 72), a8, *(unsigned int *)(a1 + 68));
  }
  result = memcpy(*(void **)(a1 + 56), a5, *(unsigned int *)(a1 + 48));
  if ( a9 )
    return memcpy(*(void **)(a1 + 72), a8, *(unsigned int *)(a1 + 68));
  return result;
}
