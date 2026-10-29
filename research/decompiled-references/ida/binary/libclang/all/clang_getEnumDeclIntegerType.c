__int64 __fastcall clang_getEnumDeclIntegerType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __m128i v23; // [rsp+0h] [rbp-38h]
  __m128i v24; // [rsp+0h] [rbp-38h]

  v23 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = _mm_loadu_si128((const __m128i *)&a8);
  v10 = sub_63A300(a1, a2, a3, a4, a5, a6, v23.m128i_i32[0], v23.m128i_i32[2], v9.m128i_i32[0], v9.m128i_i64[1]);
  v11 = (unsigned int)a7;
  v12 = v10;
  if ( (unsigned int)clang_isDeclaration((unsigned int)a7)
    && (v24 = _mm_loadu_si128((const __m128i *)&a7),
        (v17 = sub_63A250(v11, a2, v13, v14, v15, v16, v24.m128i_i32[0], v24.m128i_i64[1])) != 0)
    && (*(_BYTE *)(v17 + 28) & 0x7F) == 0x3C )
  {
    v18 = *(_QWORD *)(v17 + 128);
    v19 = 0;
    if ( v18 > 7 )
    {
      if ( (v18 & 4) != 0 )
      {
        v21 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
        v19 = *(_QWORD *)(*v21 & 0xFFFFFFFFFFFFFFF0LL);
        v22 = *(_QWORD *)(v19 + 8);
        if ( (v22 & 7) != 0 || (v19 &= 0xFFFFFFFFFFFFFFF0LL, (v22 & 8) != 0) )
          v19 = sub_B0CF30(*v21, v19) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
      }
    }
    sub_690DD0(a1, v19, v12);
    return a1;
  }
  else
  {
    sub_690DD0(a1, 0, v12);
    return a1;
  }
}

