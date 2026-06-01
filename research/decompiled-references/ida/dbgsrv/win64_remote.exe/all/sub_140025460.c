/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140025460
// Address: 0x0000000140025460

//----- (0000000140025460) ----------------------------------------------------
__int64 __fastcall sub_140025460(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return sub_1400640B0(0x61u);
  v2 = v1 - 2;
  if ( !v2 )
    return sub_1400640B0(0x56u);
  if ( v2 == 1 )
    return sub_1400640B0(0x62u);
  return 0;
}
