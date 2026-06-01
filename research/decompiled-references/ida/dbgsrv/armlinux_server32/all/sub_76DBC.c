/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76DBC
// Address: 0x00076DBC

//----- (00076DBC) --------------------------------------------------------
bool __fastcall sub_76DBC(unsigned __int8 *a1)
{
  int v1; // r0
  bool v2; // zf

  v1 = *a1;
  v2 = v1 == 47;
  if ( v1 != 47 )
    return v1 == 92;
  return v2;
}
