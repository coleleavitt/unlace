/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsetenv
// Address: 0x0000000100072CD4

//----- (0000000100072CD4) ----------------------------------------------------
bool __fastcall qsetenv(char *a1, char *__value)
{
  pthread_mutex_t *v4; // x19
  int v5; // w0
  _BOOL8 v6; // x20

  if ( !__value )
    return 0;
  if ( !qword_10009E3B8 )
  {
    qword_10009E3B8 = (__int64)pthread_self();
    v4 = qmutex_create();
    qword_10009E3C0 = (__int64)v4;
    if ( !v4 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v4 = (pthread_mutex_t *)qword_10009E3C0;
  if ( qword_10009E3C0 )
LABEL_4:
    pthread_mutex_lock(v4);
LABEL_5:
  if ( *__value )
    v5 = setenv(a1, __value, 1);
  else
    v5 = unsetenv(a1);
  v6 = v5 == 0;
  if ( v4 )
    pthread_mutex_unlock(v4);
  return v6;
}
// 10009DF98: using guessed type __int64 qword_10009DF98[128];
// 10009E3B8: using guessed type __int64 qword_10009E3B8;
// 10009E3C0: using guessed type __int64 qword_10009E3C0;
