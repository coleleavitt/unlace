__int64 __fastcall sub_108FEA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  __m128i si128; // xmm1
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  __int64 result; // rax

  v2 = *(unsigned int *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v2 + 4 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_22134E0(a2, a2 + 16, v2 + 4, 16);
    v2 = *(unsigned int *)(a2 + 8);
    v3 = *(_DWORD *)(a2 + 8);
  }
  si128 = _mm_load_si128((const __m128i *)&off_2B37070);
  v5 = _mm_load_si128(&off_2B37080);
  v6 = _mm_load_si128((const __m128i *)&off_2B37090);
  result = *(_QWORD *)a2 + 16 * v2;
  *(__m128i *)result = _mm_load_si128((const __m128i *)&off_2B37060);
  *(__m128i *)(result + 16) = si128;
  *(__m128i *)(result + 32) = v5;
  *(__m128i *)(result + 48) = v6;
  *(_DWORD *)(a2 + 8) = v3 + 4;
  return result;
}

