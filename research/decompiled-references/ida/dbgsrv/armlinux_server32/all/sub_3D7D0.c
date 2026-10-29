/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D7D0
// Address: 0x0003D7D0

//----- (0003D7D0) --------------------------------------------------------
int __fastcall sub_3D7D0(int (__fastcall ***a1)(_DWORD, int), int a2)
{
  pthread_mutex_t *v4; // r10
  int v5; // r5
  unsigned int v6; // r11
  int v7; // r4
  int v8; // r5

  v4 = (pthread_mutex_t *)dword_D4A20;
  sub_7A268((pthread_mutex_t *)dword_D4A20);
  v5 = dword_D4A18;
  v6 = dword_D4A10;
  if ( dword_D4A18 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_DWORD *)(dword_D4A14 + 4 * v7);
      if ( v8 )
      {
        if ( a2 )
          sub_3D744(*(int **)(dword_D4A14 + 4 * v7));
        v5 = (**a1)(a1, v8);
        if ( v5 )
          break;
      }
      if ( ++v7 >= (unsigned int)dword_D4A18 )
      {
        v5 = 0;
        break;
      }
    }
    if ( a2 && v6 < dword_D4A18 )
      sub_3D744(*(int **)(dword_D4A14 + 4 * v6));
  }
  sub_7A290(v4);
  return v5;
}
// D4A10: using guessed type int dword_D4A10;
// D4A14: using guessed type int dword_D4A14;
// D4A18: using guessed type int dword_D4A18;
// D4A20: using guessed type int dword_D4A20;
