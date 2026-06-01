__int64 __fastcall clang_Type_getObjCObjectBaseType(
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
  __int64 v9; // rdx

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF
    || (v9 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL), (unsigned int)*(unsigned __int8 *)(v9 + 16) - 34 > 1) )
  {
    sub_690DD0(a1, 0, a9);
    return a1;
  }
  else
  {
    sub_690DD0(a1, *(_QWORD *)(v9 + 24), a9);
    return a1;
  }
}

