/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8098DA0
// Address: 0x08098DA0

//----- (08098DA0) --------------------------------------------------------
unsigned __int32 __cdecl sub_8098DA0(int a1, int a2, char a3)
{
  int v3; // eax
  __int16 v4; // ax
  unsigned __int32 result; // eax
  unsigned __int64 v6; // xmm0_8
  int v7; // [esp+4h] [ebp-1Ch] BYREF
  __m128i v8; // [esp+8h] [ebp-18h] BYREF

  v8.m128i_i32[2] = __readgsdword(0x14u);
  sub_8098B90(a1, a2, a3);
  while ( 1 )
  {
    v3 = *(_DWORD *)(a1 + 352);
    v7 = 1;
    v4 = *(_WORD *)(v3 + 12);
    v8.m128i_i64[0] = 0;
    if ( v4 == 43 )
    {
      sub_8098B90(a1, (int)&v7, 1);
      v6 = _mm_add_epi64(_mm_loadl_epi64((const __m128i *)(a2 + 4)), _mm_loadl_epi64(&v8)).m128i_u64[0];
      goto LABEL_7;
    }
    if ( v4 != 45 )
      break;
    sub_8098B90(a1, (int)&v7, 1);
    v6 = _mm_sub_epi64(_mm_loadl_epi64((const __m128i *)(a2 + 4)), _mm_loadl_epi64(&v8)).m128i_u64[0];
LABEL_7:
    *(_QWORD *)(a2 + 4) = v6;
  }
  result = v8.m128i_i32[2] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
