/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DC287
// Address: 0x000DC287

//----- (000DC287) --------------------------------------------------------
int sub_DC287()
{
  int result; // eax

  result = pthread_key_create((pthread_key_t *)&dword_13E718, (void (*)(void *))sub_DC2C8);
  if ( result )
    abort();
  dword_13E714 = 1;
  return result;
}
// 13E714: using guessed type int dword_13E714;
// 13E718: using guessed type int dword_13E718;
