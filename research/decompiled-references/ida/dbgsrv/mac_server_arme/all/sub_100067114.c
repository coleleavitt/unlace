/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067114
// Address: 0x0000000100067114

//----- (0000000100067114) ----------------------------------------------------
__int64 __fastcall sub_100067114(__int64 a1, __int64 a2, __int64 a3)
{
  pthread_mutex_t *v6; // x19
  __int64 v7; // x21

  v6 = *(pthread_mutex_t **)(a1 + 16);
  qmutex_lock(v6);
  v7 = *(_QWORD *)(a1 + 48);
  if ( !v7 )
  {
    v7 = sub_100066858((__int64 **)a1, 0, a2, a3);
    *(_QWORD *)(a1 + 48) = v7;
  }
  qmutex_unlock(v6);
  return v7;
}
