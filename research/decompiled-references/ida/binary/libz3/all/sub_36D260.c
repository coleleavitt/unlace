void __fastcall sub_36D260(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned __int8 v5; // al
  __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  _BYTE v8[48]; // [rsp+18h] [rbp-30h] BYREF

  v7 = a2;
  sub_17F9A60(v8, "sat");
  sub_180C5A0(&v6, "caching");
  v6 = sub_185A820(a2, "phase", v8, &v6);
  sub_18625B0(a2, "phase", &v6);
  v2 = sub_1859980(v7, "restart.initial", v8, 2);
  sub_1862370(a2, "restart.initial", v2);
  v3 = sub_1859980(v7, "max_conflicts", v8, 0xFFFFFFFFLL);
  sub_1862370(a2, "max_conflicts", v3);
  v4 = sub_1859980(v7, "simplify.delay", v8, 0);
  sub_1862370(a2, "simplify.delay", v4);
  v5 = sub_1859630(v7, "gc.burst", v8, 0);
  sub_1862370(a2, "gc.burst", v5);
  sub_18572D0(v8);
}

