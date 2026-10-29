/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D59C
// Address: 0x0003D59C

//----- (0003D59C) --------------------------------------------------------
int sub_3D59C()
{
  pthread_mutex_t *v0; // r5
  int v1; // r4

  v0 = (pthread_mutex_t *)dword_D4A20;
  sub_7A268((pthread_mutex_t *)dword_D4A20);
  if ( dword_D4A10 >= (unsigned int)dword_D4A18 )
  {
    v1 = 0;
  }
  else
  {
    v1 = *(_DWORD *)(dword_D4A14 + 4 * dword_D4A10);
    if ( v1 )
      ++*(_DWORD *)(v1 + 8);
  }
  sub_7A290(v0);
  return v1;
}
// D4A10: using guessed type int dword_D4A10;
// D4A14: using guessed type int dword_D4A14;
// D4A18: using guessed type int dword_D4A18;
// D4A20: using guessed type int dword_D4A20;
