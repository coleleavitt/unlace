/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_385BC
// Address: 0x000385BC

//----- (000385BC) --------------------------------------------------------
int __fastcall sub_385BC(int a1)
{
  pthread_mutex_t *v2; // r4
  unsigned int v3; // r0
  int v4; // r6
  int v5; // r1
  _DWORD *v6; // r2

  v2 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 < dword_DE33C )
    {
      v4 = 4 * v3;
      qfclose(*(FILE **)(dword_DE338 + 4 * v3));
      *(_DWORD *)(dword_DE338 + v4) = 0;
      v5 = dword_DE33C;
      if ( dword_DE33C )
      {
        v6 = (_DWORD *)(dword_DE338 + 4 * dword_DE33C - 4);
        do
        {
          --v5;
          if ( *v6 )
            break;
          dword_DE33C = v5;
          --v6;
        }
        while ( v5 );
      }
    }
  }
  qmutex_unlock(v2);
  return 0;
}
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;
// DE374: using guessed type int dword_DE374;
