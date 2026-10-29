/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F324
// Address: 0x0003F324

//----- (0003F324) --------------------------------------------------------
int __fastcall sub_3F324(int a1, unsigned int a2)
{
  pthread_mutex_t *v4; // r5
  int v5; // r4

  v4 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  if ( a2 >= *(_DWORD *)(a1 + 44) )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(284);
  }
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 4 * a2);
  sub_7A290(v4);
  return v5;
}
// D4AB0: using guessed type int dword_D4AB0;
// D6C20: using guessed type char under_debugger;
