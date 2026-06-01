/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA94E
// Address: 0x00000000000EA94E

//----- (00000000000EA94E) ----------------------------------------------------
void sub_EA94E(void)
{
  if ( pthread_key_create(&dword_159314, (void (*)(void *))sub_EA977) )
    abort();
  dword_159310 = 1;
}
// 159310: using guessed type int dword_159310;
