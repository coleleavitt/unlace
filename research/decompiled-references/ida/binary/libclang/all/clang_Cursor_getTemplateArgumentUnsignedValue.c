void *__fastcall clang_Cursor_getTemplateArgumentUnsignedValue(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rbp
  unsigned __int64 CursorKind; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int *v17; // rax
  void *v18; // rbx
  __int64 v19; // rsi
  void *v21[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i v22; // [rsp+30h] [rbp-28h]

  v8 = *((_QWORD *)&a7 + 1);
  *(__m128i *)v21 = _mm_loadu_si128((const __m128i *)&a7);
  v22 = _mm_loadu_si128((const __m128i *)&a8);
  CursorKind = clang_getCursorKind(a1, a2, a3, a4, a5, a6, (int)v21[0]);
  if ( (unsigned int)CursorKind > 0x20 )
    return nullptr;
  v13 = 0xFFFFFFFEFFFFFEEBLL;
  if ( _bittest64((const __int64 *)&v13, CursorKind) || !v8 )
    return nullptr;
  v14 = *(_BYTE *)(v8 + 28) & 0x7F;
  v15 = (unsigned int)(v14 - 32);
  if ( (unsigned int)v15 > 5 )
  {
    if ( (unsigned int)(v14 - 58) > 1 )
      return nullptr;
    v17 = *(unsigned int **)(v8 + 168);
    if ( a1 >= *v17 )
      return nullptr;
  }
  else
  {
    v16 = sub_780F50(v8, a2, v15, v10, v11, v12, v21[0], v21[1], v22.m128i_i64[0], v22.m128i_i64[1]);
    if ( !v16 )
      return nullptr;
    v17 = *(unsigned int **)(v16 + 24);
    if ( a1 >= *v17 )
      return nullptr;
  }
  v18 = *(void **)&v17[6 * a1 + 4];
  v19 = v17[6 * a1 + 3] & 0x7FFFFFFF;
  if ( (v17[6 * a1 + 2] & 0x7FFFFFFF) != 4 )
    return nullptr;
  if ( (unsigned int)v19 > 0x40 )
  {
    sub_2585C60(v21, v19, v18, ((unsigned __int64)(unsigned int)v19 + 63) >> 6);
    v18 = v21[0];
    if ( LODWORD(v21[1]) > 0x40 )
    {
      v18 = *(void **)v21[0];
      if ( v21[0] )
        operator delete[](v21[0]);
    }
  }
  return v18;
}

