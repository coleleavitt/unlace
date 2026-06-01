/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8099580
// Address: 0x08099580

//----- (08099580) --------------------------------------------------------
unsigned __int32 __cdecl sub_8099580(int a1, int a2, char a3)
{
  __int16 i; // ax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  unsigned __int32 result; // eax
  int v8; // [esp+8h] [ebp-38h] BYREF
  unsigned __int64 v9; // [esp+Ch] [ebp-34h] BYREF
  int v10; // [esp+14h] [ebp-2Ch] BYREF
  __m128i v11[2]; // [esp+18h] [ebp-28h] BYREF

  v11[0].m128i_i32[2] = __readgsdword(0x14u);
  sub_8099350(a1, a2, a3);
  for ( i = *(_WORD *)(*(_DWORD *)(a1 + 352) + 12); i == 124; i = *(_WORD *)(*(_DWORD *)(a1 + 352) + 12) )
  {
    v10 = 1;
    v11[0].m128i_i64[0] = 0;
    sub_8099350(a1, (int)&v10, 1);
    *(_QWORD *)(a2 + 4) = _mm_or_si128(_mm_loadl_epi64((const __m128i *)(a2 + 4)), _mm_loadl_epi64(v11)).m128i_u64[0];
  }
  if ( i == 9766 )
  {
    do
    {
      v8 = 1;
      v9 = 0;
      sub_8099350(a1, (int)&v8, 1);
      if ( *(_WORD *)(*(_DWORD *)(a1 + 352) + 12) == 124 )
      {
        do
        {
          v10 = 1;
          v11[0].m128i_i64[0] = 0;
          sub_8099350(a1, (int)&v10, 1);
          v4 = *(_DWORD *)(a1 + 352);
          v9 = _mm_or_si128(_mm_loadl_epi64((const __m128i *)&v9), _mm_loadl_epi64(v11)).m128i_u64[0];
        }
        while ( *(_WORD *)(v4 + 12) == 124 );
      }
      v5 = *(_DWORD *)(a2 + 4);
      v6 = *(_DWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 4) )
      {
        v6 = 0;
        v5 = v9 != 0;
      }
      *(_DWORD *)(a2 + 4) = v5;
      *(_DWORD *)(a2 + 8) = v6;
      *(_BYTE *)a2 = 0;
    }
    while ( *(_WORD *)(*(_DWORD *)(a1 + 352) + 12) == 9766 );
  }
  result = v11[0].m128i_i32[2] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
