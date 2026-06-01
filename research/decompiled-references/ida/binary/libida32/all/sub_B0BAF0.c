__int64 __fastcall sub_B0BAF0(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, unsigned __int32 a6)
{
  __int64 v6; // r13
  __int64 v8; // rbx
  __int32 v9; // eax
  __int64 result; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 i; // rdx

  v6 = a6;
  v8 = 4LL * a6;
  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v9 = a3[2].m128i_i32[0];
  a1[2].m128i_i8[6] &= 0xE0u;
  a1[2].m128i_i32[0] = v9;
  a1[2].m128i_i16[2] = 324;
  a1[2].m128i_i64[1] = a4;
  a1[3].m128i_i32[0] = a6;
  result = sub_99FDF0((__int64 *)(a2 + 2352), v8, 4u);
  if ( v6 )
  {
    v11 = (_DWORD *)result;
    do
      *v11++ = 0;
    while ( (_DWORD *)(v8 + result) != v11 );
  }
  v12 = a1[3].m128i_u32[0];
  a1[3].m128i_i64[1] = result;
  v13 = 4 * v12;
  if ( v13 )
  {
    for ( i = 0; i != v13; i += 4 )
      *(_DWORD *)(result + i) = *(_DWORD *)(a5 + i);
  }
  return result;
}

