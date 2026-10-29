/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FCA4
// Address: 0x0003FCA4

//----- (0003FCA4) --------------------------------------------------------
pthread_mutex_t *sub_3FCA4()
{
  int v0; // r0

  sub_3D878((int)dword_D3D20);
  v0 = sub_3E4E0();
  sub_3FBBC(v0);
  sub_7A054((pthread_mutex_t *)dword_D4AB0);
  return sub_7A054((pthread_mutex_t *)dword_D4A20);
}
// D3D20: using guessed type int dword_D3D20[3];
// D4A20: using guessed type int dword_D4A20;
// D4AB0: using guessed type int dword_D4AB0;
