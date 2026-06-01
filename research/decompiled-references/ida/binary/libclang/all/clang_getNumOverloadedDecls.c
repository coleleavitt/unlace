__int64 __fastcall clang_getNumOverloadedDecls(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 result; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rcx
  __m128i v13; // [rsp+0h] [rbp-28h]

  if ( (_DWORD)a7 != 49 )
    return 0;
  v13 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = sub_63A220(
         a1,
         a2,
         a3,
         a4,
         a5,
         a6,
         v13.m128i_i32[0],
         v13.m128i_i64[1],
         _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v9 )
  {
    v11 = v9 & 6;
    if ( v11 )
    {
      if ( v11 == 4 && v10 )
        return *(_WORD *)(v10 + 2) >> 1;
    }
    else if ( v10 )
    {
      return *(unsigned int *)(v10 + 4);
    }
  }
  if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x4E )
    return 0;
  v12 = *(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v10 + 48) <= 7u )
    return 0;
  result = 0;
  do
  {
    v12 = *(_QWORD *)(v12 + 72);
    ++result;
  }
  while ( v12 && (*(_BYTE *)(v12 + 28) & 0x7Fu) - 51 <= 1 );
  return result;
}

