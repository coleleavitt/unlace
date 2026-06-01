__int64 __fastcall sub_D706B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 *v3; // r15
  unsigned int v4; // ebx
  __int64 v6; // rcx
  _BOOL8 v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rax
  _BOOL8 v10; // rdx
  __int64 v11; // rax
  _BOOL8 v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-110h]
  __int64 v14; // [rsp+10h] [rbp-108h]
  __int64 *v15; // [rsp+18h] [rbp-100h]
  __int64 *v16; // [rsp+20h] [rbp-F8h]
  _QWORD *v17; // [rsp+30h] [rbp-E8h]
  __int64 v18; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v20[48]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v21[48]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v22[13]; // [rsp+B0h] [rbp-68h] BYREF

  sub_D09010((__int64)v20, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v21, *(_QWORD *)(a1 + 176));
  v14 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v22, (__int64)v21, 0);
  v15 = (__int64 *)sub_D0D9C0((__int64)v22);
  sub_E232A0(v22);
  sub_CFE430((__int64)v22, (__int64)v21, 1);
  v16 = (__int64 *)sub_D0D9C0((__int64)v22);
  sub_E232A0(v22);
  sub_CFE430((__int64)v22, (__int64)v20, 0);
  v2 = (__int64 *)sub_D0D9C0((__int64)v22);
  sub_E232A0(v22);
  sub_CFE430((__int64)v22, (__int64)v20, 1);
  v3 = (__int64 *)sub_D0D9C0((__int64)v22);
  sub_E232A0(v22);
  if ( !*v2 && !*v3 )
    goto LABEL_3;
  v18 = 0;
  v19 = 0;
  if ( !sub_D70600(*v2, *v2, &v18) )
    sub_D70600(*v3, *v3, &v19);
  v6 = v18 + v19;
  if ( v18 <= 0 || v19 <= 0 )
  {
    if ( v18 >= 0 || v19 >= 0 )
      goto LABEL_12;
    v7 = v6 >= 0;
  }
  else
  {
    v7 = v6 <= 0;
  }
  if ( v7 )
    goto LABEL_4;
LABEL_12:
  if ( v6 )
  {
    v13 = v18 + v19;
    sub_CFE430((__int64)v22, v14, 0);
    v8 = (_QWORD *)sub_D0D9C0((__int64)v22);
    sub_E232A0(v22);
    sub_CFE430((__int64)v22, v14, 1);
    v17 = (_QWORD *)sub_D0D9C0((__int64)v22);
    sub_E232A0(v22);
    if ( sub_D70600(*v15, *v2, &v18) || sub_D70600(*v16, *v3, &v19) )
      goto LABEL_4;
    v9 = v18 + v19;
    if ( v18 <= 0 || v19 <= 0 )
    {
      if ( v18 >= 0 || v19 >= 0 )
        goto LABEL_19;
      v10 = v9 >= 0;
    }
    else
    {
      v10 = v9 <= 0;
    }
    if ( v10 )
    {
      *v8 = v9;
      goto LABEL_4;
    }
LABEL_19:
    *v8 = v9 / v13;
    sub_CFE430((__int64)v22, v14, 0);
    sub_E24D00(v22);
    sub_E232A0(v22);
    if ( sub_D70600(*v16, *v2, &v18) || sub_D70600(*v15, *v3, &v19) )
      goto LABEL_4;
    v11 = v18 - v19;
    if ( v18 > 0 || v19 <= 0 )
    {
      if ( v18 < 0 || v19 >= 0 )
        goto LABEL_25;
      v12 = v11 <= 0;
    }
    else
    {
      v12 = v11 >= 0;
    }
    if ( v12 )
    {
      *v17 = v11;
      goto LABEL_4;
    }
LABEL_25:
    *v17 = v11 / v13;
    sub_CFE430((__int64)v22, v14, 1);
    sub_E24D00(v22);
    v4 = 1;
    sub_E232A0(v22);
    sub_E24D00(v14);
    goto LABEL_5;
  }
LABEL_3:
  v22[0] = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  sub_E33BA0(a1, v22, 2508, 0);
LABEL_4:
  v4 = 0;
LABEL_5:
  sub_E232A0(v21);
  sub_E232A0(v20);
  return v4;
}
