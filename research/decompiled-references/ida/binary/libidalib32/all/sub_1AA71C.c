_BYTE *__fastcall sub_1AA71C(__int64 a1)
{
  unsigned int v1; // eax
  __int64 CrashSignalString; // rax
  __int64 v3; // rax

  sub_1AA374(a1, (__int64)"R ");
  v1 = google_breakpad::LinuxDumper::crash_signal(*(google_breakpad::LinuxDumper **)(a1 + 16));
  sub_1AB492(a1, v1);
  sub_1AA374(a1, (__int64)" ");
  CrashSignalString = google_breakpad::LinuxDumper::GetCrashSignalString(*(google_breakpad::LinuxDumper **)(a1 + 16));
  sub_1AA374(a1, CrashSignalString);
  sub_1AA374(a1, (__int64)" ");
  v3 = google_breakpad::LinuxDumper::crash_address(*(google_breakpad::LinuxDumper **)(a1 + 16));
  sub_1AB4F2(a1, v3);
  return sub_1AA420(a1);
}

