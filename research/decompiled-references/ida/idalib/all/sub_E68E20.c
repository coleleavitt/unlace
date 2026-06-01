__int64 __fastcall sub_E68E20(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+8h] [rbp-60h]
  int v8; // [rsp+10h] [rbp-58h]
  __int16 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+38h] [rbp-30h]

  v2 = sub_B99AD0(a2);
  sub_E673B0((__int64)&v6, a1, v2);
  v9 = 7;
  v3 = v6;
  v6 = 0;
  v10 = v3;
  v4 = v7;
  v7 = 0;
  v11 = v4;
  LODWORD(v4) = v8;
  v8 = 0;
  v12 = v4;
  sub_222AB70(a1 + 1048, "nominatedNamespace", 18);
  sub_222CAC0(a1 + 1048, &v9);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v9);
  return sub_E5D2E0(&v6);
}
