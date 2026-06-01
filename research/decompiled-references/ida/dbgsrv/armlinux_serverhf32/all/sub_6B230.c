/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B230
// Address: 0x0006B230

//----- (0006B230) --------------------------------------------------------
unsigned int __fastcall sub_6B230(unsigned int a1)
{
  if ( a1 <= 0x7F )
    return (unsigned __int16)dword_A02E8[a1] | (HIWORD(dword_A02E8[a1]) << 16);
  else
    return sub_6B0D8(a1);
}
// A02E8: using guessed type int dword_A02E8[157];
