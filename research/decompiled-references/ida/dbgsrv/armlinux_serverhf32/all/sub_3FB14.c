/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FB14
// Address: 0x0003FB14

//----- (0003FB14) --------------------------------------------------------
pthread_mutex_t *sub_3FB14()
{
  int v0; // r0

  sub_3D6E0((int)dword_D2D00);
  v0 = sub_3E348();
  sub_3FA2C(v0);
  sub_79EEC((pthread_mutex_t *)dword_D3A90);
  return sub_79EEC((pthread_mutex_t *)dword_D3A00);
}
// D2D00: using guessed type int dword_D2D00[3];
// D3A00: using guessed type int dword_D3A00;
// D3A90: using guessed type int dword_D3A90;
