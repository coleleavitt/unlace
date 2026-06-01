/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A110
// Address: 0x0007A110

//----- (0007A110) --------------------------------------------------------
_DWORD *__fastcall sub_7A110(_DWORD *a1)
{
  pthread_mutex_t *v2; // r0

  v2 = (pthread_mutex_t *)dword_D5C08;
  *a1 = dword_D5C08;
  sub_7A100(v2);
  return a1;
}
// D5C08: using guessed type int dword_D5C08;
