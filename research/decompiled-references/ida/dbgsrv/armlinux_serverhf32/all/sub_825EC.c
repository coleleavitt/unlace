/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_825EC
// Address: 0x000825EC

//----- (000825EC) --------------------------------------------------------
size_t __fastcall sub_825EC(_DWORD *a1, int a2)
{
  size_t v3; // r4
  size_t result; // r0

  v3 = a2 - *a1;
  sub_822F4(a1, v3, 1, 0);
  result = *a1 + v3;
  *(_DWORD *)(*a1 - 4) = -1;
  return result;
}
