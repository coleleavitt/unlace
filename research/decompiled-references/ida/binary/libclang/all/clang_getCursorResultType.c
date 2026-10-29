__int64 __fastcall clang_getCursorResultType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i v30; // [rsp+0h] [rbp-58h]
  __m128i v31; // [rsp+0h] [rbp-58h]
  __m128i v32; // [rsp+0h] [rbp-58h]
  __m128i v33; // [rsp+20h] [rbp-38h] BYREF
  __int64 v34; // [rsp+30h] [rbp-28h]

  v9 = (unsigned int)a7;
  if ( (unsigned int)clang_isDeclaration((unsigned int)a7) )
  {
    v30 = _mm_loadu_si128((const __m128i *)&a7);
    v14 = sub_63A250(v9, a2, v10, v11, v12, v13, v30.m128i_i32[0], v30.m128i_i64[1]);
    v19 = v14;
    if ( v14 && (*(_BYTE *)(v14 + 28) & 0x7F) == 0x10 )
    {
      v31 = _mm_loadu_si128((const __m128i *)&a7);
      v20 = _mm_loadu_si128((const __m128i *)&a8);
      v21 = sub_63A300(
              v9,
              a2,
              v15,
              v16,
              v17,
              v18,
              v31.m128i_i32[0],
              v31.m128i_i32[2],
              v20.m128i_i32[0],
              v20.m128i_i64[1]);
      sub_690DD0(a1, *(_QWORD *)(v19 + 80), v21);
      return a1;
    }
    else
    {
      clang_getCursorType(
        (__int64)&v33,
        a2,
        v15,
        v16,
        v17,
        v18,
        (__int128)_mm_loadu_si128((const __m128i *)&a7),
        (__int128)_mm_loadu_si128((const __m128i *)&a8));
      v25 = _mm_load_si128(&v33);
      clang_getResultType(a1, a2, v26, v27, v28, v29, v25.m128i_i32[0], v25.m128i_i64[1], v34);
      return a1;
    }
  }
  else
  {
    v32 = _mm_loadu_si128((const __m128i *)&a7);
    v23 = _mm_loadu_si128((const __m128i *)&a8);
    v24 = sub_63A300(v9, a2, v10, v11, v12, v13, v32.m128i_i32[0], v32.m128i_i32[2], v23.m128i_i32[0], v23.m128i_i64[1]);
    sub_690DD0(a1, 0, v24);
    return a1;
  }
}

