/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_unexpected
// Address: 0x00092058

//----- (00092058) --------------------------------------------------------
unsigned int __fastcall std::set_unexpected(void (__noreturn *a1)())
{
  void (__noreturn *v1)(); // r1
  unsigned int result; // r0

  v1 = sub_921A4;
  if ( a1 )
    v1 = a1;
  __dmb(0xBu);
  do
    result = __ldrex((unsigned int *)&_cxa_unexpected_handler);
  while ( __strex((unsigned int)v1, (unsigned int *)&_cxa_unexpected_handler) );
  __dmb(0xBu);
  return result;
}
// 921A4: using guessed type void __noreturn sub_921A4();
// DE2C0: using guessed type _UNKNOWN *_cxa_unexpected_handler;
