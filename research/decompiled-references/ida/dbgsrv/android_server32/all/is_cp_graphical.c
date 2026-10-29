/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_cp_graphical
// Address: 0x00070CE4

//----- (00070CE4) --------------------------------------------------------
bool __fastcall is_cp_graphical(unsigned int a1)
{
  int v2; // r0

  v2 = sub_70BD4(a1);
  return (a1 | 1) != 0x2029
      && BYTE2(v2) >= 2u
      && (unsigned __int16)v2 != 270
      && (unsigned __int16)v2 != 290
      && a1 - 8206 >= 2
      && a1 != 1564
      && BYTE2(v2) != 5
      && a1 - 8234 > 4;
}
