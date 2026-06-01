/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79F7C
// Address: 0x00079F7C

//----- (00079F7C) --------------------------------------------------------
pthread_mutex_t *sub_79F7C()
{
  pthread_mutex_t *result; // r0

  dword_D5C0C = sub_79A88();
  result = sub_79F08();
  dword_D5C08 = (int)result;
  return result;
}
// D5C08: using guessed type int dword_D5C08;
// D5C0C: using guessed type int dword_D5C0C;
