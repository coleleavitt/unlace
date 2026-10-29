/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C5D4
// Address: 0x0008C5D4

//----- (0008C5D4) --------------------------------------------------------
size_t __fastcall sub_8C5D4(_DWORD *a1, int a2, unsigned __int8 c)
{
  size_t v4; // r4

  v4 = a2 - *a1;
  sub_8C478(a1, v4, 0, 1u, c);
  return *a1 + v4;
}
