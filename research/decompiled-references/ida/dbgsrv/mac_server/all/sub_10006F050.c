/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F050
// Address: 0x000000010006F050

//----- (000000010006F050) ----------------------------------------------------
__int64 __fastcall sub_10006F050(_QWORD *a1, __int64 a2, __int64 a3)
{
  pthread_mutex_t *v4; // rbx
  __int64 v5; // r15

  v4 = (pthread_mutex_t *)a1[2];
  qmutex_lock(v4);
  v5 = a1[6];
  if ( !v5 )
  {
    v5 = sub_10006E8E0(a1, 0, a2, a3);
    a1[6] = v5;
  }
  qmutex_unlock(v4);
  return v5;
}
