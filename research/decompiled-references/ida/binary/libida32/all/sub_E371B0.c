void __fastcall sub_E371B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v3; // rax
  size_t v4; // rax
  void *v5; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-E0h]
  _BYTE v7[16]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v8; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v10[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+70h] [rbp-78h] BYREF
  int v12; // [rsp+78h] [rbp-70h]
  __int128 v13; // [rsp+80h] [rbp-68h]
  __int64 v14; // [rsp+90h] [rbp-58h]
  char v15; // [rsp+98h] [rbp-50h]
  int v16; // [rsp+9Ch] [rbp-4Ch]
  void **v17; // [rsp+A0h] [rbp-48h]

  v2 = *(_QWORD *)(a2 + 16);
  v3 = j__strlen("isAlias");
  sub_E35E50(a1, (__int64)"isAlias", v3, (v2 & 0x80000) != 0);
  v5 = v7;
  v13 = 0;
  v7[0] = 0;
  v11 = &off_2BC1EC8;
  v6 = 0;
  v12 = 0;
  v15 = 0;
  v16 = 1;
  v14 = 0;
  v17 = &v5;
  sub_2257B70(&v11, 0, 0, 0);
  v10[0] = *(_QWORD *)(a2 + 32);
  sub_EFF8A0(v10, &v11, a1 + 1248, 1);
  v8.m128i_i64[0] = (__int64)v9;
  sub_E34980(&v8, v5, (__int64)v5 + v6);
  sub_E35650((__int64)v10, &v8);
  v4 = j__strlen("templateName");
  sub_2206E30(a1 + 1048, "templateName", v4);
  sub_2208D80(a1 + 1048, v10);
  sub_2205EB0(a1 + 1048);
  sub_2207560(v10);
  if ( (_BYTE *)v8.m128i_i64[0] != v9 )
    operator delete((void *)v8.m128i_i64[0]);
  v11 = &off_2BC1EC8;
  sub_2257A60(&v11);
  if ( v5 != v7 )
    operator delete(v5);
}

