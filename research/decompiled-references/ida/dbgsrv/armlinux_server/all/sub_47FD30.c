/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FD30
// Address: 0x000000000047FD30

//----- (000000000047FD30) ----------------------------------------------------
__int64 __fastcall sub_47FD30(unsigned __int64 a1)
{
  __int64 result; // x0

  LODWORD(result) = sub_47FCC0(a1);
  if ( ((a1 - 1) & a1) != 0 )
    return (unsigned int)(result + 1);
  else
    return (unsigned int)result;
}
