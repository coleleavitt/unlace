__int64 __fastcall sub_374300(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  sub_17F9A60(v7, "sat");
  if ( (unsigned __int8)sub_1859630(a2, "smt", v7, 0) )
  {
    v4 = sub_69ABA0(a1, a2);
  }
  else if ( (unsigned __int8)sub_1859630(a2, "euf", v7, 0) )
  {
    v4 = sub_68D490(a1, a2, 1);
  }
  else
  {
    v4 = sub_B00C00(a1, a2, a3);
  }
  v5 = v4;
  sub_18572D0(v7);
  return v5;
}

