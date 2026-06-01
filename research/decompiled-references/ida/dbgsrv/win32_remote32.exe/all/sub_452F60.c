/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452F60
// Address: 0x00452F60

//----- (00452F60) --------------------------------------------------------
bool __stdcall sub_452F60(unsigned int a1)
{
  int v1; // eax

  v1 = sub_452E70(a1);
  return BYTE2(v1) >= 2u
      && a1 != 8232
      && a1 != 8233
      && (_WORD)v1 != 290
      && (_WORD)v1 != 270
      && a1 != 1564
      && a1 != 8206
      && a1 != 8207
      && (a1 < 0x202A || a1 > 0x202E)
      && BYTE2(v1) != 5;
}
