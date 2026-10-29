void __noreturn sub_398250(char a1, __int64 a2, ...)
{
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v3; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-C0h]
  __int64 v6; // [rsp+50h] [rbp-A8h]
  __int64 v7; // [rsp+58h] [rbp-A0h]
  __int64 v8; // [rsp+60h] [rbp-98h]
  __int64 v9; // [rsp+68h] [rbp-90h]

  va_start(va, a2);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  if ( !a1 )
  {
    ptr = nullptr;
    v3 = 0;
    sub_3572D0((char **)&ptr);
    sub_365330();
  }
  verror(a2, va, v6, v7, v8, v9, ptr, v3, *((_QWORD *)&v3 + 1));
}

