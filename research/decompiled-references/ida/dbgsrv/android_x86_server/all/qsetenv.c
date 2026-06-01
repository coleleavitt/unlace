/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsetenv
// Address: 0x000B6510

//----- (000B6510) --------------------------------------------------------
bool __cdecl qsetenv(char *name, char *value)
{
  pthread_mutex_t *v2; // esi
  int v3; // eax
  bool result; // al
  bool v5; // si
  pthread_mutex_t *v6; // [esp+0h] [ebp-1Ch]

  if ( !value )
    return 0;
  if ( !dword_13E358 )
  {
    dword_13E358 = pthread_self();
    v2 = qmutex_create();
    dword_13E35C = (int)v2;
    if ( !v2 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v2 = (pthread_mutex_t *)dword_13E35C;
  if ( dword_13E35C )
LABEL_4:
    pthread_mutex_lock(v2);
LABEL_5:
  if ( *value )
    v3 = setenv(name, value, 1);
  else
    v3 = unsetenv(name);
  result = v3 == 0;
  if ( v2 )
  {
    v6 = v2;
    v5 = result;
    pthread_mutex_unlock(v6);
    return v5;
  }
  return result;
}
// 13E358: using guessed type int dword_13E358;
// 13E35C: using guessed type int dword_13E35C;
