/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487008
// Address: 0x0000000000487008

//----- (0000000000487008) ----------------------------------------------------
__int64 __fastcall sub_487008(char a1)
{
  unsigned __int64 v2; // x1
  __int64 result; // x0

  v2 = _ReadStatusReg(TPIDR_EL0) + 16;
  result = *(unsigned __int8 *)(v2 + 252);
  *(_BYTE *)(v2 + 252) = a1;
  return result;
}
