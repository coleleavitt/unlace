/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809A4
// Address: 0x000809A4

//----- (000809A4) --------------------------------------------------------
bool __fastcall sub_809A4(int a1, int a2, int a3, _DWORD *a4)
{
  _BOOL4 result; // r0

  result = sub_80FC8(a1, a2);
  if ( result )
  {
    *a4 = a3;
    a4[3] = 8;
    a4[1] = 6;
  }
  return result;
}
