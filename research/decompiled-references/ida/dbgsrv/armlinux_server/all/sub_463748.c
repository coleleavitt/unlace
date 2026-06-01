/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463748
// Address: 0x0000000000463748

//----- (0000000000463748) ----------------------------------------------------
__int64 sub_463748(char *a1, ...)
{
  gcc_va_list va; // [xsp+10h] [xbp-110h] BYREF
  gcc_va_list va1; // [xsp+38h] [xbp-E8h] BYREF
  __int64 v4; // [xsp+58h] [xbp-C8h]
  __int64 v5; // [xsp+E8h] [xbp-38h]
  __int64 v6; // [xsp+F0h] [xbp-30h]
  __int64 v7; // [xsp+F8h] [xbp-28h]
  __int64 v8; // [xsp+100h] [xbp-20h]
  __int64 v9; // [xsp+108h] [xbp-18h]
  __int64 v10; // [xsp+110h] [xbp-10h]

  va_start(va, a1);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  va_start(va1, a1);
  sub_49B6D8(a1, va);
  sub_4633C0(&byte_4C77D8);
  return v4 ^ _stack_chk_guard;
}
// 4C77D8: using guessed type char byte_4C77D8;
