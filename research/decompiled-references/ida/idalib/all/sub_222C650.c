__int64 __fastcall sub_222C650(__int64 a1, unsigned __int16 *a2, unsigned __int64 a3)
{
  __m128i v3; // xmm0
  __int64 result; // rax
  __m128i v5; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h]

  sub_222C3D0((__int64)&v5, a2, a3);
  v3 = _mm_load_si128(&v5);
  *(_WORD *)a1 = 8;
  result = v6;
  *(__m128i *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
