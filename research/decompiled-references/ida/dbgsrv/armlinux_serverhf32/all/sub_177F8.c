/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_177F8
// Address: 0x000177F8

//----- (000177F8) --------------------------------------------------------
int sub_177F8(int a1, char *a2, ...)
{
  int result; // r0
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  result = _stack_chk_guard;
  if ( (debug & 0x10000) != 0 )
    return ((int (__fastcall *)(unsigned int, char *, int, int, int))callui)(
             0x17u,
             a2,
             (int)varg_r2,
             (int)callui,
             (int)varg_r2);
  return result;
}
// D3924: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// D5BF8: using guessed type int debug;
