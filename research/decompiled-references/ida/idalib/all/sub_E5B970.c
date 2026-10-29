void __fastcall sub_E5B970(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  void *v4; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v5; // [rsp+8h] [rbp-E0h]
  _BYTE v6[16]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v7; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v9[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+70h] [rbp-78h] BYREF
  int v11; // [rsp+78h] [rbp-70h]
  __int128 v12; // [rsp+80h] [rbp-68h]
  __int64 v13; // [rsp+90h] [rbp-58h]
  char v14; // [rsp+98h] [rbp-50h]
  int v15; // [rsp+9Ch] [rbp-4Ch]
  void **v16; // [rsp+A0h] [rbp-48h]

  v2 = *(_QWORD *)(a2 + 24);
  if ( v2 )
  {
    v4 = v6;
    v12 = 0;
    v6[0] = 0;
    v10 = &off_2BEBE68;
    v5 = 0;
    v11 = 0;
    v14 = 0;
    v15 = 1;
    v13 = 0;
    v16 = &v4;
    sub_227B8B0(&v10, 0, 0, 0);
    v9[0] = *(_QWORD *)(v2 + 40);
    sub_FDEEB0(v9, &v10);
    v7.m128i_i64[0] = (__int64)v8;
    sub_E586C0(&v7, v4, (__int64)v4 + v5);
    sub_E59390((__int64)v9, &v7);
    v3 = j__strlen("selector");
    sub_222AB70(a1 + 1048, "selector", v3);
    sub_222CAC0(a1 + 1048, v9);
    sub_2229BF0(a1 + 1048);
    sub_222B2A0(v9);
    if ( (_BYTE *)v7.m128i_i64[0] != v8 )
      operator delete((void *)v7.m128i_i64[0]);
    v10 = &off_2BEBE68;
    sub_227B7A0(&v10);
    if ( v4 != v6 )
      operator delete(v4);
  }
}
