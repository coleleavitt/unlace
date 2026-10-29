/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486900
// Address: 0x0000000000486900

//----- (0000000000486900) ----------------------------------------------------
__int64 sub_486900(char *a1, ...)
{
  gcc_va_list va; // [xsp+10h] [xbp-110h] BYREF
  gcc_va_list va1; // [xsp+38h] [xbp-E8h] BYREF
  __int64 v4; // [xsp+E8h] [xbp-38h]
  __int64 v5; // [xsp+F0h] [xbp-30h]
  __int64 v6; // [xsp+F8h] [xbp-28h]
  __int64 v7; // [xsp+100h] [xbp-20h]
  __int64 v8; // [xsp+108h] [xbp-18h]
  __int64 v9; // [xsp+110h] [xbp-10h]

  va_start(va, a1);
  v4 = va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  va_start(va1, a1);
  return sub_49B710(a1, va);
}
