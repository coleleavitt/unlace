/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020600
// Address: 0x0000000100020600

//----- (0000000100020600) ----------------------------------------------------
__int64 __fastcall sub_100020600(__int64 a1)
{
  pthread_mutex_t *v2; // x19
  unsigned __int64 v3; // x21
  bool v4; // cf
  __int64 v5; // x9

  v2 = (pthread_mutex_t *)qword_10009D7C0;
  qmutex_lock((pthread_mutex_t *)qword_10009D7C0);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    v4 = v3 >= qword_10009D928;
  else
    v4 = 1;
  if ( !v4 )
  {
    qfclose(*(FILE **)(qword_10009D920 + 8 * v3));
    *(_QWORD *)(qword_10009D920 + 8 * v3) = 0;
    if ( qword_10009D928 )
    {
      v5 = qword_10009D928 - 1;
      do
      {
        if ( *(_QWORD *)(qword_10009D920 + 8 * v5) )
          break;
        qword_10009D928 = v5--;
      }
      while ( v5 != -1 );
    }
  }
  qmutex_unlock(v2);
  return 0;
}
// 10009D7C0: using guessed type __int64 qword_10009D7C0;
// 10009D920: using guessed type __int64 qword_10009D920;
// 10009D928: using guessed type __int64 qword_10009D928;
