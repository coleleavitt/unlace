/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8260C
// Address: 0x0008260C

//----- (0008260C) --------------------------------------------------------
size_t __fastcall sub_8260C(_DWORD *a1, int a2, int a3)
{
  int v3; // r2
  size_t result; // r0
  size_t v6; // r4

  v3 = a3 - a2;
  if ( !v3 )
    return a2;
  v6 = a2 - *a1;
  sub_822F4(a1, v6, v3, 0);
  result = *a1 + v6;
  *(_DWORD *)(*a1 - 4) = -1;
  return result;
}
