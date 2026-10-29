/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006266C
// Address: 0x000000010006266C

//----- (000000010006266C) ----------------------------------------------------
__int64 __fastcall sub_10006266C(_QWORD *a1, __int64 a2)
{
  pthread_mutex_t *v4; // x19
  __int64 v5; // x21

  v4 = (pthread_mutex_t *)a1[2];
  qmutex_lock(v4);
  v5 = a1[5];
  if ( !v5 )
  {
    v5 = sub_100061F0C(a1, a2, 0, 0);
    a1[5] = v5;
  }
  qmutex_unlock(v4);
  return v5;
}
