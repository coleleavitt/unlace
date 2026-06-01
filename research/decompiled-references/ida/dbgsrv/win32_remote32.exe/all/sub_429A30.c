/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429A30
// Address: 0x00429A30

//----- (00429A30) --------------------------------------------------------
int __stdcall sub_429A30(int a1)
{
  int v1; // edx
  int v2; // esi

  v1 = *(_DWORD *)(a1 + 164);
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 164) = v1 - 1;
  return sub_42C6F0(a1, 172, v2);
}
