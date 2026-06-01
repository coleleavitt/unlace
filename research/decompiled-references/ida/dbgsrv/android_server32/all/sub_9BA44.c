/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BA44
// Address: 0x0009BA44

//----- (0009BA44) --------------------------------------------------------
int sub_9BA44()
{
  return pthread_key_create((pthread_key_t *)&dword_E07CC, (void (*)(void *))sub_9B974);
}
// E07CC: using guessed type int dword_E07CC;
