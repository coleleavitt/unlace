/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D27E0
// Address: 0x00000000000D27E0

//----- (00000000000D27E0) ----------------------------------------------------
void __noreturn sub_D27E0(char *f, ...)
{
  char *ptr; // [rsp+8h] [rbp-120h] BYREF
  gcc_va_list va; // [rsp+10h] [rbp-118h] BYREF
  gcc_va_list arg; // [rsp+30h] [rbp-F8h] BYREF

  va_start(va, f);
  va_start(arg, f);
  vfprintf((FILE *)((char *)&_sF + 304), f, arg);
  fputc(10, (FILE *)((char *)&_sF + 304));
  vasprintf(&ptr, f, va);
  android_set_abort_message(ptr);
  openlog("libc++abi", 0, 0);
  syslog(2, "%s", ptr);
  closelog();
  abort();
}
// 34600: using guessed type __int64 __fastcall android_set_abort_message(_QWORD);
// 1597E0: using guessed type FILE _sF;
