/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_826F0
// Address: 0x000826F0

//----- (000826F0) --------------------------------------------------------
size_t __fastcall sub_826F0(_DWORD *a1, int a2, unsigned __int8 a3)
{
  size_t v4; // r4
  size_t result; // r0

  v4 = a2 - *a1;
  sub_82634(a1, v4, 0, 1u, a3);
  result = *a1 + v4;
  *(_DWORD *)(*a1 - 4) = -1;
  return result;
}
