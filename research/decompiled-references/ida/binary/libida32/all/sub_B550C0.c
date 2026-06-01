__int64 __fastcall sub_B550C0(__m128i *a1, __int64 a2)
{
  __m128i v2; // rax
  __m128i v4; // [rsp+0h] [rbp-18h] BYREF

  v2.m128i_i64[0] = sub_B6A990(*(_QWORD *)a2, *(unsigned int *)(a2 + 8), 0);
  v4 = v2;
  a1[5] = _mm_load_si128(&v4);
  *(_QWORD *)(v2.m128i_i64[1] + 8) &= 7uLL;
  a1[4].m128i_i8[12] |= 0x40u;
  return v2.m128i_i64[1];
}

