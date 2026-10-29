void __fastcall sub_330200(__int64 a1, __int64 a2)
{
  _BYTE v2[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v3; // [rsp+10h] [rbp-38h]
  _BYTE v4[48]; // [rsp+18h] [rbp-30h] BYREF

  v3 = a2;
  sub_17F9A60(v4, "opt");
  sub_180C5A0(v2, "basic");
  *(_QWORD *)(a1 + 80) = sub_185A820(a2, "optsmt_engine", v4, v2);
  sub_18572D0(v4);
}

