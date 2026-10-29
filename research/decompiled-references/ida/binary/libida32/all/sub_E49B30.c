__int64 __fastcall sub_E49B30(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  size_t v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  size_t v10; // rax
  __int64 v12; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+8h] [rbp-70h]
  int v14; // [rsp+10h] [rbp-68h]
  __int16 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h]
  int v18; // [rsp+38h] [rbp-40h]

  sub_E374F0(a1, a2);
  sub_E43670((__int64)&v12, a1, *(_QWORD *)(a2 + 88));
  v15 = 7;
  v2 = v12;
  v12 = 0;
  v16 = v2;
  v3 = v13;
  v13 = 0;
  v17 = v3;
  LODWORD(v3) = v14;
  v14 = 0;
  v18 = v3;
  v4 = j__strlen("interface");
  sub_2206E30(a1 + 1048, "interface", v4);
  sub_2208D80(a1 + 1048, &v15);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v15);
  sub_E395A0(&v12);
  v9 = sub_B8A0E0(a2, (__int64)&v15, v5, v6, v7, v8);
  sub_E43670((__int64)&v12, a1, v9);
  v15 = 7;
  v16 = v12;
  v12 = 0;
  v17 = v13;
  v13 = 0;
  v18 = v14;
  v14 = 0;
  v10 = j__strlen("categoryDecl");
  sub_2206E30(a1 + 1048, "categoryDecl", v10);
  sub_2208D80(a1 + 1048, &v15);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v15);
  return sub_E395A0(&v12);
}

