__int64 __fastcall sub_E68580(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  char v4; // al
  __int64 v6; // [rsp+0h] [rbp-78h] BYREF
  __int64 v7; // [rsp+8h] [rbp-70h]
  int v8; // [rsp+10h] [rbp-68h]
  __int16 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  int v12; // [rsp+38h] [rbp-40h]

  sub_E673B0((__int64)&v6, a1, *(_QWORD *)(a2 + 16));
  v9 = 7;
  v2 = v6;
  v6 = 0;
  v10 = v2;
  v3 = v7;
  v7 = 0;
  v11 = v3;
  LODWORD(v3) = v8;
  v8 = 0;
  v12 = v3;
  sub_222AB70(a1 + 1048, "decl", 4);
  sub_222CAC0(a1 + 1048, &v9);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v9);
  sub_E5D2E0(&v6);
  sub_E59B90(a1, (__int64)"isFreeIvar", 10, (*(_BYTE *)(a2 + 40) & 2) != 0);
  v4 = *(_BYTE *)(a2 + 40);
  v9 = 1;
  LOBYTE(v10) = v4 & 1;
  sub_222AB70(a1 + 1048, "isArrow", 7);
  sub_222CAC0(a1 + 1048, &v9);
  sub_2229BF0(a1 + 1048);
  return sub_222B2A0(&v9);
}
