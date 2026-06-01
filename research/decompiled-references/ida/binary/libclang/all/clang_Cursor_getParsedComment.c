__int64 __fastcall clang_Cursor_getParsedComment(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  int v8; // edi
  int isDeclaration; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // rbx
  __m128i v15; // xmm0
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // esi
  int v22; // edi
  __int64 v23; // rbx
  __m128i v24; // xmm0
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __m128i v29; // [rsp+0h] [rbp-28h]
  __m128i v30; // [rsp+0h] [rbp-28h]
  __m128i v31; // [rsp+0h] [rbp-28h]

  v8 = a7;
  isDeclaration = clang_isDeclaration((unsigned int)a7);
  if ( !isDeclaration )
    return 0;
  v29 = _mm_loadu_si128((const __m128i *)&a7);
  v14 = sub_63A250(v8, a2, isDeclaration, v10, v11, v12, v29.m128i_i32[0], v29.m128i_i64[1]);
  v30 = _mm_loadu_si128((const __m128i *)&a7);
  v15 = _mm_loadu_si128((const __m128i *)&a8);
  v20 = sub_63A2D0(v8, a2, v16, v17, v18, v19, v30.m128i_i32[0], v30.m128i_i32[2], v15.m128i_i32[0], v15.m128i_i64[1]);
  v21 = v14;
  v22 = v20;
  v23 = sub_6F5920(v20, v14, 0);
  v31 = _mm_loadu_si128((const __m128i *)&a7);
  v24 = _mm_loadu_si128((const __m128i *)&a8);
  sub_63A300(v22, v21, v25, v26, v27, v28, v31.m128i_i32[0], v31.m128i_i32[2], v24.m128i_i32[0], v24.m128i_i64[1]);
  return v23;
}

