/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100043AC8
// Address: 0x0000000100043AC8

//----- (0000000100043AC8) ----------------------------------------------------
char *__fastcall sub_100043AC8(_QWORD *a1, char *a2, __int64 a3, const char *a4, const char *a5, int a6)
{
  pthread_mutex_t *v12; // x19
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  __int64 v18; // x26
  __int64 v19; // x27
  const char *v20; // x0
  __int64 v21; // x8
  const char *v22; // x2
  char *v23; // x0
  char *v24; // x25
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x26
  __int64 v28; // x8
  __int64 *v29; // x27
  __int64 v30; // t1
  const char *v31; // x2
  char *v32; // x0
  char v33; // w0

  v12 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  v18 = 24LL * a1[4];
  if ( v18 )
  {
    v19 = a1[3];
    do
    {
      v21 = *(_QWORD *)(v19 + 8);
      if ( a5 )
      {
        if ( v21 )
          v20 = *(const char **)v19;
        else
          v20 = &byte_100075A30;
        if ( !strcasecmp(v20, a5) )
          a5 = nullptr;
      }
      else
      {
        if ( v21 )
          v22 = *(const char **)v19;
        else
          v22 = &byte_100075A30;
        v23 = qmakepath(a2, a3, v22, v13, v14, v15, v16, v17, a4);
        v24 = v23;
        if ( a6 )
          v25 = sub_100043CB0(v23, a3);
        else
          v25 = qfileexist(v23);
        if ( (v25 & 1) != 0 )
          goto LABEL_31;
        a5 = nullptr;
      }
      v19 += 24;
      v18 -= 24;
    }
    while ( v18 );
  }
  v26 = a1[1];
  if ( !v26 )
  {
    get_ida_subdirs(a1, "idc", 0);
    v26 = a1[1];
  }
  v27 = 24 * v26;
  if ( 24 * v26 )
  {
    v28 = *a1 + 8LL;
    v29 = (__int64 *)v28;
    while ( 1 )
    {
      v30 = *v29;
      v29 += 3;
      v31 = v30 ? *(const char **)(v28 - 8) : &byte_100075A30;
      v32 = qmakepath(a2, a3, v31, v13, v14, v15, v16, v17, a4);
      v24 = v32;
      v33 = a6 ? sub_100043CB0(v32, a3) : qfileexist(v32);
      if ( (v33 & 1) != 0 )
        break;
      v28 = (__int64)v29;
      v27 -= 24;
      if ( !v27 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    v24 = getsysfile(a2, a3, a4, nullptr);
  }
LABEL_31:
  qmutex_unlock(v12);
  return v24;
}
// 100043B84: variable 'v13' is possibly undefined
// 100043B84: variable 'v14' is possibly undefined
// 100043B84: variable 'v15' is possibly undefined
// 100043B84: variable 'v16' is possibly undefined
// 100043B84: variable 'v17' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
