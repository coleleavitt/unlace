/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B3B0
// Address: 0x0006B3B0

//----- (0006B3B0) --------------------------------------------------------
int __fastcall sub_6B3B0(int result)
{
  if ( *(unsigned __int16 *)((char *)dword_B0E30 + 5 * result) != 0xFFFF )
    return *(unsigned __int16 *)((char *)dword_B0E30 + 5 * result);
  return result;
}
// B0E30: using guessed type int dword_B0E30[17];
