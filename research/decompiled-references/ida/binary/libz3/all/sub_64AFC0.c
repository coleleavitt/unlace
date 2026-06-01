__int64 __fastcall sub_64AFC0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r12
  _BYTE v4[32]; // [rsp+8h] [rbp-20h] BYREF

  v1 = *(__int64 **)(a1 + 32);
  v2 = *v1;
  sub_180C5A0(v4, "sparse");
  return sub_185A820(v2, "datalog.default_table", v1 + 1, v4);
}

