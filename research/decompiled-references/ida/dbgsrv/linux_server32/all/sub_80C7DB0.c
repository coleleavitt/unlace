/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7DB0
// Address: 0x080C7DB0

//----- (080C7DB0) --------------------------------------------------------
int __cdecl sub_80C7DB0(int a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  int v3; // edi
  int v5; // [esp+4h] [ebp-38h]
  int v6; // [esp+8h] [ebp-34h]
  int v7; // [esp+Ch] [ebp-30h]
  __int64 v8; // [esp+10h] [ebp-2Ch]

  if ( !a1 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(552, v5, v6, v7);
    BUG();
  }
  v1 = sub_80CEF40(a1);
  v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v1), _mm_cvtsi32_si128(v2)).m128i_u64[0];
  sub_80CEFD0(a1, 0, 2);
  v3 = sub_80CEF40(a1);
  sub_80CEFD0(a1, v8, 0);
  return v3;
}
// 80C7DD3: variable 'v2' is possibly undefined
// 80C7E35: variable 'v5' is possibly undefined
// 80C7E35: variable 'v6' is possibly undefined
// 80C7E35: variable 'v7' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
