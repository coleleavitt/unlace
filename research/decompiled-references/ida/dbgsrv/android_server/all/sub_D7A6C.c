/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7A6C
// Address: 0x00000000000D7A6C

//----- (00000000000D7A6C) ----------------------------------------------------
unsigned __int16 *__fastcall sub_D7A6C(size_t a1)
{
  unsigned __int16 *result; // x0

  result = (unsigned __int16 *)malloc(a1);
  if ( !result )
    return sub_D7AA0(a1);
  return result;
}
