__int64 __fastcall sub_68D4D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rbx
  _QWORD v7[2]; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v8[48]; // [rsp+18h] [rbp-30h] BYREF

  v7[1] = a2;
  sub_17F9A60(v8, "parallel");
  if ( (unsigned __int8)sub_1859630(a2, "enable", v8, 0) )
  {
    v2 = sub_186B270(0x1308u);
    sub_698D70(v2, a1, a2, 0, v3, v4);
    v5 = sub_E3B350(v2, a2);
  }
  else
  {
    v7[0] = 0;
    v5 = sub_7844E0(a1, v7);
    sub_18572D0(v7);
  }
  sub_18572D0(v8);
  return v5;
}

