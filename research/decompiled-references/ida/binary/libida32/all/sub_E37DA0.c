void __fastcall sub_E37DA0(__int64 a1, __int64 a2)
{
  void *v2; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v3; // [rsp+8h] [rbp-E0h]
  _BYTE v4[16]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v5; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v7[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+70h] [rbp-78h] BYREF
  int v9; // [rsp+78h] [rbp-70h]
  __int128 v10; // [rsp+80h] [rbp-68h]
  __int64 v11; // [rsp+90h] [rbp-58h]
  char v12; // [rsp+98h] [rbp-50h]
  int v13; // [rsp+9Ch] [rbp-4Ch]
  void **v14; // [rsp+A0h] [rbp-48h]

  v10 = 0;
  v3 = 0;
  v2 = v4;
  v4[0] = 0;
  v9 = 0;
  v8 = &off_2BC1EC8;
  v12 = 0;
  v13 = 1;
  v11 = 0;
  v14 = &v2;
  sub_2257B70(&v8, 0, 0, 0);
  v7[0] = *(_QWORD *)(a2 + 16);
  sub_FBB170(v7, &v8);
  v5.m128i_i64[0] = (__int64)v6;
  sub_E34980(&v5, v2, (__int64)v2 + v3);
  sub_E35650((__int64)v7, &v5);
  sub_2206E30(a1 + 1048, "selector", 8);
  sub_2208D80(a1 + 1048, v7);
  sub_2205EB0(a1 + 1048);
  sub_2207560(v7);
  if ( (_BYTE *)v5.m128i_i64[0] != v6 )
    operator delete((void *)v5.m128i_i64[0]);
  v8 = &off_2BC1EC8;
  sub_2257A60(&v8);
  if ( v2 != v4 )
    operator delete(v2);
}

