_BOOL8 __fastcall clang_CXXMethod_isVirtual(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  _BOOL8 result; // rax
  __int64 v8; // rdi
  _BYTE *v9; // rax
  __int64 v10; // rdi
  __m128i v11; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return 0;
  v11 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v11.m128i_i32[0], v11.m128i_i64[1]);
  if ( !v8 )
    return 0;
  v9 = (_BYTE *)sub_7984D0(v8);
  if ( !v9 || (v9[28] & 0x7Fu) - 33 > 3 )
    return 0;
  v10 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 32LL))(v9);
  result = 1;
  if ( (*(_BYTE *)(v10 + 82) & 0xC) == 0 )
    return (unsigned int)sub_7A5910() != 0;
  return result;
}

