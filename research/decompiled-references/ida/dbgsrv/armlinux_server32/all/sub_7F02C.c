/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F02C
// Address: 0x0007F02C

//----- (0007F02C) --------------------------------------------------------
bool __fastcall sub_7F02C(int a1, int a2, int a3)
{
  unsigned __int16 *v3; // r3

  v3 = *(unsigned __int16 **)(a1 + 12);
  return v3 && *v3 == a2 && sub_7F000(a1, a3);
}
