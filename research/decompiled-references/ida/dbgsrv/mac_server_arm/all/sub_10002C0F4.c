/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C0F4
// Address: 0x000000010002C0F4

//----- (000000010002C0F4) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_10002C0F4(__int64 a1, char a2)
{
  pthread_mutex_t *v4; // x19
  __int64 v5; // x9

  v4 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  v5 = *(_QWORD *)(a1 + 56);
  if ( (v5 & (1LL << a2)) == 0 )
  {
    if ( under_debugger != 1 )
      goto LABEL_5;
    while ( 1 )
    {
      __break(1u);
LABEL_5:
      interr(1444);
    }
  }
  *(_QWORD *)(a1 + 56) = v5 & ~(1LL << a2);
  return qmutex_unlock(v4);
}
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
// 10009D90D: using guessed type char under_debugger;
