/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493A08
// Address: 0x0000000000493A08

//----- (0000000000493A08) ----------------------------------------------------
__int64 sub_493A08(_QWORD *a1, char *a2, ...)
{
  gcc_va_list va; // [xsp+10h] [xbp-100h] BYREF
  gcc_va_list va1; // [xsp+38h] [xbp-D8h] BYREF
  __int64 v5; // [xsp+58h] [xbp-B8h]
  __int64 v6; // [xsp+E0h] [xbp-30h]
  __int64 v7; // [xsp+E8h] [xbp-28h]
  __int64 v8; // [xsp+F0h] [xbp-20h]
  __int64 v9; // [xsp+F8h] [xbp-18h]
  __int64 v10; // [xsp+100h] [xbp-10h]
  __int64 v11; // [xsp+108h] [xbp-8h]

  va_start(va, a2);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  va_start(va1, a2);
  sub_49C7C8(a1, a2, (__int64 *)va);
  return v5 ^ _stack_chk_guard;
}
