/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C2FF0
// Address: 0x080C2FF0

//----- (080C2FF0) --------------------------------------------------------
int *__cdecl sub_80C2FF0(int *a1)
{
  const char *v1; // edi
  unsigned int v2; // eax
  int *result; // eax
  const char *v4; // eax
  const char *v5; // edi
  size_t v6; // eax
  size_t v7; // ebp
  unsigned int v8; // edx
  void *v9; // eax
  unsigned int v10; // edi
  int v11; // ebp
  void *v12; // edx
  void *v13; // ecx
  void *v14; // ecx
  int v15; // [esp-8h] [ebp-44h]
  char *v16; // [esp-4h] [ebp-40h]
  int v17; // [esp+0h] [ebp-3Ch]
  unsigned int v18; // [esp+0h] [ebp-3Ch]
  void *ptr; // [esp+10h] [ebp-2Ch] BYREF
  unsigned int v20; // [esp+14h] [ebp-28h]
  int v21; // [esp+18h] [ebp-24h]
  unsigned int v22; // [esp+1Ch] [ebp-20h]

  v22 = __readgsdword(0x14u);
  v1 = (const char *)a1[8];
  if ( !strcmp(v1, "irs") )
  {
    v4 = (const char *)sub_80BBF50(a1[4]);
    v5 = v4;
    if ( !v4 || (v6 = strlen(v4), (v7 = v6) == 0) )
    {
      a1[6] = 0;
      goto LABEL_17;
    }
    v8 = v6 + 1;
    v9 = (void *)a1[5];
    if ( a1[7] < v8 )
    {
      v18 = v8;
      v9 = sub_80CF920((int)(a1 + 5), v9, v8, 1u);
      v8 = v18;
      a1[5] = (int)v9;
    }
    a1[6] = v8;
    memmove(v9, v5, v7);
    *(_BYTE *)(a1[5] + v7) = 0;
    v2 = a1[6];
  }
  else
  {
    if ( !strcmp(v1, "dlopen") || !strcmp(v1, "dlsym") )
    {
      v16 = dlerror();
      sub_805ED10(a1 + 5, "%s: %s", a1[8], v16);
      goto LABEL_9;
    }
    if ( !strcmp(v1, "unsupported_version") )
    {
      sub_805ED10(a1 + 5, "Unsupported OpenSSL version. Please upgrade.");
      goto LABEL_9;
    }
    if ( !strcmp(v1, "openssl") )
    {
      sub_80C2E10((int)&ptr);
      v10 = v20;
      v11 = v21;
      v20 = 0;
      v12 = ptr;
      v21 = 0;
      v2 = v10;
      v13 = (void *)a1[5];
      ptr = nullptr;
      if ( v13 )
      {
        v17 = (int)v12;
        a1[6] = 0;
        sub_80CF780(v13);
        v14 = ptr;
        a1[6] = v10;
        v2 = v10;
        a1[5] = v17;
        a1[7] = v11;
        if ( v14 )
        {
          v20 = 0;
          sub_80CF780(v14);
          v2 = a1[6];
        }
      }
      else
      {
        a1[5] = (int)v12;
        a1[6] = v10;
        a1[7] = v11;
      }
    }
    else
    {
      if ( !strcmp(v1, "openssl_verify") )
      {
        v15 = (*(int (__cdecl **)(int))(dword_811E820 + 180))(a1[9]);
        sub_805ED10(a1 + 5, "Certificate verification failed: %s", v15);
LABEL_9:
        v2 = a1[6];
        goto LABEL_10;
      }
      if ( !strcmp(v1, "load_root_ca_certificate") )
      {
        sub_805ED10(a1 + 5, "Failed to load baked-in Root Certificate");
        goto LABEL_9;
      }
      if ( !strcmp(v1, "certchain_not_found") )
      {
        sub_805ED10(a1 + 5, "Certificate chain file not found");
        goto LABEL_9;
      }
      if ( !strcmp(v1, "privkey_not_found") )
      {
        sub_805ED10(a1 + 5, "Private key file not found");
        goto LABEL_9;
      }
      if ( !strcmp(v1, "connection_closed_by_peer") )
      {
        sub_805ED10(a1 + 5, "TLS: Connection closed by peer");
        goto LABEL_9;
      }
      v2 = a1[6];
    }
  }
LABEL_10:
  if ( v2 > 1 )
  {
LABEL_11:
    result = (int *)a1[5];
    goto LABEL_12;
  }
LABEL_17:
  sub_805ED10(a1 + 5, "TLS: Unknown error: %s: %d", a1[8], a1[9]);
  if ( a1[6] )
    goto LABEL_11;
  result = &dword_80DDFD8;
LABEL_12:
  if ( v22 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E820: using guessed type int dword_811E820;
