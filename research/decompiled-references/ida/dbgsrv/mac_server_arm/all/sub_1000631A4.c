/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000631A4
// Address: 0x00000001000631A4

//----- (00000001000631A4) ----------------------------------------------------
char *__fastcall sub_1000631A4(__int64 a1)
{
  const char *v2; // x20
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  char *v9; // x1
  const char *v10; // x0
  const char *v11; // x20
  size_t v12; // x0
  size_t v13; // x21
  unsigned __int64 v14; // x22
  _QWORD *v15; // x1
  void *v17; // x20
  __int64 v18; // x22
  __int64 v19; // x21
  void *v20; // x0
  void *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  char v28; // [xsp+0h] [xbp-50h]
  char v29; // [xsp+0h] [xbp-50h]
  void *v30; // [xsp+10h] [xbp-40h] BYREF
  __int64 v31; // [xsp+18h] [xbp-38h]
  __int64 v32; // [xsp+20h] [xbp-30h]

  v2 = *(const char **)(a1 + 64);
  if ( !strcmp(v2, "irs") )
  {
    v10 = (const char *)sub_10005E2FC(*(_QWORD *)(a1 + 32));
    if ( v10 && (v11 = v10, (v12 = strlen(v10)) != 0) )
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = *(_QWORD **)(a1 + 40);
      if ( *(_QWORD *)(a1 + 56) < v12 + 1 )
      {
        v15 = qvector_reserve((_QWORD *)(a1 + 40), v15, v14, 1u);
        *(_QWORD *)(a1 + 40) = v15;
      }
      *(_QWORD *)(a1 + 48) = v14;
      memmove(v15, v11, v13);
      *(_BYTE *)(*(_QWORD *)(a1 + 40) + v13) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 48) = 0;
    }
  }
  else
  {
    if ( !strcmp(v2, "dlopen") || !strcmp(v2, "dlsym") )
    {
      v28 = (char)v2;
      dlerror();
      v9 = "%s: %s";
      goto LABEL_13;
    }
    if ( !strcmp(v2, "unsupported_version") )
    {
      v9 = "Unsupported OpenSSL version. Please upgrade.";
      goto LABEL_13;
    }
    if ( !strcmp(v2, "openssl") )
    {
      sub_100063044((unsigned __int64 *)&v30);
      v17 = v30;
      v18 = v31;
      v19 = v32;
      v30 = nullptr;
      v31 = 0;
      v32 = 0;
      v20 = *(void **)(a1 + 40);
      if ( v20 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        qfree(v20);
        v21 = v30;
        *(_QWORD *)(a1 + 40) = v17;
        *(_QWORD *)(a1 + 48) = v18;
        *(_QWORD *)(a1 + 56) = v19;
        if ( v21 )
        {
          v31 = 0;
          qfree(v21);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 40) = v17;
        *(_QWORD *)(a1 + 48) = v18;
        *(_QWORD *)(a1 + 56) = v19;
      }
    }
    else if ( !strcmp(v2, "openssl_verify") )
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD))(qword_10009DAD8 + 360))(*(int *)(a1 + 72));
      sub_10000273C((char **)(a1 + 40), "Certificate verification failed: %s", v22, v23, v24, v25, v26, v27, v29);
    }
    else
    {
      if ( !strcmp(v2, "load_root_ca_certificate") )
      {
        v9 = "Failed to load baked-in Root Certificate";
        goto LABEL_13;
      }
      if ( !strcmp(v2, "certchain_not_found") )
      {
        v9 = "Certificate chain file not found";
        goto LABEL_13;
      }
      if ( !strcmp(v2, "privkey_not_found") )
      {
        v9 = "Private key file not found";
        goto LABEL_13;
      }
      if ( !strcmp(v2, "connection_closed_by_peer") )
      {
        v9 = "TLS: Connection closed by peer";
LABEL_13:
        sub_10000273C((char **)(a1 + 40), v9, v3, v4, v5, v6, v7, v8, v28);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 48) > 1u )
    return *(char **)(a1 + 40);
  sub_10000273C((char **)(a1 + 40), "TLS: Unknown error: %s: %d", v3, v4, v5, v6, v7, v8, *(_QWORD *)(a1 + 64));
  if ( *(_QWORD *)(a1 + 48) )
    return *(char **)(a1 + 40);
  else
    return &byte_100075A30;
}
// 1000632B8: variable 'v3' is possibly undefined
// 1000632B8: variable 'v4' is possibly undefined
// 1000632B8: variable 'v5' is possibly undefined
// 1000632B8: variable 'v6' is possibly undefined
// 1000632B8: variable 'v7' is possibly undefined
// 1000632B8: variable 'v8' is possibly undefined
// 1000632B8: variable 'v28' is possibly undefined
// 100063408: variable 'v22' is possibly undefined
// 100063408: variable 'v23' is possibly undefined
// 100063408: variable 'v24' is possibly undefined
// 100063408: variable 'v25' is possibly undefined
// 100063408: variable 'v26' is possibly undefined
// 100063408: variable 'v27' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
