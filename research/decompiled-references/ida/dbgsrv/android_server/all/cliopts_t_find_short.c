/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_find_short
// Address: 0x00000000000AEA00

//----- (00000000000AEA00) ----------------------------------------------------
unsigned __int8 *__fastcall cliopts_t_find_short(unsigned __int8 **a1, unsigned __int8 a2)
{
  unsigned __int8 *v2; // x8
  unsigned __int8 *result; // x0
  unsigned __int64 v4; // x9

  v2 = a1[1];
  if ( !v2 )
    return nullptr;
  result = *a1;
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 40;
    if ( v4 >= (unsigned __int64)v2 )
      return nullptr;
  }
  return result;
}
