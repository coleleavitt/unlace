__int64 __fastcall sub_158750(const __m128i *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __m128i v3; // xmm0

  result = operator new(0x20u);
  v2 = a1->m128i_i64[1];
  v3 = _mm_loadu_si128(a1 + 1);
  *(_QWORD *)result = off_2355F8;
  *(_QWORD *)(result + 8) = v2;
  *(__m128i *)(result + 16) = v3;
  return result;
}

