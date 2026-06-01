/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78B44
// Address: 0x00078B44

//----- (00078B44) --------------------------------------------------------
void __fastcall __noreturn sub_78B44(int status)
{
  sub_78A10(1, status);
  if ( !byte_D5BF4 )
  {
    byte_D5BF4 = 1;
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(546);
  }
  exit(status);
}
// D5BF4: using guessed type char byte_D5BF4;
// D5C00: using guessed type char under_debugger;
