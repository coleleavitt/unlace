/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000626EC
// Address: 0x00000001000626EC

//----- (00000001000626EC) ----------------------------------------------------
__int64 __fastcall sub_1000626EC(_QWORD *a1, __int64 a2, __int64 a3)
{
  pthread_mutex_t *v6; // x19
  __int64 v7; // x21

  v6 = (pthread_mutex_t *)a1[2];
  qmutex_lock(v6);
  v7 = a1[6];
  if ( !v7 )
  {
    v7 = sub_100061F0C(a1, 0, a2, a3);
    a1[6] = v7;
  }
  qmutex_unlock(v6);
  return v7;
}
