/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100079520
// Address: 0x0000000100079520

//----- (0000000100079520) ----------------------------------------------------
const char *sub_100079520()
{
  uid_t v0; // eax
  passwd *v1; // rax
  char *pw_dir; // rbx
  size_t v3; // rax
  size_t v4; // r14
  void *v5; // r15
  void *v6; // rax
  const char *v7; // rbx
  pthread_mutex_t *v9; // [rsp+8h] [rbp-28h] BYREF

  sub_10007DDD0(&v9);
  if ( (unsigned __int64)*(&obj + 1) > 1 )
    goto LABEL_10;
  qgetenv("HOME", (__int64)&obj);
  if ( (unsigned __int64)*(&obj + 1) > 1 )
    goto LABEL_10;
  v0 = getuid();
  v1 = getpwuid(v0);
  if ( v1 )
  {
    pw_dir = v1->pw_dir;
    if ( !pw_dir || (v3 = strlen(v1->pw_dir)) == 0 )
    {
      *(&obj + 1) = nullptr;
      goto LABEL_13;
    }
    v4 = v3;
    v5 = (void *)(v3 + 1);
    v6 = obj;
    if ( qword_1000AE8A0 < (unsigned __int64)v5 )
    {
      v6 = qvector_reserve((__int64)&obj, obj, (unsigned __int64)v5, 1u);
      obj = v6;
    }
    *(&obj + 1) = v5;
    memmove(v6, pw_dir, v4);
    *((_BYTE *)obj + v4) = 0;
  }
  if ( !*(&obj + 1) )
  {
LABEL_13:
    v7 = _s1;
    goto LABEL_11;
  }
LABEL_10:
  v7 = (const char *)obj;
LABEL_11:
  qmutex_unlock(v9);
  return v7;
}
// 1000AE8A0: using guessed type __int64 qword_1000AE8A0;
