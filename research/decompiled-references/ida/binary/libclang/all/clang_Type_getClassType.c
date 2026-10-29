__int64 __fastcall clang_Type_getClassType(
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
  unsigned __int64 v9; // rsi
  __int64 v10; // rax

  v9 = 0;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v10 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v10 )
    {
      if ( *(_BYTE *)(v10 + 16) == 32 )
        v9 = *(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  sub_690DD0(a1, v9, a9);
  return a1;
}

