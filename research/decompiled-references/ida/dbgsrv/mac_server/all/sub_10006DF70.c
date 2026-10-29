/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006DF70
// Address: 0x000000010006DF70

//----- (000000010006DF70) ----------------------------------------------------
__int64 __fastcall sub_10006DF70(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // rsi
  _BYTE *v3; // rax
  __int64 v4; // r15
  void *v5; // rdi
  void *v6; // rdi
  const char *v7; // rsi
  void *v8; // rax
  const char *v9; // rsi
  void *v10; // rdi
  const char *v11; // r14
  void *v12; // rax
  void *v13; // rdi
  const char *v14; // rsi
  void *v15; // rax
  const char *v16; // rsi
  void *v17; // rax
  __int128 v19; // [rsp+0h] [rbp-440h] BYREF
  unsigned __int64 v20; // [rsp+10h] [rbp-430h]
  char __path[1024]; // [rsp+20h] [rbp-420h] BYREF

  v1 = a1;
  v19 = 0;
  v20 = 0;
  if ( (unsigned __int8)qgetenv("OPENSSL_LIBRARY_PATH", (__int64)&v19) )
  {
    if ( (debug[2] & 0x10) != 0 )
    {
      if ( *((_QWORD *)&v19 + 1) )
        v2 = (const char *)v19;
      else
        v2 = _s1;
      sub_1000139E0((int)"TLS: using OpenSSL library path override \"%s\"\n", v2);
    }
    v3 = (_BYTE *)v19;
    if ( *((_QWORD *)&v19 + 1) < 2u || *(_BYTE *)(v19 + *((_QWORD *)&v19 + 1) - 2) != 47 )
    {
      v4 = 0;
      if ( *((_QWORD *)&v19 + 1) )
        v4 = *((_QWORD *)&v19 + 1) - 1LL;
      if ( v20 < v4 + 2 )
      {
        v3 = qvector_reserve((__int64)&v19, (void *)v19, v4 + 2, 1u);
        *(_QWORD *)&v19 = v3;
      }
      *((_QWORD *)&v19 + 1) = v4 + 2;
      v3[v4] = 47;
      *(_BYTE *)(v19 + v4 + 1) = 0;
    }
  }
  v5 = *(void **)(a1 + 32);
  if ( v5 )
    dlclose(v5);
  *(_QWORD *)(v1 + 32) = 0;
  v6 = *(void **)(v1 + 24);
  if ( v6 )
    dlclose(v6);
  *(_QWORD *)(v1 + 24) = 0;
  if ( *((_QWORD *)&v19 + 1) )
    v7 = (const char *)v19;
  else
    v7 = _s1;
  qstrncpy(__path, (__int64)v7, 1024);
  qstrncat(__path, (__int64)"libcrypto", 1024);
  qstrncat(__path, (__int64)".35", 1024);
  qstrncat(__path, (__int64)".dylib", 1024);
  v8 = dlopen(__path, 2);
  *(_QWORD *)(v1 + 24) = v8;
  if ( v8 )
  {
    if ( *((_QWORD *)&v19 + 1) )
      v9 = (const char *)v19;
    else
      v9 = _s1;
    qstrncpy(__path, (__int64)v9, 1024);
    qstrncat(__path, (__int64)"libssl", 1024);
    v11 = ".35";
    qstrncat(__path, (__int64)".35", 1024);
    qstrncat(__path, (__int64)".dylib", 1024);
    v12 = dlopen(__path, 2);
    *(_QWORD *)(v1 + 32) = v12;
    if ( v12 )
      goto LABEL_38;
  }
  else
  {
    v10 = *(void **)(v1 + 32);
    if ( !v10 )
      goto LABEL_30;
    dlclose(v10);
  }
  v13 = *(void **)(v1 + 24);
  *(_QWORD *)(v1 + 32) = 0;
  if ( v13 )
    dlclose(v13);
LABEL_30:
  *(_QWORD *)(v1 + 24) = 0;
  if ( *((_QWORD *)&v19 + 1) )
    v14 = (const char *)v19;
  else
    v14 = _s1;
  qstrncpy(__path, (__int64)v14, 1024);
  qstrncat(__path, (__int64)"libcrypto", 1024);
  qstrncat(__path, (__int64)&_s, 1024);
  qstrncat(__path, (__int64)".dylib", 1024);
  v15 = dlopen(__path, 2);
  *(_QWORD *)(v1 + 24) = v15;
  if ( !v15
    || (!*((_QWORD *)&v19 + 1) ? (v16 = _s1) : (v16 = (const char *)v19),
        qstrncpy(__path, (__int64)v16, 1024),
        qstrncat(__path, (__int64)"libssl", 1024),
        v11 = &_s,
        qstrncat(__path, (__int64)&_s, 1024),
        qstrncat(__path, (__int64)".dylib", 1024),
        v17 = dlopen(__path, 2),
        (*(_QWORD *)(v1 + 32) = v17) == 0) )
  {
    LODWORD(v1) = 0;
    goto LABEL_42;
  }
LABEL_38:
  LOBYTE(v1) = 1;
  if ( *v11 && (debug[2] & 0x10) != 0 )
    sub_1000139E0((int)"TLS: loaded \"%s\"\n", __path);
LABEL_42:
  if ( (_QWORD)v19 )
  {
    *((_QWORD *)&v19 + 1) = 0;
    qfree((void *)v19);
  }
  return (unsigned int)v1;
}
