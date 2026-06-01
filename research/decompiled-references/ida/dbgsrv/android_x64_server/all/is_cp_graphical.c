/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_cp_graphical
// Address: 0x00000000000B00D0

//----- (00000000000B00D0) ----------------------------------------------------
bool __fastcall is_cp_graphical(unsigned int a1)
{
  __int64 v1; // rax

  v1 = sub_AFF90(a1);
  return (a1 | 1) != 0x2029
      && BYTE2(v1) >= 2u
      && (unsigned __int16)v1 != 270
      && (unsigned __int16)v1 != 290
      && a1 - 8206 >= 2
      && a1 != 1564
      && a1 - 8234 > 4
      && BYTE2(v1) != 5;
}
