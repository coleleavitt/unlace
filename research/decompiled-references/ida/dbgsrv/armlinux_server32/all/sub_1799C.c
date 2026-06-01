/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1799C
// Address: 0x0001799C

//----- (0001799C) --------------------------------------------------------
int sub_1799C(int a1, char *a2, ...)
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
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// D6C18: using guessed type int debug;
