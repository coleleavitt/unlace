/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478008
// Address: 0x0000000000478008

//----- (0000000000478008) ----------------------------------------------------
__int64 __fastcall sub_478008(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // x6
  unsigned __int8 *v3; // x5
  unsigned __int8 *v4; // x3
  __int64 v5; // x2
  int v6; // t1

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return *(unsigned int *)(a1 + 64);
  v3 = *(unsigned __int8 **)(a1 + 48);
  if ( *v3 != a2 )
  {
    v4 = v3 + 8;
    v5 = 0;
    while ( 1 )
    {
      ++v5;
      v3 = v4;
      if ( v5 == v2 )
        break;
      v6 = *v4;
      v4 += 8;
      if ( v6 == a2 )
        return *((unsigned int *)v3 + 1);
    }
    return *(unsigned int *)(a1 + 64);
  }
  return *((unsigned int *)v3 + 1);
}
