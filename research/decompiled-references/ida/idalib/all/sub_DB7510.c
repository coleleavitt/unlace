__int64 __fastcall sub_DB7510(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-98h] BYREF
  __int128 v7; // [rsp+8h] [rbp-90h]
  int v8; // [rsp+18h] [rbp-80h]
  __int64 v9; // [rsp+20h] [rbp-78h]
  __int64 v10; // [rsp+28h] [rbp-70h]
  _BYTE v11[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]

  v1 = *a1;
  v2 = sub_E21760(*a1, 64);
  sub_E23260(v11);
  v12 = *(_QWORD *)(v2 + 48);
  v13 = *(_DWORD *)(v2 + 56);
  sub_E21790(v1, 64);
  v3 = *a1;
  v7 = 0;
  v6 = 0;
  v8 = 1;
  v10 = 17;
  v9 = 0;
  v4 = sub_E216C0(v3, 48);
  sub_E23260(v4);
  sub_E232A0(&v6);
  sub_E232A0(v11);
  return 1;
}
