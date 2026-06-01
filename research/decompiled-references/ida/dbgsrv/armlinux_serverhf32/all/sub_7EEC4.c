/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EEC4
// Address: 0x0007EEC4

//----- (0007EEC4) --------------------------------------------------------
bool __fastcall sub_7EEC4(int a1, int a2, int a3)
{
  unsigned __int16 *v3; // r3

  v3 = *(unsigned __int16 **)(a1 + 12);
  return v3 && *v3 == a2 && sub_7EE98(a1, a3);
}
