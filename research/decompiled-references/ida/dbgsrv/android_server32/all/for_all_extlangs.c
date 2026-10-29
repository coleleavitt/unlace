/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: for_all_extlangs
// Address: 0x0003EE6C

//----- (0003EE6C) --------------------------------------------------------
int __fastcall for_all_extlangs(int (__fastcall ***a1)(_DWORD, int), int a2)
{
  pthread_mutex_t *v2; // r5
  unsigned int v3; // r2
  int v4; // r7
  int v5; // r6
  unsigned int v6; // r5
  int v7; // r7
  unsigned int v9; // [sp+4h] [bp-10h]
  pthread_mutex_t *v10; // [sp+8h] [bp-Ch]

  v2 = (pthread_mutex_t *)dword_DE360;
  qmutex_lock((pthread_mutex_t *)dword_DE360);
  v3 = dword_DE368;
  v4 = 0;
  if ( dword_DE368 )
  {
    v10 = v2;
    v9 = dword_DE370;
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(dword_DE364 + v5);
      if ( v7 )
      {
        if ( a2 )
          select_extlang(*(int **)(dword_DE364 + v5));
        v4 = (**a1)(a1, v7);
        v3 = dword_DE368;
        if ( v4 )
          break;
      }
      v5 += 4;
      ++v6;
      v4 = 0;
    }
    while ( v6 < v3 );
    if ( v9 >= v3 )
    {
      v2 = v10;
    }
    else
    {
      v2 = v10;
      if ( a2 )
        select_extlang(*(int **)(dword_DE364 + 4 * v9));
    }
  }
  qmutex_unlock(v2);
  return v4;
}
// DE360: using guessed type int dword_DE360;
// DE364: using guessed type int dword_DE364;
// DE368: using guessed type int dword_DE368;
// DE370: using guessed type int dword_DE370;
