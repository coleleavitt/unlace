__int64 __fastcall google_breakpad::LinuxPtraceDumper__::vfunc_7(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v6; // [rsp+34h] [rbp-13Ch] BYREF
  __int64 v7; // [rsp+38h] [rbp-138h] BYREF
  char v8[264]; // [rsp+40h] [rbp-130h] BYREF
  __int64 v9; // [rsp+148h] [rbp-28h]
  int v10; // [rsp+154h] [rbp-1Ch]
  unsigned int v11; // [rsp+158h] [rbp-18h]
  unsigned int i; // [rsp+15Ch] [rbp-14h]

  if ( a2 >= sub_59BDEE((__int64)(a1 + 14)) )
    return 0;
  v11 = *(_DWORD *)sub_59F630(a1 + 14, a2);
  if ( !a3 )
    __assert_fail(
      "info != __null",
      "src/client/linux/minidump_writer/linux_ptrace_dumper.cc",
      0x11Bu,
      "virtual bool google_breakpad::LinuxPtraceDumper::GetThreadInfoByIndex(size_t, google_breakpad::ThreadInfo*)");
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, char *, _QWORD, const char *))(*a1 + 72LL))(a1, v8, v11, "status") != 1 )
    return 0;
  v10 = sub_59E6FF(v8, 0, 0);
  if ( v10 < 0 )
    return 0;
  v4 = sub_59BA78(0x20Cu, a1 + 9);
  sub_59BAEA(v4, v10);
  v9 = v4;
  *(_DWORD *)a3 = -1;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)a3;
  while ( (unsigned __int8)sub_59BB14(v9, &v7, &v6) )
  {
    if ( (unsigned int)sub_5ADB25("Tgid:\t", v7, 6) )
    {
      if ( !(unsigned int)sub_5ADB25("PPid:\t", v7, 6) )
        sub_5ADBA3(a3 + 4, v7 + 6);
    }
    else
    {
      sub_5ADBA3(a3, v7 + 6);
    }
    sub_59BCBA(v9, v6);
  }
  sub_59E64E(v10);
  if ( *(_DWORD *)(a3 + 4) == -1 || *(_DWORD *)a3 == -1 )
    return 0;
  if ( (unsigned __int8)sub_59ECB6((__int64)a1, a3, v11) != 1 && (unsigned __int8)sub_59ED52((__int64)a1, a3, v11) != 1 )
    return 0;
  for ( i = 0; i <= 7; ++i )
  {
    if ( sub_59E760(3, v11, 8 * (i + 106LL), 8 * (i + 92LL) + a3 + 8) == -1 )
      return 0;
  }
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a3 + 168);
  return 1;
}
