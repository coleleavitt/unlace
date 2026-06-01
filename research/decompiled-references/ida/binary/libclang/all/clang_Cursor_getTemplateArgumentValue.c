__int64 __fastcall clang_Cursor_getTemplateArgumentValue(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int CursorKind; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int *v18; // rax
  void *v19; // rdi
  __int64 v20; // rsi
  int v22; // eax
  void *v23[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i v24; // [rsp+30h] [rbp-28h]

  v8 = a1;
  v9 = *((_QWORD *)&a7 + 1);
  *(__m128i *)v23 = _mm_loadu_si128((const __m128i *)&a7);
  v24 = _mm_loadu_si128((const __m128i *)&a8);
  CursorKind = clang_getCursorKind(a1, a2, a3, a4, a5, a6, (int)v23[0]);
  if ( CursorKind > 0x20 )
    return 0;
  v13 = CursorKind;
  v14 = ((__int64)0xFFFFFFFEFFFFFEEBLL >> CursorKind) & 1;
  if ( (((__int64)0xFFFFFFFEFFFFFEEBLL >> CursorKind) & 1) != 0 || !v9 )
    return 0;
  v15 = *(_BYTE *)(v9 + 28) & 0x7F;
  v16 = (unsigned int)(v15 - 32);
  if ( (unsigned int)v16 > 5 )
  {
    if ( (unsigned int)(v15 - 58) > 1 )
      return 0;
    v18 = *(unsigned int **)(v9 + 168);
    if ( a1 >= *v18 )
      return 0;
  }
  else
  {
    v17 = sub_780F50(v9, a2, v16, v13, v11, v12, v23[0], v23[1], v24.m128i_i64[0], v24.m128i_i64[1]);
    if ( !v17 )
      return 0;
    v18 = *(unsigned int **)(v17 + 24);
    if ( a1 >= *v18 )
      return 0;
  }
  v19 = *(void **)&v18[6 * a1 + 4];
  v20 = v18[6 * v8 + 3] & 0x7FFFFFFF;
  if ( (v18[6 * v8 + 2] & 0x7FFFFFFF) != 4 )
    return 0;
  v22 = v18[6 * v8 + 3] & 0x7FFFFFFF;
  if ( (unsigned int)v20 <= 0x40
    || (sub_2585C60(v23, v20, v19, ((unsigned __int64)(unsigned int)v20 + 63) >> 6),
        v22 = (int)v23[1],
        v19 = v23[0],
        LODWORD(v23[1]) <= 0x40) )
  {
    if ( v22 )
      return (__int64)((_QWORD)v19 << (64 - (unsigned __int8)v22)) >> (64 - (unsigned __int8)v22);
  }
  else
  {
    v14 = *(_QWORD *)v23[0];
    if ( v23[0] )
      operator delete[](v23[0]);
  }
  return v14;
}

