/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36544
// Address: 0x00036544

//----- (00036544) --------------------------------------------------------
int __fastcall sub_36544(int a1)
{
  pthread_mutex_t *v2; // r5
  unsigned int v3; // r4
  int v4; // r3
  _DWORD *v5; // r2

  v2 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 < dword_D39D0 )
    {
      sub_77754(*(FILE **)(dword_D39CC + 4 * v3));
      *(_DWORD *)(dword_D39CC + 4 * v3) = 0;
      v4 = dword_D39D0;
      if ( dword_D39D0 )
      {
        v5 = (_DWORD *)(dword_D39CC + 4 * (dword_D39D0 + 0x3FFFFFFF));
        if ( !*v5 )
        {
          do
          {
            dword_D39D0 = --v4;
            if ( !v4 )
              break;
          }
          while ( !*--v5 );
        }
      }
    }
  }
  sub_7A128(v2);
  return 0;
}
// D39CC: using guessed type int dword_D39CC;
// D39D0: using guessed type int dword_D39D0;
// D3A90: using guessed type int dword_D3A90;
