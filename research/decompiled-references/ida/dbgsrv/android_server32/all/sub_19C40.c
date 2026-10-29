/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19C40
// Address: 0x00019C40

//----- (00019C40) --------------------------------------------------------
int sub_19C40()
{
  dword_DE2DC = (int)&dword_DE2E0;
  dword_DE2E0 = 0;
  dword_DE2E4 = 0;
  return _cxa_atexit((void (*)(void *))sub_1C098, &dword_DE2DC, &dword_DE2D8);
}
// DE2D8: using guessed type int dword_DE2D8;
// DE2DC: using guessed type int dword_DE2DC;
// DE2E0: using guessed type int dword_DE2E0;
// DE2E4: using guessed type int dword_DE2E4;
