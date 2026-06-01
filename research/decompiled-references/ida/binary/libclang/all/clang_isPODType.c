__int64 __fastcall clang_isPODType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // [rsp+8h] [rbp-10h] BYREF

  v10 = a8;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  if ( !a9 )
    BUG();
  return (unsigned __int8)sub_B1AE20(&v10, *(_QWORD *)(*(_QWORD *)(a9 + 8) + 80LL));
}

