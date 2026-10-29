__int64 __fastcall sub_D50160(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v6[2]; // [rsp+8h] [rbp-38h] BYREF
  int v7; // [rsp+10h] [rbp-30h] BYREF
  char v8; // [rsp+18h] [rbp-28h]
  _QWORD v9[4]; // [rsp+20h] [rbp-20h] BYREF

  *(_QWORD *)v6 = a3;
  v7 = a2;
  v8 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v9[0] = 0;
  v9[1] = 0;
  v4 = sub_15DCAD0(v3, (int)v6, 0);
  sub_15D0DF0(v9);
  sub_15D0DF0(&v7);
  return v4;
}

