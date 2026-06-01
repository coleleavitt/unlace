/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_379D4
// Address: 0x000379D4

//----- (000379D4) --------------------------------------------------------
int sub_379D4()
{
  pthread_mutex_t *v0; // r4
  FILE **v1; // r6
  int v2; // r7

  v0 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  if ( 4 * dword_DE33C )
  {
    v1 = (FILE **)dword_DE338;
    v2 = 4 * dword_DE33C;
    do
    {
      if ( *v1 )
        qfclose(*v1);
      v2 -= 4;
      ++v1;
    }
    while ( v2 );
  }
  dword_DE33C = 0;
  qmutex_unlock(v0);
  return 0;
}
// DE338: using guessed type int dword_DE338;
// DE33C: using guessed type int dword_DE33C;
// DE374: using guessed type int dword_DE374;
