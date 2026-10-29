__int64 __fastcall clang_getVTableCXXRecordDecl(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rbp
  __m128i v9; // xmm0
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r9
  __m128i v17; // [rsp+0h] [rbp-38h]
  __m128i v18; // [rsp+0h] [rbp-38h]

  v17 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_639EF0(
         a1,
         a2,
         a3,
         a4,
         a5,
         a6,
         v17.m128i_i32[0],
         v17.m128i_i32[2],
         _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
  v18 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = _mm_loadu_si128((const __m128i *)&a8);
  v14 = sub_63A300(a1, a2, v10, v11, v12, v13, v18.m128i_i32[0], v18.m128i_i32[2], v9.m128i_i32[0], v9.m128i_i64[1]);
  sub_639160(a1, v8, v14, 0, 1, v15);
  return a1;
}

