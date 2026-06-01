void __fastcall sub_E68ED0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  size_t v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  _QWORD v8[2]; // [rsp+10h] [rbp-F8h] BYREF
  void *v9; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-E0h]
  _BYTE v11[16]; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v12; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v13[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h]
  int v16; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v17)(); // [rsp+90h] [rbp-78h] BYREF
  __int64 v18; // [rsp+98h] [rbp-70h]
  __int128 v19; // [rsp+A0h] [rbp-68h]
  __int64 v20; // [rsp+B0h] [rbp-58h]
  char v21; // [rsp+B8h] [rbp-50h]
  int v22; // [rsp+BCh] [rbp-4Ch]
  void **v23; // [rsp+C0h] [rbp-48h]

  v2 = *(_QWORD *)(a2 + 32);
  if ( v2 )
  {
    v11[0] = 0;
    v9 = v11;
    v19 = 0;
    v21 = 0;
    v17 = &off_2BEBE68;
    v10 = 0;
    LODWORD(v18) = 0;
    v22 = 1;
    v20 = 0;
    v23 = &v9;
    sub_227B8B0(&v17, 0, 0, 0);
    sub_E90250(v2, &v17, a1 + 1248, 1, 1);
    v12.m128i_i64[0] = (__int64)v13;
    sub_E586C0(&v12, v9, (__int64)v9 + v10);
    sub_E59390((__int64)&v14, &v12);
    v3 = j__strlen("qualifier");
    v8[0] = &v14;
    v8[1] = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"qualifier", v3, (__int64)sub_E58580, v8);
    sub_222B2A0(&v14);
    if ( (_BYTE *)v12.m128i_i64[0] != v13 )
      operator delete((void *)v12.m128i_i64[0]);
    v17 = &off_2BEBE68;
    sub_227B7A0(&v17);
    if ( v9 != v11 )
      operator delete(v9);
  }
  if ( (*(_BYTE *)(a2 + 19) & 8) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 48);
    if ( v4 )
    {
      sub_E673B0((__int64)&v14, a1, v4);
      LOWORD(v17) = 7;
      v5 = v14;
      v14 = 0;
      v18 = v5;
      v6 = v15;
      v15 = 0;
      *(_QWORD *)&v19 = v6;
      LODWORD(v6) = v16;
      v16 = 0;
      DWORD2(v19) = v6;
      v7 = j__strlen("ownedTagDecl");
      v12.m128i_i64[0] = (__int64)&v17;
      v12.m128i_i64[1] = a1 + 1048;
      sub_E585D0(a1 + 1048, (__int64)"ownedTagDecl", v7, (__int64)sub_E58580, &v12);
      sub_222B2A0(&v17);
      sub_E5D2E0(&v14);
    }
  }
}
