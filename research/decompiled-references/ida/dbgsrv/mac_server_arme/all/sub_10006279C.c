/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006279C
// Address: 0x000000010006279C

//----- (000000010006279C) ----------------------------------------------------
__int64 __fastcall sub_10006279C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  __int64 v6; // x8
  __int64 v7; // x22
  __int64 v8; // x0

  v3 = a3;
  v6 = a3;
  while ( v6 )
  {
    v7 = v6;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, a2, v6);
    v6 = v7 - v8;
    a2 += v8;
    if ( v8 <= 0 )
    {
      v3 -= v7;
      return v3;
    }
  }
  return v3;
}
