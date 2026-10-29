__int64 __fastcall sub_DB65C0(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  _BYTE v6[48]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v7[7]; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+68h] [rbp-30h]

  v1 = *a1;
  v2 = sub_E21760(*a1, 64);
  sub_E23260(v7);
  v7[6] = *(_QWORD *)(v2 + 48);
  v8 = *(_DWORD *)(v2 + 56);
  sub_E21790(v1, 64);
  v3 = *a1;
  sub_E23220(v6, v7[4], (unsigned int)(LODWORD(v7[0]) - v8), (unsigned int)(LODWORD(v7[0]) - v8));
  v4 = sub_E216C0(v3, 48);
  sub_E23260(v4);
  sub_E232A0(v6);
  sub_E232A0(v7);
  return 1;
}
