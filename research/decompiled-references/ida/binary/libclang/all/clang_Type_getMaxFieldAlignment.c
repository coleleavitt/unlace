__int64 __fastcall clang_Type_getMaxFieldAlignment(
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
  if ( !a7 )
    return 0;
  if ( !a9 )
    BUG();
  return sub_70EBE0(*(_QWORD *)(*(_QWORD *)(a9 + 8) + 80LL), a8);
}

