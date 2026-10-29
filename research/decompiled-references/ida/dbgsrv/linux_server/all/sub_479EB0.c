/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479EB0
// Address: 0x0000000000479EB0

//----- (0000000000479EB0) ----------------------------------------------------
__int64 __fastcall sub_479EB0(unsigned int a1)
{
  if ( a1 == -1 )
    return sub_479E90();
  *(_DWORD *)(__readfsqword(0) - 8) = a1;
  return a1;
}
