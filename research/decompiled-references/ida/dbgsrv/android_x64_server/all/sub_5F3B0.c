/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F3B0
// Address: 0x000000000005F3B0

//----- (000000000005F3B0) ----------------------------------------------------
__int64 sub_5F3B0()
{
  pthread_mutex_t *v0; // r15
  __int64 v1; // r12
  __int64 v2; // r14
  __int64 v3; // rbx
  FILE *v4; // rdi

  v0 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v1 = 8LL * *((_QWORD *)&xmmword_155780 + 1);
  if ( 8LL * *((_QWORD *)&xmmword_155780 + 1) )
  {
    v2 = xmmword_155780;
    v3 = 0;
    do
    {
      v4 = *(FILE **)(v2 + v3);
      if ( v4 )
        qfclose(v4);
      v3 += 8;
    }
    while ( v1 != v3 );
  }
  *((_QWORD *)&xmmword_155780 + 1) = 0;
  qmutex_unlock(v0);
  return 0;
}
// 5F3B0: using guessed type __int64 sub_5F3B0();
// 155780: using guessed type __int128 xmmword_155780;
