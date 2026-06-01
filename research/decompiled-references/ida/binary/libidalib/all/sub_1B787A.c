__int64 __fastcall sub_1B787A(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        siginfo_t *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        char a11)
{
  unsigned int v11; // ebx
  unsigned int v16[44]; // [rsp+30h] [rbp-1D0h] BYREF
  _BYTE v17[264]; // [rsp+E0h] [rbp-120h] BYREF
  siginfo_t *v18; // [rsp+1E8h] [rbp-18h]

  google_breakpad::LinuxPtraceDumper::LinuxPtraceDumper((google_breakpad::LinuxPtraceDumper *)v17, a4);
  v18 = nullptr;
  if ( a5 )
  {
    if ( a6 != 1584 )
    {
      v11 = 0;
      goto LABEL_9;
    }
    v18 = a5;
    google_breakpad::LinuxDumper::SetCrashInfoFromSigInfo((google_breakpad::LinuxDumper *)v17, a5);
    google_breakpad::LinuxDumper::set_crash_thread((google_breakpad::LinuxDumper *)v17, v18[1].si_signo);
  }
  sub_1B408E(v16, a1, a2, (__int64)v18, a7, a8, a9, a10, a11, (__int64)v17);
  sub_1B6F72((__int64)v16, a3);
  if ( (unsigned __int8)sub_1B4242((__int64)v16) != 1 )
    v11 = 0;
  else
    v11 = sub_1B456E((__int64)v16);
  sub_1B438E((__int64)v16);
LABEL_9:
  google_breakpad::LinuxPtraceDumper::~LinuxPtraceDumper((google_breakpad::LinuxPtraceDumper *)v17);
  return v11;
}

