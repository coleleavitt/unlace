__int64 __fastcall clang_getNumArgTypes(
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
  unsigned __int64 v9; // rbx
  char v10; // dl
  __int64 result; // rax

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = a8 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(_BYTE *)(v8 + 16);
  if ( v10 == 26 )
    return (unsigned __int16)(*(_DWORD *)(v8 + 20) >> 6);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
  {
    v8 = sub_B0D320(v8);
    if ( v8 )
      return (unsigned __int16)(*(_DWORD *)(v8 + 20) >> 6);
    v8 = *(_QWORD *)v9;
    v10 = *(_BYTE *)(*(_QWORD *)v9 + 16LL);
  }
  result = 0;
  if ( v10 != 25 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 25 )
      return (unsigned int)-(sub_B0D320(v8) == 0);
    return 0xFFFFFFFFLL;
  }
  return result;
}

