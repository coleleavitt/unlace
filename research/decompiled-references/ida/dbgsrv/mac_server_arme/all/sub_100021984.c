/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100021984
// Address: 0x0000000100021984

//----- (0000000100021984) ----------------------------------------------------
__int64 __fastcall sub_100021984(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  bool v3; // cf
  __int64 v4; // x8

  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 != 0;
  v4 = v2 - 1;
  if ( !v3 )
    v4 = 0;
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
