__m128i *__fastcall sub_1F18E50(__m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]

  sub_1F0B900((__int64)&v9, a2);
  if ( (v9.m128i_i32[0] & 0x7FFFFFFF) == 8
    && (v2 = *(unsigned int *)(a2 + 24), *(_DWORD *)(a2 + 24) = v2 + 1, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v2)) )
  {
    v7 = v10;
    v8 = v9.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL;
    *a1 = _mm_load_si128(&v9);
    a1[1].m128i_i64[0] = v7;
    a1[1].m128i_i64[1] = v8 | 1;
    return a1;
  }
  else
  {
    v3 = sub_1F1E5E0(a2);
    v4 = _mm_load_si128(&v9);
    v5 = v10;
    a1[1].m128i_i64[1] = v3;
    *a1 = v4;
    a1[1].m128i_i64[0] = v5;
    return a1;
  }
}
