/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlseek
// Address: 0x00000000000BE7E0

//----- (00000000000BE7E0) ----------------------------------------------------
__int64 __fastcall qlseek(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14

  v3 = -1;
  if ( !a1 )
    return v3;
  if ( *(int *)a1 < 2 )
  {
    if ( !(unsigned int)qfseek(*(FILE **)(a1 + 8), a2, a3) )
      return qftell(*(FILE **)(a1 + 8));
  }
  else
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        a2 += *(_QWORD *)(a1 + 24);
      }
      else
      {
        if ( a3 != 2 )
          return *(_QWORD *)(a1 + 24);
        a2 += *(_QWORD *)(a1 + 16);
      }
    }
    *(_QWORD *)(a1 + 24) = a2;
    return a2;
  }
  return v3;
}
