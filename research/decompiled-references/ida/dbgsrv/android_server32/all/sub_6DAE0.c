/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DAE0
// Address: 0x0006DAE0

//----- (0006DAE0) --------------------------------------------------------
int sub_6DAE0(int a1, ...)
{
  va_list va; // [sp+20h] [bp-Ch] BYREF

  va_start(va, a1);
  return callui(23, a1, (char *)va);
}
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
