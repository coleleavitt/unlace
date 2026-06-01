__int64 __fastcall sub_CF79C0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  __int64 v3; // r12
  int v4; // r15d
  __int64 v5; // r13
  __int64 v7; // [rsp+0h] [rbp-158h]
  __int64 v8; // [rsp+8h] [rbp-150h]
  _BYTE v9[48]; // [rsp+10h] [rbp-148h] BYREF
  _BYTE v10[48]; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v11[48]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v12[48]; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+D0h] [rbp-88h]
  int v14; // [rsp+D8h] [rbp-80h]
  _BYTE v15[48]; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+110h] [rbp-48h]
  int v17; // [rsp+118h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_E21760(v1, 64);
  sub_E23260(v12);
  v13 = *(_QWORD *)(v2 + 48);
  v14 = *(_DWORD *)(v2 + 56);
  sub_E21790(v1, 64);
  v3 = *(_QWORD *)(a1 + 176);
  sub_E21760(v3, 48);
  sub_E23260(v10);
  sub_E21790(v3, 48);
  v7 = *(_QWORD *)(a1 + 176);
  sub_E231E0(v11, v10);
  v4 = v14;
  v8 = v13;
  sub_E231E0(v9, v11);
  sub_E231E0(v15, v9);
  v17 = v4;
  v16 = v8;
  sub_E232A0(v9);
  v5 = sub_E216C0(v7, 64);
  sub_E23260(v5);
  *(_QWORD *)(v5 + 48) = v16;
  *(_DWORD *)(v5 + 56) = v17;
  sub_E232A0(v15);
  sub_E232A0(v11);
  sub_E232A0(v10);
  sub_E232A0(v12);
  return 1;
}
