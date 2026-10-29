__int64 __fastcall sub_DFB3C0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  __int64 *v3; // r13
  __int64 *v4; // r14
  unsigned int v5; // ebx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  _BOOL8 v15; // r13
  __int64 *v16; // [rsp+8h] [rbp-100h]
  __int64 *v17; // [rsp+10h] [rbp-F8h]
  __int64 v18; // [rsp+18h] [rbp-F0h]
  _BOOL8 v19; // [rsp+28h] [rbp-E0h]
  __int64 v20; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v22[48]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v23[48]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v24[104]; // [rsp+A0h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(v23);
  sub_E21790(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v22);
  sub_E21790(v2, 48);
  v18 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v24, (__int64)v22, 0);
  v3 = (__int64 *)sub_D0D9C0((__int64)v24);
  sub_E232A0(v24);
  sub_CFE430((__int64)v24, (__int64)v22, 1);
  v17 = (__int64 *)sub_D0D9C0((__int64)v24);
  sub_E232A0(v24);
  sub_CFE430((__int64)v24, (__int64)v23, 0);
  v4 = (__int64 *)sub_D0D9C0((__int64)v24);
  sub_E232A0(v24);
  sub_CFE430((__int64)v24, (__int64)v23, 1);
  v16 = (__int64 *)sub_D0D9C0((__int64)v24);
  sub_E232A0(v24);
  v20 = 0;
  if ( sub_D70600(*v3, *v4, &v20) )
    goto LABEL_2;
  v21 = 0;
  if ( sub_D70600(*v17, *v16, &v21) )
    goto LABEL_2;
  sub_CFE430((__int64)v24, v18, 0);
  v7 = (_QWORD *)sub_D0D9C0((__int64)v24);
  v8 = v20;
  v9 = v21;
  v10 = v20 - v21;
  *v7 = v20 - v21;
  if ( v8 <= 0 && v9 > 0 )
  {
    v19 = v10 >= 0;
    goto LABEL_8;
  }
  if ( v8 >= 0 && v9 < 0 )
  {
    v19 = v10 <= 0;
LABEL_8:
    sub_E232A0(v24);
    if ( v19 )
      goto LABEL_2;
    goto LABEL_9;
  }
  sub_E232A0(v24);
LABEL_9:
  sub_CFE430((__int64)v24, v18, 0);
  sub_E24D00(v24);
  sub_E232A0(v24);
  if ( !sub_D70600(*v3, *v16, &v20) && !sub_D70600(*v17, *v4, &v21) )
  {
    sub_CFE430((__int64)v24, v18, 1);
    v11 = (_QWORD *)sub_D0D9C0((__int64)v24);
    v12 = v20;
    v13 = v21;
    v14 = v20 + v21;
    *v11 = v20 + v21;
    if ( v12 <= 0 || v13 <= 0 )
    {
      if ( v12 >= 0 || v13 >= 0 )
      {
        sub_E232A0(v24);
        goto LABEL_15;
      }
      v15 = v14 >= 0;
    }
    else
    {
      v15 = v14 <= 0;
    }
    sub_E232A0(v24);
    if ( !v15 )
    {
LABEL_15:
      sub_CFE430((__int64)v24, v18, 1);
      sub_E24D00(v24);
      v5 = 1;
      sub_E232A0(v24);
      sub_E24D00(v18);
      goto LABEL_3;
    }
  }
LABEL_2:
  v5 = 0;
LABEL_3:
  sub_E232A0(v22);
  sub_E232A0(v23);
  return v5;
}
