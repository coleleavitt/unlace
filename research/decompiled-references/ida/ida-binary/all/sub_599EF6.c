__int64 __fastcall sub_599EF6(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)a1 = &unk_89F048;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  sub_59BE16(a1 + 40);
  *(_DWORD *)(a1 + 64) = a2;
  sub_593356((_QWORD *)(a1 + 72));
  sub_59BE76(a1 + 112, a1 + 72, 8);
  sub_59BF2C(a1 + 160, a1 + 72, 16);
  sub_59BFE2(a1 + 208, a1 + 72, 34);
  if ( !*(_QWORD *)(a1 + 16) || (unsigned __int64)sub_5ADA92(*(_QWORD *)(a1 + 16)) > 0xFFF )
    __assert_fail(
      "root_prefix_ && my_strlen(root_prefix_) < 4096",
      "src/client/linux/minidump_writer/linux_dumper.cc",
      0x128u,
      "google_breakpad::LinuxDumper::LinuxDumper(pid_t, const char*)");
  return sub_59C098(a1 + 208, 34);
}
