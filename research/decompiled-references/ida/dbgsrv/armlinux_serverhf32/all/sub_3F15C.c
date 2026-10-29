/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F15C
// Address: 0x0003F15C

//----- (0003F15C) --------------------------------------------------------
int __fastcall sub_3F15C(const char *a1)
{
  pthread_mutex_t *v2; // r4
  int v3; // r0
  int v4; // r5

  v2 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v3 = sub_3E348();
  v4 = sub_3F0B8(v3, a1);
  sub_7A128(v2);
  return v4;
}
// D3A90: using guessed type int dword_D3A90;
