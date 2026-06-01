/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9392E
// Address: 0x0009392E

//----- (0009392E) --------------------------------------------------------
int __fastcall sub_9392E(_DWORD *a1, int a2, int a3)
{
  int result; // r0

  sub_96D24(a1, a2, (const void *)(*(_DWORD *)(a2 + 8) + 4 * a3), *(_DWORD *)(a2 + 12));
  result = *(_DWORD *)(a2 + 8) + 4 * a3;
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
