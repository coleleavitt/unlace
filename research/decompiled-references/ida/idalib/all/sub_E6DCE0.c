__int64 __fastcall sub_E6DCE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+8h] [rbp-70h]
  int v7; // [rsp+10h] [rbp-68h]
  __int16 v8; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-48h]
  int v11; // [rsp+38h] [rbp-40h]

  sub_E5B230(a1, a2);
  sub_E673B0((__int64)&v5, a1, *(_QWORD *)(a2 + 88));
  v8 = 7;
  v2 = v5;
  v5 = 0;
  v9 = v2;
  v3 = v6;
  v6 = 0;
  v10 = v3;
  LODWORD(v3) = v7;
  v7 = 0;
  v11 = v3;
  sub_222AB70(a1 + 1048, "aliasedNamespace", 16);
  sub_222CAC0(a1 + 1048, &v8);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v8);
  return sub_E5D2E0(&v5);
}
