/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap_idcvs
// Address: 0x00000001000340AC

//----- (00000001000340AC) ----------------------------------------------------
__int128 *__fastcall swap_idcvs(__int128 *result, __int128 *a2)
{
  __int128 v2; // q0
  __int128 v3; // q1
  __int128 v4; // q2
  unsigned __int8 *v5; // x0
  __int64 v6; // x1

  if ( result && a2 )
  {
    v3 = *result;
    v2 = result[1];
    v4 = a2[1];
    *result = *a2;
    result[1] = v4;
    *a2 = v3;
    a2[1] = v2;
  }
  else
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(2657);
    return (__int128 *)deep_copy_idcv(v5, v6);
  }
  return result;
}
// 100034125: variable 'v5' is possibly undefined
// 100034125: variable 'v6' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
