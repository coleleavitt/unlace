/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BDD4
// Address: 0x0008BDD4

//----- (0008BDD4) --------------------------------------------------------
_BYTE *__fastcall sub_8BDD4(_BYTE *result, size_t a2, char a3)
{
  if ( a2 == 1 )
  {
    *result = a3;
  }
  else if ( a2 )
  {
    return j_memset(result, a3, a2);
  }
  return result;
}
