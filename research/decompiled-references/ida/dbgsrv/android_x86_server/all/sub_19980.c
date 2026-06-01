/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19980
// Address: 0x00019980

//----- (00019980) --------------------------------------------------------
unsigned int sub_19980(int a1, int a2, int a3, int a4, ...)
{
  va_list va; // [esp+34h] [ebp+18h] BYREF

  va_start(va, a4);
  __vsnprintf_chk(a1, a3, 0, a2, a4, (char *)va);
  return __readgsdword(0x14u);
}
// 17AD0: using guessed type int __cdecl __vsnprintf_chk(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
