/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477F88
// Address: 0x00477F88

//----- (00477F88) --------------------------------------------------------
void __stdcall sub_477F88(int *a1, int a2, int *a3)
{
  sub_47A78B(*a1);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_DWORD **)a2 + 72));
  sub_47A7D3(*a3);
}
