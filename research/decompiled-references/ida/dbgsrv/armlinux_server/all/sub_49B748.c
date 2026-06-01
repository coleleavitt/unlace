/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49B748
// Address: 0x000000000049B748

//----- (000000000049B748) ----------------------------------------------------
size_t sub_49B748(const char *a1, unsigned __int64 a2, char *a3, ...)
{
  gcc_va_list va; // [xsp+10h] [xbp-100h] BYREF
  gcc_va_list va1; // [xsp+38h] [xbp-D8h] BYREF
  __int64 v6; // [xsp+E8h] [xbp-28h]
  __int64 v7; // [xsp+F0h] [xbp-20h]
  __int64 v8; // [xsp+F8h] [xbp-18h]
  __int64 v9; // [xsp+100h] [xbp-10h]

  va_start(va, a3);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  va_start(va1, a3);
  return sub_49B318(a1, a2, a3, (__int64 *)va);
}
