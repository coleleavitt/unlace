/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BD8F0
// Address: 0x000BD8F0

//----- (000BD8F0) --------------------------------------------------------
int __cdecl sub_BD8F0(int *a1)
{
  int result; // eax

  result = pthread_key_create((pthread_key_t *)&dword_13E3AC, (void (*)(void *))sub_BD940);
  if ( result )
  {
    sub_C10D0("cannot create thread specific key for __cxa_get_globals()");
    return sub_BD940(a1);
  }
  return result;
}
// 13E3AC: using guessed type int dword_13E3AC;
