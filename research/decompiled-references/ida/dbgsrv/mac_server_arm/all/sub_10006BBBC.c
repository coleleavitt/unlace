/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006BBBC
// Address: 0x000000010006BBBC

//----- (000000010006BBBC) ----------------------------------------------------
char *sub_10006BBBC()
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

  sub_100070638(&v9);
  if ( (unsigned __int64)qword_10009DF58 > 1 )
    goto LABEL_10;
  qgetenv("HOME", &qword_10009DF50);
  if ( (unsigned __int64)qword_10009DF58 > 1 )
    goto LABEL_10;
  v0 = getuid();
  v1 = getpwuid(v0);
  if ( v1 )
  {
    pw_dir = v1->pw_dir;
    if ( !pw_dir || (v3 = strlen(v1->pw_dir)) == 0 )
    {
      qword_10009DF58 = 0;
      goto LABEL_13;
    }
    v4 = v3;
    v5 = v3 + 1;
    v6 = (void *)qword_10009DF50;
    if ( qword_10009DF60 < v3 + 1 )
    {
      v6 = qvector_reserve(&qword_10009DF50, (_QWORD *)qword_10009DF50, v5, 1u);
      qword_10009DF50 = (__int64)v6;
    }
    qword_10009DF58 = v5;
    memmove(v6, pw_dir, v4);
    *(_BYTE *)(qword_10009DF50 + v4) = 0;
  }
  if ( !qword_10009DF58 )
  {
LABEL_13:
    v7 = &byte_100075A30;
    goto LABEL_11;
  }
LABEL_10:
  v7 = (char *)qword_10009DF50;
LABEL_11:
  qmutex_unlock(v9);
  return v7;
}
// 100075A30: using guessed type char byte_100075A30;
// 10009DF50: using guessed type __int64 qword_10009DF50;
// 10009DF58: using guessed type __int64 qword_10009DF58;
// 10009DF60: using guessed type __int64 qword_10009DF60;
