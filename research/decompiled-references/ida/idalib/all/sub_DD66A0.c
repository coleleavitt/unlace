__int64 __fastcall sub_DD66A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned int v5; // ebp
  unsigned __int8 **v6; // rax
  unsigned __int8 **v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_DWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v11[0] = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v6 = (unsigned __int8 **)sub_E33D20(a1, v11, 2417, 0);
  if ( v6 )
  {
    v7 = v6;
    sub_AE9DF0(v6, 2, 2u);
    v8 = sub_E32240(a1);
    sub_AE9DF0(v7, (*(_BYTE *)(v8 + 1) & 8) != 0, 3u);
  }
  else
  {
    sub_E32240(a1);
  }
  v9 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 24) = 1;
  *(_QWORD *)(v9 + 40) = v5;
  *(_QWORD *)(v9 + 32) = a3;
  return 1;
}
