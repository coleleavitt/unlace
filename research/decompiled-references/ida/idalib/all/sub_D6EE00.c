__int64 __fastcall sub_D6EE00(__int64 a1)
{
  char *v1; // r14
  char *v2; // r15
  unsigned int v3; // ebx
  _BYTE *v5; // rax
  char v6; // dl
  char v7; // si
  char v8; // cl
  _BYTE *v9; // rax
  char v10; // cl
  char v11; // si
  char v12; // dl
  char v13; // r13
  char *v14; // [rsp+8h] [rbp-100h]
  char *v15; // [rsp+10h] [rbp-F8h]
  __int64 v16; // [rsp+18h] [rbp-F0h]
  char v17; // [rsp+2Fh] [rbp-D9h]
  char v18; // [rsp+3Eh] [rbp-CAh] BYREF
  char v19; // [rsp+3Fh] [rbp-C9h] BYREF
  _BYTE v20[48]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v21[48]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v22[104]; // [rsp+A0h] [rbp-68h] BYREF

  sub_D09010((__int64)v21, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v20, *(_QWORD *)(a1 + 176));
  v16 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v22, (__int64)v20, 0);
  v1 = (char *)sub_D0C5D0((__int64)v22);
  sub_E232A0(v22);
  sub_CFE430((__int64)v22, (__int64)v20, 1);
  v15 = (char *)sub_D0C5D0((__int64)v22);
  sub_E232A0(v22);
  sub_CFE430((__int64)v22, (__int64)v21, 0);
  v2 = (char *)sub_D0C5D0((__int64)v22);
  sub_E232A0(v22);
  sub_CFE430((__int64)v22, (__int64)v21, 1);
  v14 = (char *)sub_D0C5D0((__int64)v22);
  sub_E232A0(v22);
  v18 = 0;
  if ( sub_D6E690(*v1, *v2, &v18) )
    goto LABEL_2;
  v19 = 0;
  if ( sub_D6E690(*v15, *v14, &v19) )
    goto LABEL_2;
  sub_CFE430((__int64)v22, v16, 0);
  v5 = (_BYTE *)sub_D0C5D0((__int64)v22);
  v6 = v18;
  v7 = v19;
  v8 = v18 - v19;
  *v5 = v18 - v19;
  if ( v6 <= 0 && v7 > 0 )
  {
    v17 = (unsigned __int8)~v8 >> 7;
    goto LABEL_8;
  }
  if ( v6 >= 0 && v7 < 0 )
  {
    v17 = v8 <= 0;
LABEL_8:
    sub_E232A0(v22);
    if ( v17 )
      goto LABEL_2;
    goto LABEL_9;
  }
  sub_E232A0(v22);
LABEL_9:
  sub_CFE430((__int64)v22, v16, 0);
  sub_E24D00(v22);
  sub_E232A0(v22);
  if ( !sub_D6E690(*v1, *v14, &v18) && !sub_D6E690(*v15, *v2, &v19) )
  {
    sub_CFE430((__int64)v22, v16, 1);
    v9 = (_BYTE *)sub_D0C5D0((__int64)v22);
    v10 = v18;
    v11 = v19;
    v12 = v18 + v19;
    *v9 = v18 + v19;
    if ( v10 <= 0 || v11 <= 0 )
    {
      if ( v10 >= 0 || v11 >= 0 )
      {
        sub_E232A0(v22);
        goto LABEL_15;
      }
      v13 = (unsigned __int8)~v12 >> 7;
    }
    else
    {
      v13 = v12 <= 0;
    }
    sub_E232A0(v22);
    if ( !v13 )
    {
LABEL_15:
      sub_CFE430((__int64)v22, v16, 1);
      sub_E24D00(v22);
      v3 = 1;
      sub_E232A0(v22);
      sub_E24D00(v16);
      goto LABEL_3;
    }
  }
LABEL_2:
  v3 = 0;
LABEL_3:
  sub_E232A0(v20);
  sub_E232A0(v21);
  return v3;
}
