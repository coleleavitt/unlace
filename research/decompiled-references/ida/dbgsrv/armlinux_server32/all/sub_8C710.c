/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C710
// Address: 0x0008C710

//----- (0008C710) --------------------------------------------------------
size_t __fastcall sub_8C710(_DWORD *a1, int a2, unsigned __int8 c)
{
  size_t v4; // r4

  v4 = a2 - *a1;
  sub_8C5B4(a1, v4, 0, 1u, c);
  return *a1 + v4;
}
