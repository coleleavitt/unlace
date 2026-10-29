/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33870
// Address: 0x00033870

//----- (00033870) --------------------------------------------------------
bool sub_33870(int a1, int a2, ...)
{
  _DWORD v3[261]; // [esp+8h] [ebp-414h] BYREF
  va_list va; // [esp+42Ch] [ebp+10h] BYREF

  va_start(va, a2);
  v3[256] = __readgsdword(0x14u);
  sub_32D00(a1, (unsigned int)v3, 1024, a2, (int *)va);
  sub_333F0();
  return a2 < 19;
}
