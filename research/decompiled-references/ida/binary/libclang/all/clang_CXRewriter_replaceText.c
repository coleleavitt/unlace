__int64 __fastcall clang_CXRewriter_replaceText(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int64 a8)
{
  size_t v8; // r12
  __int64 v9; // rbx
  __m128i v10; // xmm0
  int v11; // edx
  unsigned int v12; // eax
  int v14; // [rsp+24h] [rbp-34h]
  __int64 v15; // [rsp+34h] [rbp-24h] BYREF
  int v16; // [rsp+3Ch] [rbp-1Ch]

  v8 = 0;
  v9 = a1;
  if ( a2 )
  {
    a1 = (__int64)a2;
    v8 = strlen(a2);
  }
  v10 = _mm_loadu_si128(&a7);
  BYTE2(v14) = 0;
  v15 = sub_6022E0(a1, (__int64)a2, a3, a4, a5, a6, v10.m128i_i32[0], v10.m128i_i32[2], a8);
  v16 = v11;
  LOWORD(v14) = 257;
  v12 = sub_12088F0(v9, &v15, v14 & 0xFFFFFF);
  return sub_120A0A0(v9, (unsigned int)v15, v12, a2, v8);
}

