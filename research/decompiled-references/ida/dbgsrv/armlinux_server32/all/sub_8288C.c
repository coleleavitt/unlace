/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8288C
// Address: 0x0008288C

//----- (0008288C) --------------------------------------------------------
size_t __fastcall sub_8288C(_DWORD *a1, int a2, unsigned __int8 a3)
{
  size_t v4; // r4
  size_t result; // r0

  v4 = a2 - *a1;
  sub_827D0(a1, v4, 0, 1u, a3);
  result = *a1 + v4;
  *(_DWORD *)(*a1 - 4) = -1;
  return result;
}
