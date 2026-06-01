/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070938
// Address: 0x0000000100070938

//----- (0000000100070938) ----------------------------------------------------
char *sub_100070938()
{
  uid_t v0; // w0
  passwd *v1; // x0
  char *pw_dir; // x20
  size_t v3; // x0
  size_t v4; // x21
  unsigned __int64 v5; // x22
  void *v6; // x1
  char *v7; // x19
  pthread_mutex_t *v9; // [xsp+0h] [xbp-40h] BYREF

  sub_1000756E0(&v9);
  if ( (unsigned __int64)qword_1000A5F58 > 1 )
    goto LABEL_10;
  qgetenv("HOME", &qword_1000A5F50);
  if ( (unsigned __int64)qword_1000A5F58 > 1 )
    goto LABEL_10;
  v0 = getuid();
  v1 = getpwuid(v0);
  if ( v1 )
  {
    pw_dir = v1->pw_dir;
    if ( !pw_dir || (v3 = strlen(v1->pw_dir)) == 0 )
    {
      qword_1000A5F58 = 0;
      goto LABEL_13;
    }
    v4 = v3;
    v5 = v3 + 1;
    v6 = (void *)qword_1000A5F50;
    if ( qword_1000A5F60 < v3 + 1 )
    {
      v6 = qvector_reserve(&qword_1000A5F50, (_QWORD *)qword_1000A5F50, v5, 1u);
      qword_1000A5F50 = (__int64)v6;
    }
    qword_1000A5F58 = v5;
    memmove(v6, pw_dir, v4);
    *(_BYTE *)(qword_1000A5F50 + v4) = 0;
  }
  if ( !qword_1000A5F58 )
  {
LABEL_13:
    v7 = &byte_10007AE40;
    goto LABEL_11;
  }
LABEL_10:
  v7 = (char *)qword_1000A5F50;
LABEL_11:
  qmutex_unlock(v9);
  return v7;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A5F50: using guessed type __int64 qword_1000A5F50;
// 1000A5F58: using guessed type __int64 qword_1000A5F58;
// 1000A5F60: using guessed type __int64 qword_1000A5F60;
