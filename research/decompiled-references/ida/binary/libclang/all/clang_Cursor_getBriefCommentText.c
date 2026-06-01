__int64 __fastcall clang_Cursor_getBriefCommentText(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // r12
  __m128i v10; // xmm0
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbx
  __int64 v16; // rax
  char *v17; // rdi
  size_t v18; // rax
  __m128i v19; // [rsp+0h] [rbp-38h]
  __m128i v20; // [rsp+0h] [rbp-38h]

  if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return clang_CompileCommand_getMappedSourcePath_0();
  v19 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v19.m128i_i32[0], v19.m128i_i64[1]);
  v20 = _mm_loadu_si128((const __m128i *)&a7);
  v10 = _mm_loadu_si128((const __m128i *)&a8);
  v15 = sub_63A2D0(a1, a2, v11, v12, v13, v14, v20.m128i_i32[0], v20.m128i_i32[2], v10.m128i_i32[0], v10.m128i_i64[1]);
  v16 = sub_6F4910(v15, v9, 0);
  if ( !v16 )
    return clang_CompileCommand_getMappedSourcePath_0();
  if ( (*(_BYTE *)(v16 + 32) & 2) != 0 )
    v17 = *(char **)(v16 + 24);
  else
    v17 = (char *)sub_AA5660(v16, v15);
  v18 = 0;
  if ( v17 )
    v18 = strlen(v17);
  return sub_690520(v17, v18);
}

