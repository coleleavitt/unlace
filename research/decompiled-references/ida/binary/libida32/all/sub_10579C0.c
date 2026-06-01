__int64 __fastcall sub_10579C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  __m128i si128; // xmm1
  __m128i v5; // xmm2
  __m128i v6; // xmm3
  __m128i v7; // xmm4
  __m128i v8; // xmm5
  __int64 result; // rax

  v2 = *(unsigned int *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v2 + 6 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_22134E0(a2, a2 + 16, v2 + 6, 16);
    v2 = *(unsigned int *)(a2 + 8);
    v3 = *(_DWORD *)(a2 + 8);
  }
  si128 = _mm_load_si128(&off_2B30350);
  v5 = _mm_load_si128(&off_2B30360);
  v6 = _mm_load_si128(&off_2B30370);
  v7 = _mm_load_si128(&off_2B30380);
  v8 = _mm_load_si128(&off_2B30390);
  result = *(_QWORD *)a2 + 16 * v2;
  *(__m128i *)result = _mm_load_si128(&off_2B30340);
  *(__m128i *)(result + 16) = si128;
  *(__m128i *)(result + 32) = v5;
  *(__m128i *)(result + 48) = v6;
  *(__m128i *)(result + 64) = v7;
  *(__m128i *)(result + 80) = v8;
  *(_DWORD *)(a2 + 8) = v3 + 6;
  return result;
}

