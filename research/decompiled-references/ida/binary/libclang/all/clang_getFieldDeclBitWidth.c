__int64 __fastcall clang_getFieldDeclBitWidth(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rdx
  __m128i v17; // [rsp+0h] [rbp-28h]

  v7 = (unsigned int)a7;
  if ( !(unsigned int)clang_isDeclaration((unsigned int)a7) )
    return 0xFFFFFFFFLL;
  v17 = _mm_loadu_si128((const __m128i *)&a7);
  v12 = sub_63A250(v7, a2, v8, v9, v10, v11, v17.m128i_i32[0], v17.m128i_i64[1]);
  v13 = v12;
  if ( !v12 )
    return 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 47 > 2 )
    return 0xFFFFFFFFLL;
  v14 = *(_BYTE *)(v12 + 68);
  if ( (v14 & 1) == 0 )
    return 0xFFFFFFFFLL;
  v15 = *(_QWORD *)(v13 + 72);
  if ( (~v14 & 0xC) != 0 && (v14 & 0xC) != 0 )
    v15 = *(_QWORD *)(v15 + 8);
  if ( (*(_DWORD *)v15 & 0x20000) == 0 )
    return sub_781830();
  else
    return 0xFFFFFFFFLL;
}

