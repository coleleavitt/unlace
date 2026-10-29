/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8099700
// Address: 0x08099700

//----- (08099700) --------------------------------------------------------
unsigned __int32 __cdecl sub_8099700(int a1, int a2, char a3)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  unsigned __int32 result; // eax
  int v7; // [esp+4h] [ebp-1Ch] BYREF
  __m128i v8; // [esp+8h] [ebp-18h] BYREF

  v8.m128i_i32[2] = __readgsdword(0x14u);
  sub_8099580(a1, a2, a3);
  for ( ;
        *(_WORD *)(*(_DWORD *)(a1 + 352) + 12) == 31868;
        *(_DWORD *)(a2 + 4) = (_mm_cvtsi128_si32(_mm_srli_epi64(v5, 0x20u)) | _mm_cvtsi128_si32(v5)) != 0 )
  {
    v7 = 1;
    v8.m128i_i64[0] = 0;
    sub_8099580(a1, (int)&v7, 1);
    v3 = _mm_loadl_epi64((const __m128i *)(a2 + 4));
    v4 = _mm_loadl_epi64(&v8);
    *(_DWORD *)(a2 + 8) = 0;
    v5 = _mm_or_si128(v3, v4);
    *(_BYTE *)a2 = 0;
  }
  result = v8.m128i_i32[2] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
