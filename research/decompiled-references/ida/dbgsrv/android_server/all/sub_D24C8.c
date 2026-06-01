/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D24C8
// Address: 0x00000000000D24C8

//----- (00000000000D24C8) ----------------------------------------------------
__int64 __fastcall sub_D24C8(__int64 a1, _OWORD *a2)
{
  __int128 v2; // q0

  if ( !a1 )
    return 4294967194LL;
  v2 = *(_OWORD *)(a1 + 104);
  *a2 = v2;
  return 0;
}
