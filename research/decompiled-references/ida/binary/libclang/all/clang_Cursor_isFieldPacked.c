__int64 __fastcall clang_Cursor_isFieldPacked(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rbx
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __m128i v21; // [rsp+0h] [rbp-28h]
  __m128i v22; // [rsp+0h] [rbp-28h]

  v8 = (unsigned int)a7;
  if ( (unsigned int)clang_isDeclaration((unsigned int)a7)
    && (v21 = _mm_loadu_si128((const __m128i *)&a7),
        v14 = sub_63A250(v8, a2, v9, v10, v11, v12, v21.m128i_i32[0], v21.m128i_i64[1]),
        v22 = _mm_loadu_si128((const __m128i *)&a7),
        v15 = _mm_loadu_si128((const __m128i *)&a8),
        v20 = sub_63A2D0(
                v8,
                a2,
                v16,
                v17,
                v18,
                v19,
                v22.m128i_i32[0],
                v22.m128i_i32[2],
                v15.m128i_i32[0],
                v15.m128i_i64[1]),
        v14)
    && ((*(_BYTE *)(v14 + 28) & 0x7Fu) - 47 <= 2 || (*(_BYTE *)(v14 + 28) & 0x7F) == 0x1E) )
  {
    return (unsigned __int8)sub_6BF300(v20, v14);
  }
  else
  {
    return 0;
  }
}

