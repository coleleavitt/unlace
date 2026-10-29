/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8098B90
// Address: 0x08098B90

//----- (08098B90) --------------------------------------------------------
unsigned __int32 __cdecl sub_8098B90(int a1, int a2, char a3)
{
  int v3; // eax
  __int16 v4; // ax
  unsigned __int32 result; // eax
  __m128i v6; // [esp+0h] [ebp-4Ch]
  __m128i v7; // [esp+0h] [ebp-4Ch]
  unsigned __int64 v8; // [esp+10h] [ebp-3Ch]
  unsigned __int64 v9; // [esp+10h] [ebp-3Ch]
  int v10; // [esp+20h] [ebp-2Ch] BYREF
  __m128i v11[2]; // [esp+24h] [ebp-28h] BYREF

  v11[0].m128i_i32[2] = __readgsdword(0x14u);
  sub_8098A10(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(a1 + 352);
        v10 = 1;
        v4 = *(_WORD *)(v3 + 12);
        v11[0].m128i_i64[0] = 0;
        if ( v4 != 42 )
          break;
        sub_8098A10(a1, (int)&v10, 1);
        *(_QWORD *)(a2 + 4) *= v11[0].m128i_i64[0];
      }
      if ( v4 != 47 )
        break;
      sub_8098A10(a1, (int)&v10, 1);
      v7 = _mm_loadl_epi64(v11);
      if ( !(_mm_cvtsi128_si32(_mm_srli_epi64(v7, 0x20u)) | _mm_cvtsi128_si32(v7)) )
LABEL_18:
        __longjmp_chk(a1 + 196, 86);
      v9 = *(_QWORD *)(a2 + 4);
      if ( *(_BYTE *)a2 || (_BYTE)v10 )
        *(_QWORD *)(a2 + 4) = v9 / v7.m128i_i64[0];
      else
        *(_QWORD *)(a2 + 4) = (__int64)v9 / v7.m128i_i64[0];
    }
    if ( v4 != 37 )
      break;
    sub_8098A10(a1, (int)&v10, 1);
    v6 = _mm_loadl_epi64(v11);
    if ( !(_mm_cvtsi128_si32(_mm_srli_epi64(v6, 0x20u)) | _mm_cvtsi128_si32(v6)) )
      goto LABEL_18;
    v8 = *(_QWORD *)(a2 + 4);
    if ( *(_BYTE *)a2 || (_BYTE)v10 )
      *(_QWORD *)(a2 + 4) = v8 % v6.m128i_i64[0];
    else
      *(_QWORD *)(a2 + 4) = (__int64)v8 % v6.m128i_i64[0];
  }
  result = v11[0].m128i_i32[2] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 804B140: using guessed type void __cdecl __noreturn __longjmp_chk(_DWORD, _DWORD);
