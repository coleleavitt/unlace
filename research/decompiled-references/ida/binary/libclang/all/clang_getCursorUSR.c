__int64 __fastcall clang_getCursorUSR(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7, __int128 a8)
{
  __m128i v8; // xmm0
  unsigned int CursorKind; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // edi
  int v18; // edx
  int v19; // ecx
  _QWORD *v20; // rbp
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  __int64 v28; // rbx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdi
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-38h]
  __m128i v34; // [rsp+0h] [rbp-38h]
  __m128i v35; // [rsp+0h] [rbp-38h]
  __m128i v36; // [rsp+0h] [rbp-38h]

  v8.m128i_i64[0] = _mm_loadu_si128((const __m128i *)&a8).m128i_u64[0];
  CursorKind = clang_getCursorKind(a1, a2, a3, a4, a5, a6, _mm_loadu_si128((const __m128i *)&a7).m128i_i32[0]);
  if ( (unsigned int)clang_isDeclaration(CursorKind) )
  {
    v35 = _mm_loadu_si128((const __m128i *)&a7);
    v8.m128i_i64[0] = _mm_loadu_si128((const __m128i *)&a8).m128i_u64[0];
    v28 = sub_63A250(CursorKind, a2, v10, v11, v12, v13, v35.m128i_i32[0], v35.m128i_i64[1]);
    if ( !v28 )
      return sub_690460(*(double *)v8.m128i_i64);
    v36 = _mm_loadu_si128((const __m128i *)&a7);
    v8 = _mm_loadu_si128((const __m128i *)&a8);
    v31 = sub_63A300(
            CursorKind,
            a2,
            v26,
            v27,
            v29,
            v30,
            v36.m128i_i32[0],
            v36.m128i_i32[2],
            v8.m128i_i32[0],
            v8.m128i_i64[1]);
    if ( !v31 )
      return sub_690460(*(double *)v8.m128i_i64);
    v32 = sub_6907E0(v31);
    v20 = (_QWORD *)v32;
    if ( !v32 )
      return sub_690460(*(double *)v8.m128i_i64);
    if ( !(unsigned __int8)sub_11240B0(v28, v32) )
      goto LABEL_7;
    goto LABEL_14;
  }
  if ( CursorKind != 501 )
    return sub_690460(*(double *)v8.m128i_i64);
  v33 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = _mm_loadu_si128((const __m128i *)&a8);
  v15 = sub_63A300(501, a2, v10, v11, v12, v13, v33.m128i_i32[0], v33.m128i_i32[2], v8.m128i_i32[0], v8.m128i_i64[1]);
  v16 = v15;
  if ( !v15 )
    return sub_690460(*(double *)v8.m128i_i64);
  v17 = v15;
  v20 = (_QWORD *)sub_6907E0(v15);
  if ( !v20 )
    return sub_690460(*(double *)v8.m128i_i64);
  v23 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 32LL);
  v34 = _mm_loadu_si128((const __m128i *)&a7);
  v8.m128i_i64[0] = _mm_loadu_si128((const __m128i *)&a8).m128i_u64[0];
  v24 = sub_639FD0(v17, a2, v18, v19, v21, v22, v34.m128i_i32[0], v34.m128i_i64[1]);
  if ( (unsigned __int8)sub_11240F0(v24, v23, v20) )
  {
LABEL_14:
    sub_6909C0(v20);
    return sub_690460(*(double *)v8.m128i_i64);
  }
LABEL_7:
  v25 = v20[1];
  if ( v20[2] < (unsigned __int64)(v25 + 1) )
  {
    sub_25D6230(v20, v20 + 3, v25 + 1, 1);
    v25 = v20[1];
  }
  *(_BYTE *)(*v20 + v25) = 0;
  ++v20[1];
  return sub_690640(v20);
}

