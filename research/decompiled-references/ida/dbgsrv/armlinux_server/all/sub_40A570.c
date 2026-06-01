/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A570
// Address: 0x000000000040A570

//----- (000000000040A570) ----------------------------------------------------
__int64 sub_40A570(__int64 a1, unsigned __int64 a2, int a3, ...)
{
  gcc_va_list va; // [xsp+10h] [xbp-100h] BYREF
  gcc_va_list va1; // [xsp+38h] [xbp-D8h] BYREF
  __int64 v6; // [xsp+58h] [xbp-B8h]
  __int64 v7; // [xsp+E8h] [xbp-28h]
  __int64 v8; // [xsp+F0h] [xbp-20h]
  __int64 v9; // [xsp+F8h] [xbp-18h]
  __int64 v10; // [xsp+100h] [xbp-10h]

  va_start(va, a3);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  va_start(va1, a3);
  sub_47F678(a1, a2, a3, (__int64 *)va);
  return v6 ^ _stack_chk_guard;
}
