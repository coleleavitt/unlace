__int64 __fastcall tiplace_t__deserialize(__int64 a1, __m128i *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rsi
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  result = 0;
  if ( a2->m128i_i64[0] < a3 )
  {
    *(_DWORD *)(a1 + 8) = unpack_dd(a2);
    v8 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2), (__m128i)a3);
    v6 = unpack_dd(&v8);
    v7 = v8.m128i_i64[1];
    *(_DWORD *)(a1 + 12) = v6;
    *(_QWORD *)(a1 + 16) = unpack_dq(&v8, v7);
    a2->m128i_i64[0] = v8.m128i_i64[0];
    return 1;
  }
  return result;
}

