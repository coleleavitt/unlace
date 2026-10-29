__int64 __fastcall sub_7F8020(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-40h] BYREF
  __int64 v4; // [rsp+10h] [rbp-38h] BYREF
  __int64 v5; // [rsp+18h] [rbp-30h]

  sub_180C5A0(&v3, "datatype");
  v5 = a1;
  v4 = v3;
  sub_7FEA60(a2 + 16, &v4);
  sub_180C5A0(&v3, "array");
  v5 = a1;
  v4 = v3;
  sub_7FEA60(a2 + 16, &v4);
  sub_180C5A0(&v3, "quant");
  v5 = a1;
  v4 = v3;
  sub_7FEA60(a2 + 16, &v4);
  sub_180C5A0(&v3, "fpa");
  v5 = a1;
  v4 = v3;
  return sub_7FEA60(a2 + 16, &v4);
}

