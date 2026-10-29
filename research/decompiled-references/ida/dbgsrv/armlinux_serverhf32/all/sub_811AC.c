/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_811AC
// Address: 0x000811AC

//----- (000811AC) --------------------------------------------------------
void __fastcall sub_811AC(int a1)
{
  void *v1; // r0

  v1 = (void *)(a1 - 128);
  if ( (unsigned int)v1 > dword_D5C30 && (unsigned int)v1 < dword_D5C30 + dword_D5C34 )
    sub_80F6C((int)v1);
  else
    sub_14070(v1);
}
// D5C30: using guessed type int dword_D5C30;
// D5C34: using guessed type int dword_D5C34;
