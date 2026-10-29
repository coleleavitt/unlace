/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B3A4
// Address: 0x0006B3A4

//----- (0006B3A4) --------------------------------------------------------
unsigned int __fastcall sub_6B3A4(unsigned int a1)
{
  if ( a1 <= 0x7F )
    return (unsigned __int16)dword_A0424[a1] | (HIWORD(dword_A0424[a1]) << 16);
  else
    return sub_6B24C(a1);
}
// A0424: using guessed type int dword_A0424[157];
