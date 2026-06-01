/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CDF8
// Address: 0x000000000045CDF8

//----- (000000000045CDF8) ----------------------------------------------------
__int64 sub_45CDF8(__int64 a1, __int64 a2, ...)
{
  __int64 v4; // x1
  gcc_va_list va; // [xsp+10h] [xbp-100h] BYREF
  gcc_va_list va1; // [xsp+38h] [xbp-D8h] BYREF
  __int64 v7; // [xsp+58h] [xbp-B8h]
  __int64 v8; // [xsp+E0h] [xbp-30h]
  __int64 v9; // [xsp+E8h] [xbp-28h]
  __int64 v10; // [xsp+F0h] [xbp-20h]
  __int64 v11; // [xsp+F8h] [xbp-18h]
  __int64 v12; // [xsp+100h] [xbp-10h]
  __int64 v13; // [xsp+108h] [xbp-8h]

  va_start(va, a2);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v13 = va_arg(va, _QWORD);
  va_end(va);
  if ( *(_BYTE *)(a1 + 792) )
  {
    v4 = *(_QWORD *)(a1 + 480);
    va_start(va1, a2);
    va_start(va, a2);
    sub_45C308(0, v4, a2, va);
  }
  return v7 ^ _stack_chk_guard;
}
// 45C308: using guessed type __int64 __fastcall sub_45C308(_QWORD, _QWORD, _QWORD, _QWORD);
