/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A608
// Address: 0x000000000040A608

//----- (000000000040A608) ----------------------------------------------------
void __noreturn sub_40A608(char *a1, ...)
{
  gcc_va_list va; // [xsp+10h] [xbp-110h] BYREF
  gcc_va_list va1; // [xsp+38h] [xbp-E8h] BYREF
  __int64 v3; // [xsp+E8h] [xbp-38h]
  __int64 v4; // [xsp+F0h] [xbp-30h]
  __int64 v5; // [xsp+F8h] [xbp-28h]
  __int64 v6; // [xsp+100h] [xbp-20h]
  __int64 v7; // [xsp+108h] [xbp-18h]
  __int64 v8; // [xsp+110h] [xbp-10h]

  va_start(va, a1);
  v3 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  va_start(va1, a1);
  sub_492310(a1, (__int64 *)va);
}
