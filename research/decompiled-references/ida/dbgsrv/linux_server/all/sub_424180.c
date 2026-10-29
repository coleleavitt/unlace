/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424180
// Address: 0x0000000000424180

//----- (0000000000424180) ----------------------------------------------------
void sub_424180(int a1, int a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v3 = __readfsqword(0x28u);
  off_4C7FB0(28, 0, 0, 0, a1, a2, va);
}
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
