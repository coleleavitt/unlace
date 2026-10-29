/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15CDC
// Address: 0x00015CDC

//----- (00015CDC) --------------------------------------------------------
int __fastcall sub_15CDC(int a1)
{
  if ( *(_DWORD *)(a1 + 64) == *(_DWORD *)(a1 + 80) )
  {
    sub_15C64(*(_DWORD *)(a1 + 1068), 19);
    *(_BYTE *)(*(_DWORD *)(a1 + 1012) + 44) = 1;
  }
  *(_BYTE *)(a1 + 1112) = 0;
  *(_BYTE *)(a1 + 1113) = 1;
  return 1;
}
