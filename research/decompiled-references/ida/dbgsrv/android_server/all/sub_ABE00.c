/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABE00
// Address: 0x00000000000ABE00

//----- (00000000000ABE00) ----------------------------------------------------
__int64 __fastcall sub_ABE00(__int64 result)
{
  if ( *(unsigned __int16 *)((char *)&dword_11971C + 5 * (unsigned __int16)result) == 0xFFFF )
    return (unsigned __int16)result;
  else
    return *(unsigned __int16 *)((char *)&dword_11971C + 5 * (unsigned __int16)result);
}
// 11971C: using guessed type int dword_11971C;
