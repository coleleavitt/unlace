__int64 __fastcall google_breakpad::WriteMicrodump(
        int a1,
        siginfo_t *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        char a7,
        _QWORD *a8)
{
  unsigned int v8; // ebx
  _BYTE v14[128]; // [rsp+30h] [rbp-1A0h] BYREF
  _BYTE v15[264]; // [rsp+B0h] [rbp-120h] BYREF
  siginfo_t *v16; // [rsp+1B8h] [rbp-18h]

  google_breakpad::LinuxPtraceDumper::LinuxPtraceDumper((google_breakpad::LinuxPtraceDumper *)v15, a1);
  v16 = nullptr;
  if ( a2 )
  {
    if ( a3 != 1584 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    v16 = a2;
    google_breakpad::LinuxDumper::SetCrashInfoFromSigInfo((google_breakpad::LinuxDumper *)v15, a2);
    google_breakpad::LinuxDumper::set_crash_thread((google_breakpad::LinuxDumper *)v15, v16[1].si_signo);
  }
  sub_1AA04E((__int64)v14, (__int64)v16, a4, a5, a6, a7, a8, (__int64)v15);
  if ( !sub_1AA1BA((__int64)v14) )
  {
    v8 = 0;
  }
  else
  {
    sub_1AA266((__int64)v14);
    v8 = 1;
  }
  sub_1AA18C((__int64)v14);
LABEL_9:
  google_breakpad::LinuxPtraceDumper::~LinuxPtraceDumper((google_breakpad::LinuxPtraceDumper *)v15);
  return v8;
}

