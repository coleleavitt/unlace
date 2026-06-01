/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A278
// Address: 0x0007A278

//----- (0007A278) --------------------------------------------------------
_DWORD *__fastcall sub_7A278(_DWORD *a1)
{
  pthread_mutex_t *v2; // r0

  v2 = (pthread_mutex_t *)dword_D6C28;
  *a1 = dword_D6C28;
  sub_7A268(v2);
  return a1;
}
// D6C28: using guessed type int dword_D6C28;
