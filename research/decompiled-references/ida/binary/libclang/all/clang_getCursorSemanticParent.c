__int64 __fastcall clang_getCursorSemanticParent(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rbp
  int v12; // r8d
  int v13; // r9d
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  _QWORD *v24; // rbp
  __m128i v25; // xmm0
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rbp
  int v30; // eax
  __int64 v31; // rsi
  __m128i v32; // [rsp+0h] [rbp-38h]
  __m128i v33; // [rsp+0h] [rbp-38h]
  __m128i v34; // [rsp+0h] [rbp-38h]
  __m128i v35; // [rsp+0h] [rbp-38h]

  v8 = a7 - 600;
  if ( (unsigned int)(a7 - 600) > 4 )
  {
    v8 = a7 - 1;
    if ( (unsigned int)(a7 - 1) > 0x26 )
    {
      if ( (unsigned int)(a7 - 200) <= 0x83 || (unsigned int)(a7 - 100) <= 0x38 )
      {
        v32 = _mm_loadu_si128((const __m128i *)&a7);
        v11 = sub_63A250(a1, a2, (int)a7 - 200, a4, a5, a6, v32.m128i_i32[0], v32.m128i_i64[1]);
        if ( v11 )
        {
          v33 = _mm_loadu_si128((const __m128i *)&a7);
          v14 = _mm_loadu_si128((const __m128i *)&a8);
          v15 = sub_63A300(
                  a1,
                  a2,
                  v9,
                  v10,
                  v12,
                  v13,
                  v33.m128i_i32[0],
                  v33.m128i_i32[2],
                  v14.m128i_i32[0],
                  v14.m128i_i64[1]);
          sub_639160(a1, v11, v15, 0, 1, v16);
          return a1;
        }
      }
      goto LABEL_10;
    }
  }
  v34 = _mm_loadu_si128((const __m128i *)&a7);
  v18 = sub_63A250(a1, a2, v8, a4, a5, a6, v34.m128i_i32[0], v34.m128i_i64[1]);
  if ( !v18 )
  {
LABEL_10:
    sub_638F50(a1, 70, 0);
    return a1;
  }
  v23 = *(_QWORD *)(v18 + 16);
  v24 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v23 & 4) != 0 )
  {
    v24 = (_QWORD *)*v24;
    if ( !v24 )
      goto LABEL_10;
  }
  else if ( !v24 )
  {
    goto LABEL_10;
  }
  v35 = _mm_loadu_si128((const __m128i *)&a7);
  v25 = _mm_loadu_si128((const __m128i *)&a8);
  v26 = sub_63A300(a1, a2, v19, v20, v21, v22, v35.m128i_i32[0], v35.m128i_i32[2], v25.m128i_i32[0], v25.m128i_i64[1]);
  v27 = sub_79A2E0(v24);
  v29 = v27;
  if ( !v27 )
  {
    v31 = 0;
    goto LABEL_14;
  }
  v30 = *(_BYTE *)(v27 + 28) & 0x7F;
  if ( (unsigned int)(v30 - 32) > 5 )
  {
LABEL_18:
    if ( (unsigned int)(v30 - 57) > 2 || (v31 = sub_7A47A0(v29)) == 0 )
      v31 = v29;
    goto LABEL_14;
  }
  v31 = sub_780E20(v29);
  if ( !v31 )
  {
    v30 = *(_BYTE *)(v29 + 28) & 0x7F;
    goto LABEL_18;
  }
LABEL_14:
  sub_639160(a1, v31, v26, 0, 1, v28);
  return a1;
}

