/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475750
// Address: 0x0000000000475750

//----- (0000000000475750) ----------------------------------------------------
const char *__fastcall sub_475750(__int64 a1)
{
  const char *v1; // rbp
  const char *v3; // rax
  unsigned __int64 v4; // rbp
  char *v5; // rax
  const char *v7; // rax
  const char *v8; // rbp
  size_t v9; // rax
  size_t v10; // r12
  void *v11; // rdi
  unsigned __int64 v12; // r13
  __m128i v13; // xmm0
  void *v14; // rdi
  void *v15; // r12
  __m128i v16; // xmm0
  void *v17; // rdi
  void *v18; // rax
  __m128i v19; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v21; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v1 = *(const char **)(a1 + 64);
  v22 = __readfsqword(0x28u);
  if ( !strcmp(v1, "irs") )
  {
    v7 = (const char *)sub_46F000(*(_QWORD *)(a1 + 32));
    v8 = v7;
    if ( !v7 || (v9 = strlen(v7), (v10 = v9) == 0) )
    {
      *(_QWORD *)(a1 + 48) = 0;
      goto LABEL_14;
    }
    v11 = *(void **)(a1 + 40);
    v12 = v9 + 1;
    if ( *(_QWORD *)(a1 + 56) < v9 + 1 )
    {
      v18 = sub_481540(a1 + 40, *(void **)(a1 + 40), v12, 1u);
      *(_QWORD *)(a1 + 40) = v18;
      v11 = v18;
    }
    *(_QWORD *)(a1 + 48) = v12;
    memmove(v11, v8, v10);
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + v10) = 0;
    v4 = *(_QWORD *)(a1 + 48);
  }
  else if ( !strcmp(v1, "dlopen") || !strcmp(v1, "dlsym") )
  {
    v5 = dlerror();
    sub_4172B0(a1 + 40, "%s: %s", *(const char **)(a1 + 64), v5);
    v4 = *(_QWORD *)(a1 + 48);
  }
  else if ( !strcmp(v1, "unsupported_version") )
  {
    sub_4172B0(a1 + 40, "Unsupported OpenSSL version. Please upgrade.");
    v4 = *(_QWORD *)(a1 + 48);
  }
  else if ( !strcmp(v1, "openssl") )
  {
    sub_4755A0((__int64)&ptr);
    v13 = _mm_loadu_si128(&v21);
    v14 = *(void **)(a1 + 40);
    v15 = ptr;
    v21 = 0;
    ptr = nullptr;
    v4 = v13.m128i_i64[0];
    if ( v14 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      v19 = v13;
      j__free(v14);
      v16 = _mm_load_si128(&v19);
      v17 = ptr;
      *(_QWORD *)(a1 + 40) = v15;
      *(__m128i *)(a1 + 48) = v16;
      if ( v17 )
      {
        v21.m128i_i64[0] = 0;
        j__free(v17);
        v4 = *(_QWORD *)(a1 + 48);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 40) = v15;
      *(__m128i *)(a1 + 48) = v13;
    }
  }
  else if ( !strcmp(v1, "openssl_verify") )
  {
    v3 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(qword_4C83E0 + 360))(*(int *)(a1 + 72));
    sub_4172B0(a1 + 40, "Certificate verification failed: %s", v3);
    v4 = *(_QWORD *)(a1 + 48);
  }
  else if ( !strcmp(v1, "load_root_ca_certificate") )
  {
    sub_4172B0(a1 + 40, "Failed to load baked-in Root Certificate");
    v4 = *(_QWORD *)(a1 + 48);
  }
  else if ( !strcmp(v1, "certchain_not_found") )
  {
    sub_4172B0(a1 + 40, "Certificate chain file not found");
    v4 = *(_QWORD *)(a1 + 48);
  }
  else if ( !strcmp(v1, "privkey_not_found") )
  {
    sub_4172B0(a1 + 40, "Private key file not found");
    v4 = *(_QWORD *)(a1 + 48);
  }
  else
  {
    if ( !strcmp(v1, "connection_closed_by_peer") )
      sub_4172B0(a1 + 40, "TLS: Connection closed by peer");
    v4 = *(_QWORD *)(a1 + 48);
  }
  if ( v4 > 1 )
    return *(const char **)(a1 + 40);
LABEL_14:
  sub_4172B0(a1 + 40, "TLS: Unknown error: %s: %d", *(const char **)(a1 + 64), *(_DWORD *)(a1 + 72));
  if ( *(_QWORD *)(a1 + 48) )
    return *(const char **)(a1 + 40);
  return s1;
}
// 4C83E0: using guessed type __int64 qword_4C83E0;
