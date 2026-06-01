unsigned __int64 __fastcall sub_9110C0(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8)
{
  unsigned int v8; // r15d
  int v9; // r14d
  __m128i v11; // xmm0
  unsigned __int64 result; // rax

  v8 = a5;
  v9 = a4;
  v11 = _mm_loadu_si128((const __m128i *)(a7 + 4));
  result = sub_910FA0(
             a1,
             (__int64)a2,
             a3,
             a4,
             a5,
             a6,
             v11.m128i_i64[0],
             v11.m128i_i64[1],
             *(_QWORD *)(a7 + 20),
             *(_DWORD *)(a7 + 28));
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
    return sub_90FAF0(a1, a2, a3, v9, v8, a6, (const __m128i *)a7, a8, 0);
  return result;
}
