__int64 __fastcall sub_D2BC40(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // r12
  unsigned int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v11; // rax
  unsigned int v12; // [rsp+Ch] [rbp-CCh] BYREF
  unsigned int v13[6]; // [rsp+10h] [rbp-C8h] BYREF
  int v14; // [rsp+28h] [rbp-B0h]
  __int64 v15; // [rsp+30h] [rbp-A8h]
  __int64 v16; // [rsp+38h] [rbp-A0h]
  _QWORD v17[6]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v18[6]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int8 v19; // [rsp+A0h] [rbp-38h]

  v2 = sub_D242B0(*(_QWORD *)(a1 + 176));
  v3 = *(_QWORD *)(a1 + 176);
  v12 = v2;
  sub_E21760(v3, 48);
  sub_E23260(v13);
  sub_E21790(v3, 48);
  if ( !v14 || v14 == 2 )
  {
    if ( !v15 )
      goto LABEL_5;
  }
  else if ( v14 != 3 && !(v16 | *(_QWORD *)v13) )
  {
LABEL_5:
    if ( v12 )
    {
LABEL_6:
      sub_D2B5F0((__int64)v18, a1, a2, &v12, (__int64)v13, 0);
      v4 = v19;
      if ( v19 )
      {
        v5 = *(_QWORD *)(a1 + 176);
        sub_CFE7A0((__int64)v17, v18);
        v6 = sub_E216C0(v5, 48);
        sub_E23260(v6);
        sub_E232A0(v17);
        if ( v19 )
          sub_E232A0(v18);
      }
      goto LABEL_14;
    }
    goto LABEL_11;
  }
  if ( v12 )
  {
    v4 = sub_DC8350(a1, a2, v13);
    if ( !(_BYTE)v4 )
      goto LABEL_14;
    goto LABEL_6;
  }
LABEL_11:
  v7 = sub_CFDF60((__int64)v13);
  v8 = *(_QWORD *)(a1 + 176);
  v4 = *(unsigned __int8 *)(v7 + 60);
  if ( (_BYTE)v4 && !sub_CFE630(v13) )
  {
    sub_CFE430((__int64)v17, (__int64)v13, 0);
    sub_CFE7A0((__int64)v18, v17);
    v11 = sub_E216C0(v8, 48);
    sub_E23260(v11);
    sub_E232A0(v18);
    sub_E232A0(v17);
  }
  else
  {
    v4 = 1;
    v9 = sub_E216C0(v8, 48);
    sub_E231E0(v9, v13);
  }
LABEL_14:
  sub_E232A0(v13);
  return v4;
}
