/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A0E4
// Address: 0x0007A0E4

//----- (0007A0E4) --------------------------------------------------------
pthread_mutex_t *sub_7A0E4()
{
  pthread_mutex_t *result; // r0

  dword_D6C2C = sub_79BF0();
  result = sub_7A070();
  dword_D6C28 = (int)result;
  return result;
}
// D6C28: using guessed type int dword_D6C28;
// D6C2C: using guessed type int dword_D6C2C;
