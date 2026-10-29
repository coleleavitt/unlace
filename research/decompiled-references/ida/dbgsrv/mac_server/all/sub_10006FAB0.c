/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006FAB0
// Address: 0x000000010006FAB0

//----- (000000010006FAB0) ----------------------------------------------------
const char *__fastcall sub_10006FAB0(__int64 a1)
{
  const char *v2; // r14
  char *v3; // rax
  const char *v4; // rax
  const char *v5; // r14
  size_t v6; // rax
  size_t v7; // r15
  unsigned __int64 v8; // r12
  void *v9; // rax
  __int128 v10; // kr00_16
  __int64 v11; // r12
  void *v12; // rdi
  void *v13; // rdi
  const char *v14; // rax
  __int128 v16; // [rsp+8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-38h]

  v2 = *(const char **)(a1 + 64);
  if ( !strcmp(v2, "irs") )
  {
    v4 = (const char *)sub_10006AAA0(*(_QWORD *)(a1 + 32));
    if ( v4 && (v5 = v4, (v6 = strlen(v4)) != 0) )
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = *(void **)(a1 + 40);
      if ( *(_QWORD *)(a1 + 56) < v8 )
      {
        v9 = qvector_reserve(a1 + 40, *(void **)(a1 + 40), v8, 1u);
        *(_QWORD *)(a1 + 40) = v9;
      }
      *(_QWORD *)(a1 + 48) = v8;
      memmove(v9, v5, v7);
      *(_BYTE *)(*(_QWORD *)(a1 + 40) + v7) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 48) = 0;
    }
  }
  else if ( !strcmp(v2, "dlopen") || !strcmp(v2, "dlsym") )
  {
    v3 = dlerror();
    sub_100002D00(a1 + 40, "%s: %s", v2, v3);
  }
  else if ( !strcmp(v2, "unsupported_version") )
  {
    sub_100002D00(a1 + 40, "Unsupported OpenSSL version. Please upgrade.");
  }
  else if ( !strcmp(v2, "openssl") )
  {
    sub_10006F970((__int64)&v16);
    v10 = v16;
    v16 = 0;
    v11 = v17;
    v17 = 0;
    v12 = *(void **)(a1 + 40);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      qfree(v12);
      v13 = (void *)v16;
      *(_OWORD *)(a1 + 40) = v10;
      *(_QWORD *)(a1 + 56) = v11;
      if ( v13 )
      {
        *((_QWORD *)&v16 + 1) = 0;
        qfree(v13);
      }
    }
    else
    {
      *(_OWORD *)(a1 + 40) = v10;
      *(_QWORD *)(a1 + 56) = v11;
    }
  }
  else if ( !strcmp(v2, "openssl_verify") )
  {
    v14 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 360))(*(int *)(a1 + 72));
    sub_100002D00(a1 + 40, "Certificate verification failed: %s", v14);
  }
  else if ( !strcmp(v2, "load_root_ca_certificate") )
  {
    sub_100002D00(a1 + 40, "Failed to load baked-in Root Certificate");
  }
  else if ( !strcmp(v2, "certchain_not_found") )
  {
    sub_100002D00(a1 + 40, "Certificate chain file not found");
  }
  else if ( !strcmp(v2, "privkey_not_found") )
  {
    sub_100002D00(a1 + 40, "Private key file not found");
  }
  else if ( !strcmp(v2, "connection_closed_by_peer") )
  {
    sub_100002D00(a1 + 40, "TLS: Connection closed by peer");
  }
  if ( *(_QWORD *)(a1 + 48) > 1u )
    return *(const char **)(a1 + 40);
  sub_100002D00(a1 + 40, "TLS: Unknown error: %s: %d", *(const char **)(a1 + 64), *(_DWORD *)(a1 + 72));
  if ( *(_QWORD *)(a1 + 48) )
    return *(const char **)(a1 + 40);
  else
    return _s1;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
