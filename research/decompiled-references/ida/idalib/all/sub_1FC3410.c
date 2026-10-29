__int64 __fastcall sub_1FC3410(__int64 a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __int64 result; // rax
  __m128i v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h]

  sub_1FC2FE0(a1, (__int64)a2);
  v2 = _mm_loadu_si128(a2 + 2);
  v5 = a2[3].m128i_i64[0];
  v4 = v2;
  result = sub_1F9E200(a1 + 8, (__int64)&v4);
  *(_DWORD *)(a1 + 224) = 318;
  return result;
}
