__int64 __fastcall sub_E66E60(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  size_t v4; // rax
  char v5; // r14
  size_t v6; // rax
  int v7; // eax
  const char *v8; // rsi
  bool v9; // r14
  size_t v10; // rax
  char v11; // cl
  bool v12; // r14
  size_t v13; // rax
  char v14; // cl
  unsigned int v15; // r14d
  size_t v16; // rax
  char v17; // r14
  size_t v18; // rax
  char v19; // al
  const char *v20; // rsi
  size_t v21; // rax
  char v22; // bl
  size_t v23; // rax
  size_t v25; // rax
  char *v26; // rax
  size_t v27; // rax
  _QWORD v28[2]; // [rsp+0h] [rbp-98h] BYREF
  __int16 *v29; // [rsp+10h] [rbp-88h] BYREF
  __int64 v30; // [rsp+18h] [rbp-80h]
  int v31; // [rsp+20h] [rbp-78h]
  __int16 v32; // [rsp+30h] [rbp-68h] BYREF
  __int64 v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+48h] [rbp-50h]

  v3 = a1 + 1048;
  sub_E5B230(a1, a2);
  sub_E63A60((__int64)&v29, a1, *(_QWORD *)(a2 + 48), 1);
  v32 = 7;
  v33 = (__int64)v29;
  v29 = nullptr;
  v34 = v30;
  v30 = 0;
  v35 = v31;
  v31 = 0;
  v4 = j__strlen("type");
  v28[0] = &v32;
  v28[1] = a1 + 1048;
  sub_E585D0(a1 + 1048, (__int64)"type", v4, (__int64)sub_E58580, v28);
  sub_222B2A0(&v32);
  sub_E5D2E0((__int64 *)&v29);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
  {
    v5 = *(_DWORD *)(a2 + 100) != 0;
    v6 = j__strlen("explicitObjectParameter");
    sub_E59B90(a1, (__int64)"explicitObjectParameter", v6, v5);
  }
  if ( (*(_BYTE *)(a2 + 96) & 7) != 0 )
  {
    v26 = sub_B730C0(*(_BYTE *)(a2 + 96) & 7);
    sub_E598C0((__int64)&v32, v26);
    v27 = j__strlen("storageClass");
    v29 = &v32;
    v30 = a1 + 1048;
    sub_E585D0(v3, (__int64)"storageClass", v27, (__int64)sub_E58580, &v29);
    sub_222B2A0(&v32);
  }
  v7 = sub_B73370(a2);
  if ( v7 == 1 )
  {
    v8 = "static";
  }
  else
  {
    v8 = "dynamic";
    if ( v7 != 2 )
      goto LABEL_7;
  }
  sub_E598C0((__int64)&v32, v8);
  v25 = j__strlen("tls");
  v29 = &v32;
  v30 = a1 + 1048;
  sub_E585D0(v3, (__int64)"tls", v25, (__int64)sub_E58580, &v29);
  sub_222B2A0(&v32);
LABEL_7:
  v9 = 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    v9 = (*(_BYTE *)(a2 + 97) & 4) != 0;
  v10 = j__strlen("nrvo");
  v11 = v9;
  v12 = 0;
  sub_E59B90(a1, (__int64)"nrvo", v10, v11);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    v12 = (*(_BYTE *)(a2 + 97) & 0x20) != 0;
  v13 = j__strlen("inline");
  v14 = v12;
  LOBYTE(v15) = 0;
  sub_E59B90(a1, (__int64)"inline", v13, v14);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    v15 = (unsigned int)*(char *)(a2 + 97) >> 31;
  v16 = j__strlen("constexpr");
  sub_E59B90(a1, (__int64)"constexpr", v16, v15);
  v17 = (*(_BYTE *)(a2 + 8) & 7) == 4;
  v18 = j__strlen("modulePrivate");
  sub_E59B90(a1, (__int64)"modulePrivate", v18, v17);
  if ( sub_B735C0(a2) )
  {
    v19 = (*(_BYTE *)(a2 + 96) >> 5) & 3;
    if ( v19 == 1 )
    {
      v20 = "call";
    }
    else if ( v19 )
    {
      if ( v19 == 2 )
        v20 = "list";
      else
        v20 = "paren-list";
    }
    else
    {
      v20 = "c";
    }
    sub_E598C0((__int64)&v32, v20);
    v21 = j__strlen("init");
    v29 = &v32;
    v30 = a1 + 1048;
    sub_E585D0(v3, (__int64)"init", v21, (__int64)sub_E58580, &v29);
    sub_222B2A0(&v32);
  }
  v22 = sub_B799A0(a2);
  v23 = j__strlen("isParameterPack");
  return sub_E59B90(a1, (__int64)"isParameterPack", v23, v22);
}
