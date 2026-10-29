__int64 __fastcall sub_E6CFF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // rsi
  size_t v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  __int64 v11; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+8h] [rbp-70h]
  int v13; // [rsp+10h] [rbp-68h]
  __int16 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+38h] [rbp-40h]

  v3 = a1 + 1048;
  sub_E5B230(a1, *(_QWORD *)(a2 + 48));
  v4 = "synthesize";
  if ( !*(_QWORD *)(a2 + 56) )
    v4 = "dynamic";
  sub_E598C0((__int64)&v14, v4);
  v5 = j__strlen("implKind");
  sub_222AB70(v3, "implKind", v5);
  sub_222CAC0(v3, &v14);
  sub_2229BF0(v3);
  sub_222B2A0(&v14);
  sub_E673B0((__int64)&v11, a1, *(_QWORD *)(a2 + 48));
  v14 = 7;
  v6 = v11;
  v11 = 0;
  v15 = v6;
  v7 = v12;
  v12 = 0;
  v16 = v7;
  LODWORD(v7) = v13;
  v13 = 0;
  v17 = v7;
  v8 = j__strlen("propertyDecl");
  sub_222AB70(v3, "propertyDecl", v8);
  sub_222CAC0(v3, &v14);
  sub_2229BF0(v3);
  sub_222B2A0(&v14);
  sub_E5D2E0(&v11);
  sub_E673B0((__int64)&v11, a1, *(_QWORD *)(a2 + 56));
  v14 = 7;
  v15 = v11;
  v11 = 0;
  v16 = v12;
  v12 = 0;
  v17 = v13;
  v13 = 0;
  v9 = j__strlen("ivarDecl");
  sub_222AB70(v3, "ivarDecl", v9);
  sub_222CAC0(v3, &v14);
  sub_2229BF0(v3);
  sub_222B2A0(&v14);
  return sub_E5D2E0(&v11);
}
