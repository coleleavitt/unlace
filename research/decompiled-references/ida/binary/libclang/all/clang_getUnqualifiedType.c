__int64 __fastcall clang_getUnqualifiedType(
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

  v9 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)(v9 + 8);
  if ( (v10 & 7) != 0 || (v9 &= 0xFFFFFFFFFFFFFFF0LL, (v10 & 8) != 0) )
    v9 = sub_B0CF30(a8, v9) & 0xFFFFFFFFFFFFFFF0LL;
  sub_690DD0(a1, v9, a9);
  return a1;
}

