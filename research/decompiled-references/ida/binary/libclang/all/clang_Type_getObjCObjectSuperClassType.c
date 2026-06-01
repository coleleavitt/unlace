__int64 __fastcall clang_Type_getObjCObjectSuperClassType(
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
  __int64 v9; // r12
  __int64 v10; // rsi

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF
    || (v9 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL), (unsigned int)*(unsigned __int8 *)(v9 + 16) - 34 > 1) )
  {
    sub_690DD0(a1, 0, a9);
    return a1;
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 32);
    if ( (v10 & 8) == 0 )
    {
      sub_B128A0(v9);
      v10 = *(_QWORD *)(v9 + 32);
    }
    sub_690DD0(a1, v10 & 0xFFFFFFFFFFFFFFF0LL, a9);
    return a1;
  }
}

