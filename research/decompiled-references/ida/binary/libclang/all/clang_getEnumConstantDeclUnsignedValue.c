__int64 __fastcall clang_getEnumConstantDeclUnsignedValue(
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
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  __m128i v17; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-20h]
  void *v19; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-10h]

  v7 = (unsigned int)a7;
  if ( !(unsigned int)clang_isDeclaration((unsigned int)a7) )
    return -1;
  v17 = _mm_loadu_si128((const __m128i *)&a7);
  v13 = sub_63A250(v7, a2, v8, v9, v10, v11, v17.m128i_i32[0], v17.m128i_i64[1]);
  if ( !v13 || (*(_BYTE *)(v13 + 28) & 0x7F) != 0x1F )
    return -1;
  v14 = *(unsigned int *)(v13 + 64);
  result = *(_QWORD *)(v13 + 56);
  v15 = v14;
  v16 = v14 + 63;
  if ( v16 > 0x7F )
  {
    sub_2585D40(&v19, v15, v16 >> 6, result);
    if ( v20 <= 0x40 )
    {
      return (__int64)v19;
    }
    else
    {
      result = *(_QWORD *)v19;
      if ( v19 )
      {
        v18 = *(_QWORD *)v19;
        operator delete[](v19);
        return v18;
      }
    }
  }
  return result;
}

