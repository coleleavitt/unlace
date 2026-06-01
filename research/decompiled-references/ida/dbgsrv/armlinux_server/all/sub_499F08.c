/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_499F08
// Address: 0x0000000000499F08

//----- (0000000000499F08) ----------------------------------------------------
unsigned __int64 *__fastcall sub_499F08(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *result; // x0

  result = (unsigned __int64 *)a1[3];
  if ( !result || a2 < *result || a2 >= result[1] )
  {
    result = (unsigned __int64 *)sub_499E30(a1, a2);
    if ( result == (unsigned __int64 *)(*a1 + 16 * a1[1]) || a2 < *result || a2 >= result[1] )
      return nullptr;
    else
      a1[3] = (__int64)result;
  }
  return result;
}
