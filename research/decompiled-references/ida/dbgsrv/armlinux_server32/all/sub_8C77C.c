/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C77C
// Address: 0x0008C77C

//----- (0008C77C) --------------------------------------------------------
size_t __fastcall sub_8C77C(_DWORD *a1, int a2, size_t n, unsigned __int8 c)
{
  size_t v5; // r4

  v5 = a2 - *a1;
  sub_8C5B4(a1, v5, 0, n, c);
  return *a1 + v5;
}
