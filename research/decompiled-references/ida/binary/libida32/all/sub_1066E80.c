__int64 __fastcall sub_1066E80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  const __m128i *v4; // rdx
  __int64 result; // rax
  __m128i si128; // xmm0

  v2 = *(unsigned int *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v2 + 20 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_22134E0(a2, a2 + 16, v2 + 20, 16);
    v2 = *(unsigned int *)(a2 + 8);
    v3 = *(_DWORD *)(a2 + 8);
  }
  v4 = (const __m128i *)&off_2B33120;
  result = *(_QWORD *)a2 + 16 * v2;
  do
  {
    si128 = _mm_load_si128(v4++);
    result += 16;
    *(__m128i *)(result - 16) = si128;
  }
  while ( v4 != (const __m128i *)&off_2B33260 );
  *(_DWORD *)(a2 + 8) = v3 + 20;
  return result;
}

