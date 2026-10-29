/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D24E8
// Address: 0x00000000000D24E8

//----- (00000000000D24E8) ----------------------------------------------------
__int64 __fastcall sub_D24E8(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x9

  if ( !a1 )
    return 4294967194LL;
  v3 = *(_QWORD *)(a1 + 104);
  *a2 = v3;
  a2[1] = *(_QWORD *)(a1 + 112);
  return 0;
}
