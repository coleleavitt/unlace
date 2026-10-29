__int64 __fastcall sub_D4BB60(__int64 a1)
{
  __int16 *v1; // r13
  __int16 *v2; // r14
  unsigned int v3; // ebx
  _WORD *v5; // rax
  __int16 v6; // dx
  __int16 v7; // cx
  __int16 v8; // si
  _WORD *v9; // rax
  __int16 v10; // cx
  __int16 v11; // si
  __int16 v12; // dx
  __int16 v13; // r13
  __int16 *v14; // [rsp+8h] [rbp-100h]
  __int16 *v15; // [rsp+10h] [rbp-F8h]
  __int64 v16; // [rsp+18h] [rbp-F0h]
  __int16 v17; // [rsp+2Eh] [rbp-DAh]
  __int16 v18; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v19; // [rsp+3Eh] [rbp-CAh] BYREF
  _BYTE v20[48]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v21[48]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v22[104]; // [rsp+A0h] [rbp-68h] BYREF

  sub_CE52D0((__int64)v21, *(_QWORD *)(a1 + 176));
  sub_CE52D0((__int64)v20, *(_QWORD *)(a1 + 176));
  v16 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  sub_CDA6F0((__int64)v22, (__int64)v20, 0);
  v1 = (__int16 *)sub_CE8E90((__int64)v22);
  sub_DFF560(v22);
  sub_CDA6F0((__int64)v22, (__int64)v20, 1);
  v15 = (__int16 *)sub_CE8E90((__int64)v22);
  sub_DFF560(v22);
  sub_CDA6F0((__int64)v22, (__int64)v21, 0);
  v2 = (__int16 *)sub_CE8E90((__int64)v22);
  sub_DFF560(v22);
  sub_CDA6F0((__int64)v22, (__int64)v21, 1);
  v14 = (__int16 *)sub_CE8E90((__int64)v22);
  sub_DFF560(v22);
  v18 = 0;
  if ( sub_D4B3B0(*v1, *v2, &v18) )
    goto LABEL_2;
  v19 = 0;
  if ( sub_D4B3B0(*v15, *v14, &v19) )
    goto LABEL_2;
  sub_CDA6F0((__int64)v22, v16, 0);
  v5 = (_WORD *)sub_CE8E90((__int64)v22);
  v6 = v18;
  v7 = v19;
  v8 = v18 - v19;
  *v5 = v18 - v19;
  if ( v6 <= 0 && v7 > 0 )
  {
    v17 = (unsigned __int16)~v8 >> 15;
    goto LABEL_8;
  }
  if ( v6 >= 0 && v7 < 0 )
  {
    v17 = v8 <= 0;
LABEL_8:
    sub_DFF560(v22);
    if ( v17 )
      goto LABEL_2;
    goto LABEL_9;
  }
  sub_DFF560(v22);
LABEL_9:
  sub_CDA6F0((__int64)v22, v16, 0);
  sub_E00FC0(v22);
  sub_DFF560(v22);
  if ( !sub_D4B3B0(*v1, *v14, &v18) && !sub_D4B3B0(*v15, *v2, &v19) )
  {
    sub_CDA6F0((__int64)v22, v16, 1);
    v9 = (_WORD *)sub_CE8E90((__int64)v22);
    v10 = v18;
    v11 = v19;
    v12 = v18 + v19;
    *v9 = v18 + v19;
    if ( v10 <= 0 || v11 <= 0 )
    {
      if ( v10 >= 0 || v11 >= 0 )
      {
        sub_DFF560(v22);
        goto LABEL_15;
      }
      v13 = (unsigned __int16)~v12 >> 15;
    }
    else
    {
      v13 = v12 <= 0;
    }
    sub_DFF560(v22);
    if ( !v13 )
    {
LABEL_15:
      sub_CDA6F0((__int64)v22, v16, 1);
      sub_E00FC0(v22);
      v3 = 1;
      sub_DFF560(v22);
      sub_E00FC0(v16);
      goto LABEL_3;
    }
  }
LABEL_2:
  v3 = 0;
LABEL_3:
  sub_DFF560(v20);
  sub_DFF560(v21);
  return v3;
}

