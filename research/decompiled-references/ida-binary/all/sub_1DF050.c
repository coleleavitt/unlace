__int64 __fastcall sub_1DF050(__int64 a1)
{
  __m128i v1; // xmm0
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  __int64 v5; // rax
  __int64 result; // rax

  v1 = _mm_loadl_epi64((const __m128i *)a1);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = _mm_cvtsi128_si32(v1);
  v4 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v1, 229));
  while ( *(_DWORD *)(a1 - 12) > v3
       || *(_DWORD *)(a1 - 12) >= v3
       && (v4 < *(_DWORD *)(a1 - 8) || v4 <= *(_DWORD *)(a1 - 8) && *(_DWORD *)(a1 - 4) > v2) )
  {
    v5 = *(_QWORD *)(a1 - 12);
    a1 -= 12;
    *(_QWORD *)(a1 + 12) = v5;
    result = *(unsigned int *)(a1 + 8);
    *(_DWORD *)(a1 + 20) = result;
  }
  *(_DWORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = v1.m128i_i64[0];
  return result;
}
