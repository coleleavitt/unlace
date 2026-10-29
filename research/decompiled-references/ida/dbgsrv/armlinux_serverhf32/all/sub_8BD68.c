/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BD68
// Address: 0x0008BD68

//----- (0008BD68) --------------------------------------------------------
int __fastcall sub_8BD68(int a1, int a2, unsigned int a3, const char *a4)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  if ( a2 + 0x7FFFFFFF - result < a3 )
    sub_83AE4(a4);
  return result;
}
