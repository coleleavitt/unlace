/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B410
// Address: 0x000000000040B410

//----- (000000000040B410) ----------------------------------------------------
__int64 sub_40B410(__int64 a1, int a2, ...)
{
  gcc_va_list s1; // [xsp+10h] [xbp-120h] BYREF
  gcc_va_list va1; // [xsp+38h] [xbp-F8h] BYREF
  gcc_va_list va2; // [xsp+58h] [xbp-D8h] BYREF
  __int64 v6; // [xsp+78h] [xbp-B8h]
  __int64 v7; // [xsp+100h] [xbp-30h]
  __int64 v8; // [xsp+108h] [xbp-28h]
  __int64 v9; // [xsp+110h] [xbp-20h]
  __int64 v10; // [xsp+118h] [xbp-18h]
  __int64 v11; // [xsp+120h] [xbp-10h]
  __int64 v12; // [xsp+128h] [xbp-8h]

  va_start(s1, a2);
  v7 = va_arg(s1, _QWORD);
  v8 = va_arg(s1, _QWORD);
  v9 = va_arg(s1, _QWORD);
  v10 = va_arg(s1, _QWORD);
  v11 = va_arg(s1, _QWORD);
  v12 = va_arg(s1, _QWORD);
  va_end(s1);
  if ( (debug & 0x10000) != 0 )
  {
    va_start(va1, a2);
    va_start(s1, a2);
    va_start(va2, a2);
    callui(23, a2, (char *)s1);
  }
  return v6 ^ _stack_chk_guard;
}
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
// 524514: using guessed type int debug;
