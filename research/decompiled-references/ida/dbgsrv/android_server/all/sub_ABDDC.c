/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABDDC
// Address: 0x00000000000ABDDC

//----- (00000000000ABDDC) ----------------------------------------------------
__int64 __fastcall sub_ABDDC(__int64 result)
{
  if ( *(unsigned __int16 *)((char *)&dword_11971C + 5 * (unsigned int)result) == 0xFFFF )
    return (unsigned int)result;
  else
    return *(unsigned __int16 *)((char *)&dword_11971C + 5 * (unsigned int)result);
}
// 11971C: using guessed type int dword_11971C;
