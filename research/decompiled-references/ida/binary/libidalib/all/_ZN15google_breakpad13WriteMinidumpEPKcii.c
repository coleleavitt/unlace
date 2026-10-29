__int64 __fastcall google_breakpad::WriteMinidump(google_breakpad *this, const char *a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v6[44]; // [rsp+10h] [rbp-1F0h] BYREF
  _BYTE v7[16]; // [rsp+C0h] [rbp-140h] BYREF
  _BYTE v8[16]; // [rsp+D0h] [rbp-130h] BYREF
  _BYTE v9[280]; // [rsp+E0h] [rbp-120h] BYREF

  google_breakpad::LinuxPtraceDumper::LinuxPtraceDumper((google_breakpad::LinuxPtraceDumper *)v9, (int)a2);
  google_breakpad::LinuxDumper::set_crash_signal((google_breakpad::LinuxDumper *)v9, -1);
  google_breakpad::LinuxDumper::set_crash_thread((google_breakpad::LinuxDumper *)v9, a3);
  std::list<google_breakpad::MappingEntry>::list(v8);
  std::list<google_breakpad::AppMemory>::list(v7);
  sub_1B408E(v6, (__int64)this, 0xFFFFFFFF, 0, (__int64)v8, (__int64)v7, 0, 0, 0, (__int64)v9);
  if ( (unsigned __int8)sub_1B4242((__int64)v6) != 1 )
    v3 = 0;
  else
    v3 = sub_1B456E((__int64)v6);
  sub_1B438E((__int64)v6);
  std::list<google_breakpad::AppMemory>::~list(v7);
  std::list<google_breakpad::MappingEntry>::~list(v8);
  google_breakpad::LinuxPtraceDumper::~LinuxPtraceDumper((google_breakpad::LinuxPtraceDumper *)v9);
  return v3;
}

