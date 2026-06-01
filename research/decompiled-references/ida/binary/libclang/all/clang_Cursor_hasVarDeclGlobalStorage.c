__int64 __fastcall clang_Cursor_hasVarDeclGlobalStorage(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edx
  char v10; // si
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // [rsp+0h] [rbp-28h]

  v25 = _mm_loadu_si128((const __m128i *)&a7);
  v7 = sub_63A250(a1, a2, a3, a4, a5, a6, v25.m128i_i32[0], v25.m128i_i64[1]);
  if ( v7 )
  {
    v8 = v7;
    v9 = -1;
    v10 = *(_BYTE *)(v7 + 28);
    v11 = v10 & 0x7F;
    v12 = v10 & 0x7F;
    if ( (unsigned int)(v11 - 38) > 6 )
      return v9;
    v13 = *(unsigned __int8 *)(v8 + 96);
    v14 = v13 & 7;
    if ( (*(_BYTE *)(v8 + 96) & 7) != 0 )
    {
      if ( (*(_BYTE *)(v8 + 96) & 7) != 5 )
        return (unsigned __int8)v14 <= 3u;
      if ( v11 == 38 || v11 == 44 )
      {
        v22 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
          v22 = *(_QWORD *)(v22 + 8);
        if ( v22 )
        {
          v23 = *(_BYTE *)(sub_79C2A0(v22, v12, v13, v14) + 8) & 0x7F;
          if ( (unsigned __int8)v23 > 0x10u )
          {
            if ( (((_BYTE)v23 + 96) & 0x7Fu) <= 5 )
              goto LABEL_25;
          }
          else
          {
            v24 = 65922;
            if ( _bittest64(&v24, v23) )
              goto LABEL_25;
          }
          LOBYTE(v12) = *(_BYTE *)(v8 + 28) & 0x7F;
        }
      }
      if ( (_BYTE)v12 == 41 )
      {
LABEL_25:
        LOBYTE(v14) = *(_BYTE *)(v8 + 96) & 7;
        return (unsigned __int8)v14 <= 3u;
      }
      return 1;
    }
    v16 = *(_QWORD *)(v8 + 48);
    v17 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v17 & 8) != 0
      && (unsigned int)((*(__int64 *)((char *)&qword_18 + (v17 & 0xFFFFFFFFFFFFFFF0LL))
                       | (unsigned __int64)(((unsigned __int8)v16 | (unsigned __int8)v17) & 7)) >> 9) == 3 )
    {
      return 1;
    }
    v18 = (unsigned int)v12 & 0xFFFFFFFD;
    if ( (_BYTE)v18 != 41 )
    {
      v19 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
        v19 = *(_QWORD *)(v19 + 8);
      v20 = *(_BYTE *)(sub_79C2A0(v19, v18, v13, v16) + 8) & 0x7F;
      if ( !v20 || v20 == 22 )
        return 1;
      if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x29 )
      {
        v21 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
          v21 = *(_QWORD *)v21;
        if ( ((*(_BYTE *)(v21 + 8) + 72) & 0x7Fu) <= 3 )
          return 1;
      }
      LOBYTE(v13) = *(_BYTE *)(v8 + 96);
    }
    return (v13 & 0x18) != 0;
  }
  return 0xFFFFFFFFLL;
}

