/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4567D0
// Address: 0x004567D0

//----- (004567D0) --------------------------------------------------------
bool __stdcall sub_4567D0(unsigned __int8 *a1)
{
  _BYTE *v1; // esi

  v1 = a1;
  if ( a1[1] == 58 && (unsigned int)(sub_4692B4(*a1) - 97) <= 0x19 )
    v1 = a1 + 2;
  return *v1 == 47 || *v1 == 92;
}
