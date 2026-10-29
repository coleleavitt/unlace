__int64 __fastcall sub_D81CD0(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v7[2]; // [rsp+8h] [rbp-38h] BYREF
  int v8; // [rsp+10h] [rbp-30h] BYREF
  char v9; // [rsp+18h] [rbp-28h]
  int v10; // [rsp+20h] [rbp-20h] BYREF
  char v11; // [rsp+28h] [rbp-18h]

  *(_QWORD *)v7 = a4;
  v8 = a2;
  v10 = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  v11 = 0;
  v5 = sub_15DCAD0(v4, (int)v7, 0);
  sub_15D0DF0(&v10);
  sub_15D0DF0(&v8);
  return v5;
}

