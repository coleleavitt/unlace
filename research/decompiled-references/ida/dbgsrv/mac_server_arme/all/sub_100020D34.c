/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020D34
// Address: 0x0000000100020D34

//----- (0000000100020D34) ----------------------------------------------------
__int64 sub_100020D34()
{
  pthread_mutex_t *v0; // x19
  FILE **v1; // x20
  __int64 v2; // x21

  v0 = (pthread_mutex_t *)qword_1000A57C0;
  qmutex_lock((pthread_mutex_t *)qword_1000A57C0);
  if ( (qword_1000A5928 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
  {
    v1 = (FILE **)qword_1000A5920;
    v2 = 8 * qword_1000A5928;
    do
    {
      if ( *v1 )
        qfclose(*v1);
      ++v1;
      v2 -= 8;
    }
    while ( v2 );
  }
  qword_1000A5928 = 0;
  qmutex_unlock(v0);
  return 0;
}
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
