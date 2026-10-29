__int64 __fastcall sub_E661E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  size_t v4; // rax
  __int64 v5; // rax
  size_t v6; // rax
  __int64 v7; // rbx
  size_t v8; // rax
  __int64 v10; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+8h] [rbp-70h]
  int v12; // [rsp+10h] [rbp-68h]
  __int16 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+38h] [rbp-40h]

  sub_E5B230(a1, a2);
  sub_E63A60((__int64)&v10, a1, *(_QWORD *)(a2 + 80), 1);
  v13 = 7;
  v2 = v10;
  v10 = 0;
  v14 = v2;
  v3 = v11;
  v11 = 0;
  v15 = v3;
  LODWORD(v3) = v12;
  v12 = 0;
  v16 = v3;
  v4 = j__strlen("returnType");
  sub_222AB70(a1 + 1048, "returnType", v4);
  sub_222CAC0(a1 + 1048, &v13);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v13);
  sub_E5D2E0(&v10);
  v5 = *(_QWORD *)(a2 + 56);
  v13 = 1;
  LOBYTE(v14) = (v5 & 0x20000) != 0;
  v6 = j__strlen("instance");
  sub_222AB70(a1 + 1048, "instance", v6);
  sub_222CAC0(a1 + 1048, &v13);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v13);
  v7 = *(_QWORD *)(a2 + 56);
  v8 = j__strlen("variadic");
  return sub_E59B90(a1, (__int64)"variadic", v8, (v7 & 0x40000) != 0);
}
