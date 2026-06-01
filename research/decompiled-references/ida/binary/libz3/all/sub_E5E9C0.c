void __fastcall sub_E5E9C0(__int64 a1, __int64 a2)
{
  _BYTE v2[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v3; // [rsp+10h] [rbp-38h]
  _BYTE v4[48]; // [rsp+18h] [rbp-30h] BYREF

  sub_1863170(a1 + 80, a2);
  v3 = a1 + 80;
  sub_17F9A60(v4, "solver");
  sub_180C5A0(v2, "");
  *(_QWORD *)(a1 + 88) = sub_185A820(a1 + 80, "cancel_backup_file", v4, v2);
  sub_18572D0(v4);
}

