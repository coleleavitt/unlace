__int64 __fastcall clang_Type_getObjCProtocolDecl(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdx
  __int64 v10; // rsi

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF
    && (v9 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL), (unsigned int)*(unsigned __int8 *)(v9 + 16) - 34 <= 1)
    && (v10 = *(_QWORD *)(v9 + 8 * (a2 + (unsigned __int64)((*(_WORD *)(v9 + 18) >> 3) & 0x7F)) + 48)) != 0 )
  {
    sub_639160(a1, v10, a9, 0, 1u);
    return a1;
  }
  else
  {
    sub_638F50(a1, 71, 0);
    return a1;
  }
}

