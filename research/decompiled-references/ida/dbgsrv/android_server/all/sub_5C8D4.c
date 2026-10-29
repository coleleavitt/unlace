/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C8D4
// Address: 0x000000000005C8D4

//----- (000000000005C8D4) ----------------------------------------------------
__int64 sub_5C8D4()
{
  pthread_mutex_t *v0; // x19
  __int64 v1; // x20
  FILE **v2; // x21

  v0 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v1 = 8 * qword_166A50;
  if ( 8 * qword_166A50 )
  {
    v2 = (FILE **)qword_166A48;
    do
    {
      if ( *v2 )
        qfclose(*v2);
      v1 -= 8;
      ++v2;
    }
    while ( v1 );
  }
  qword_166A50 = 0;
  qmutex_unlock(v0);
  return 0;
}
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
// 166AA8: using guessed type __int64 qword_166AA8;
