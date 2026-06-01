/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4869C8
// Address: 0x00000000004869C8

//----- (00000000004869C8) ----------------------------------------------------
__int64 __fastcall sub_4869C8(__int64 result)
{
  if ( (_DWORD)result == -1 )
    return sub_4869A0();
  result = (unsigned int)result;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 264) = result;
  return result;
}
