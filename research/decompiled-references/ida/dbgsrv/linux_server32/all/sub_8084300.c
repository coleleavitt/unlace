/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084300
// Address: 0x08084300

//----- (08084300) --------------------------------------------------------
unsigned int __cdecl sub_8084300(__m128i *a1, __m128i *a2)
{
  __m128i v2; // xmm0
  __int32 v3; // ecx
  unsigned int result; // eax
  int v5; // [esp-28h] [ebp-38h]
  int v6; // [esp-24h] [ebp-34h]
  int v7; // [esp-20h] [ebp-30h]
  unsigned int v8; // [esp+0h] [ebp-10h]

  v8 = __readgsdword(0x14u);
  if ( !a1 || !a2 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v8 == __readgsdword(0x14u) )
        sub_80CFF40(2657, v5, v6, v7);
      sub_80D7AB0();
    }
    JUMPOUT(0x804DEDC);
  }
  v2 = _mm_loadu_si128(a1);
  v3 = a1[1].m128i_i32[0];
  *a1 = _mm_loadu_si128(a2);
  a1[1].m128i_i32[0] = a2[1].m128i_i32[0];
  a2[1].m128i_i32[0] = v3;
  *a2 = v2;
  result = v8 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 808435F: control flows out of bounds to 804DEDC
// 808437C: variable 'v5' is possibly undefined
// 808437C: variable 'v6' is possibly undefined
// 808437C: variable 'v7' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
