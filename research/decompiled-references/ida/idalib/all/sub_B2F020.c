__int64 __fastcall sub_B2F020(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, unsigned __int32 a5)
{
  __int64 v5; // r13
  __int64 v8; // rbx
  __int32 v9; // eax
  __int64 result; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 i; // rdx

  v5 = a5;
  v8 = 4LL * a5;
  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v9 = a3[2].m128i_i32[0];
  a1[2].m128i_i32[2] = a5;
  a1[2].m128i_i32[0] = v9;
  a1[2].m128i_i16[2] = 100;
  a1[2].m128i_i8[6] = a1[2].m128i_i8[6] & 0xE0 | 0x10;
  result = sub_9C3B30((__int64 *)(a2 + 2352), v8, 4u);
  if ( v5 )
  {
    v11 = (_DWORD *)result;
    do
      *v11++ = 0;
    while ( (_DWORD *)(v8 + result) != v11 );
  }
  v12 = a1[2].m128i_u32[2];
  a1[3].m128i_i64[0] = result;
  v13 = 4 * v12;
  if ( v13 )
  {
    for ( i = 0; i != v13; i += 4 )
      *(_DWORD *)(result + i) = *(_DWORD *)(a4 + i);
  }
  return result;
}
