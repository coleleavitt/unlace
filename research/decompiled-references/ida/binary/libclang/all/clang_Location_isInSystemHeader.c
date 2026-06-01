__int64 __fastcall clang_Location_isInSystemHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 result; // rax
  int v10; // eax

  result = 0;
  if ( a9 )
  {
    v10 = sub_CAE830(a7);
    return (v10 != 0) & (unsigned __int8)(v10 != 3);
  }
  return result;
}

