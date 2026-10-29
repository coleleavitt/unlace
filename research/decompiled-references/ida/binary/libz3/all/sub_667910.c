__int64 __fastcall sub_667910(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  char v11[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  _BYTE v13[48]; // [rsp+18h] [rbp-30h] BYREF

  v12 = a2;
  sub_17F9A60(v13, "parallel");
  sub_1858590(v11, a2);
  if ( (unsigned __int8)sub_1859630(v12, "enable", v13, 0) )
  {
    v2 = sub_68D490(a1, v11, 1);
    sub_672190(a1, v11, v2);
    v3 = sub_687BA0(a1, (unsigned int)v11);
    v4 = sub_667A30(a1, v11, v3);
    v5 = sub_E3B350(v4, v11);
  }
  else
  {
    v8 = sub_68D490(a1, v11, 0);
    sub_672190(a1, v11, v8);
    v9 = sub_687BA0(a1, (unsigned int)v11);
    v10 = sub_667A30(a1, v11, v9);
    v5 = sub_E5B020(v10);
  }
  v6 = v5;
  sub_18572D0(v11);
  sub_18572D0(v13);
  return v6;
}

