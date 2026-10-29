/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E4B8
// Address: 0x000000000047E4B8

//----- (000000000047E4B8) ----------------------------------------------------
__int64 __fastcall sub_47E4B8(__int64 result)
{
  if ( *(unsigned __int16 *)((char *)qword_4DAD30 + 5 * (int)result) == 0xFFFF )
    return (unsigned int)result;
  else
    return *(unsigned __int16 *)((char *)qword_4DAD30 + 5 * (int)result);
}
// 4DAD30: using guessed type __int64 qword_4DAD30[205];
