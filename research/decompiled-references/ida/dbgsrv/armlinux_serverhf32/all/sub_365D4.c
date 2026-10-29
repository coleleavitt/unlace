/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_365D4
// Address: 0x000365D4

//----- (000365D4) --------------------------------------------------------
int sub_365D4()
{
  pthread_mutex_t *v0; // r6
  FILE **v1; // r4
  int v2; // r5
  FILE *v3; // r0
  FILE *v4; // t1

  v0 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v1 = (FILE **)dword_D39CC;
  v2 = dword_D39CC + 4 * dword_D39D0;
  if ( dword_D39CC != v2 )
  {
    do
    {
      v4 = *v1++;
      v3 = v4;
      if ( v4 )
        sub_77754(v3);
    }
    while ( (FILE **)v2 != v1 );
  }
  dword_D39D0 = 0;
  sub_7A128(v0);
  return 0;
}
// D39CC: using guessed type int dword_D39CC;
// D39D0: using guessed type int dword_D39D0;
// D3A90: using guessed type int dword_D3A90;
