/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlseek
// Address: 0x00000000000B9BE8

//----- (00000000000B9BE8) ----------------------------------------------------
__int64 __fastcall qlseek(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // x8

  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
  {
    if ( !(unsigned int)qfseek(*(FILE **)(a1 + 8), a2, a3) )
      return qftell(*(FILE **)(a1 + 8));
    return -1;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v4 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( a3 != 2 )
        return *(_QWORD *)(a1 + 24);
      v4 = *(_QWORD *)(a1 + 16);
    }
    a2 += v4;
  }
  *(_QWORD *)(a1 + 24) = a2;
  return a2;
}
