__int64 __fastcall sub_D11E40(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int8 **v3; // rax
  unsigned __int8 **v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r13d
  __int64 v9; // r12
  __int64 v10; // [rsp+8h] [rbp-70h] BYREF
  __int64 v11; // [rsp+14h] [rbp-64h] BYREF
  char v12; // [rsp+1Ch] [rbp-5Ch]
  _BYTE v13[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v13);
  sub_E21790(v2, 48);
  v10 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v3 = (unsigned __int8 **)sub_E33D20(a1, &v10, 2417, 0);
  if ( v3 )
  {
    v4 = v3;
    sub_AE9DF0(v3, 2, 2u);
    v5 = sub_E32240(a1);
    sub_AE9DF0(v4, (*(_BYTE *)(v5 + 1) & 8) != 0, 3u);
    v6 = sub_E20720(*(_QWORD *)(a1 + 400), a2);
    v12 = 1;
    v11 = v6;
    sub_AEC610((__int64 *)v4, &v11);
  }
  else
  {
    sub_E32240(a1);
    sub_E20720(*(_QWORD *)(a1 + 400), a2);
  }
  v7 = sub_DCD240(a1, a2, v13, 64);
  if ( (_BYTE)v7 )
  {
    v9 = sub_CFE3F0((__int64)v13);
    *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v9;
  }
  else
  {
    v7 = sub_CFEE20(a1, a2);
  }
  sub_E232A0(v13);
  return v7;
}
