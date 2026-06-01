__int64 __fastcall clang_Type_getObjCEncoding(
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
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  void *src; // [rsp+0h] [rbp-38h] BYREF
  size_t n; // [rsp+8h] [rbp-30h]
  _QWORD v15[5]; // [rsp+10h] [rbp-28h] BYREF

  if ( !a9 )
    BUG();
  v9 = *(_QWORD *)(a9 + 8);
  LOBYTE(v15[0]) = 0;
  v10 = *(_QWORD *)(v9 + 80);
  src = v15;
  n = 0;
  sub_711B20(v10, a8, &src, 0, 0);
  v11 = sub_6905C0(src, n);
  if ( src != v15 )
    operator delete(src, v15[0] + 1LL);
  return v11;
}

