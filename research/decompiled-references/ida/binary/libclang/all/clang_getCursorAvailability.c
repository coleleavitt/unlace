__int64 __fastcall clang_getCursorAvailability(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 v8; // rbx
  unsigned int v9; // eax
  _QWORD *v10; // rdi
  __m128i v11; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return 0;
  v11 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v11.m128i_i32[0], v11.m128i_i64[1]);
  if ( !v8 )
    return 0;
  while ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 32 > 5
       || (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8) + 82) & 0x40) == 0 )
  {
    v9 = sub_799310(v8, 0, 0, 0, 0);
    if ( v9 == 2 )
      return 1;
    if ( v9 > 2 )
      break;
    if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x1F )
      return 0;
    v10 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
      v10 = (_QWORD *)*v10;
    v8 = sub_79A2E0(v10);
  }
  return 2;
}

