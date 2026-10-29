/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A0A8
// Address: 0x0001A0A8

//----- (0001A0A8) --------------------------------------------------------
int sub_1A0A8(int a1, int a2, int a3, int a4, ...)
{
  int v5; // [sp+10h] [bp-4h]
  va_list va; // [sp+24h] [bp+10h] BYREF

  va_start(va, a4);
  _vsnprintf_chk(a1, a3, 0, a2, a4, (char *)va, (char *)va);
  return _stack_chk_guard - v5;
}
// 1A0D6: variable 'v5' is possibly undefined
// 19328: using guessed type int __fastcall _vsnprintf_chk(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
