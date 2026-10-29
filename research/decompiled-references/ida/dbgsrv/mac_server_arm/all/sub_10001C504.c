/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C504
// Address: 0x000000010001C504

//----- (000000010001C504) ----------------------------------------------------
bool __fastcall sub_10001C504(__int64 a1)
{
  int v1; // w9

  v1 = *(_DWORD *)(a1 + 80);
  if ( (v1 & 5) != 0 )
  {
    *(_BYTE *)(a1 + 896) = v1 & 1;
    *(_BYTE *)(a1 + 897) = (v1 & 4) != 0;
  }
  return (v1 & 5) != 0;
}
