/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_811F4
// Address: 0x000811F4

//----- (000811F4) --------------------------------------------------------
void __fastcall sub_811F4(void *ptr)
{
  if ( (unsigned int)ptr > dword_D5C30 && (unsigned int)ptr < dword_D5C30 + dword_D5C34 )
    sub_80F6C((int)ptr);
  else
    sub_14070(ptr);
}
// D5C30: using guessed type int dword_D5C30;
// D5C34: using guessed type int dword_D5C34;
