__int64 __fastcall clang_Cursor_getTemplateArgumentType(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        const __m128i a8)
{
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 CursorKind; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // rax
  _DWORD *v20; // rdx
  __int64 v21; // rsi
  __m128i v22; // [rsp+20h] [rbp-48h]
  __m128i v23; // [rsp+30h] [rbp-38h]

  v8 = a8.m128i_i64[1];
  v9 = *((_QWORD *)&a7 + 1);
  v22 = _mm_loadu_si128((const __m128i *)&a7);
  v23 = _mm_loadu_si128(&a8);
  CursorKind = clang_getCursorKind(a1, a2, a3, a4, a5, a6, v22.m128i_i32[0]);
  if ( (unsigned int)CursorKind > 0x20 )
    goto LABEL_2;
  v15 = 0xFFFFFFFEFFFFFEEBLL;
  if ( _bittest64((const __int64 *)&v15, CursorKind) || !v9 )
    goto LABEL_2;
  v16 = *(_BYTE *)(v9 + 28) & 0x7F;
  v17 = (unsigned int)(v16 - 32);
  if ( (unsigned int)v17 <= 5 )
  {
    v18 = sub_780F50(v9, a2, v17, v11, v12, v13, v22.m128i_i64[0], v22.m128i_i64[1], v23.m128i_i64[0], v23.m128i_i64[1]);
    if ( v18 )
    {
      v19 = *(_DWORD **)(v18 + 24);
      if ( (unsigned int)a2 < *v19 )
        goto LABEL_8;
    }
LABEL_2:
    sub_690DD0(a1, 0, v8);
    return a1;
  }
  if ( (unsigned int)(v16 - 58) > 1 )
    goto LABEL_2;
  v19 = *(_DWORD **)(v9 + 168);
  if ( (unsigned int)a2 >= *v19 )
    goto LABEL_2;
LABEL_8:
  v20 = &v19[6 * (unsigned int)a2 + 2];
  v21 = *(_QWORD *)&v19[6 * (unsigned int)a2 + 4];
  if ( (*v20 & 0x7FFFFFFF) == 1 )
    sub_690DD0(a1, v21, v8);
  else
    sub_690DD0(a1, 0, v8);
  return a1;
}

