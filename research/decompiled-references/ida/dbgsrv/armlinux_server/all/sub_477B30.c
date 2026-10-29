/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477B30
// Address: 0x0000000000477B30

//----- (0000000000477B30) ----------------------------------------------------
unsigned __int8 *__fastcall sub_477B30(__int64 a1, int a2)
{
  __int64 v2; // x5
  unsigned __int8 *result; // x0
  unsigned __int8 *v4; // x3
  __int64 v5; // x2
  int v6; // w4

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    result = *(unsigned __int8 **)(a1 + 72);
    if ( a2 == *result )
      return result;
    v4 = result + 24;
    v5 = 0;
    while ( 1 )
    {
      ++v5;
      result = v4;
      if ( v5 == v2 )
        break;
      v6 = *v4;
      v4 += 24;
      if ( v6 == a2 )
        return result;
    }
  }
  return nullptr;
}
