__int64 __fastcall tiplace_t__deserialize(__int64 a1, __m128i *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __m128i v5; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  result = 0;
  if ( a2->m128i_i64[0] < a3 )
  {
    *(_DWORD *)(a1 + 8) = unpack_dd(a2);
    v5 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2), (__m128i)a3);
    *(_DWORD *)(a1 + 12) = unpack_dd(&v5);
    *(_QWORD *)(a1 + 16) = unpack_dq(&v5);
    a2->m128i_i64[0] = v5.m128i_i64[0];
    return 1;
  }
  return result;
}
