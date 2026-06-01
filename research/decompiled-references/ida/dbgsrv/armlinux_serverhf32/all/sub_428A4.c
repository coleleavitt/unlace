/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428A4
// Address: 0x000428A4

//----- (000428A4) --------------------------------------------------------
int __fastcall sub_428A4(int a1, unsigned int a2)
{
  pthread_mutex_t *v4; // r6
  int v5; // r5

  v4 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  if ( a2 >= *(_DWORD *)(a1 + 56) )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(288);
  }
  v5 = *(_DWORD *)(a1 + 52) + 40 * a2 + 16;
  sub_7A128(v4);
  return v5;
}
// D3A90: using guessed type int dword_D3A90;
// D5C00: using guessed type char under_debugger;
