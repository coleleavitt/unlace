__int64 __fastcall sub_D6F1B0(__int64 a1, __int64 a2)
{
  __int16 *v2; // r14
  __int16 *v3; // r15
  unsigned int v4; // ebx
  __int16 v6; // cx
  __int16 v7; // ax
  _WORD *v8; // rbp
  __int16 v9; // ax
  __int16 v10; // dx
  __int16 v11; // ax
  __int16 v12; // dx
  __int16 v13; // [rsp+8h] [rbp-110h]
  __int64 v14; // [rsp+10h] [rbp-108h]
  __int16 *v15; // [rsp+18h] [rbp-100h]
  __int16 *v16; // [rsp+20h] [rbp-F8h]
  _WORD *v17; // [rsp+30h] [rbp-E8h]
  __int16 v18; // [rsp+4Ch] [rbp-CCh] BYREF
  __int16 v19; // [rsp+4Eh] [rbp-CAh] BYREF
  _BYTE v20[48]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v21[48]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v22[13]; // [rsp+B0h] [rbp-68h] BYREF

  sub_D09010((__int64)v20, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v21, *(_QWORD *)(a1 + 176));
  v14 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v22, (__int64)v21, 0);
  v15 = (__int16 *)sub_D0CBD0((__int64)v22);
  sub_E232A0(v22);
  sub_CFE430((__int64)v22, (__int64)v21, 1);
  v16 = (__int16 *)sub_D0CBD0((__int64)v22);
  sub_E232A0(v22);
  sub_CFE430((__int64)v22, (__int64)v20, 0);
  v2 = (__int16 *)sub_D0CBD0((__int64)v22);
  sub_E232A0(v22);
  sub_CFE430((__int64)v22, (__int64)v20, 1);
  v3 = (__int16 *)sub_D0CBD0((__int64)v22);
  sub_E232A0(v22);
  if ( !*v2 && !*v3 )
    goto LABEL_3;
  v18 = 0;
  v19 = 0;
  if ( !sub_D6F0F0(*v2, *v2, &v18) )
    sub_D6F0F0(*v3, *v3, &v19);
  v6 = v18 + v19;
  if ( v18 <= 0 || v19 <= 0 )
  {
    if ( v18 >= 0 || v19 >= 0 )
      goto LABEL_12;
    v7 = (unsigned __int16)~v6 >> 15;
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
    v8 = (_WORD *)sub_D0CBD0((__int64)v22);
    sub_E232A0(v22);
    sub_CFE430((__int64)v22, v14, 1);
    v17 = (_WORD *)sub_D0CBD0((__int64)v22);
    sub_E232A0(v22);
    if ( sub_D6F0F0(*v15, *v2, &v18) || sub_D6F0F0(*v16, *v3, &v19) )
      goto LABEL_4;
    v9 = v18 + v19;
    if ( v18 <= 0 || v19 <= 0 )
    {
      if ( v18 >= 0 || v19 >= 0 )
        goto LABEL_19;
      v10 = (unsigned __int16)~v9 >> 15;
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
    if ( sub_D6F0F0(*v16, *v2, &v18) || sub_D6F0F0(*v15, *v3, &v19) )
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
      v12 = (unsigned __int16)~v11 >> 15;
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
