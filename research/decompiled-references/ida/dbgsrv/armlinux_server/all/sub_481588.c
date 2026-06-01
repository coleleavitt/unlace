/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481588
// Address: 0x0000000000481588

//----- (0000000000481588) ----------------------------------------------------
unsigned __int8 *__fastcall sub_481588(unsigned __int8 **a1, unsigned __int8 a2)
{
  unsigned __int8 *v2; // x5
  unsigned __int8 *result; // x0
  unsigned __int8 *v4; // x3
  unsigned __int8 *v5; // x2
  int v6; // t1

  v2 = a1[1];
  if ( v2 )
  {
    result = *a1;
    if ( *result == a2 )
      return result;
    v4 = result + 40;
    v5 = nullptr;
    while ( 1 )
    {
      ++v5;
      result = v4;
      if ( v5 == v2 )
        break;
      v6 = *v4;
      v4 += 40;
      if ( v6 == a2 )
        return result;
    }
  }
  return nullptr;
}
