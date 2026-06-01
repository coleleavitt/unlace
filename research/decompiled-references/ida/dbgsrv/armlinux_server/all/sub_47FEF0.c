/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FEF0
// Address: 0x000000000047FEF0

//----- (000000000047FEF0) ----------------------------------------------------
__int64 __fastcall sub_47FEF0(unsigned int a1)
{
  unsigned int v1; // w0
  unsigned int v2; // w0

  v1 = a1 | (a1 >> 1) | ((a1 | (a1 >> 1)) >> 2);
  v2 = v1 | (v1 >> 4) | ((v1 | (v1 >> 4)) >> 8);
  return (v2 | HIWORD(v2)) - ((v2 | HIWORD(v2)) >> 1);
}
