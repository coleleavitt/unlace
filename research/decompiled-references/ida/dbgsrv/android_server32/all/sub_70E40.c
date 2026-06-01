/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70E40
// Address: 0x00070E40

//----- (00070E40) --------------------------------------------------------
int __fastcall sub_70E40(int result)
{
  result = (unsigned __int16)result;
  if ( (*((unsigned __int8 *)&dword_C5BBC + 5 * result + 1) << 8) + *((unsigned __int8 *)&dword_C5BBC + 5 * result) != 0xFFFF )
    return (*((unsigned __int8 *)&dword_C5BBC + 5 * (unsigned __int16)result + 1) << 8)
         + *((unsigned __int8 *)&dword_C5BBC + 5 * (unsigned __int16)result);
  return result;
}
// C5BBC: using guessed type int dword_C5BBC;
