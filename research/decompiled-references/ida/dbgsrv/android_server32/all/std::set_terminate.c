/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_terminate
// Address: 0x00092088

//----- (00092088) --------------------------------------------------------
unsigned int __fastcall std::set_terminate(void (*a1)())
{
  void (*v1)(); // r1
  unsigned int result; // r0

  v1 = (void (*)())&loc_920B8;
  if ( a1 )
    v1 = a1;
  __dmb(0xBu);
  do
    result = __ldrex((unsigned int *)&_cxa_terminate_handler);
  while ( __strex((unsigned int)v1, (unsigned int *)&_cxa_terminate_handler) );
  __dmb(0xBu);
  return result;
}
// DE2BC: using guessed type _UNKNOWN *_cxa_terminate_handler;
