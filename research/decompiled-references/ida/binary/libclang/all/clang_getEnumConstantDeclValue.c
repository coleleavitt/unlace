__int64 __fastcall clang_getEnumConstantDeclValue(
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
  __int64 v13; // rsi
  void *v14; // rdi
  __int64 result; // rax
  __m128i v16; // [rsp+0h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-20h]
  void *v18; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-10h]

  v7 = (unsigned int)a7;
  if ( !(unsigned int)clang_isDeclaration((unsigned int)a7) )
    return 0x8000000000000000LL;
  v16 = _mm_loadu_si128((const __m128i *)&a7);
  v12 = sub_63A250(v7, a2, v8, v9, v10, v11, v16.m128i_i32[0], v16.m128i_i64[1]);
  if ( !v12 || (*(_BYTE *)(v12 + 28) & 0x7F) != 0x1F )
    return 0x8000000000000000LL;
  v13 = *(unsigned int *)(v12 + 64);
  v14 = *(void **)(v12 + 56);
  if ( (unsigned __int64)(v13 + 63) <= 0x7F
    || (sub_2585D40(&v18, v13, (unsigned __int64)(v13 + 63) >> 6, *(_QWORD *)(v12 + 56)),
        LODWORD(v13) = v19,
        v14 = v18,
        v19 <= 0x40) )
  {
    result = 0;
    if ( (_DWORD)v13 )
      return (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
  }
  else
  {
    result = *(_QWORD *)v18;
    if ( v18 )
    {
      v17 = *(_QWORD *)v18;
      operator delete[](v18);
      return v17;
    }
  }
  return result;
}

