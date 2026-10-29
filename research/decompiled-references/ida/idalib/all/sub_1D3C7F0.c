__int64 __fastcall sub_1D3C7F0(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  __int64 v4; // r12
  const __m128i *v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  __m128i v8; // xmm0

  v4 = ((char *)a3 - (char *)a2) >> 5;
  v5 = a2;
  v6 = *(unsigned int *)(a1 + 8);
  if ( v4 + v6 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v4 + v6, 24);
    v6 = *(unsigned int *)(a1 + 8);
  }
  result = *(_QWORD *)a1 + 24 * v6;
  if ( a2 != a3 )
  {
    do
    {
      v8 = _mm_loadu_si128(v5);
      v5 += 2;
      result += 24;
      *(__m128i *)(result - 24) = v8;
      *(_QWORD *)(result - 8) = v5[-1].m128i_i64[0];
    }
    while ( a3 != v5 );
    LODWORD(v6) = *(_DWORD *)(a1 + 8);
  }
  *(_DWORD *)(a1 + 8) = v6 + v4;
  return result;
}
