/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084C
// Address: 0x0008084C

//----- (0008084C) --------------------------------------------------------
void __fastcall sub_8084C(void *ptr)
{
  if ( (unsigned int)ptr > dword_D6C50 && (unsigned int)ptr < dword_D6C50 + dword_D6C54 )
    sub_805C4((int)ptr);
  else
    sub_141C4(ptr);
}
// D6C50: using guessed type int dword_D6C50;
// D6C54: using guessed type int dword_D6C54;
