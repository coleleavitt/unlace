/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A278
// Address: 0x0003A278

//----- (0003A278) --------------------------------------------------------
_BYTE *__fastcall sub_3A278(int a1, int a2, unsigned int a3, unsigned int a4)
{
  sub_39B10(a1, (unsigned __int16)a3);
  sub_39B10(a1, HIWORD(a3));
  sub_39B10(a1, (unsigned __int16)a4);
  return sub_39B10(a1, HIWORD(a4));
}
