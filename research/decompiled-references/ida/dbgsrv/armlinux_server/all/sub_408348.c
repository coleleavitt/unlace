/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408348
// Address: 0x0000000000408348

//----- (0000000000408348) ----------------------------------------------------
__int64 __fastcall sub_408348(__int64 a1)
{
  int v1; // w1

  v1 = *(_DWORD *)(a1 + 96);
  if ( (v1 & 5) == 0 )
    return 0;
  *(_BYTE *)(a1 + 912) = v1 & 1;
  *(_BYTE *)(a1 + 913) = (v1 & 4) != 0;
  return 1;
}
