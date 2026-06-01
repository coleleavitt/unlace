/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F190
// Address: 0x0003F190

//----- (0003F190) --------------------------------------------------------
int __fastcall sub_3F190(int a1, unsigned int a2)
{
  pthread_mutex_t *v4; // r5
  int v5; // r4

  v4 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  if ( a2 >= *(_DWORD *)(a1 + 44) )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(284);
  }
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 4 * a2);
  sub_7A128(v4);
  return v5;
}
// D3A90: using guessed type int dword_D3A90;
// D5C00: using guessed type char under_debugger;
