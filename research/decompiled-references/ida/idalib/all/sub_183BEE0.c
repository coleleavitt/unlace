__int64 __fastcall sub_183BEE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // r9

  v7 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = sub_F63270(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4 & 0xFFFFFFFFFFFFFFF0LL, a5, a6);
  v13 = sub_F63270(*v7, a2, v9, v10, v11, v12);
  return sub_183BAC0(a1, a2, (__int64)v13, (__int64)v8, a5, v14);
}
