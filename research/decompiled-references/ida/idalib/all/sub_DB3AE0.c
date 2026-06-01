__int64 __fastcall sub_DB3AE0(_QWORD *a1, int a2)
{
  int v2; // r13d
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rbx
  _BYTE v9[48]; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-B8h] BYREF
  int v11; // [rsp+48h] [rbp-A0h]
  __int64 v12; // [rsp+50h] [rbp-98h]
  __int64 v13; // [rsp+58h] [rbp-90h]
  __int64 v14; // [rsp+60h] [rbp-88h]
  int v15; // [rsp+68h] [rbp-80h]
  _BYTE v16[48]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-48h]
  int v18; // [rsp+A8h] [rbp-40h]

  v2 = a2;
  v3 = *a1;
  v4 = sub_E21760(*a1, 64);
  sub_E23260(v10);
  v14 = *(_QWORD *)(v4 + 48);
  v15 = *(_DWORD *)(v4 + 56);
  sub_E21790(v3, 64);
  v5 = *a1;
  if ( !v11 || v11 == 2 )
  {
    if ( !v12 )
      goto LABEL_5;
LABEL_7:
    v2 = v15 + a2;
    goto LABEL_5;
  }
  if ( v11 == 3 || v10[0] | v13 )
    goto LABEL_7;
LABEL_5:
  v6 = v14;
  sub_E231E0(v9, v10);
  sub_E231E0(v16, v9);
  v17 = v6;
  v18 = v2;
  sub_E232A0(v9);
  v7 = sub_E216C0(v5, 64);
  sub_E23260(v7);
  *(_QWORD *)(v7 + 48) = v17;
  *(_DWORD *)(v7 + 56) = v18;
  sub_E232A0(v16);
  sub_E232A0(v10);
  return 1;
}
