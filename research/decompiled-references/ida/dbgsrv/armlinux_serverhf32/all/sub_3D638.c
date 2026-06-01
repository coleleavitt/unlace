/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D638
// Address: 0x0003D638

//----- (0003D638) --------------------------------------------------------
int __fastcall sub_3D638(int (__fastcall ***a1)(_DWORD, int), int a2)
{
  pthread_mutex_t *v4; // r10
  int v5; // r5
  unsigned int v6; // r11
  int v7; // r4
  int v8; // r5

  v4 = (pthread_mutex_t *)dword_D3A00;
  sub_7A100((pthread_mutex_t *)dword_D3A00);
  v5 = dword_D39F8;
  v6 = dword_D39F0;
  if ( dword_D39F8 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_DWORD *)(dword_D39F4 + 4 * v7);
      if ( v8 )
      {
        if ( a2 )
          sub_3D5AC(*(int **)(dword_D39F4 + 4 * v7));
        v5 = (**a1)(a1, v8);
        if ( v5 )
          break;
      }
      if ( ++v7 >= (unsigned int)dword_D39F8 )
      {
        v5 = 0;
        break;
      }
    }
    if ( a2 && v6 < dword_D39F8 )
      sub_3D5AC(*(int **)(dword_D39F4 + 4 * v6));
  }
  sub_7A128(v4);
  return v5;
}
// D39F0: using guessed type int dword_D39F0;
// D39F4: using guessed type int dword_D39F4;
// D39F8: using guessed type int dword_D39F8;
// D3A00: using guessed type int dword_D3A00;
