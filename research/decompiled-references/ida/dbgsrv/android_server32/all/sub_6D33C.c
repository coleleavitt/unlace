/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D33C
// Address: 0x0006D33C

//----- (0006D33C) --------------------------------------------------------
unsigned __int8 *__fastcall sub_6D33C(int a1, int a2)
{
  unsigned int v3; // r3
  unsigned __int8 *result; // r0
  unsigned __int8 *v5; // r2
  unsigned int v6; // r4

  v3 = *(_DWORD *)(a1 + 44);
  result = nullptr;
  if ( v3 )
  {
    v5 = *(unsigned __int8 **)(a1 + 40);
    v6 = 0;
    while ( 1 )
    {
      ++v6;
      if ( *v5 == a2 )
        break;
      v5 += 12;
      result = nullptr;
      if ( v6 >= v3 )
        return result;
    }
    return v5;
  }
  return result;
}
