/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49B7E0
// Address: 0x000000000049B7E0

//----- (000000000049B7E0) ----------------------------------------------------
size_t sub_49B7E0(const char *a1, __int64 a2, char *a3, ...)
{
  const char *v5; // x20
  size_t result; // x0
  gcc_va_list va1; // [xsp+30h] [xbp-100h] BYREF
  gcc_va_list va; // [xsp+58h] [xbp-D8h] BYREF
  __int64 v9; // [xsp+108h] [xbp-28h]
  __int64 v10; // [xsp+110h] [xbp-20h]
  __int64 v11; // [xsp+118h] [xbp-18h]
  __int64 v12; // [xsp+120h] [xbp-10h]

  va_start(va, a3);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  v5 = &a1[strlen(a1)];
  result = 0;
  if ( a2 - (__int64)v5 > 0 )
  {
    va_copy(va1, va);
    return sub_49B318(v5, a2 - (_QWORD)v5, a3, (__int64 *)va1);
  }
  return result;
}
