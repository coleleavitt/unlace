/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15E80
// Address: 0x00015E80

//----- (00015E80) --------------------------------------------------------
int __fastcall sub_15E80(int a1)
{
  if ( *(_DWORD *)(a1 + 64) == *(_DWORD *)(a1 + 80) )
  {
    sub_15E08(*(_DWORD *)(a1 + 1068), 19);
    *(_BYTE *)(*(_DWORD *)(a1 + 1012) + 44) = 1;
  }
  *(_BYTE *)(a1 + 1112) = 0;
  *(_BYTE *)(a1 + 1113) = 1;
  return 1;
}
