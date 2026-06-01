/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80804
// Address: 0x00080804

//----- (00080804) --------------------------------------------------------
void __fastcall sub_80804(int a1)
{
  void *v1; // r0

  v1 = (void *)(a1 - 128);
  if ( (unsigned int)v1 > dword_D6C50 && (unsigned int)v1 < dword_D6C50 + dword_D6C54 )
    sub_805C4((int)v1);
  else
    sub_141C4(v1);
}
// D6C50: using guessed type int dword_D6C50;
// D6C54: using guessed type int dword_D6C54;
