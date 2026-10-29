/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B9F0
// Address: 0x0041B9F0

//----- (0041B9F0) --------------------------------------------------------
int __stdcall sub_41B9F0(int a1, int a2)
{
  int v2; // eax

  if ( *(_DWORD *)(a1 + 12) )
    v2 = sub_45D1F0(*(LPCCH *)(a1 + 8));
  else
    v2 = sub_45D1F0(MultiByteStr);
  *(_DWORD *)(a2 + 8) = v2;
  return 0;
}
