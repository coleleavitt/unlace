void *__fastcall sub_B0AB80(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        const void *a4,
        __int64 a5,
        char a6,
        const void *a7,
        __int64 a8,
        const void *a9,
        __int64 a10)
{
  __int32 v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  void *result; // rax

  *(__m128i *)a1 = _mm_loadu_si128(a3);
  *(__m128i *)(a1 + 16) = _mm_loadu_si128(a3 + 1);
  v12 = a3[2].m128i_i32[0];
  *(_BYTE *)(a1 + 38) &= 0xE0u;
  *(_DWORD *)(a1 + 32) = v12;
  *(_DWORD *)(a1 + 40) = a5;
  *(_WORD *)(a1 + 36) = 213;
  v13 = sub_99FDF0((__int64 *)(a2 + 2352), (unsigned int)a5, 0);
  *(_DWORD *)(a1 + 56) = a8;
  *(_QWORD *)(a1 + 48) = v13;
  v14 = sub_99FDF0((__int64 *)(a2 + 2352), (unsigned int)a8, 0);
  *(_BYTE *)(a1 + 72) = a6;
  *(_QWORD *)(a1 + 64) = v14;
  *(_DWORD *)(a1 + 76) = a10;
  result = (void *)sub_99FDF0((__int64 *)(a2 + 2352), (unsigned int)a10, 0);
  *(_QWORD *)(a1 + 80) = result;
  if ( a5 )
  {
    result = memcpy(*(void **)(a1 + 48), a4, *(unsigned int *)(a1 + 40));
    if ( !a8 )
    {
LABEL_3:
      if ( !a10 )
        return result;
      return memcpy(*(void **)(a1 + 80), a9, *(unsigned int *)(a1 + 76));
    }
  }
  else if ( !a8 )
  {
    goto LABEL_3;
  }
  result = memcpy(*(void **)(a1 + 64), a7, *(unsigned int *)(a1 + 56));
  if ( a10 )
    return memcpy(*(void **)(a1 + 80), a9, *(unsigned int *)(a1 + 76));
  return result;
}

