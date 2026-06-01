__int64 __fastcall sub_FE9390(_QWORD *a1, __int64 a2)
{
  __m128i *v3; // rdi
  __int64 result; // rax

  v3 = (__m128i *)(a1 + 3);
  v3[-2].m128i_i64[1] = *(_QWORD *)a2;
  v3[-1] = _mm_loadu_si128((const __m128i *)(a2 + 8));
  a1[3] = a1 + 5;
  sub_FE8D80(v3, *(_BYTE **)(a2 + 24), *(_QWORD *)(a2 + 24) + *(_QWORD *)(a2 + 32));
  a1[7] = *(_QWORD *)(a2 + 56);
  a1[8] = a1 + 10;
  sub_FE8D80(a1 + 8, *(_BYTE **)(a2 + 64), *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
  a1[12] = a1 + 14;
  a1[13] = 0x400000000LL;
  result = *(unsigned int *)(a2 + 104);
  if ( (_DWORD)result )
    return sub_CCBE40((__int64)(a1 + 12), a2 + 96);
  return result;
}

