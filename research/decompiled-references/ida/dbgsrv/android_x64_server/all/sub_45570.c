/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45570
// Address: 0x0000000000045570

//----- (0000000000045570) ----------------------------------------------------
char __fastcall sub_45570(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 80);
  if ( (v1 & 0x3F) == 0 )
    return 0;
  *(_BYTE *)(a1 + 3528) = (v1 & 3) != 0;
  *(_BYTE *)(a1 + 3529) = (v1 & 0x1C) != 0;
  *(_BYTE *)(a1 + 3530) = (v1 & 0x20) != 0;
  return 1;
}
