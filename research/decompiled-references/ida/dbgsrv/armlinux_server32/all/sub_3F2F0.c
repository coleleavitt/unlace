/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F2F0
// Address: 0x0003F2F0

//----- (0003F2F0) --------------------------------------------------------
int __fastcall sub_3F2F0(const char *a1)
{
  pthread_mutex_t *v2; // r4
  int v3; // r0
  int v4; // r5

  v2 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v3 = sub_3E4E0();
  v4 = sub_3F24C(v3, a1);
  sub_7A290(v2);
  return v4;
}
// D4AB0: using guessed type int dword_D4AB0;
