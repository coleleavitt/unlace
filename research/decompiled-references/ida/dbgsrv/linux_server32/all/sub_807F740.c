/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807F740
// Address: 0x0807F740

//----- (0807F740) --------------------------------------------------------
bool __cdecl sub_807F740(int a1, char a2)
{
  pthread_mutex_t *v2; // edi
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  __m128i v5; // xmm3
  int v7; // [esp-18h] [ebp-34h]
  int v8; // [esp-14h] [ebp-30h]
  int v9; // [esp-10h] [ebp-2Ch]

  v2 = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v3 = _mm_unpacklo_epi32(
         _mm_cvtsi32_si128((unsigned __int8)((a2 & 0x20) == 0) << a2),
         _mm_cvtsi32_si128((unsigned __int8)((a2 & 0x20) != 0) << a2));
  v4 = _mm_loadl_epi64((const __m128i *)(a1 + 28));
  v5 = _mm_and_si128(v4, v3);
  if ( !(_mm_cvtsi128_si32(_mm_srli_epi64(v5, 0x20u)) | _mm_cvtsi128_si32(v5)) )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1444, v7, v8, v9);
    BUG();
  }
  *(_QWORD *)(a1 + 28) = _mm_andnot_si128(v3, v4).m128i_u64[0];
  return sub_80D1600(v2);
}
// 807F7E1: variable 'v7' is possibly undefined
// 807F7E1: variable 'v8' is possibly undefined
// 807F7E1: variable 'v9' is possibly undefined
// 811E6F8: using guessed type int dword_811E6F8;
// 811F8A1: using guessed type char byte_811F8A1;
