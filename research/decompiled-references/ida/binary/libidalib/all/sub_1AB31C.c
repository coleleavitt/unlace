_BYTE *__fastcall sub_1AB31C(__int64 a1)
{
  unsigned int v1; // eax
  __int64 CrashSignalString; // rax
  __int64 v3; // rax

  sub_1AAF74(a1, (__int64)"R ");
  v1 = google_breakpad::LinuxDumper::crash_signal(*(google_breakpad::LinuxDumper **)(a1 + 16));
  sub_1AC092(a1, v1);
  sub_1AAF74(a1, (__int64)" ");
  CrashSignalString = google_breakpad::LinuxDumper::GetCrashSignalString(*(google_breakpad::LinuxDumper **)(a1 + 16));
  sub_1AAF74(a1, CrashSignalString);
  sub_1AAF74(a1, (__int64)" ");
  v3 = google_breakpad::LinuxDumper::crash_address(*(google_breakpad::LinuxDumper **)(a1 + 16));
  sub_1AC0F2(a1, v3);
  return sub_1AB020(a1);
}

