/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_find_short
// Address: 0x00072F60

//----- (00072F60) --------------------------------------------------------
unsigned __int8 *__fastcall cliopts_t_find_short(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v3; // r3
  unsigned __int8 *result; // r0
  unsigned __int8 *v5; // r2
  unsigned int v6; // r4

  v3 = a1[1];
  result = nullptr;
  if ( v3 )
  {
    v5 = *a1;
    v6 = 0;
    while ( 1 )
    {
      ++v6;
      if ( *v5 == a2 )
        break;
      v5 += 20;
      result = nullptr;
      if ( v6 >= (unsigned int)v3 )
        return result;
    }
    return v5;
  }
  return result;
}
