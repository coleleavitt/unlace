/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8099350
// Address: 0x08099350

//----- (08099350) --------------------------------------------------------
unsigned __int32 __cdecl sub_8099350(int a1, int a2, char a3)
{
  __int16 i; // ax
  __m128i v4; // xmm0
  int v5; // eax
  __int16 v6; // ax
  __int64 v7; // rax
  unsigned __int32 result; // eax
  int v9; // [esp+1Ch] [ebp-44h] BYREF
  __int64 v10; // [esp+20h] [ebp-40h] BYREF
  int v11; // [esp+28h] [ebp-38h] BYREF
  __int64 v12; // [esp+2Ch] [ebp-34h] BYREF
  int v13; // [esp+34h] [ebp-2Ch] BYREF
  __m128i v14; // [esp+38h] [ebp-28h] BYREF

  v14.m128i_i32[2] = __readgsdword(0x14u);
  sub_8099260(a1, a2, a3);
  for ( i = *(_WORD *)(*(_DWORD *)(a1 + 352) + 12); i == 38; i = *(_WORD *)(*(_DWORD *)(a1 + 352) + 12) )
  {
    v13 = 1;
    v14.m128i_i64[0] = 0;
    sub_8099260(a1, (int)&v13, 1);
    *(_QWORD *)(a2 + 4) = _mm_and_si128(_mm_loadl_epi64((const __m128i *)(a2 + 4)), _mm_loadl_epi64(&v14)).m128i_u64[0];
  }
  if ( i != 94 )
    goto LABEL_15;
  do
  {
    v9 = 1;
    v10 = 0;
    sub_8099260(a1, (int)&v9, 1);
    if ( *(_WORD *)(*(_DWORD *)(a1 + 352) + 12) != 38 )
    {
      v4 = _mm_loadl_epi64((const __m128i *)&v10);
      goto LABEL_14;
    }
    while ( 2 )
    {
      v11 = 1;
      v12 = 0;
      sub_8098F80(a1, (int)&v11, 1);
      while ( 1 )
      {
        v5 = *(_DWORD *)(a1 + 352);
        v13 = 1;
        v14.m128i_i64[0] = 0;
        v6 = *(_WORD *)(v5 + 12);
        if ( v6 == 15677 )
        {
          sub_8098F80(a1, (int)&v13, 1);
          v7 = v14.m128i_i64[0] == v12;
          goto LABEL_11;
        }
        if ( v6 != 8509 )
          break;
        sub_8098F80(a1, (int)&v13, 1);
        v7 = v14.m128i_i64[0] != v12;
LABEL_11:
        v12 = v7;
        LOBYTE(v11) = 0;
      }
      v4 = _mm_and_si128(_mm_loadl_epi64((const __m128i *)&v10), _mm_loadl_epi64((const __m128i *)&v12));
      v10 = v4.m128i_i64[0];
      if ( v6 == 38 )
        continue;
      break;
    }
LABEL_14:
    *(_QWORD *)(a2 + 4) = _mm_xor_si128(v4, _mm_loadl_epi64((const __m128i *)(a2 + 4))).m128i_u64[0];
  }
  while ( *(_WORD *)(*(_DWORD *)(a1 + 352) + 12) == 94 );
LABEL_15:
  result = v14.m128i_i32[2] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
