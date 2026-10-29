/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100040934
// Address: 0x0000000100040934

//----- (0000000100040934) ----------------------------------------------------
__int64 __fastcall sub_100040934(__int64 a1)
{
  __int64 v1; // x19
  __int64 v3; // x0

  if ( *(_BYTE *)(a1 + 608) == 1 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(302);
    return sub_100040994(v3);
  }
  else
  {
    v1 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 560) = 0;
    sub_10003F820(a1, 0, 0);
    return v1;
  }
}
// 100040991: variable 'v3' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
