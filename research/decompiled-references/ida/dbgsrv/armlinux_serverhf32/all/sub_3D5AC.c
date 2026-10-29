/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D5AC
// Address: 0x0003D5AC

//----- (0003D5AC) --------------------------------------------------------
int __fastcall sub_3D5AC(int *a1)
{
  pthread_mutex_t *v2; // r6
  int v3; // r2
  int v4; // r3
  int *v5; // t1

  v2 = (pthread_mutex_t *)dword_D3A00;
  sub_7A100((pthread_mutex_t *)dword_D3A00);
  if ( !a1 )
    a1 = dword_D2D00;
  if ( !dword_D39F8 )
  {
LABEL_8:
    sub_7A128(v2);
    return 0;
  }
  v3 = dword_D39F4;
  v4 = 0;
  if ( a1 != *(int **)dword_D39F4 )
  {
    while ( ++v4 != dword_D39F8 )
    {
      v5 = *(int **)(v3 + 4);
      v3 += 4;
      if ( v5 == a1 )
        goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  if ( dword_D39F0 != v4 )
  {
    dword_D39F0 = v4;
    nullsub_11(2, a1, v4);
  }
  sub_7A128(v2);
  return 1;
}
// 6AD30: using guessed type int __fastcall nullsub_11(_DWORD, _DWORD, _DWORD);
// D2D00: using guessed type int dword_D2D00[3];
// D39F0: using guessed type int dword_D39F0;
// D39F4: using guessed type int dword_D39F4;
// D39F8: using guessed type int dword_D39F8;
// D3A00: using guessed type int dword_D3A00;
