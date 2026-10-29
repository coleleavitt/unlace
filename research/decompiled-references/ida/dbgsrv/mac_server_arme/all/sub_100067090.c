/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067090
// Address: 0x0000000100067090

//----- (0000000100067090) ----------------------------------------------------
__int64 __fastcall sub_100067090(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v4; // x19
  __int64 v5; // x21

  v4 = *(pthread_mutex_t **)(a1 + 16);
  qmutex_lock(v4);
  v5 = *(_QWORD *)(a1 + 40);
  if ( !v5 )
  {
    v5 = sub_100066858((__int64 **)a1, a2, 0, 0);
    *(_QWORD *)(a1 + 40) = v5;
  }
  qmutex_unlock(v4);
  return v5;
}
