/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: select_extlang
// Address: 0x0003EF18

//----- (0003EF18) --------------------------------------------------------
int __fastcall select_extlang(int *a1)
{
  pthread_mutex_t *v2; // r4
  int v3; // r6
  int **v4; // r1
  unsigned int v5; // r2

  v2 = (pthread_mutex_t *)dword_DE360;
  qmutex_lock((pthread_mutex_t *)dword_DE360);
  if ( !a1 )
    a1 = dword_DD648;
  v3 = 0;
  if ( dword_DE368 )
  {
    v4 = (int **)dword_DE364;
    v5 = 0;
    do
    {
      if ( *v4 == a1 )
        break;
      ++v4;
      ++v5;
    }
    while ( v5 < dword_DE368 );
    v3 = 0;
    if ( v5 != dword_DE368 )
    {
      v3 = 1;
      if ( dword_DE370 != v5 )
      {
        dword_DE370 = v5;
        nullsub_3(2, a1);
      }
    }
  }
  qmutex_unlock(v2);
  return v3;
}
// 705CC: using guessed type int __fastcall nullsub_3(_DWORD, _DWORD);
// DD648: using guessed type int dword_DD648[3];
// DE360: using guessed type int dword_DE360;
// DE364: using guessed type int dword_DE364;
// DE368: using guessed type int dword_DE368;
// DE370: using guessed type int dword_DE370;
