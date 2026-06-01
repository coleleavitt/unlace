/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_171B0
// Address: 0x000171B0

//----- (000171B0) --------------------------------------------------------
int sub_171B0(int a1, ...)
{
  va_list varg_r1; // [sp+1Ch] [bp+14h] BYREF

  va_start(varg_r1, a1);
  return callui(23, a1, (int *)varg_r1);
}
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
