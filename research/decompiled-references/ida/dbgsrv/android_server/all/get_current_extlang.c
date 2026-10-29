/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_current_extlang
// Address: 0x000000000006728C

//----- (000000000006728C) ----------------------------------------------------
__int64 get_current_extlang()
{
  pthread_mutex_t *v0; // x19
  __int64 v1; // x20

  v0 = (pthread_mutex_t *)qword_166A80;
  qmutex_lock((pthread_mutex_t *)qword_166A80);
  if ( qword_166AA0 >= (unsigned __int64)qword_166A90 )
  {
    v1 = 0;
  }
  else
  {
    v1 = *(_QWORD *)(qword_166A88 + 8 * qword_166AA0);
    if ( v1 )
      ++*(_DWORD *)(v1 + 12);
  }
  qmutex_unlock(v0);
  return v1;
}
// 166A80: using guessed type __int64 qword_166A80;
// 166A88: using guessed type __int64 qword_166A88;
// 166A90: using guessed type __int64 qword_166A90;
// 166AA0: using guessed type __int64 qword_166AA0;
