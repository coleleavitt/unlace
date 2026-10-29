/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3504
// Address: 0x00000000000D3504

//----- (00000000000D3504) ----------------------------------------------------
__int64 __fastcall sub_D3504(int8x16_t *a1, int8x16_t *a2)
{
  if ( !a1 )
    return 4294967194LL;
  if ( !a1[9].n128_u64[0] )
    return 4294967196LL;
  *a2 = vextq_s8(a1[8], a1[8], 8u);
  return 0;
}
