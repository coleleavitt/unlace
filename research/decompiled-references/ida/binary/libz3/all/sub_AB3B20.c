__int64 __fastcall sub_AB3B20(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v10[2]; // [rsp+18h] [rbp-48h] BYREF
  int v11; // [rsp+20h] [rbp-40h] BYREF
  char v12; // [rsp+28h] [rbp-38h]

  v1 = (__int64 *)*a1;
  v2 = *(_QWORD *)(*(_QWORD *)*a1 + 24LL);
  sub_15E1A70(v2);
  v3 = *(_QWORD *)(*v1 + 24);
  v4 = *(_QWORD *)v1[3];
  v11 = *(_DWORD *)v1[2];
  v12 = 0;
  *(_QWORD *)v10 = v4;
  sub_15DCAD0(v3, (int)v10, 0);
  sub_15D0DF0(&v11);
  sub_15E1A70(v3);
  v5 = *v1;
  v6 = *(_DWORD *)v1[2];
  v7 = *(_QWORD *)v1[1];
  v12 = 0;
  v8 = *(_QWORD *)(v5 + 24);
  v11 = v6;
  *(_QWORD *)v10 = v7;
  sub_15DCAD0(v8, (int)v10, 0);
  sub_15D0DF0(&v11);
  sub_15E1B70(v3);
  return sub_15E1B70(v2);
}

