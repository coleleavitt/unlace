/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63B64
// Address: 0x00063B64

//----- (00063B64) --------------------------------------------------------
int __fastcall sub_63B64(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0

  result = *a2 << 31;
  if ( (*a2 & 1) != 0 )
  {
    --*a2;
    *a3 = 2;
    return 2;
  }
  return result;
}
