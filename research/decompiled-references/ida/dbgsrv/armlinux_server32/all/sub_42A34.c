/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A34
// Address: 0x00042A34

//----- (00042A34) --------------------------------------------------------
int __fastcall sub_42A34(int a1, unsigned int a2)
{
  pthread_mutex_t *v4; // r6
  int v5; // r5

  v4 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  if ( a2 >= *(_DWORD *)(a1 + 56) )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(288);
  }
  v5 = *(_DWORD *)(a1 + 52) + 40 * a2 + 16;
  sub_7A290(v4);
  return v5;
}
// D4AB0: using guessed type int dword_D4AB0;
// D6C20: using guessed type char under_debugger;
