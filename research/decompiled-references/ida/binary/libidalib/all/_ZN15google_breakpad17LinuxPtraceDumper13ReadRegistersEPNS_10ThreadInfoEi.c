__int64 __fastcall google_breakpad::LinuxPtraceDumper::ReadRegisters(
        google_breakpad::LinuxPtraceDumper *this,
        google_breakpad::ThreadInfo *a2,
        int a3)
{
  void *v5; // [rsp+20h] [rbp-10h] BYREF
  void *v6; // [rsp+28h] [rbp-8h] BYREF

  google_breakpad::ThreadInfo::GetGeneralPurposeRegisters(a2, &v6, nullptr);
  if ( sub_1B26A0(12, a3, 0, (unsigned __int64)v6) == -1 )
    return 0;
  google_breakpad::ThreadInfo::GetFloatingPointRegisters(a2, &v5, nullptr);
  sub_1B26A0(14, a3, 0, (unsigned __int64)v5);
  return 1;
}

