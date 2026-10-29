__int64 __fastcall sub_CFFEE0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rbp
  unsigned int v6; // ebp
  __int64 v7; // rax
  _BYTE v8[48]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int8 v9; // [rsp+30h] [rbp-78h]
  _BYTE v10[48]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 560);
  v4 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  v5 = sub_E21760(v3, 64);
  sub_E23260(v10);
  v11 = *(_QWORD *)(v5 + 48);
  v12 = *(_DWORD *)(v5 + 56);
  sub_E21790(v3, 64);
  sub_E33DF0(v8, v10, *(_QWORD *)(a1 + 568));
  v6 = v9;
  if ( v9 )
  {
    v7 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
    sub_E231E0(v7, v8);
    if ( v9 )
      sub_E232A0(v8);
  }
  else
  {
    v6 = sub_CFEE20(a1 + 384, v4);
  }
  sub_E232A0(v10);
  return v6;
}
