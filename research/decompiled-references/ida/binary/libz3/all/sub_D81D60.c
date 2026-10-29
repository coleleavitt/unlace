__int64 __fastcall sub_D81D60(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5[2]; // [rsp+8h] [rbp-28h] BYREF
  int v6; // [rsp+10h] [rbp-20h] BYREF
  char v7; // [rsp+18h] [rbp-18h]

  *(_QWORD *)v5 = a3;
  v6 = a2;
  v7 = 0;
  v3 = sub_15DCAD0(*(_QWORD *)(a1 + 8), (int)v5, 0);
  sub_15D0DF0(&v6);
  return v3;
}

