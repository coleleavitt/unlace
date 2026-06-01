/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479E10
// Address: 0x0000000000479E10

//----- (0000000000479E10) ----------------------------------------------------
__int64 sub_479E10(int a1, ...)
{
  gcc_va_list s1; // [xsp+10h] [xbp-110h] BYREF
  gcc_va_list va1; // [xsp+38h] [xbp-E8h] BYREF
  __int64 v4; // [xsp+E8h] [xbp-38h]
  __int64 v5; // [xsp+F0h] [xbp-30h]
  __int64 v6; // [xsp+F8h] [xbp-28h]
  __int64 v7; // [xsp+100h] [xbp-20h]
  __int64 v8; // [xsp+108h] [xbp-18h]
  __int64 v9; // [xsp+110h] [xbp-10h]

  va_start(s1, a1);
  v4 = va_arg(s1, _QWORD);
  v5 = va_arg(s1, _QWORD);
  v6 = va_arg(s1, _QWORD);
  v7 = va_arg(s1, _QWORD);
  v8 = va_arg(s1, _QWORD);
  v9 = va_arg(s1, _QWORD);
  va_end(s1);
  va_start(s1, a1);
  va_start(va1, a1);
  return callui(23, a1, (char *)s1);
}
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
