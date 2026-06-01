__int64 __fastcall clang_Type_getNumObjCProtocolRefs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // edx
  __int64 v9; // rcx

  v8 = 0;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v9 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 34 <= 1 )
      return *(_BYTE *)(v9 + 19) >> 2;
  }
  return v8;
}

