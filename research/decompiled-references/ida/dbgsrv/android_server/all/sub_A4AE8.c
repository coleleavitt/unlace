/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4AE8
// Address: 0x00000000000A4AE8

//----- (00000000000A4AE8) ----------------------------------------------------
__int64 __fastcall sub_A4AE8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  __int64 v6; // x22
  __int64 v7; // x0

  v3 = a3;
  if ( a3 )
  {
    v6 = a3;
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, a2, v6);
      if ( v7 <= 0 )
        break;
      v6 -= v7;
      a2 += v7;
      if ( !v6 )
        return v3;
    }
    v3 -= v6;
  }
  return v3;
}
