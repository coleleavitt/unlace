/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B212
// Address: 0x0006B212

//----- (0006B212) --------------------------------------------------------
int __fastcall sub_6B212(int a1, int *a2, _DWORD *a3)
{
  int result; // r0

  result = *a2;
  if ( *a2 << 31 )
  {
    *a2 = result - 1;
    *a3 = 2;
    return 2;
  }
  return result;
}
