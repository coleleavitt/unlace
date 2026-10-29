__int64 __fastcall clang_Type_getObjCTypeArg(
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
  __int64 v9; // rax
  unsigned __int64 v10; // rdx

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 <= 1
    && (v9 = sub_B0DCB0(), a2 < v10) )
  {
    sub_690DD0(a1, *(_QWORD *)(v9 + 8LL * a2), a9);
    return a1;
  }
  else
  {
    sub_690DD0(a1, 0, a9);
    return a1;
  }
}

