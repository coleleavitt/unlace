__int64 __fastcall clang_Cursor_isExternalSymbol(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        __int128 a7)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __m128i v14; // [rsp+0h] [rbp-48h]

  if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return 0;
  v14 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = sub_63A250((_DWORD)a1, (_DWORD)a2, (int)a7 - 1, a4, a5, a6, v14.m128i_i32[0], v14.m128i_i64[1]);
  v10 = sub_79E420(v9);
  v11 = v10;
  if ( !v10 )
    return 0;
  if ( a1 )
  {
    *a1 = sub_6905C0(*(void **)(v10 + 40), *(unsigned int *)(v10 + 36));
    a1[1] = v12;
  }
  if ( a2 )
  {
    *a2 = sub_6905C0(*(void **)(v11 + 56), *(unsigned int *)(v11 + 48));
    a2[1] = v13;
  }
  if ( a3 )
    *a3 = *(unsigned __int8 *)(v11 + 64);
  return 1;
}

