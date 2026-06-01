/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005F210
// Address: 0x000000014005F210

//----- (000000014005F210) ----------------------------------------------------
__int64 __fastcall sub_14005F210(UINT *a1, BYTE *a2, int a3)
{
  int v4; // ecx

  v4 = IsDBCSLeadByteEx(*a1, *a2) + 1;
  if ( a3 >= v4 )
    return (unsigned int)v4;
  *errno() = 22;
  return 0xFFFFFFFFLL;
}
