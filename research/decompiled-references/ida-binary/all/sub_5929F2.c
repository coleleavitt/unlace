__int64 __fastcall sub_5929F2(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rax
  int v6; // r15d
  int v7; // eax
  int v8; // r15d
  int v9; // eax
  unsigned __int8 v12; // [rsp+2Fh] [rbp-41h]
  __int64 v13; // [rsp+30h] [rbp-40h]
  unsigned __int8 v14; // [rsp+3Fh] [rbp-31h]

  v14 = sub_5932EC(a1 + 32);
  v13 = sub_5932DA(a1 + 32);
  v12 = sub_5932FE(a1 + 32);
  if ( (unsigned __int8)sub_5932B2(a1 + 32) )
  {
    v4 = sub_593310(a1 + 32);
    return sub_597FEC(a2, a3, a4, (int)a1 + 136, v14, v13, v12, v4);
  }
  else if ( (unsigned __int8)sub_593278(a1 + 32) )
  {
    v6 = sub_5932C8(a1 + 32);
    v7 = sub_59328E(a1 + 32);
    return sub_5A3F6F(v7, v6, a2, a3, a4, (int)a1 + 136, a1 + 152, v14, v13, v12);
  }
  else
  {
    v8 = sub_5932C8(a1 + 32);
    v9 = sub_5932A0(a1 + 32);
    return sub_5A3F07(v9, v8, a2, a3, a4, (int)a1 + 136, a1 + 152, v14, v13, v12);
  }
}
