__int64 __fastcall clang_Cursor_getOffsetOfField(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rdx
  __m128i v34; // [rsp+0h] [rbp-68h]
  __m128i v35; // [rsp+0h] [rbp-68h]
  _BYTE v36[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v37; // [rsp+28h] [rbp-40h]
  __m128i v38; // [rsp+40h] [rbp-28h] BYREF
  __m128i v39; // [rsp+50h] [rbp-18h] BYREF

  if ( !(unsigned int)clang_isDeclaration((unsigned int)a7) )
    return -1;
  clang_getCursorSemanticParent(
    (int)&v38,
    a2,
    v8,
    v9,
    v10,
    v11,
    (__int128)_mm_loadu_si128((const __m128i *)&a7),
    (__int128)_mm_loadu_si128((const __m128i *)&a8));
  clang_getCursorType(
    (__int64)v36,
    a2,
    v12,
    v13,
    v14,
    v15,
    (__int128)_mm_load_si128(&v38),
    (__int128)_mm_load_si128(&v39));
  v16 = v37;
  result = sub_690D00(v37, a2, v17, v18, v19, v20, (__int128)_mm_load_si128(&v38));
  if ( result )
    return result;
  v34 = _mm_loadu_si128((const __m128i *)&a7);
  v26 = sub_63A250(v16, a2, v22, v23, v24, v25, v34.m128i_i32[0], v34.m128i_i64[1]);
  v35 = _mm_loadu_si128((const __m128i *)&a7);
  v27 = _mm_loadu_si128((const __m128i *)&a8);
  v32 = sub_63A2D0(v16, a2, v28, v29, v30, v31, v35.m128i_i32[0], v35.m128i_i32[2], v27.m128i_i32[0], v27.m128i_i64[1]);
  if ( v26
    && ((v33 = (*(_BYTE *)(v26 + 28) & 0x7Fu) - 47, (unsigned int)v33 <= 2) || (*(_BYTE *)(v26 + 28) & 0x7F) == 0x1E) )
  {
    return sub_AC0230(v32, v26, v33);
  }
  else
  {
    return -1;
  }
}

