__m128i *__fastcall clang_getCanonicalCursor(
        __m128i *a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __m128i *v8; // rbx
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbp
  unsigned __int8 v16; // al
  __int64 v17; // r12
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // r9
  __m128i v21; // xmm0
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r9
  __m128i v25; // [rsp+0h] [rbp-38h]
  __m128i v26; // [rsp+0h] [rbp-38h]
  __m128i v27; // [rsp+0h] [rbp-38h]

  v8 = a1;
  if ( (unsigned int)(a7 - 600) > 4 && (unsigned int)(a7 - 1) > 0x26
    || (v25 = _mm_loadu_si128((const __m128i *)&a7),
        v10 = sub_63A250((_DWORD)a1, a2, (int)a7 - 600, a4, a5, a6, v25.m128i_i32[0], v25.m128i_i64[1]),
        (v15 = v10) == 0) )
  {
    *a1 = _mm_loadu_si128((const __m128i *)&a7);
    a1[1] = _mm_loadu_si128((const __m128i *)&a8);
    return a1;
  }
  v16 = *(_BYTE *)(v10 + 28) & 0x7F;
  if ( v16 == 20 )
  {
    LODWORD(a1) = v15;
    v17 = sub_7BB6B0(v15);
    if ( v17 )
    {
LABEL_7:
      v26 = _mm_loadu_si128((const __m128i *)&a7);
      v18 = _mm_loadu_si128((const __m128i *)&a8);
      v19 = sub_63A300(
              (_DWORD)a1,
              a2,
              v11,
              v12,
              v13,
              v14,
              v26.m128i_i32[0],
              v26.m128i_i32[2],
              v18.m128i_i32[0],
              v18.m128i_i64[1]);
      sub_639160(v8, v17, v19, 0, 1, v20);
      return v8;
    }
    v16 = *(_BYTE *)(v15 + 28) & 0x7F;
  }
  if ( (unsigned int)v16 - 19 <= 1 )
  {
    v17 = *(_QWORD *)(v15 + 88);
    if ( v17 )
      goto LABEL_7;
  }
  v27 = _mm_loadu_si128((const __m128i *)&a7);
  v21 = _mm_loadu_si128((const __m128i *)&a8);
  v22 = sub_63A300(
          (_DWORD)a1,
          a2,
          v11,
          v12,
          v13,
          v14,
          v27.m128i_i32[0],
          v27.m128i_i32[2],
          v21.m128i_i32[0],
          v21.m128i_i64[1]);
  v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
  sub_639160(v8, v23, v22, 0, 1, v24);
  return v8;
}

