__int64 __fastcall clang_Cursor_getVarDeclInitializer(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r12
  __m128i v15; // xmm0
  __int64 v16; // rax
  __m128i v18; // [rsp+0h] [rbp-38h]
  __m128i v19; // [rsp+0h] [rbp-38h]

  v18 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_63A250(a1, a2, a3, a4, a5, a6, v18.m128i_i32[0], v18.m128i_i64[1]);
  if ( v8 && (v9 = v8, (*(_BYTE *)(v8 + 28) & 0x7Fu) - 38 <= 6) && (v14 = sub_77BC00(v8)) != 0 )
  {
    v19 = _mm_loadu_si128((const __m128i *)&a7);
    v15 = _mm_loadu_si128((const __m128i *)&a8);
    v16 = sub_63A300(v9, a2, v10, v11, v12, v13, v19.m128i_i32[0], v19.m128i_i32[2], v15.m128i_i32[0], v15.m128i_i64[1]);
    sub_639270(a1, v14, v9, v16, 0);
    return a1;
  }
  else
  {
    sub_638F50(a1, 70, 0);
    return a1;
  }
}

