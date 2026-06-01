__int64 __fastcall sub_D248D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rdx
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+0h] [rbp-E8h] BYREF
  unsigned int v15[6]; // [rsp+10h] [rbp-D8h] BYREF
  int v16; // [rsp+28h] [rbp-C0h]
  __int64 v17; // [rsp+30h] [rbp-B8h]
  __int64 v18; // [rsp+38h] [rbp-B0h]
  _QWORD v19[6]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v20[6]; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int8 v21; // [rsp+A0h] [rbp-48h]

  v2 = sub_D01350(*(_QWORD *)(a1 + 176));
  v3 = *(_QWORD *)(a1 + 176);
  v14[1] = v4;
  v14[0] = v2;
  sub_DFDA20(v3, 48);
  sub_DFF520(v15);
  sub_DFDA50(v3, 48);
  if ( !v16 || v16 == 2 )
  {
    if ( !v17 )
      goto LABEL_5;
  }
  else if ( v16 != 3 && !(*(_QWORD *)v15 | v18) )
  {
    goto LABEL_5;
  }
  if ( !(unsigned __int8)sub_D0B8A0((__int64)v14) )
  {
    v5 = sub_DA4610(a1, a2, v15);
    if ( !(_BYTE)v5 )
      goto LABEL_9;
    v5 = sub_D0B8A0((__int64)v14);
    if ( (_BYTE)v5 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_5:
  v5 = sub_D0B8A0((__int64)v14);
  if ( (_BYTE)v5 )
  {
LABEL_6:
    v6 = sub_CDA220((__int64)v15);
    v7 = *(_QWORD *)(a1 + 176);
    v8 = *(unsigned __int8 *)(v6 + 60);
    if ( (_BYTE)v8 && !sub_CDA8F0(v15) )
    {
      sub_CDA6F0((__int64)v19, (__int64)v15, 0);
      sub_CDAA60((__int64)v20, v19);
      v13 = sub_DFD980(v7, 48);
      sub_DFF520(v13);
      sub_DFF560(v20);
      v5 = v8;
      sub_DFF560(v19);
    }
    else
    {
      v9 = sub_DFD980(v7, 48);
      sub_DFF4A0(v9, v15);
    }
    goto LABEL_9;
  }
LABEL_14:
  sub_D24230((__int64)v20, a1, a2, (__int64)v14, (__int64)v15, 0);
  v5 = v21;
  if ( v21 )
  {
    v11 = *(_QWORD *)(a1 + 176);
    sub_CDAA60((__int64)v19, v20);
    v12 = sub_DFD980(v11, 48);
    sub_DFF520(v12);
    sub_DFF560(v19);
    if ( v21 )
      sub_DFF560(v20);
  }
LABEL_9:
  sub_DFF560(v15);
  return v5;
}

