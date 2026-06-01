/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061558
// Address: 0x0000000100061558

//----- (0000000100061558) ----------------------------------------------------
__int64 __fastcall sub_100061558(__int64 a1)
{
  void *v2; // x1
  unsigned __int64 v3; // x22
  void *v4; // x0
  void *v5; // x0
  unsigned __int8 *v6; // x1
  void *v7; // x0
  unsigned __int8 *v8; // x1
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  unsigned __int8 *v12; // x1
  void *v13; // x0
  unsigned __int8 *v14; // x1
  void *v15; // x0
  __int64 v16; // x19
  void *v17; // x0
  void *v19; // [xsp+10h] [xbp-450h] BYREF
  unsigned __int64 v20; // [xsp+18h] [xbp-448h]
  unsigned __int64 v21; // [xsp+20h] [xbp-440h]
  char __path[1024]; // [xsp+28h] [xbp-438h] BYREF

  v19 = nullptr;
  v20 = 0;
  v21 = 0;
  if ( (unsigned int)qgetenv("OPENSSL_LIBRARY_PATH", &v19) )
  {
    if ( (debug & 0x100000) != 0 )
      sub_100011BD4();
    v2 = v19;
    if ( v20 < 2 || *((char *)v19 + v20 - 2) != 47 )
    {
      if ( v20 )
        v3 = v20 - 1;
      else
        v3 = 0;
      if ( v21 < v3 + 2 )
      {
        v2 = qvector_reserve(&v19, v19, v3 + 2, 1u);
        v19 = v2;
      }
      v20 = v3 + 2;
      *((_BYTE *)v2 + v3) = 47;
      *((_BYTE *)v19 + v3 + 1) = 0;
    }
  }
  v4 = *(void **)(a1 + 32);
  if ( v4 )
    dlclose(v4);
  *(_QWORD *)(a1 + 32) = 0;
  v5 = *(void **)(a1 + 24);
  if ( v5 )
    dlclose(v5);
  *(_QWORD *)(a1 + 24) = 0;
  if ( v20 )
    v6 = (unsigned __int8 *)v19;
  else
    v6 = (unsigned __int8 *)&byte_100075A30;
  qstrncpy(__path, v6, 1024);
  qstrncat(__path, "libcrypto", 1024);
  qstrncat(__path, ".35", 1024);
  qstrncat(__path, ".dylib", 1024);
  v7 = dlopen(__path, 2);
  *(_QWORD *)(a1 + 24) = v7;
  if ( v7 )
  {
    if ( v20 )
      v8 = (unsigned __int8 *)v19;
    else
      v8 = (unsigned __int8 *)&byte_100075A30;
    qstrncpy(__path, v8, 1024);
    qstrncat(__path, "libssl", 1024);
    qstrncat(__path, ".35", 1024);
    qstrncat(__path, ".dylib", 1024);
    v9 = dlopen(__path, 2);
    *(_QWORD *)(a1 + 32) = v9;
    if ( v9 )
    {
      if ( a35[0] && (debug & 0x100000) != 0 )
        sub_100011BD4();
      goto LABEL_41;
    }
  }
  else
  {
    v10 = *(void **)(a1 + 32);
    if ( !v10 )
      goto LABEL_30;
    dlclose(v10);
  }
  v11 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 32) = 0;
  if ( v11 )
    dlclose(v11);
LABEL_30:
  *(_QWORD *)(a1 + 24) = 0;
  if ( v20 )
    v12 = (unsigned __int8 *)v19;
  else
    v12 = (unsigned __int8 *)&byte_100075A30;
  qstrncpy(__path, v12, 1024);
  qstrncat(__path, "libcrypto", 1024);
  qstrncat(__path, (unsigned __int8 *)&byte_10008E2F5, 1024);
  qstrncat(__path, ".dylib", 1024);
  v13 = dlopen(__path, 2);
  *(_QWORD *)(a1 + 24) = v13;
  if ( v13 )
  {
    v14 = (unsigned __int8 *)(v20 ? v19 : &byte_100075A30);
    qstrncpy(__path, v14, 1024);
    qstrncat(__path, "libssl", 1024);
    qstrncat(__path, (unsigned __int8 *)&byte_10008E2F5, 1024);
    qstrncat(__path, ".dylib", 1024);
    v15 = dlopen(__path, 2);
    *(_QWORD *)(a1 + 32) = v15;
    if ( v15 )
    {
LABEL_41:
      v16 = 1;
      v17 = v19;
      if ( !v19 )
        return v16;
      goto LABEL_44;
    }
  }
  v16 = 0;
  v17 = v19;
  if ( v19 )
  {
LABEL_44:
    v20 = 0;
    qfree(v17);
  }
  return v16;
}
// 100075A30: using guessed type char byte_100075A30;
// 10008E2F5: using guessed type char byte_10008E2F5;
// 10009D908: using guessed type int debug;
