/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_qatexit
// Address: 0x00000000000BE894

//----- (00000000000BE894) ----------------------------------------------------
pthread_mutex_t *__fastcall del_qatexit(__int64 a1)
{
  pthread_mutex_t *v1; // x19
  __int64 v3; // x21
  __int64 v4; // x9
  __int64 v5; // x10
  _QWORD *i; // x0
  _QWORD *v7; // x8

  v1 = (pthread_mutex_t *)qword_168DE8;
  qmutex_lock((pthread_mutex_t *)qword_168DE8);
  v3 = qword_168DF8;
  if ( qword_168DF8 )
  {
    v4 = 8LL * *(_QWORD *)(qword_168DF8 + 8);
    if ( v4 )
    {
      v5 = 8LL * *(_QWORD *)(qword_168DF8 + 8);
      for ( i = *(_QWORD **)qword_168DF8; *i != a1; ++i )
      {
        v5 -= 8;
        if ( !v5 )
          return qmutex_unlock(v1);
      }
    }
    else
    {
      i = *(_QWORD **)qword_168DF8;
    }
    v7 = (_QWORD *)(*(_QWORD *)qword_168DF8 + v4);
    if ( i != v7 )
    {
      memmove(i, i + 1, ((char *)(v7 - 1) - (char *)i) & 0xFFFFFFFFFFFFFFF8LL);
      --*(_QWORD *)(v3 + 8);
    }
  }
  return qmutex_unlock(v1);
}
// 167DD0: using guessed type __int64[512];
// 168DE8: using guessed type __int64 qword_168DE8;
// 168DF8: using guessed type __int64 qword_168DF8;
