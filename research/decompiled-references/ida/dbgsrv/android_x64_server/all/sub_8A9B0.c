/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A9B0
// Address: 0x000000000008A9B0

//----- (000000000008A9B0) ----------------------------------------------------
char *__fastcall sub_8A9B0(__int64 *a1, char *a2, __int64 a3, __int64 a4, const char *a5, char a6)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  const char *v11; // rdi
  const char *v12; // rdx
  char *v13; // rax
  char *v14; // r14
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rbp
  const char *v20; // rdx
  char *v21; // rax
  char v22; // al
  pthread_mutex_t *v27; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+30h] [rbp-38h]

  v27 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v7 = 24 * a1[4];
  if ( v7 )
  {
    v8 = a1[3];
    v9 = 0;
    v29 = 24 * a1[4];
    do
    {
      v10 = *(_QWORD *)(v8 + v9 + 8);
      if ( a5 )
      {
        v11 = s1;
        if ( v10 )
          v11 = *(const char **)(v8 + v9);
        if ( !strcasecmp(v11, a5) )
          a5 = nullptr;
      }
      else
      {
        v12 = s1;
        if ( v10 )
          v12 = *(const char **)(v8 + v9);
        v13 = qmakepath(a2, a3, v12, a4, 0);
        v14 = v13;
        if ( a6 )
          v15 = sub_8ABC0(v13, a3);
        else
          v15 = qfileexist(v13);
        if ( v15 )
          goto LABEL_31;
        a5 = nullptr;
        v7 = v29;
      }
      v9 += 24;
    }
    while ( v7 != v9 );
  }
  v16 = a1[1];
  if ( !v16 )
  {
    get_ida_subdirs(a1, "idc", 0);
    v16 = a1[1];
  }
  v17 = 24 * v16;
  if ( 24 * v16 )
  {
    v18 = *a1;
    v19 = 0;
    while ( 1 )
    {
      v20 = s1;
      if ( *(_QWORD *)(v18 + v19 + 8) )
        v20 = *(const char **)(v18 + v19);
      v21 = qmakepath(a2, a3, v20, a4, 0);
      v14 = v21;
      v22 = a6 ? sub_8ABC0(v21, a3) : qfileexist(v21);
      if ( v22 )
        break;
      v19 += 24;
      if ( v17 == v19 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    v14 = getsysfile(a2, a3, a4, nullptr);
  }
LABEL_31:
  qmutex_unlock(v27);
  return v14;
}
