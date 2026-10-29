/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_current_extlang
// Address: 0x0003EE20

//----- (0003EE20) --------------------------------------------------------
int get_current_extlang()
{
  pthread_mutex_t *v0; // r4
  int v1; // r5

  v0 = (pthread_mutex_t *)dword_DE360;
  qmutex_lock((pthread_mutex_t *)dword_DE360);
  v1 = 0;
  if ( dword_DE370 < (unsigned int)dword_DE368 )
  {
    v1 = *(_DWORD *)(dword_DE364 + 4 * dword_DE370);
    if ( v1 )
      ++*(_DWORD *)(v1 + 8);
  }
  qmutex_unlock(v0);
  return v1;
}
// DE360: using guessed type int dword_DE360;
// DE364: using guessed type int dword_DE364;
// DE368: using guessed type int dword_DE368;
// DE370: using guessed type int dword_DE370;
