/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C4AE
// Address: 0x0047C4AE

//----- (0047C4AE) --------------------------------------------------------
int __cdecl sub_47C4AE(int a1)
{
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 12), 0);
  return a1 + 12;
}
