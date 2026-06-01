/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9A54
// Address: 0x00000000000D9A54

//----- (00000000000D9A54) ----------------------------------------------------
void __noreturn sub_D9A54(char *format, ...)
{
  gcc_va_list va2; // [xsp+C0h] [xbp-D0h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-A8h] BYREF
  char *ptr; // [xsp+108h] [xbp-88h] BYREF
  gcc_va_list arg; // [xsp+110h] [xbp-80h] BYREF
  gcc_va_list va1; // [xsp+130h] [xbp-60h] BYREF

  va_start(va, format);
  va_start(va1, format);
  va_copy(arg, va1);
  vfprintf((FILE *)((char *)&_sF + 304), format, arg);
  fputc(10, (FILE *)((char *)&_sF + 304));
  va_copy(va2, va);
  vasprintf(&ptr, format, va2);
  android_set_abort_message(ptr);
  openlog("libc++abi", 0, 0);
  syslog(2, "%s", ptr);
  closelog();
  abort();
}
// 37090: using guessed type __int64 __fastcall android_set_abort_message(_QWORD);
// 169790: using guessed type FILE _sF;
