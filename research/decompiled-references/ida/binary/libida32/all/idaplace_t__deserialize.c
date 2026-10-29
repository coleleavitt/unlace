__int64 __fastcall idaplace_t__deserialize(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __m128i v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( *a2 >= a3 )
    return 0;
  *(_DWORD *)(a1 + 8) = unpack_dd(a2);
  if ( *a2 >= a3 )
    return 0;
  v5 = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)a3);
  *(_DWORD *)(a1 + 12) = unpack_dd(&v5);
  *a2 = v5.m128i_i64[0];
  return 1;
}

