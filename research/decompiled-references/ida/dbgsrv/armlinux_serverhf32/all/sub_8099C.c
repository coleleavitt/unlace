/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8099C
// Address: 0x0008099C

//----- (0008099C) --------------------------------------------------------
bool __fastcall sub_8099C(int a1, int a2, int a3, _DWORD *a4)
{
  _BOOL4 result; // r0

  result = sub_80E60(a1, a2);
  if ( result )
  {
    *a4 = a3;
    a4[3] = 8;
    a4[1] = 6;
  }
  return result;
}
