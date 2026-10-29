__int64 __fastcall sub_DD6EE0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  __int16 *v3; // r13
  __int16 *v4; // r14
  unsigned int v5; // ebx
  _WORD *v7; // rax
  __int16 v8; // dx
  __int16 v9; // cx
  __int16 v10; // si
  _WORD *v11; // rax
  __int16 v12; // cx
  __int16 v13; // si
  __int16 v14; // dx
  __int16 v15; // r13
  __int16 *v16; // [rsp+8h] [rbp-100h]
  __int16 *v17; // [rsp+10h] [rbp-F8h]
  __int64 v18; // [rsp+18h] [rbp-F0h]
  __int16 v19; // [rsp+2Eh] [rbp-DAh]
  __int16 v20; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v21; // [rsp+3Eh] [rbp-CAh] BYREF
  _BYTE v22[48]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v23[48]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v24[104]; // [rsp+A0h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v1, 48);
  sub_DFF520(v23);
  sub_DFDA50(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v22);
  sub_DFDA50(v2, 48);
  v18 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  sub_CDA6F0((__int64)v24, (__int64)v22, 0);
  v3 = (__int16 *)sub_CE8E90((__int64)v24);
  sub_DFF560(v24);
  sub_CDA6F0((__int64)v24, (__int64)v22, 1);
  v17 = (__int16 *)sub_CE8E90((__int64)v24);
  sub_DFF560(v24);
  sub_CDA6F0((__int64)v24, (__int64)v23, 0);
  v4 = (__int16 *)sub_CE8E90((__int64)v24);
  sub_DFF560(v24);
  sub_CDA6F0((__int64)v24, (__int64)v23, 1);
  v16 = (__int16 *)sub_CE8E90((__int64)v24);
  sub_DFF560(v24);
  v20 = 0;
  if ( sub_D4B3B0(*v3, *v4, &v20) )
    goto LABEL_2;
  v21 = 0;
  if ( sub_D4B3B0(*v17, *v16, &v21) )
    goto LABEL_2;
  sub_CDA6F0((__int64)v24, v18, 0);
  v7 = (_WORD *)sub_CE8E90((__int64)v24);
  v8 = v20;
  v9 = v21;
  v10 = v20 - v21;
  *v7 = v20 - v21;
  if ( v8 <= 0 && v9 > 0 )
  {
    v19 = (unsigned __int16)~v10 >> 15;
    goto LABEL_8;
  }
  if ( v8 >= 0 && v9 < 0 )
  {
    v19 = v10 <= 0;
LABEL_8:
    sub_DFF560(v24);
    if ( v19 )
      goto LABEL_2;
    goto LABEL_9;
  }
  sub_DFF560(v24);
LABEL_9:
  sub_CDA6F0((__int64)v24, v18, 0);
  sub_E00FC0(v24);
  sub_DFF560(v24);
  if ( !sub_D4B3B0(*v3, *v16, &v20) && !sub_D4B3B0(*v17, *v4, &v21) )
  {
    sub_CDA6F0((__int64)v24, v18, 1);
    v11 = (_WORD *)sub_CE8E90((__int64)v24);
    v12 = v20;
    v13 = v21;
    v14 = v20 + v21;
    *v11 = v20 + v21;
    if ( v12 <= 0 || v13 <= 0 )
    {
      if ( v12 >= 0 || v13 >= 0 )
      {
        sub_DFF560(v24);
        goto LABEL_15;
      }
      v15 = (unsigned __int16)~v14 >> 15;
    }
    else
    {
      v15 = v14 <= 0;
    }
    sub_DFF560(v24);
    if ( !v15 )
    {
LABEL_15:
      sub_CDA6F0((__int64)v24, v18, 1);
      sub_E00FC0(v24);
      v5 = 1;
      sub_DFF560(v24);
      sub_E00FC0(v18);
      goto LABEL_3;
    }
  }
LABEL_2:
  v5 = 0;
LABEL_3:
  sub_DFF560(v22);
  sub_DFF560(v23);
  return v5;
}

