__int64 __fastcall sub_5A895E(const char *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v5; // [rsp+18h] [rbp-58h] BYREF
  const char *v6; // [rsp+20h] [rbp-50h] BYREF
  __int16 v7; // [rsp+2Eh] [rbp-42h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  const char *v12; // [rsp+50h] [rbp-20h]
  size_t v13; // [rsp+58h] [rbp-18h]

  v13 = strlen(a1);
  v6 = a1;
  v12 = &a1[v13];
  sub_5A8FFA(a2);
  v7 = 0;
  v9 = sub_5A9020(a2);
  sub_5A9046(&v8, &v9);
  sub_5A9070(a2, v8, v13, &v7);
  v5 = sub_5A910E(a2, 0);
  v11 = v5 + 2 * sub_5A912E(a2);
  if ( (unsigned int)sub_5AF94F(&v6, v12, &v5, v11, 0) )
  {
    v3 = 0;
  }
  else
  {
    v2 = v5;
    v3 = ((v2 - sub_5A910E(a2, 0)) >> 1) + 1;
  }
  return sub_5A9154(a2, v3);
}
