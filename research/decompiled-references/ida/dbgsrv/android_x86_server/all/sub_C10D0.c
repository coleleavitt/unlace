/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C10D0
// Address: 0x000C10D0

//----- (000C10D0) --------------------------------------------------------
int sub_C10D0(char *format, ...)
{
  char *v2[7]; // [esp+0h] [ebp-1Ch] BYREF
  va_list __varargs; // [esp+28h] [ebp+Ch] BYREF

  va_start(__varargs, format);
  va_copy(&v2[2], __varargs);
  vfprintf((FILE *)((char *)&_sF + 168), format, __varargs);
  fputc(10, (FILE *)((char *)&_sF + 168));
  va_copy(&v2[1], __varargs);
  vasprintf(v2, format, __varargs);
  __assert2(
    "/usr/local/google/buildbot/src/android/ndk-release-r19/external/libcxx/../../external/libcxxabi/src/abort_message.cpp",
    73,
    "abort_message",
    v2[0]);
  return std::set_unexpected((void (*)())format);
}
// 18600: using guessed type int __cdecl __assert2(_DWORD, _DWORD, _DWORD, _DWORD);
// 13E950: using guessed type FILE _sF;
