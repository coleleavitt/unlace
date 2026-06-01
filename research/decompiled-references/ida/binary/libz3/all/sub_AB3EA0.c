__int64 __fastcall sub_AB3EA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v5[2]; // [rsp+8h] [rbp-28h] BYREF
  int v6; // [rsp+10h] [rbp-20h] BYREF
  char v7; // [rsp+18h] [rbp-18h]

  v6 = a3;
  *(_QWORD *)v5 = a2;
  v7 = 0;
  v3 = sub_15DCAD0(*(_QWORD *)(a1 + 24), (int)v5, 0);
  sub_15D0DF0(&v6);
  return v3;
}

