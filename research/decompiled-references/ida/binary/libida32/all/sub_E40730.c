__int64 __fastcall sub_E40730(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  __int64 v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+8h] [rbp-70h]
  int v9; // [rsp+10h] [rbp-68h]
  __int16 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+38h] [rbp-40h]

  sub_E38110(a1, a2);
  sub_E3FD20((__int64)&v7, a1, *(_QWORD *)(a2 + 32), 1);
  v10 = 7;
  v2 = v7;
  v7 = 0;
  v11 = v2;
  v3 = v8;
  v8 = 0;
  v12 = v3;
  LODWORD(v3) = v9;
  v9 = 0;
  v13 = v3;
  v4 = j__strlen("computeLHSType");
  sub_2206E30(a1 + 1048, "computeLHSType", v4);
  sub_2208D80(a1 + 1048, &v10);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v10);
  sub_E395A0(&v7);
  sub_E3FD20((__int64)&v7, a1, *(_QWORD *)(a2 + 40), 1);
  v10 = 7;
  v11 = v7;
  v7 = 0;
  v12 = v8;
  v8 = 0;
  v13 = v9;
  v9 = 0;
  v5 = j__strlen("computeResultType");
  sub_2206E30(a1 + 1048, "computeResultType", v5);
  sub_2208D80(a1 + 1048, &v10);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v10);
  return sub_E395A0(&v7);
}

