__int64 __fastcall sub_40C0A0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // rdx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // eax
  double v11; // xmm1_8
  __int64 v12; // rax
  _BYTE *v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-78h] BYREF
  double v19; // [rsp+8h] [rbp-70h] BYREF
  double *v20; // [rsp+10h] [rbp-68h] BYREF
  int v21; // [rsp+1Ch] [rbp-5Ch] BYREF
  _BYTE v22[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v23[8]; // [rsp+40h] [rbp-38h] BYREF
  int v24; // [rsp+48h] [rbp-30h]

  if ( a3 == 2 )
  {
    v8 = a4[1];
    v9 = sub_47CE30(a2, v8, &v20, &v21);
    LODWORD(v6) = 1;
    if ( v9 )
      return (unsigned int)v6;
    if ( v21 == 4 )
    {
      v11 = *v20;
      v19 = v11;
      if ( v11 >= 0.0 )
      {
        if ( v11 <= 9.007199254740991e15 )
          goto LABEL_12;
        v13 = v23;
        v16 = sub_493E90(a2, v23, v11);
        v6 = 1;
        if ( v16 )
          return (unsigned int)v6;
        goto LABEL_18;
      }
    }
    else
    {
      if ( v21 > 4 )
      {
        if ( v21 == 5 )
        {
          sub_47BA50(a2, a4[1], &v19);
          goto LABEL_3;
        }
      }
      else if ( v21 == 3 )
      {
        v13 = (_BYTE *)a4[1];
        v14 = sub_47C9E0(a2, v13, v23);
        v6 = 1;
        if ( v14 )
          return (unsigned int)v6;
        if ( v24 != 1 )
          goto LABEL_18;
        sub_4B0400(v23);
        goto LABEL_24;
      }
      v8 = a4[1];
      v10 = sub_47C250(a2, v8, &v18);
      LODWORD(v6) = 1;
      if ( v10 )
        return (unsigned int)v6;
      if ( v18 >= 0 )
      {
        v11 = (double)(int)v18;
        v19 = (double)(int)v18;
        if ( (double)(int)v18 < 9.007199254740991e15 )
        {
LABEL_12:
          v12 = sub_47CDC0((unsigned int)(int)sqrt(v11), v8, 1);
LABEL_13:
          sub_48AFD0(a2, v12);
          LODWORD(v6) = 0;
          return (unsigned int)v6;
        }
        v13 = (_BYTE *)a4[1];
        sub_47C9E0(a2, v13, v23);
LABEL_18:
        sub_4B1320(v22, v13, v6);
        sub_4B26D0(v23, v22);
        sub_4B0400(v23);
        v12 = sub_47CCC0(v22, v22, v15);
        goto LABEL_13;
      }
    }
LABEL_24:
    v17 = sub_48DF10("square root of negative argument", 0xFFFFFFFF);
    sub_48AFD0(a2, v17);
    goto LABEL_3;
  }
  sub_409E40(a2, 2, a3, a4);
LABEL_3:
  LODWORD(v6) = 1;
  return (unsigned int)v6;
}

