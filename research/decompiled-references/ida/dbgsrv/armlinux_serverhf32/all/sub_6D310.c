/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D310
// Address: 0x0006D310

//----- (0006D310) --------------------------------------------------------
unsigned __int8 *__fastcall sub_6D310(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v2; // r5
  unsigned __int8 *result; // r0
  unsigned __int8 *v4; // r3
  unsigned __int8 *v5; // r2

  v2 = a1[1];
  if ( !v2 )
    return nullptr;
  result = *a1;
  if ( *result != a2 )
  {
    v4 = result;
    v5 = nullptr;
    while ( 1 )
    {
      ++v5;
      v4 += 20;
      result = v4;
      if ( v5 == v2 )
        break;
      if ( *v4 == a2 )
        return result;
    }
    return nullptr;
  }
  return result;
}
