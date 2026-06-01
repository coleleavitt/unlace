/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BBA0
// Address: 0x0001BBA0

//----- (0001BBA0) --------------------------------------------------------
int sub_1BBA0(int a1, ...)
{
  va_list va; // [sp+20h] [bp-Ch] BYREF

  va_start(va, a1);
  return callui(23, a1, (char *)va);
}
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
