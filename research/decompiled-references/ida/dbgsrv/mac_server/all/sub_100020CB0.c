/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020CB0
// Address: 0x0000000100020CB0

//----- (0000000100020CB0) ----------------------------------------------------
bool __fastcall sub_100020CB0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 80);
  if ( (v1 & 0x3F) != 0 )
  {
    *(_BYTE *)(a1 + 960) = (v1 & 3) != 0;
    *(_BYTE *)(a1 + 961) = (v1 & 0x3C) != 0;
  }
  return (v1 & 0x3F) != 0;
}
