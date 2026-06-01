void __noreturn sub_79FAA0(__int64 a1, ...)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  const char *v5; // rsi
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v7; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-C0h]
  __int64 v10; // [rsp+48h] [rbp-B0h]
  __int64 v11; // [rsp+50h] [rbp-A8h]
  __int64 v12; // [rsp+58h] [rbp-A0h]
  __int64 v13; // [rsp+60h] [rbp-98h]
  __int64 v14; // [rsp+68h] [rbp-90h]

  va_start(va, a1);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v13 = va_arg(va, _QWORD);
  v14 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v9 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = 0;
  sub_3572D0((char **)&ptr);
  v5 = haystack;
  if ( (_QWORD)v7 )
    LODWORD(v5) = (_DWORD)ptr;
  sub_7A4810((unsigned int)"%s\n", (_DWORD)v5, v1, v2, v3, v4, (char)ptr);
  sub_375400();
}

