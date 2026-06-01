_DWORD *__fastcall sub_9A3010(_QWORD *a1, _QWORD *a2, int a3, int a4, char a5)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h] BYREF

  v8 = *a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  if ( (*a2 & 2) == 0 )
    v8 = 2;
  v9 = a1[3];
  a1[13] += 80LL;
  v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[4] >= v10 + 80 && v9 )
  {
    a1[3] = v10 + 80;
  }
  else
  {
    v13 = v8;
    v12 = sub_9A15F0((__int64)(a1 + 3), 80, 4);
    v8 = v13;
    v10 = v12;
  }
  v14 = v8;
  sub_BEDD30(v10, (unsigned int)&v14, (_DWORD)a2, 16, a3, 0, 0, 0);
  return sub_9A2420((__int64)a1, v10, a4, a5);
}

