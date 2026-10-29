/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DC1C
// Address: 0x0006DC1C

//----- (0006DC1C) --------------------------------------------------------
_DWORD *__fastcall sub_6DC1C(_DWORD *result, int a2)
{
  if ( result[5] )
  {
    result = (_DWORD *)result[4];
    result[1] += a2;
  }
  return result;
}
