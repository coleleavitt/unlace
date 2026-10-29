/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76C54
// Address: 0x00076C54

//----- (00076C54) --------------------------------------------------------
bool __fastcall sub_76C54(unsigned __int8 *a1)
{
  int v1; // r0
  bool v2; // zf

  v1 = *a1;
  v2 = v1 == 47;
  if ( v1 != 47 )
    return v1 == 92;
  return v2;
}
