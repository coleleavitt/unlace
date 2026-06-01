__int64 __fastcall clang_Type_getCXXRefQualifier(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rdi
  __int64 result; // rax
  char v10; // dl

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  v8 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      return 0;
    v8 = sub_B0D320(v8);
    if ( !v8 )
      return 0;
  }
  result = 1;
  v10 = *(_BYTE *)(v8 + 20) & 3;
  if ( v10 != 1 )
    return 2 * (unsigned int)(v10 == 2);
  return result;
}

