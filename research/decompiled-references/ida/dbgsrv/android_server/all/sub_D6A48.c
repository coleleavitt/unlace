/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D6A48
// Address: 0x00000000000D6A48

//----- (00000000000D6A48) ----------------------------------------------------
__int64 sub_D6A48()
{
  __int64 result; // x0

  result = pthread_key_create((pthread_key_t *)&dword_1690A8, (void (*)(void *))sub_D6A7C);
  if ( (_DWORD)result )
    sub_D9A54("cannot create thread specific key for __cxa_get_globals()");
  return result;
}
// 1690A8: using guessed type int dword_1690A8;
