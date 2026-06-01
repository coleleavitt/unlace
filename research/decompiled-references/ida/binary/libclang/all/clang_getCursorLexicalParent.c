__int64 __fastcall clang_getCursorLexicalParent(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __m128i v16; // xmm0
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // rsi
  __m128i v23; // [rsp+0h] [rbp-38h]
  __m128i v24; // [rsp+0h] [rbp-38h]

  if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    goto LABEL_3;
  v23 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v23.m128i_i32[0], v23.m128i_i64[1]);
  if ( !v9 )
    goto LABEL_3;
  v14 = *(_QWORD *)(v9 + 16);
  v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v14 & 4) != 0 )
    v15 = *(_QWORD *)(v15 + 8);
  if ( !v15 )
  {
LABEL_3:
    sub_638F50(a1, 70, 0);
    return a1;
  }
  v24 = _mm_loadu_si128((const __m128i *)&a7);
  v16 = _mm_loadu_si128((const __m128i *)&a8);
  v17 = sub_63A300(a1, a2, v10, v11, v12, v13, v24.m128i_i32[0], v24.m128i_i32[2], v16.m128i_i32[0], v16.m128i_i64[1]);
  v18 = sub_79A2E0(v15);
  v20 = v18;
  if ( !v18 )
  {
    v22 = 0;
    goto LABEL_11;
  }
  v21 = *(_BYTE *)(v18 + 28) & 0x7F;
  if ( (unsigned int)(v21 - 32) > 5 )
  {
LABEL_13:
    if ( (unsigned int)(v21 - 57) > 2 || (v22 = sub_7A47A0(v20)) == 0 )
      v22 = v20;
    goto LABEL_11;
  }
  v22 = sub_780E20(v20);
  if ( !v22 )
  {
    v21 = *(_BYTE *)(v20 + 28) & 0x7F;
    goto LABEL_13;
  }
LABEL_11:
  sub_639160(a1, v22, v17, 0, 1, v19);
  return a1;
}

