/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19DE4
// Address: 0x00019DE4

//----- (00019DE4) --------------------------------------------------------
int sub_19DE4()
{
  memset(&dword_DE4B8, 0, 0x30u);
  _cxa_atexit((void (*)(void *))sub_6FAD4, &dword_DE4B8, &dword_DE2D8);
  dword_DE4EC = 0;
  dword_DE4F0 = 0;
  dword_DE4F4 = 0;
  dword_DE4E8 = (int)qmutex_create();
  return _cxa_atexit((void (*)(void *))sub_6FB3E, &dword_DE4E8, &dword_DE2D8);
}
// DE2D8: using guessed type int dword_DE2D8;
// DE4B8: using guessed type int dword_DE4B8;
// DE4E8: using guessed type int dword_DE4E8;
// DE4EC: using guessed type int dword_DE4EC;
// DE4F0: using guessed type int dword_DE4F0;
// DE4F4: using guessed type int dword_DE4F4;
