/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B830
// Address: 0x000000010004B830

//----- (000000010004B830) ----------------------------------------------------
char *__fastcall sub_10004B830(__int64 *a1, char *a2, __int64 a3, __int64 a4, const char *a5, char a6)
{
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 i; // r12
  __int64 v12; // rax
  const char *v13; // rdi
  const char *v14; // rdx
  char *v15; // rax
  char *v16; // rbx
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // r13
  const char *v22; // rdx
  char *v23; // rax
  char v24; // al
  __int64 *v26; // [rsp+0h] [rbp-50h]
  pthread_mutex_t *v27; // [rsp+8h] [rbp-48h]

  v27 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v26 = a1;
  v9 = 24 * a1[4];
  if ( v9 )
  {
    v10 = a1[3];
    for ( i = 0; v9 != i; i += 24 )
    {
      v12 = *(_QWORD *)(v10 + i + 8);
      if ( a5 )
      {
        v13 = _s1;
        if ( v12 )
          v13 = *(const char **)(v10 + i);
        if ( !strcasecmp(v13, a5) )
          a5 = nullptr;
      }
      else
      {
        v14 = _s1;
        if ( v12 )
          v14 = *(const char **)(v10 + i);
        v15 = qmakepath(a2, a3, (__int64)v14, a4, 0, v8, v26, v27);
        v16 = v15;
        if ( a6 )
          v17 = sub_10004BA10(v15, a3);
        else
          v17 = qfileexist(v15);
        if ( v17 )
          goto LABEL_28;
        a5 = nullptr;
      }
    }
  }
  v18 = v26[1];
  if ( !v18 )
  {
    get_ida_subdirs((__int64)v26, "idc", 0);
    v18 = v26[1];
  }
  v19 = 24 * v18;
  if ( 24 * v18 )
  {
    v20 = *v26;
    v21 = 0;
    while ( 1 )
    {
      v22 = _s1;
      if ( *(_QWORD *)(v20 + v21 + 8) )
        v22 = *(const char **)(v20 + v21);
      v23 = qmakepath(a2, a3, (__int64)v22, a4, 0);
      v16 = v23;
      v24 = a6 ? sub_10004BA10(v23, a3) : qfileexist(v23);
      if ( v24 )
        break;
      v21 += 24;
      if ( v19 == v21 )
        goto LABEL_27;
    }
  }
  else
  {
LABEL_27:
    v16 = getsysfile(a2, a3, a4, nullptr);
  }
LABEL_28:
  qmutex_unlock(v27);
  return v16;
}
// 10004B8F0: variable 'v8' is possibly undefined
// 10004B8F0: variable 'v26' is possibly undefined
// 10004B8F0: variable 'v27' is possibly undefined
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
