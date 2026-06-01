/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D404
// Address: 0x0003D404

//----- (0003D404) --------------------------------------------------------
int sub_3D404()
{
  pthread_mutex_t *v0; // r5
  int v1; // r4

  v0 = (pthread_mutex_t *)dword_D3A00;
  sub_7A100((pthread_mutex_t *)dword_D3A00);
  if ( dword_D39F0 >= (unsigned int)dword_D39F8 )
  {
    v1 = 0;
  }
  else
  {
    v1 = *(_DWORD *)(dword_D39F4 + 4 * dword_D39F0);
    if ( v1 )
      ++*(_DWORD *)(v1 + 8);
  }
  sub_7A128(v0);
  return v1;
}
// D39F0: using guessed type int dword_D39F0;
// D39F4: using guessed type int dword_D39F4;
// D39F8: using guessed type int dword_D39F8;
// D3A00: using guessed type int dword_D3A00;
