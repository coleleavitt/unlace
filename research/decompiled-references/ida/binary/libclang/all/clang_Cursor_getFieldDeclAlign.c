__int64 __fastcall clang_Cursor_getFieldDeclAlign(
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
  __int64 v13; // rax
  __int64 v14; // rdi
  char v15; // al
  unsigned int v16; // edx
  char v17; // al
  __m128i v18; // [rsp+0h] [rbp-28h]

  v7 = (unsigned int)a7;
  if ( (unsigned int)clang_isDeclaration((unsigned int)a7)
    && (v18 = _mm_loadu_si128((const __m128i *)&a7),
        v13 = sub_63A250(v7, a2, v8, v9, v10, v11, v18.m128i_i32[0], v18.m128i_i64[1]),
        (v14 = v13) != 0)
    && ((v15 = *(_BYTE *)(v13 + 28), v16 = (v15 & 0x7F) - 47, v17 = v15 & 0x7F, v16 <= 2) || v17 == 30) )
  {
    return (unsigned int)sub_798DC0(v14) >> 3;
  }
  else
  {
    return 0;
  }
}

