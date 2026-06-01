const char *__fastcall clang_getTypedefName(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  char *v10; // r12
  void *v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h] BYREF

  v8 = sub_B10DA0(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL), a2);
  if ( !v8 )
    return sub_690460();
  v9 = *(_QWORD *)(v8 + 32);
  if ( !v9 )
    return sub_690460();
  sub_791DD0(&v12, v9 + 40);
  v10 = sub_6904D0((const char *)v12);
  if ( v12 != &v13 )
    operator delete(v12, v13 + 1);
  return v10;
}

