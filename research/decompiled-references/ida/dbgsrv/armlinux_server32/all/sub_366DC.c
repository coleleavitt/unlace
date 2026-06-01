/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_366DC
// Address: 0x000366DC

//----- (000366DC) --------------------------------------------------------
int __fastcall sub_366DC(int a1)
{
  pthread_mutex_t *v2; // r5
  unsigned int v3; // r4
  int v4; // r3
  _DWORD *v5; // r2

  v2 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 < dword_D49F0 )
    {
      sub_778BC(*(FILE **)(dword_D49EC + 4 * v3));
      *(_DWORD *)(dword_D49EC + 4 * v3) = 0;
      v4 = dword_D49F0;
      if ( dword_D49F0 )
      {
        v5 = (_DWORD *)(dword_D49EC + 4 * (dword_D49F0 + 0x3FFFFFFF));
        if ( !*v5 )
        {
          do
          {
            dword_D49F0 = --v4;
            if ( !v4 )
              break;
          }
          while ( !*--v5 );
        }
      }
    }
  }
  sub_7A290(v2);
  return 0;
}
// D49EC: using guessed type int dword_D49EC;
// D49F0: using guessed type int dword_D49F0;
// D4AB0: using guessed type int dword_D4AB0;
