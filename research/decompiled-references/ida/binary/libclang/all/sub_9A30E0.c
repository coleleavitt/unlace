_DWORD *__fastcall sub_9A30E0(_QWORD *a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v12; // rax
  int v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+18h] [rbp-40h] BYREF

  v9 = a1[3];
  a1[13] += 80LL;
  v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[4] >= v10 + 80 && v9 )
  {
    a1[3] = v10 + 80;
  }
  else
  {
    v13 = a4;
    v12 = sub_9A15F0((__int64)(a1 + 3), 80, 4);
    a4 = v13;
    v10 = v12;
  }
  v14 = a2 | 2;
  sub_BED7E0(v10, (unsigned int)&v14, a3, 16, a4, 0, 0, 0);
  return sub_9A2420((__int64)a1, v10, a5, a6);
}

