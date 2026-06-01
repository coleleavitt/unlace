/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsetenv
// Address: 0x00082038

//----- (00082038) --------------------------------------------------------
bool __fastcall qsetenv(char *name, char *value)
{
  _BOOL4 v2; // r7
  pthread_mutex_t *v5; // r4
  int v6; // r0

  v2 = 0;
  if ( !value )
    return v2;
  if ( !dword_E055C )
  {
    dword_E055C = pthread_self();
    v5 = qmutex_create();
    dword_E0560 = (int)v5;
    if ( !v5 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v5 = (pthread_mutex_t *)dword_E0560;
  if ( dword_E0560 )
LABEL_4:
    pthread_mutex_lock(v5);
LABEL_5:
  if ( *value )
    v6 = setenv(name, value, 1);
  else
    v6 = unsetenv(name);
  v2 = v6 == 0;
  if ( v5 )
    pthread_mutex_unlock(v5);
  return v2;
}
// E055C: using guessed type int dword_E055C;
// E0560: using guessed type int dword_E0560;
