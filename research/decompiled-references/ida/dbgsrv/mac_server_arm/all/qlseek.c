/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlseek
// Address: 0x000000010006C824

//----- (000000010006C824) ----------------------------------------------------
off_t __fastcall qlseek(__int64 a1, off_t a2, int a3)
{
  __int64 v3; // x8

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
      v3 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( a3 != 2 )
        return *(_QWORD *)(a1 + 24);
      v3 = *(_QWORD *)(a1 + 16);
    }
    a2 += v3;
  }
  *(_QWORD *)(a1 + 24) = a2;
  return a2;
}
