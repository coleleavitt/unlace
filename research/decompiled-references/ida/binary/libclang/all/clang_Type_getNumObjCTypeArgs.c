__int64 __fastcall clang_Type_getNumObjCTypeArgs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v9; // edx

  result = 0;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 <= 1 )
  {
    sub_B0DCB0();
    return v9;
  }
  return result;
}

