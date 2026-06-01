__int64 __fastcall clang_Cursor_getRawCommentText(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // rbx
  __m128i v10; // xmm0
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbp
  __int64 v16; // rax
  void *v17; // rsi
  size_t v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  size_t v21; // rsi
  size_t v22; // rdx
  __m128i v23; // [rsp+0h] [rbp-38h]
  __m128i v24; // [rsp+0h] [rbp-38h]

  if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return clang_CompileCommand_getMappedSourcePath_0();
  v23 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v23.m128i_i32[0], v23.m128i_i64[1]);
  v24 = _mm_loadu_si128((const __m128i *)&a7);
  v10 = _mm_loadu_si128((const __m128i *)&a8);
  v15 = sub_63A2D0(a1, a2, v11, v12, v13, v14, v24.m128i_i32[0], v24.m128i_i32[2], v10.m128i_i32[0], v10.m128i_i64[1]);
  v16 = sub_6F4910(v15, v9, 0);
  v17 = nullptr;
  v18 = 0;
  v19 = v16;
  if ( v16 )
  {
    if ( (*(_BYTE *)(v16 + 32) & 1) != 0 )
    {
      v20 = *(_QWORD *)(v16 + 8);
      v21 = *(_QWORD *)(v19 + 16);
    }
    else
    {
      v20 = sub_AA4E60(v16, *(_QWORD *)(v15 + 2152));
      *(_BYTE *)(v19 + 32) |= 1u;
      *(_QWORD *)(v19 + 8) = v20;
      v21 = v22;
      *(_QWORD *)(v19 + 16) = v22;
    }
    v18 = v21;
    v17 = (void *)v20;
  }
  return sub_690520(v17, v18);
}

