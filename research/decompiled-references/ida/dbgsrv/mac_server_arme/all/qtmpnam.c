/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpnam
// Address: 0x00000001000734B0

//----- (00000001000734B0) ----------------------------------------------------
char *__fastcall qtmpnam(char *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x20
  char *v3; // x19
  const char *v4; // x0
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  const char *v10; // x2
  char *v11; // x0
  size_t v12; // x0
  __int64 v13; // x8
  char *v14; // x22
  size_t v15; // x0
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  unsigned int v21; // w8
  _opaque_pthread_t *v22; // x0
  int v23; // w21
  char *v25; // x0
  size_t v26; // x1
  unsigned int v27; // [xsp+1Ch] [xbp-64h] BYREF
  char __s[6]; // [xsp+22h] [xbp-5Eh] BYREF

  if ( (a2 & 0x8000000000000000LL) == 0 )
  {
    if ( a1 )
      v2 = a2;
    else
      v2 = 1024;
    if ( a1 )
      v3 = a1;
    else
      v3 = (char *)qword_1000A5F98;
    v4 = (const char *)qtmpdir((unsigned __int64)v3, v2);
    if ( qisdir(v4) )
      v10 = v3;
    else
      v10 = ".";
    v11 = qmakepath(v3, v2, v10, v5, v6, v7, v8, v9, "ida12345.tmp");
    v12 = strlen(v11);
    v13 = 9;
    if ( v2 < 9 )
      v13 = v2;
    v14 = &v3[v12 - v13];
    while ( !gen_rand_buf(&v27, 4u) )
    {
      v22 = qthread_self();
      v27 ^= (unsigned int)v22;
      qthread_free(v22);
      v21 = v27;
      if ( v27 >= 0x20000 )
        goto LABEL_22;
LABEL_14:
      qsnprintf(__s, 6u, "%05u", v16, v17, v18, v19, v20, v21);
      v15 = strlen(__s);
      *(_DWORD *)v14 = *(_DWORD *)&__s[v15 - 1];
      v14[4] = __s[v15 - 1];
      if ( !qfileexist(v3) )
        return v3;
    }
    if ( dword_1000A6398 )
    {
      v21 = dword_1000A6398 + 1;
    }
    else
    {
      v23 = time(nullptr);
      v21 = (rand() % 1000 + 1000 * v23) % 0x186A0u;
    }
    dword_1000A6398 = v21;
    v27 = v21;
    if ( v21 < 0x20000 )
      goto LABEL_14;
LABEL_22:
    v21 = v21 & 0x1FFFF ^ (v21 >> 17);
    v27 = v21;
    goto LABEL_14;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(1225);
  return qgetcwd(v25, v26);
}
// 100073534: variable 'v5' is possibly undefined
// 100073534: variable 'v6' is possibly undefined
// 100073534: variable 'v7' is possibly undefined
// 100073534: variable 'v8' is possibly undefined
// 100073534: variable 'v9' is possibly undefined
// 100073590: variable 'v16' is possibly undefined
// 100073590: variable 'v17' is possibly undefined
// 100073590: variable 'v18' is possibly undefined
// 100073590: variable 'v19' is possibly undefined
// 100073590: variable 'v20' is possibly undefined
// 1000736B5: variable 'v25' is possibly undefined
// 1000736B5: variable 'v26' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
// 1000A5F98: using guessed type __int64 qword_1000A5F98[128];
// 1000A6398: using guessed type int dword_1000A6398;
