/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_F118C
// Address: 0x00000000000F118C

//----- (00000000000F118C) ----------------------------------------------------
__int64 sub_F118C()
{
  if ( pthread_key_create((pthread_key_t *)&dword_169580, (void (*)(void *))sub_F11CC) )
    abort();
  dword_169584 = 1;
  return 1;
}
// 169580: using guessed type int dword_169580;
// 169584: using guessed type int dword_169584;
