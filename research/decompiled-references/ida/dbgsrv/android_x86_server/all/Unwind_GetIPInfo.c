/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_GetIPInfo
// Address: 0x000D936A

//----- (000D936A) --------------------------------------------------------
int __cdecl Unwind_GetIPInfo(int a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 96) >> 31;
  return *(_DWORD *)(a1 + 76);
}
