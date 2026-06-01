/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78CAC
// Address: 0x00078CAC

//----- (00078CAC) --------------------------------------------------------
void __fastcall __noreturn sub_78CAC(int status)
{
  sub_78B78(1, status);
  if ( !byte_D6C14 )
  {
    byte_D6C14 = 1;
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(546);
  }
  exit(status);
}
// D6C14: using guessed type char byte_D6C14;
// D6C20: using guessed type char under_debugger;
