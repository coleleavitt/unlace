/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_SetIP
// Address: 0x000D9380

//----- (000D9380) --------------------------------------------------------
int __cdecl Unwind_SetIP(int a1, int a2)
{
  *(_DWORD *)(a1 + 76) = a2;
  return a1;
}
