__int64 __fastcall sub_CF4AD0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // r12
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  _BYTE v9[48]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  int v11; // [rsp+38h] [rbp-30h]

  v1 = *a1;
  v2 = *(_QWORD *)sub_E21760(*a1, 8);
  sub_E21790(v1, 8);
  v3 = *a1;
  v4 = sub_E21760(*a1, 64);
  sub_E23260(v9);
  v10 = *(_QWORD *)(v4 + 48);
  v11 = *(_DWORD *)(v4 + 56);
  sub_E21790(v3, 64);
  v5 = (_QWORD *)sub_E216C0(*a1, 8);
  v6 = *a1;
  *v5 = v2;
  v7 = sub_E216C0(v6, 64);
  sub_E231E0(v7, v9);
  *(_QWORD *)(v7 + 48) = v10;
  *(_DWORD *)(v7 + 56) = v11;
  sub_E232A0(v9);
  return 1;
}
