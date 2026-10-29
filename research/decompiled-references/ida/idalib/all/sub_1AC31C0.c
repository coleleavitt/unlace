void **__fastcall sub_1AC31C0(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  unsigned __int64 v4; // r12
  void **result; // rax
  size_t v6; // rdx

  v3 = (void *)(a1 + 24);
  *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = v3;
  if ( v4 && a2 != a1 )
  {
    v6 = v4;
    if ( v4 <= 0x28 || (sub_2236E10(a1, v3, v4, 1), v6 = *(_QWORD *)(a2 + 8), v3 = *(void **)a1, v6) )
      memcpy(v3, *(const void **)a2, v6);
    *(_QWORD *)(a1 + 8) = v4;
  }
  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 72) = 0x600000000LL;
  result = (void **)*(unsigned int *)(a2 + 72);
  if ( (_DWORD)result )
    return sub_1AC2FD0((void **)(a1 + 64), (char **)(a2 + 64));
  return result;
}
