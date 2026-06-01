__int64 __fastcall google_breakpad::LinuxPtraceDumper::ReadRegisterSet(
        google_breakpad::LinuxPtraceDumper *this,
        google_breakpad::ThreadInfo *a2,
        int a3)
{
  void *v5; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-8h] BYREF

  google_breakpad::ThreadInfo::GetGeneralPurposeRegisters(a2, &v5, &v6);
  if ( sub_1B1AA0(16900, a3, 1u, (unsigned __int64)&v5) == -1 )
    return 0;
  google_breakpad::ThreadInfo::GetFloatingPointRegisters(a2, &v5, &v6);
  sub_1B1AA0(16900, a3, 2u, (unsigned __int64)&v5);
  return 1;
}

