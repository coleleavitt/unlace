/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlseek
// Address: 0x0000000100071688

//----- (0000000100071688) ----------------------------------------------------
off_t __fastcall qlseek(__int64 a1, off_t a2, int a3)
{
  __int64 v3; // x8
  FILE *v5; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( !a1 )
    return -1;
  if ( *(int *)a1 >= 2 )
  {
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
  if ( (unsigned int)qfseek(*(FILE **)(a1 + 8), a2, a3) )
    return -1;
  v5 = *(FILE **)(a1 + 8);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return qftell(v5);
}
// 1000716EC: variable '_18' is possibly undefined
