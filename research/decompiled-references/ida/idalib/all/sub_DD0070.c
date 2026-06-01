__int64 __fastcall sub_DD0070(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned int v5; // r12d
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  _BYTE v13[48]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  unsigned int v17; // [rsp+58h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v13);
  sub_E21790(v4, 48);
  v5 = sub_DCC160(a1, a2, (__int64)v13, 0);
  if ( (_BYTE)v5 )
  {
    v7 = *(_QWORD *)(a1 + 176);
    sub_CFE430((__int64)v14, (__int64)v13, a3);
    if ( v15 )
    {
      v9 = v14[0];
      v10 = v16;
    }
    else
    {
      v8 = sub_CFDF60((__int64)v14);
      v9 = v14[0];
      v10 = v16;
      if ( *(_BYTE *)(v8 + 60) )
      {
        v11 = v16 + v17 + 72;
        if ( v17 == v14[0] )
          goto LABEL_6;
      }
    }
    v11 = v10 + v9 + 40;
LABEL_6:
    v12 = sub_E216C0(v7, 48);
    sub_E231E0(v12, v11);
    sub_E232A0(v14);
  }
  sub_E232A0(v13);
  return v5;
}
