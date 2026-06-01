/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_qatexit
// Address: 0x0007ED04

//----- (0007ED04) --------------------------------------------------------
bool __fastcall del_qatexit(int a1)
{
  pthread_mutex_t *v2; // r4
  int v3; // r6
  _DWORD *v4; // r0
  int v5; // r2
  int v6; // r1
  int v7; // r2

  v2 = (pthread_mutex_t *)dword_E054C;
  qmutex_lock((pthread_mutex_t *)dword_E054C);
  v3 = dword_E0554;
  if ( dword_E0554 )
  {
    v4 = *(_DWORD **)dword_E0554;
    v5 = *(_DWORD *)(dword_E0554 + 4);
    v6 = *(_DWORD *)dword_E0554 + 4 * v5;
    if ( 4 * v5 )
    {
      v7 = 4 * v5;
      while ( *v4 != a1 )
      {
        v7 -= 4;
        ++v4;
        if ( !v7 )
          return qmutex_unlock(v2);
      }
    }
    if ( v4 != (_DWORD *)v6 )
    {
      memmove(v4, v4 + 1, (v6 - 4 - (_DWORD)v4) & 0xFFFFFFFC);
      --*(_DWORD *)(v3 + 4);
    }
  }
  return qmutex_unlock(v2);
}
// E054C: using guessed type int dword_E054C;
// E0554: using guessed type int dword_E0554;
