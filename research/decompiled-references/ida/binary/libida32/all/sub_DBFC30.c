__int64 __fastcall sub_DBFC30(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // r12d
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int8 v11; // [rsp+Fh] [rbp-99h] BYREF
  _QWORD v12[3]; // [rsp+10h] [rbp-98h] BYREF
  int v13; // [rsp+28h] [rbp-80h]
  __int64 v14; // [rsp+30h] [rbp-78h]
  unsigned int v15; // [rsp+38h] [rbp-70h]
  _BYTE v16[48]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 v17; // [rsp+70h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v12);
  sub_DFDA50(v2, 48);
  v3 = sub_DA5E00(a1, a2, (__int64)v12, 3);
  if ( !(_BYTE)v3 )
    goto LABEL_2;
  v5 = v14;
  if ( v13 )
  {
    v7 = v12[0];
LABEL_8:
    v8 = v5 + v7 + 40;
    goto LABEL_9;
  }
  if ( v14 && *(_BYTE *)(*(_QWORD *)(v14 + 32) + 61LL) )
    goto LABEL_13;
  v6 = sub_CDA220((__int64)v12);
  v7 = v12[0];
  if ( !*(_BYTE *)(v6 + 60) || v15 != v12[0] )
    goto LABEL_8;
  v8 = v5 + v15 + 72;
LABEL_9:
  if ( !(unsigned __int8)sub_DA4BF0(a1, (__int64)a2, v8, 4) )
  {
LABEL_13:
    v3 = 0;
    goto LABEL_2;
  }
  v9 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
  sub_DFF4A0(v9, v8);
  v11 = 1;
  sub_CFDA10((__int64)v16, a1, (__int64)a2, &v11, v8, 1);
  v3 = v17;
  if ( v17 )
  {
    v10 = sub_CEACF0((__int64)v12);
    sub_DFF5C0(v10, v16);
    if ( v17 )
      sub_DFF560(v16);
  }
LABEL_2:
  sub_DFF560(v12);
  return v3;
}

