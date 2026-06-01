__int64 __fastcall sub_A3EF90(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __m128i v4; // xmm0
  __m128i v5; // [rsp+0h] [rbp-10h] BYREF

  if ( *(_QWORD *)(a1 + 2248) )
  {
    v2 = *(_QWORD *)(a1 + 2256);
    result = a2 | *(_QWORD *)(v2 + 48) & 7LL;
    *(_QWORD *)(v2 + 48) = result;
    *(_QWORD *)(a1 + 2256) = a2;
  }
  else
  {
    v5.m128i_i64[0] = a2;
    v4 = _mm_loadl_epi64(&v5);
    *(__m128i *)(a1 + 2248) = _mm_unpacklo_epi64(v4, v4);
  }
  return result;
}

