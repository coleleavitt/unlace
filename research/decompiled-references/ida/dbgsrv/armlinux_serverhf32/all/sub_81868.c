/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81868
// Address: 0x00081868

//----- (00081868) --------------------------------------------------------
_BYTE *__fastcall sub_81868(_BYTE *result, size_t a2, char a3)
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
