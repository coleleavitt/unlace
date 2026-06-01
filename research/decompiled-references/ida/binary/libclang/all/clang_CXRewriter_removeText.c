__int64 __fastcall clang_CXRewriter_removeText(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __m128i v8; // xmm0
  int v9; // edx
  unsigned int v10; // eax
  int v12; // [rsp+24h] [rbp-24h]
  __int64 v13; // [rsp+34h] [rbp-14h] BYREF
  int v14; // [rsp+3Ch] [rbp-Ch]

  v8 = _mm_loadu_si128((const __m128i *)&a7);
  BYTE2(v12) = 0;
  v13 = sub_6022E0(a1, a2, a3, a4, a5, a6, v8.m128i_i32[0], v8.m128i_i32[2], a8);
  v14 = v9;
  LOWORD(v12) = 257;
  v10 = sub_12088F0(a1, &v13, v12 & 0xFFFFFF);
  return sub_120A100(a1, (unsigned int)v13, v10, v12 & 0xFFFFFF);
}

