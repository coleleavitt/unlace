/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: install_extlang
// Address: 0x0003F044

//----- (0003F044) --------------------------------------------------------
int __fastcall install_extlang(int a1)
{
  int v1; // r5
  int v3; // r1
  _DWORD *v4; // r0
  int v5; // r2
  _DWORD *v6; // r0
  unsigned int v7; // r2
  char *v8; // r0
  char *v9; // r0
  pthread_mutex_t *mutex; // [sp+0h] [bp-4h]

  v1 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 8) )
    return -1;
  mutex = (pthread_mutex_t *)dword_DE360;
  qmutex_lock((pthread_mutex_t *)dword_DE360);
  v3 = dword_DE368;
  if ( dword_DE368 >= 1 )
  {
    v4 = (_DWORD *)dword_DE364;
    v5 = 0;
    do
    {
      ++v5;
      if ( *v4 == a1 )
      {
        v1 = -1;
        goto LABEL_20;
      }
      ++v4;
    }
    while ( v5 < dword_DE368 );
    v1 = 0;
    if ( dword_DE368 >= 1 )
    {
      v6 = (_DWORD *)dword_DE364;
      v1 = 0;
      do
      {
        if ( !*v6 )
          break;
        ++v6;
        ++v1;
      }
      while ( v1 < dword_DE368 );
    }
  }
  if ( v1 == dword_DE368 )
  {
    v7 = dword_DE368 + 1;
    if ( dword_DE36C >= (unsigned int)(dword_DE368 + 1) )
    {
      v8 = (char *)dword_DE364;
    }
    else
    {
      v8 = (char *)qvector_reserve((int)&dword_DE364, (void *)dword_DE364, v7, 4u);
      dword_DE364 = (int)v8;
      v3 = dword_DE368;
      v7 = dword_DE368 + 1;
    }
    dword_DE368 = v7;
    v9 = &v8[4 * v3];
  }
  else
  {
    v9 = (char *)(dword_DE364 + 4 * v1);
  }
  *(_DWORD *)v9 = a1;
  nullsub_3(0, a1);
LABEL_20:
  qmutex_unlock(mutex);
  return v1;
}
// 705CC: using guessed type int __fastcall nullsub_3(_DWORD, _DWORD);
// DE360: using guessed type int dword_DE360;
// DE364: using guessed type int dword_DE364;
// DE368: using guessed type int dword_DE368;
// DE36C: using guessed type int dword_DE36C;
