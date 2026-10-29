__int64 __fastcall sub_E456F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+8h] [rbp-60h]
  int v11; // [rsp+10h] [rbp-58h]
  __int16 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+38h] [rbp-30h]

  v5 = sub_F3D1D0(a2, a2, a3, a4, a5);
  sub_E43670((__int64)&v9, a1, v5);
  v12 = 7;
  v6 = v9;
  v9 = 0;
  v13 = v6;
  v7 = v10;
  v10 = 0;
  v14 = v7;
  LODWORD(v7) = v11;
  v11 = 0;
  v15 = v7;
  sub_2206E30(a1 + 1048, "decl", 4);
  sub_2208D80(a1 + 1048, &v12);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v12);
  return sub_E395A0(&v9);
}

