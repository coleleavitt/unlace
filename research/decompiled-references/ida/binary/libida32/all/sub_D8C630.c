_DWORD *__fastcall sub_D8C630(_QWORD *a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  int v6; // r10d
  char v8; // r13
  int v9; // r12d
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 v13; // rax
  __int64 v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = a4;
  v8 = a6;
  v9 = a5;
  a1[13] += 88LL;
  v15[0] = a2 | 2;
  v10 = a1[3];
  v11 = (__int64 *)((v10 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a1[4] >= (unsigned __int64)(v11 + 11) && v10 )
  {
    a1[3] = v11 + 11;
  }
  else
  {
    v13 = sub_962430((__int64)(a1 + 3), 88, 88, 4, a5, a6);
    v6 = a4;
    v11 = (__int64 *)v13;
  }
  sub_CCAE10((__int64)v11, v15, a3, 0x100000010LL, v6, 0, 0, 0);
  return sub_D8B950((__int64)a1, v11, v9, v8);
}

