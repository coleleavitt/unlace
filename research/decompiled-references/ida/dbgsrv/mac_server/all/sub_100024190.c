/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024190
// Address: 0x0000000100024190

//----- (0000000100024190) ----------------------------------------------------
__int64 sub_100024190()
{
  pthread_mutex_t *v0; // rbx
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // r12
  FILE *v4; // rdi

  v0 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v1 = 8LL * *((_QWORD *)&xmmword_1000AE250 + 1);
  if ( 8LL * *((_QWORD *)&xmmword_1000AE250 + 1) )
  {
    v2 = xmmword_1000AE250;
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
  *((_QWORD *)&xmmword_1000AE250 + 1) = 0;
  qmutex_unlock(v0);
  return 0;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE250: using guessed type __int128 xmmword_1000AE250;
