/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_current_extlang
// Address: 0x000000000006A320

//----- (000000000006A320) ----------------------------------------------------
__int64 get_current_extlang()
{
  pthread_mutex_t *v0; // r14
  __int64 v1; // rbx

  v0 = (pthread_mutex_t *)qword_1557C0;
  qmutex_lock((pthread_mutex_t *)qword_1557C0);
  if ( (unsigned __int64)qword_1557E0 >= *((_QWORD *)&xmmword_1557C8 + 1) )
  {
    v1 = 0;
  }
  else
  {
    v1 = *(_QWORD *)(xmmword_1557C8 + 8 * qword_1557E0);
    if ( v1 )
      ++*(_DWORD *)(v1 + 12);
  }
  qmutex_unlock(v0);
  return v1;
}
// 6A320: using guessed type __int64 get_current_extlang();
// 1557C0: using guessed type __int64 qword_1557C0;
// 1557C8: using guessed type __int128 xmmword_1557C8;
// 1557E0: using guessed type __int64 qword_1557E0;
