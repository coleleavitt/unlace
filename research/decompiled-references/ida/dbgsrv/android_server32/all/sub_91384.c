/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91384
// Address: 0x00091384

//----- (00091384) --------------------------------------------------------
int __fastcall sub_91384(int a1, int a2, int a3, int a4)
{
  if ( a1 == *(_DWORD *)(a2 + 8) )
    return sub_91348(a1, a2, a3, a4);
  else
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 28))(*(_DWORD *)(a1 + 8));
}
