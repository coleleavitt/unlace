/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsetenv
// Address: 0x00000000000C32AC

//----- (00000000000C32AC) ----------------------------------------------------
bool __fastcall qsetenv(char *name, char *value)
{
  pthread_mutex_t *v4; // x19
  int v5; // w0
  _BOOL4 v6; // w20

  if ( !value )
    return 0;
  if ( !qword_168E08 )
  {
    qword_168E08 = pthread_self();
    v4 = qmutex_create();
    qword_168E10 = (__int64)v4;
    if ( !v4 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v4 = (pthread_mutex_t *)qword_168E10;
  if ( qword_168E10 )
LABEL_4:
    pthread_mutex_lock(v4);
LABEL_5:
  if ( *value )
    v5 = setenv(name, value, 1);
  else
    v5 = unsetenv(name);
  v6 = v5 == 0;
  if ( v4 )
    pthread_mutex_unlock(v4);
  return v6;
}
// 167DD0: using guessed type __int64[512];
// 168E08: using guessed type __int64 qword_168E08;
// 168E10: using guessed type __int64 qword_168E10;
