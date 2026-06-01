/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0590
// Address: 0x00000000004A0590

//----- (00000000004A0590) ----------------------------------------------------
void __noreturn sub_4A0590(char *a1, ...)
{
  size_t v2; // x0
  _QWORD *v3; // x19
  char *v4; // x0
  char v5[16]; // [xsp+0h] [xbp+0h] BYREF
  gcc_va_list va; // [xsp+20h] [xbp+20h] BYREF
  gcc_va_list va1; // [xsp+40h] [xbp+40h] BYREF
  __int64 vars88; // [xsp+E8h] [xbp+E8h]
  __int64 vars90; // [xsp+F0h] [xbp+F0h]
  __int64 vars98; // [xsp+F8h] [xbp+F8h]
  __int64 varsA0; // [xsp+100h] [xbp+100h]
  __int64 varsA8; // [xsp+108h] [xbp+108h]
  __int64 varsB0; // [xsp+110h] [xbp+110h]

  va_start(va, a1);
  vars88 = va_arg(va, _QWORD);
  vars90 = va_arg(va, _QWORD);
  vars98 = va_arg(va, _QWORD);
  varsA0 = va_arg(va, _QWORD);
  varsA8 = va_arg(va, _QWORD);
  varsB0 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  va_start(va1, a1);
  v2 = strlen(a1);
  sub_4AF5D0(v5, v2 + 512, (unsigned __int8 *)a1, (__int64)va);
  v3 = sub_49DA58(16);
  v4 = gettext(v5);
  sub_4A4068(v3, v4);
  sub_49DCD8((__int64)v3, (__int64)&`typeinfo for'std::out_of_range, (__int64)std::out_of_range::~out_of_range);
}
// 51E870: using guessed type __int64 *`typeinfo for'std::out_of_range;
