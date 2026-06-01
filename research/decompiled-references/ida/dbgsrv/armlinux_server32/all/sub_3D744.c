/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D744
// Address: 0x0003D744

//----- (0003D744) --------------------------------------------------------
int __fastcall sub_3D744(int *a1)
{
  pthread_mutex_t *v2; // r6
  int v3; // r2
  int v4; // r3
  int *v5; // t1

  v2 = (pthread_mutex_t *)dword_D4A20;
  sub_7A268((pthread_mutex_t *)dword_D4A20);
  if ( !a1 )
    a1 = dword_D3D20;
  if ( !dword_D4A18 )
  {
LABEL_8:
    sub_7A290(v2);
    return 0;
  }
  v3 = dword_D4A14;
  v4 = 0;
  if ( a1 != *(int **)dword_D4A14 )
  {
    while ( ++v4 != dword_D4A18 )
    {
      v5 = *(int **)(v3 + 4);
      v3 += 4;
      if ( v5 == a1 )
        goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  if ( dword_D4A10 != v4 )
  {
    dword_D4A10 = v4;
    nullsub_11(2, a1, v4);
  }
  sub_7A290(v2);
  return 1;
}
// 6AEA8: using guessed type int __fastcall nullsub_11(_DWORD, _DWORD, _DWORD);
// D3D20: using guessed type int dword_D3D20[3];
// D4A10: using guessed type int dword_D4A10;
// D4A14: using guessed type int dword_D4A14;
// D4A18: using guessed type int dword_D4A18;
// D4A20: using guessed type int dword_D4A20;
