/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsetenv
// Address: 0x00000000000C81C0

//----- (00000000000C81C0) ----------------------------------------------------
__int64 __fastcall qsetenv(char *name, char *value)
{
  unsigned int v2; // ebx
  pthread_mutex_t *v3; // r15
  int v4; // eax

  if ( !value )
    return 0;
  v2 = (unsigned int)value;
  if ( !thread2 )
  {
    thread2 = pthread_self();
    v3 = qmutex_create();
    mutex = v3;
    if ( !v3 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v3 = mutex;
  if ( mutex )
LABEL_4:
    pthread_mutex_lock(v3);
LABEL_5:
  if ( *value )
    v4 = setenv(name, value, 1);
  else
    v4 = unsetenv(name);
  LOBYTE(v2) = v4 == 0;
  if ( v3 )
    pthread_mutex_unlock(v3);
  return v2;
}
