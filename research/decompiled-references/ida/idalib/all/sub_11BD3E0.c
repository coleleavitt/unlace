void __fastcall sub_11BD3E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  char *v6; // r12
  size_t v7; // rax
  size_t v8; // rax
  unsigned __int8 *v9; // rbx
  __int64 v10; // rax
  size_t v11; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v12[4]; // [rsp+10h] [rbp-88h] BYREF
  __int16 v13; // [rsp+30h] [rbp-68h]

  v4 = sub_10DCD30(a2, 0x82Cu);
  if ( v4 )
  {
    v5 = v4;
    v6 = **(char ***)(v4 + 48);
    v7 = j__strlen("none");
    if ( !v6 )
    {
      v9 = nullptr;
      if ( v7 )
      {
        v9 = (unsigned __int8 *)j__strlen("zlib");
        if ( v9 )
        {
          v9 = (unsigned __int8 *)j__strlen("zstd");
          if ( v9 )
          {
            v9 = nullptr;
            goto LABEL_9;
          }
        }
      }
      goto LABEL_18;
    }
    v11 = v7;
    v8 = j__strlen(v6);
    v9 = (unsigned __int8 *)v8;
    if ( v8 == v11 )
    {
      if ( !v8 || !memcmp(v6, "none", v8) )
        goto LABEL_18;
      if ( v9 != (unsigned __int8 *)j__strlen("zlib") )
      {
LABEL_7:
        if ( v9 != (unsigned __int8 *)j__strlen("zstd") )
        {
LABEL_9:
          sub_FC70B0((__int64)v12, **(_QWORD **)(a1 + 8), 0, 497);
          sub_AEC220(v12, *(_BYTE **)(v5 + 24), *(_QWORD *)(v5 + 32));
          sub_AEC220(v12, v6, (signed __int64)v9);
          sub_AEA040((__int64)v12);
          return;
        }
LABEL_8:
        if ( memcmp(v6, "zstd", (size_t)v9) )
          goto LABEL_9;
LABEL_18:
        v12[2] = (unsigned __int8 *)v6;
        v13 = 1283;
        v12[3] = v9;
        v12[0] = "--compress-debug-sections=";
        v10 = sub_10DA6C0(a2, (__int64)v12);
        sub_10DC5D0(a3, v10);
        return;
      }
    }
    else
    {
      if ( v8 != j__strlen("zlib") )
      {
        if ( v9 != (unsigned __int8 *)j__strlen("zstd") )
          goto LABEL_9;
        if ( !v9 )
          goto LABEL_18;
        goto LABEL_8;
      }
      if ( !v9 )
        goto LABEL_18;
    }
    if ( !memcmp(v6, "zlib", (size_t)v9) )
      goto LABEL_18;
    goto LABEL_7;
  }
}
