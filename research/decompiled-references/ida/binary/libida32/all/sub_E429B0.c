__int64 __fastcall sub_E429B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-68h] BYREF
  __int64 v6; // [rsp+8h] [rbp-60h]
  int v7; // [rsp+10h] [rbp-58h]
  __int16 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  int v11; // [rsp+38h] [rbp-30h]

  sub_E374F0(a1, a2);
  sub_E3FD20((__int64)&v5, a1, *(_QWORD *)(a2 + 48), 1);
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
  sub_2206E30(a1 + 1048, "type", 4);
  sub_2208D80(a1 + 1048, &v8);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v8);
  return sub_E395A0(&v5);
}

