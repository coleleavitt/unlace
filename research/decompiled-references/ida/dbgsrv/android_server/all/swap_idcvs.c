/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap_idcvs
// Address: 0x0000000000071088

//----- (0000000000071088) ----------------------------------------------------
__int128 *__fastcall swap_idcvs(__int128 *result, __int128 *a2)
{
  __int128 v2; // q1
  __int128 v3; // [xsp+0h] [xbp-40h]
  __int128 v4; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  if ( result && a2 )
  {
    v3 = *result;
    v4 = result[1];
    v2 = a2[1];
    *result = *a2;
    result[1] = v2;
    *a2 = v3;
    a2[1] = v4;
  }
  else
  {
    if ( !under_debugger )
      interr(2657);
    __break(1u);
    return (__int128 *)deep_copy_idcv((__int64)result, (__int64)a2);
  }
  return result;
}
// 168DF0: using guessed type char under_debugger;
