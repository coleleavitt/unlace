/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003136C
// Address: 0x000000010003136C

//----- (000000010003136C) ----------------------------------------------------
__int64 __fastcall sub_10003136C(__int64 a1, int a2)
{
  pthread_mutex_t *v4; // x19
  __int64 v5; // x20

  v4 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  if ( *(_QWORD *)(a1 + 96) <= (unsigned __int64)a2 )
  {
    if ( under_debugger != 1 )
      goto LABEL_5;
    while ( 1 )
    {
      __break(1u);
LABEL_5:
      interr(288);
    }
  }
  v5 = *(_QWORD *)(a1 + 88);
  qmutex_unlock(v4);
  return v5 + 56LL * a2 + 24;
}
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
// 10009D90D: using guessed type char under_debugger;
