__int64 __fastcall sub_D05C80(__int64 a1, int a2, _QWORD *a3)
{
  int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rbx
  _BYTE v10[48]; // [rsp-30h] [rbp-E8h] BYREF
  _BYTE v11[48]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-88h]
  int v13; // [rsp+38h] [rbp-80h]
  _QWORD v14[3]; // [rsp+40h] [rbp-78h] BYREF
  int v15; // [rsp+58h] [rbp-60h]
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+68h] [rbp-50h]
  __int64 v18; // [rsp+70h] [rbp-48h]
  int v19; // [rsp+78h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a3;
  v6 = sub_E21760(v5, 64);
  sub_E23260(v14);
  v18 = *(_QWORD *)(v6 + 48);
  v19 = *(_DWORD *)(v6 + 56);
  sub_E21790(v5, 64);
  v7 = *(_QWORD *)(a1 + 560);
  if ( v15 && v15 != 2 )
  {
    if ( v15 != 3 && !(v14[0] | v17) )
      goto LABEL_7;
    goto LABEL_9;
  }
  if ( v16 )
LABEL_9:
    v4 = v19 + a2;
LABEL_7:
  v8 = v18;
  sub_E231E0(v10, v14);
  sub_E231E0(v11, v10);
  v12 = v8;
  v13 = v4;
  sub_E232A0(v10);
  v9 = sub_E216C0(v7, 64);
  sub_E23260(v9);
  *(_QWORD *)(v9 + 48) = v12;
  *(_DWORD *)(v9 + 56) = v13;
  sub_E232A0(v11);
  sub_E232A0(v14);
  return 1;
}
