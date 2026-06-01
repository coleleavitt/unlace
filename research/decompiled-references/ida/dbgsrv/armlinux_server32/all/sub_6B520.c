/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B520
// Address: 0x0006B520

//----- (0006B520) --------------------------------------------------------
int __fastcall sub_6B520(int result)
{
  if ( *(unsigned __int16 *)((char *)dword_B0F6C + 5 * result) != 0xFFFF )
    return *(unsigned __int16 *)((char *)dword_B0F6C + 5 * result);
  return result;
}
// B0F6C: using guessed type int dword_B0F6C[17];
