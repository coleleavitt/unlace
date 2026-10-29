__int64 __fastcall clang_Cursor_isAnonymous(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edx
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __m128i v18; // [rsp+0h] [rbp-28h]

  v7 = (unsigned int)a7;
  if ( !(unsigned int)clang_isDeclaration((unsigned int)a7) )
    return 0;
  v18 = _mm_loadu_si128((const __m128i *)&a7);
  v14 = sub_63A250(v7, a2, v8, v9, v10, v11, v18.m128i_i32[0], v18.m128i_i64[1]);
  if ( !v14 )
    return 0;
  v15 = *(_BYTE *)(v14 + 28) & 0x7F;
  if ( v15 == 22 )
  {
    v16 = *(_QWORD *)(v14 + 40);
    v12 = 1;
    if ( (v16 & 7) == 0 )
      return (v16 & 0xFFFFFFFFFFFFFFF8LL) == 0;
    return v12;
  }
  if ( (unsigned int)v15 - 56 > 4 )
    return 0;
  v17 = *(_QWORD *)(v14 + 120);
  if ( v17 > 7 )
  {
    v12 = 0;
    if ( (v17 & 4) == 0 )
      return v12;
  }
  return (*(_QWORD *)(v14 + 40) <= 7u) | (unsigned __int8)((*(_QWORD *)(v14 + 40) & 7) != 0);
}

