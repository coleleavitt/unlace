/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1700C
// Address: 0x0001700C

//----- (0001700C) --------------------------------------------------------
int sub_1700C(int a1, ...)
{
  va_list varg_r1; // [sp+1Ch] [bp+14h] BYREF

  va_start(varg_r1, a1);
  return callui(23, a1, (int *)varg_r1);
}
// D3924: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
