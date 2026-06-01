/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: bitcountr_zero
// Address: 0x00071F98

//----- (00071F98) --------------------------------------------------------
int __fastcall bitcountr_zero(unsigned __int64 a1)
{
  int v1; // r2

  v1 = 64;
  if ( a1 )
    return *(int *)((char *)&dword_C6630 + (((unsigned int)((0x3F79D71B4CB0A89LL * ((a1 - 1) ^ a1)) >> 32) >> 24) & 0xFC));
  return v1;
}
// C6630: using guessed type int dword_C6630;
