/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8098A10
// Address: 0x08098A10

//----- (08098A10) --------------------------------------------------------
unsigned __int32 __cdecl sub_8098A10(int a1, int a2, char a3)
{
  int v3; // eax
  __int16 v4; // ax
  unsigned __int32 result; // eax
  unsigned __int64 v6; // xmm0_8
  unsigned __int64 v7; // xmm0_8
  char v8; // al
  __int32 v9; // eax
  int v10; // [esp+0h] [ebp-1Ch] BYREF
  __m128i v11; // [esp+4h] [ebp-18h] BYREF

  v11.m128i_i32[2] = __readgsdword(0x14u);
  if ( a3 )
    sub_8098690(a1);
  v3 = *(_DWORD *)(a1 + 352);
  v10 = 1;
  v4 = *(_WORD *)(v3 + 12);
  v11.m128i_i64[0] = 0;
  switch ( v4 )
  {
    case '-':
      sub_8098A10(a1, &v10, 1);
      v7 = _mm_sub_epi64((__m128i)0LL, _mm_loadl_epi64(&v11)).m128i_u64[0];
      *(_BYTE *)a2 = v10;
      *(_QWORD *)(a2 + 4) = v7;
      break;
    case '+':
      sub_8098A10(a1, &v10, 1);
      v8 = v10;
      *(_QWORD *)(a2 + 4) = v11.m128i_i64[0];
      *(_BYTE *)a2 = v8;
      break;
    case '!':
      sub_8098A10(a1, &v10, 1);
      v9 = v11.m128i_i32[0];
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = __PAIR64__(v11.m128i_u32[1], v9) == 0;
      *(_BYTE *)a2 = v10;
      break;
    case '~':
      sub_8098A10(a1, &v10, 1);
      v6 = _mm_xor_si128(_mm_loadl_epi64(&v11), (__m128i)-1LL).m128i_u64[0];
      *(_BYTE *)a2 = v10;
      *(_QWORD *)(a2 + 4) = v6;
      break;
    default:
      sub_8098880(a1, a2);
      break;
  }
  result = v11.m128i_i32[2] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
