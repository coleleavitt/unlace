/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD730
// Address: 0x080CD730

//----- (080CD730) --------------------------------------------------------
int __cdecl sub_80CD730(int a1, __int64 a2, int a3)
{
  __m128i v3; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm0

  v3 = _mm_loadl_epi64((const __m128i *)&a2);
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
  {
    if ( !sub_80CEFD0(*(_DWORD *)(a1 + 4), v3.m128i_i64[0], a3) )
      return sub_80CEF40(*(_DWORD *)(a1 + 4));
    return -1;
  }
  if ( a3 == 1 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)(a1 + 16));
LABEL_12:
    v7 = _mm_add_epi64(v3, v6);
    *(_QWORD *)(a1 + 16) = v7.m128i_i64[0];
    return _mm_cvtsi128_si32(v7);
  }
  if ( a3 == 2 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
    goto LABEL_12;
  }
  if ( a3 )
    return *(_DWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v3.m128i_i64[0];
  return _mm_cvtsi128_si32(v3);
}
