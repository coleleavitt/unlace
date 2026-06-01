/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001EEE4
// Address: 0x000000010001EEE4

//----- (000000010001EEE4) ----------------------------------------------------
__int64 sub_10001EEE4()
{
  pthread_mutex_t *v0; // x19
  FILE **v1; // x20
  __int64 v2; // x21

  v0 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  if ( (qword_10009D928 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
  {
    v1 = (FILE **)qword_10009D920;
    v2 = 8 * qword_10009D928;
    do
    {
      if ( *v1 )
        qfclose(*v1);
      ++v1;
      v2 -= 8;
    }
    while ( v2 );
  }
  qword_10009D928 = 0;
  qmutex_unlock(v0);
  return 0;
}
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
// 10009D920: using guessed type __int64 qword_10009D920;
// 10009D928: using guessed type __int64 qword_10009D928;
