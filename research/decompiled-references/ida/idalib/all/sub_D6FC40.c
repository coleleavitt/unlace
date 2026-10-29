__int64 __fastcall sub_D6FC40(__int64 a1, __int64 a2)
{
  int *v2; // r14
  int *v3; // r15
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  _BOOL4 v9; // eax
  _DWORD *v10; // rbp
  int v11; // eax
  _BOOL4 v12; // edx
  int v13; // eax
  _BOOL4 v14; // edx
  int v15; // [rsp+8h] [rbp-110h]
  __int64 v16; // [rsp+10h] [rbp-108h]
  int *v17; // [rsp+18h] [rbp-100h]
  int *v18; // [rsp+20h] [rbp-F8h]
  _DWORD *v19; // [rsp+30h] [rbp-E8h]
  int v20; // [rsp+48h] [rbp-D0h] BYREF
  int v21; // [rsp+4Ch] [rbp-CCh] BYREF
  _BYTE v22[48]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v23[48]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v24[13]; // [rsp+B0h] [rbp-68h] BYREF

  sub_D09010((__int64)v22, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v23, *(_QWORD *)(a1 + 176));
  v16 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v24, (__int64)v23, 0);
  v17 = (int *)sub_D0D1D0((__int64)v24);
  sub_E232A0(v24);
  sub_CFE430((__int64)v24, (__int64)v23, 1);
  v18 = (int *)sub_D0D1D0((__int64)v24);
  sub_E232A0(v24);
  sub_CFE430((__int64)v24, (__int64)v22, 0);
  v2 = (int *)sub_D0D1D0((__int64)v24);
  sub_E232A0(v24);
  sub_CFE430((__int64)v24, (__int64)v22, 1);
  v3 = (int *)sub_D0D1D0((__int64)v24);
  sub_E232A0(v24);
  if ( !*v2 && !*v3 )
    goto LABEL_3;
  v20 = 0;
  v21 = 0;
  if ( sub_D6FBB0(*v2, *v2, &v20) )
  {
    v6 = v20;
    v7 = v21;
    v8 = v20 + v21;
    if ( v20 <= 0 )
      goto LABEL_25;
  }
  else
  {
    sub_D6FBB0(*v3, *v3, &v21);
    v6 = v20;
    v7 = v21;
    v8 = v20 + v21;
    if ( v20 <= 0 )
      goto LABEL_25;
  }
  if ( v7 > 0 )
  {
    v9 = v8 <= 0;
    goto LABEL_10;
  }
LABEL_25:
  if ( v6 >= 0 || v7 >= 0 )
    goto LABEL_11;
  v9 = v8 >= 0;
LABEL_10:
  if ( v9 )
    goto LABEL_4;
LABEL_11:
  if ( v8 )
  {
    v15 = v8;
    sub_CFE430((__int64)v24, v16, 0);
    v10 = (_DWORD *)sub_D0D1D0((__int64)v24);
    sub_E232A0(v24);
    sub_CFE430((__int64)v24, v16, 1);
    v19 = (_DWORD *)sub_D0D1D0((__int64)v24);
    sub_E232A0(v24);
    if ( sub_D6FBB0(*v17, *v2, &v20) || sub_D6FBB0(*v18, *v3, &v21) )
      goto LABEL_4;
    v11 = v20 + v21;
    if ( v20 <= 0 || v21 <= 0 )
    {
      if ( v20 >= 0 || v21 >= 0 )
        goto LABEL_18;
      v12 = v11 >= 0;
    }
    else
    {
      v12 = v11 <= 0;
    }
    if ( v12 )
    {
      *v10 = v11;
      goto LABEL_4;
    }
LABEL_18:
    *v10 = v11 / v15;
    sub_CFE430((__int64)v24, v16, 0);
    sub_E24D00(v24);
    sub_E232A0(v24);
    if ( sub_D6FBB0(*v18, *v2, &v20) || sub_D6FBB0(*v17, *v3, &v21) )
      goto LABEL_4;
    v13 = v20 - v21;
    if ( v20 > 0 || v21 <= 0 )
    {
      if ( v20 < 0 || v21 >= 0 )
        goto LABEL_24;
      v14 = v13 <= 0;
    }
    else
    {
      v14 = v13 >= 0;
    }
    if ( v14 )
    {
      *v19 = v13;
      goto LABEL_4;
    }
LABEL_24:
    *v19 = v13 / v15;
    sub_CFE430((__int64)v24, v16, 1);
    sub_E24D00(v24);
    v4 = 1;
    sub_E232A0(v24);
    sub_E24D00(v16);
    goto LABEL_5;
  }
LABEL_3:
  v24[0] = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  sub_E33BA0(a1, v24, 2508, 0);
LABEL_4:
  v4 = 0;
LABEL_5:
  sub_E232A0(v23);
  sub_E232A0(v22);
  return v4;
}
