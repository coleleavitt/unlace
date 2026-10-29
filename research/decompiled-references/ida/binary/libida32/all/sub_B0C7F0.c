void *__fastcall sub_B0C7F0(__int64 a1, __int64 a2, const __m128i *a3, const void *a4, __int64 a5, __int64 a6)
{
  __int32 v8; // eax
  void *result; // rax
  double v10[5]; // [rsp+0h] [rbp-28h] BYREF

  *(_QWORD *)&v10[0] = a6;
  *(__m128i *)a1 = _mm_loadu_si128(a3);
  *(__m128i *)(a1 + 16) = _mm_loadu_si128(a3 + 1);
  v8 = a3[2].m128i_i32[0];
  *(_BYTE *)(a1 + 38) &= 0xE0u;
  *(_DWORD *)(a1 + 32) = v8;
  *(_WORD *)(a1 + 36) = 392;
  *(_DWORD *)(a1 + 40) = a5;
  result = (void *)sub_99FDF0((__int64 *)(a2 + 2352), (unsigned int)a5, 0);
  *(_QWORD *)&v10[1] = result;
  *(__m128 *)(a1 + 48) = _mm_loadh_ps(v10);
  if ( a5 )
    return memcpy(result, a4, *(unsigned int *)(a1 + 40));
  return result;
}

