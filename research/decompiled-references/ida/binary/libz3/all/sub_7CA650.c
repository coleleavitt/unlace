__int64 __fastcall sub_7CA650(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r8
  __m128i v7; // xmm0
  __m128i v9; // [rsp+20h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(a3 + 64);
  if ( *(_QWORD *)(a2 + 64) == v6 )
    return 0;
  v9.m128i_i32[0] = 2;
  v9.m128i_i8[8] = 0;
  v7 = _mm_load_si128(&v9);
  sub_13D9120(a1 + 1592, a2, a3, a4 | 2, v6, a6, v7.m128i_i32[0], v7.m128i_i32[2], a4 | 2);
  return 1;
}

