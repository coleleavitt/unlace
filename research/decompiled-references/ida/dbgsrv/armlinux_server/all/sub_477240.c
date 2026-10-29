/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477240
// Address: 0x0000000000477240

//----- (0000000000477240) ----------------------------------------------------
__int64 __fastcall sub_477240(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x19
  __int64 v7; // x0

  if ( !a3 )
    return a3;
  v5 = a3;
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, a2, v5);
    if ( v7 <= 0 )
      break;
    a2 += v7;
    v5 -= v7;
    if ( !v5 )
      return a3;
  }
  return a3 - v5;
}
