/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: select_extlang
// Address: 0x000000010002B8AC

//----- (000000010002B8AC) ----------------------------------------------------
bool __fastcall select_extlang(__int64 *a1)
{
  pthread_mutex_t *v2; // x19
  __int64 *v3; // x1
  __int64 v4; // x2
  _BOOL8 v5; // x20

  v2 = (pthread_mutex_t *)qword_10009D7B8;
  qmutex_lock((pthread_mutex_t *)qword_10009D7B8);
  if ( a1 )
    v3 = a1;
  else
    v3 = qword_10009CA68;
  if ( qword_10009D960 )
  {
    v4 = 0;
    while ( *(__int64 **)(qword_10009D958 + 8 * v4) != v3 )
    {
      if ( qword_10009D960 == ++v4 )
      {
        v5 = 0;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = v4 != qword_10009D960;
  if ( v4 != qword_10009D960 && qword_10009D970 != v4 )
  {
    qword_10009D970 = v4;
    nullsub_29(2, v3, v4);
    v5 = 1;
  }
LABEL_15:
  qmutex_unlock(v2);
  return v5;
}
// 100063E9C: using guessed type __int64 __fastcall nullsub_29(_QWORD, _QWORD, _QWORD);
// 10009CA68: using guessed type __int64 qword_10009CA68[2];
// 10009D7B8: using guessed type __int64 qword_10009D7B8;
// 10009D958: using guessed type __int64 qword_10009D958;
// 10009D960: using guessed type __int64 qword_10009D960;
// 10009D970: using guessed type __int64 qword_10009D970;
