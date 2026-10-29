/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DD50
// Address: 0x0043DD50

//----- (0043DD50) --------------------------------------------------------
bool __stdcall sub_43DD50(int a1, _DWORD *a2, int a3)
{
  if ( (a2[4] & 0xFFFFFFF) == 5 )
    return a2[2] == a3;
  if ( (a2[4] & 0xFFFFFFF) != 7 )
    return 0;
  return a2[7] == a3 || a2[2] == a3;
}
