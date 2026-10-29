/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A690
// Address: 0x000000000040A690

//----- (000000000040A690) ----------------------------------------------------
__int64 sub_40A690(int a1, ...)
{
  gcc_va_list s1; // [xsp+10h] [xbp-130h] BYREF
  gcc_va_list va1; // [xsp+38h] [xbp-108h] BYREF
  gcc_va_list va2; // [xsp+58h] [xbp-E8h] BYREF
  __int64 v5; // [xsp+108h] [xbp-38h]
  __int64 v6; // [xsp+110h] [xbp-30h]
  __int64 v7; // [xsp+118h] [xbp-28h]
  __int64 v8; // [xsp+120h] [xbp-20h]
  __int64 v9; // [xsp+128h] [xbp-18h]
  __int64 v10; // [xsp+130h] [xbp-10h]

  va_start(s1, a1);
  v5 = va_arg(s1, _QWORD);
  v6 = va_arg(s1, _QWORD);
  v7 = va_arg(s1, _QWORD);
  v8 = va_arg(s1, _QWORD);
  v9 = va_arg(s1, _QWORD);
  v10 = va_arg(s1, _QWORD);
  va_end(s1);
  va_start(va2, a1);
  va_start(s1, a1);
  va_start(va1, a1);
  return callui(23, a1, (char *)s1);
}
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
