/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_new_handler
// Address: 0x000906D8

//----- (000906D8) --------------------------------------------------------
unsigned int __fastcall std::set_new_handler(void (*a1)())
{
  unsigned int v1; // r1

  __dmb(0xBu);
  do
    v1 = __ldrex((unsigned int *)&_cxa_new_handler);
  while ( __strex((unsigned int)a1, (unsigned int *)&_cxa_new_handler) );
  __dmb(0xBu);
  return v1;
}
// E05BC: using guessed type int _cxa_new_handler;
