/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: remove_extlang
// Address: 0x0003F104

//----- (0003F104) --------------------------------------------------------
int __fastcall remove_extlang(int a1)
{
  int v2; // r7
  int v3; // r6
  unsigned int v4; // r4
  pthread_mutex_t *mutex; // [sp+0h] [bp-4h]

  mutex = (pthread_mutex_t *)dword_DE360;
  qmutex_lock((pthread_mutex_t *)dword_DE360);
  v2 = 0;
  if ( dword_DE368 )
  {
    v3 = 0;
    v4 = 0;
    while ( *(_DWORD *)(dword_DE364 + v3) != a1 )
    {
      v3 += 4;
      ++v4;
      v2 = 0;
      if ( v4 >= dword_DE368 )
        goto LABEL_11;
    }
    if ( dword_DE370 == v4 )
      select_extlang(nullptr);
    if ( *(_DWORD *)(a1 + 8) && !byte_E053C )
    {
      if ( !under_debugger )
        interr(1442);
      __debugbreak();
    }
    *(_DWORD *)(dword_DE364 + v3) = 0;
    v2 = 1;
    nullsub_3(1, a1);
  }
LABEL_11:
  qmutex_unlock(mutex);
  return v2;
}
// 705CC: using guessed type int __fastcall nullsub_3(_DWORD, _DWORD);
// DE360: using guessed type int dword_DE360;
// DE364: using guessed type int dword_DE364;
// DE368: using guessed type int dword_DE368;
// DE370: using guessed type int dword_DE370;
// E053C: using guessed type char byte_E053C;
// E0550: using guessed type char under_debugger;
