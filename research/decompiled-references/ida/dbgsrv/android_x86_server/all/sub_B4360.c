/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4360
// Address: 0x000B4360

//----- (000B4360) --------------------------------------------------------
void __cdecl sub_B4360(char *arg)
{
  pthread_mutex_t *v1; // edi
  int v2; // eax

  v1 = *((pthread_mutex_t **)arg + 7);
  if ( v1 )
    pthread_mutex_lock(*((pthread_mutex_t **)arg + 7));
  if ( !arg[40] )
  {
    v2 = qthread_create((void *(*)(void *))sub_B4850, arg);
    *((_DWORD *)arg + 8) = v2;
    if ( !v2 )
    {
      if ( !(_BYTE)under_debugger )
        interr(1258);
      BUG();
    }
    arg[40] = 1;
    pthread_sigmask(1, (const __sigset_t *)(arg + 36), nullptr);
  }
  if ( v1 )
    pthread_mutex_unlock(v1);
}
// 13E34C: using guessed type int under_debugger;
