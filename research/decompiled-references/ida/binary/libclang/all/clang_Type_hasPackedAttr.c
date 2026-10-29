__int64 __fastcall clang_Type_hasPackedAttr(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 result; // rax

  result = a7;
  if ( a7 )
  {
    if ( !a9 )
      BUG();
    return (unsigned __int8)sub_6BF200(*(_QWORD *)(*(_QWORD *)(a9 + 8) + 80LL), a8);
  }
  return result;
}

