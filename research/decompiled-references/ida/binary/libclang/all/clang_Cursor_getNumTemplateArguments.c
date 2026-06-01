__int64 __fastcall clang_Cursor_getNumTemplateArguments(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  unsigned __int64 CursorKind; // rax
  unsigned __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax

  CursorKind = clang_getCursorKind(a1, a2, a3, a4, a5, a6, _mm_loadu_si128((const __m128i *)&a7).m128i_i32[0]);
  if ( (unsigned int)CursorKind > 0x20 )
    return 0xFFFFFFFFLL;
  v8 = 0xFFFFFFFEFFFFFEEBLL;
  if ( _bittest64((const __int64 *)&v8, CursorKind) || !*((_QWORD *)&a7 + 1) )
    return 0xFFFFFFFFLL;
  v9 = *(_BYTE *)(*((_QWORD *)&a7 + 1) + 28LL) & 0x7F;
  if ( (unsigned int)(v9 - 32) <= 5 )
  {
    v10 = sub_780F50();
    if ( v10 )
      return **(unsigned int **)(v10 + 24);
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)(v9 - 58) > 1 )
    return 0xFFFFFFFFLL;
  return **(unsigned int **)(*((_QWORD *)&a7 + 1) + 168LL);
}

