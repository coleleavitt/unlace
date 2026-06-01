void __fastcall sub_E64680(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  size_t v4; // rax
  char v5; // al
  const char *v6; // rsi
  size_t v7; // rax
  __int64 v8; // rdx
  size_t v9; // rax
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  size_t v18; // rax
  __int64 *v19; // [rsp+18h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-F0h]
  void *v21; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-E0h]
  _BYTE v23[16]; // [rsp+38h] [rbp-D8h] BYREF
  __m128i v24; // [rsp+48h] [rbp-C8h] BYREF
  _DWORD v25[4]; // [rsp+58h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A8h] BYREF
  __m128i v27; // [rsp+70h] [rbp-A0h]
  int v28; // [rsp+80h] [rbp-90h]
  __int64 (__fastcall **v29)(); // [rsp+98h] [rbp-78h] BYREF
  int v30; // [rsp+A0h] [rbp-70h]
  __int128 v31; // [rsp+A8h] [rbp-68h]
  __int64 v32; // [rsp+B8h] [rbp-58h]
  char v33; // [rsp+C0h] [rbp-50h]
  int v34; // [rsp+C4h] [rbp-4Ch]
  void **v35; // [rsp+C8h] [rbp-48h]

  v3 = a1 + 1048;
  v23[0] = 0;
  v31 = 0;
  v21 = v23;
  v33 = 0;
  v29 = &off_2BEBE68;
  v22 = 0;
  v30 = 0;
  v34 = 1;
  v32 = 0;
  v35 = &v21;
  sub_227B8B0(&v29, 0, 0, 0);
  v26 = sub_C9AC10(a2);
  sub_FDEEB0(&v26, &v29);
  v24.m128i_i64[0] = (__int64)v25;
  sub_E586C0(&v24, v21, (__int64)v21 + v22);
  sub_E59390((__int64)&v26, &v24);
  v4 = j__strlen("selector");
  v19 = &v26;
  v20 = a1 + 1048;
  sub_E585D0(a1 + 1048, (__int64)"selector", v4, (__int64)sub_E58580, &v19);
  sub_222B2A0(&v26);
  if ( (_DWORD *)v24.m128i_i64[0] != v25 )
    operator delete((void *)v24.m128i_i64[0]);
  v5 = *(_BYTE *)(a2 + 26);
  if ( v5 == 1 )
  {
    sub_E598C0((__int64)&v26, "instance");
    v18 = j__strlen("receiverKind");
    v24.m128i_i64[0] = (__int64)&v26;
    v24.m128i_i64[1] = a1 + 1048;
    sub_E585D0(v3, (__int64)"receiverKind", v18, (__int64)sub_E58580, &v24);
    sub_222B2A0(&v26);
  }
  else
  {
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        v6 = "super (class)";
      }
      else
      {
        if ( v5 != 3 )
          goto LABEL_12;
        v6 = "super (instance)";
      }
      sub_E598C0((__int64)&v26, v6);
      v7 = j__strlen("receiverKind");
      v24.m128i_i64[0] = (__int64)&v26;
      v24.m128i_i64[1] = a1 + 1048;
      sub_E585D0(v3, (__int64)"receiverKind", v7, (__int64)sub_E58580, &v24);
      sub_222B2A0(&v26);
      v8 = 0;
      if ( (unsigned int)*(unsigned __int8 *)(a2 + 26) - 2 <= 1 )
        v8 = *(_QWORD *)(a2 + 40);
      sub_E63A60((__int64)&v24, a1, v8, 1);
      LOWORD(v26) = 7;
      v27 = v24;
      v24 = 0u;
      v28 = v25[0];
      v25[0] = 0;
      v9 = j__strlen("superType");
      v19 = &v26;
      v20 = a1 + 1048;
      v10 = "superType";
    }
    else
    {
      sub_E598C0((__int64)&v26, "class");
      v15 = j__strlen("receiverKind");
      v24.m128i_i64[0] = (__int64)&v26;
      v24.m128i_i64[1] = a1 + 1048;
      sub_E585D0(v3, (__int64)"receiverKind", v15, (__int64)sub_E58580, &v24);
      sub_222B2A0(&v26);
      v16 = 0;
      if ( !*(_BYTE *)(a2 + 26) )
      {
        v17 = *(__int64 **)(a2 + 40);
        if ( v17 )
          v16 = *v17;
      }
      sub_E63A60((__int64)&v24, a1, v16, 1);
      LOWORD(v26) = 7;
      v27 = v24;
      v24 = 0u;
      v28 = v25[0];
      v25[0] = 0;
      v9 = j__strlen("classType");
      v19 = &v26;
      v20 = a1 + 1048;
      v10 = "classType";
    }
    sub_E585D0(v3, (__int64)v10, v9, (__int64)sub_E58580, &v19);
    sub_222B2A0(&v26);
    sub_E5D2E0(v24.m128i_i64);
  }
LABEL_12:
  v11 = sub_C9ABA0(a2, *(_QWORD **)(a1 + 1232));
  if ( v11 != *(_QWORD *)(a2 + 8) )
  {
    sub_E63A60((__int64)&v24, a1, v11, 1);
    LOWORD(v26) = 7;
    v12 = v24.m128i_i64[0];
    v24.m128i_i64[0] = 0;
    v27.m128i_i64[0] = v12;
    v13 = v24.m128i_i64[1];
    v24.m128i_i64[1] = 0;
    v27.m128i_i64[1] = v13;
    LODWORD(v13) = v25[0];
    v25[0] = 0;
    v28 = v13;
    v14 = j__strlen("callReturnType");
    v19 = &v26;
    v20 = a1 + 1048;
    sub_E585D0(v3, (__int64)"callReturnType", v14, (__int64)sub_E58580, &v19);
    sub_222B2A0(&v26);
    sub_E5D2E0(v24.m128i_i64);
  }
  v29 = &off_2BEBE68;
  sub_227B7A0(&v29);
  if ( v21 != v23 )
    operator delete(v21);
}
