__int64 __fastcall clang_Cursor_getObjCDeclQualifiers(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v8; // rax
  char v9; // dl
  int v10; // eax
  __m128i v11; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 600) > 4 && (unsigned int)(a7 - 1) > 0x26 )
    return 0;
  v11 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_63A250(a1, a2, (int)a7 - 600, a4, a5, a6, v11.m128i_i32[0], v11.m128i_i64[1]);
  v9 = *(_BYTE *)(v8 + 28) & 0x7F;
  if ( v9 == 16 )
  {
    v10 = (*(_QWORD *)(v8 + 56) >> 26) & 0x7F;
  }
  else
  {
    if ( v9 != 41 || (*(_BYTE *)(v8 + 97) & 0x10) == 0 )
      return 0;
    v10 = (*(_DWORD *)(v8 + 96) >> 13) & 0x7F;
  }
  if ( !v10 )
    return 0;
  return v10 & 0x3F;
}

