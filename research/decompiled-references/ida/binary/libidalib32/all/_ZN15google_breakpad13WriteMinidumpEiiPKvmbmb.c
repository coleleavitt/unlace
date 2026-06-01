__int64 __fastcall google_breakpad::WriteMinidump(
        google_breakpad *this,
        int a2,
        siginfo_t *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        unsigned __int64 a7)
{
  unsigned int v8; // ebx
  _BYTE v13[16]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-20h] BYREF

  std::list<google_breakpad::AppMemory>::list(v13);
  std::list<google_breakpad::MappingEntry>::list(v14);
  v8 = sub_1B6C7A(0, (unsigned int)this, -1, a2, a3, a4, (__int64)v14, (__int64)v13, a5, a6, a7);
  std::list<google_breakpad::MappingEntry>::~list(v14);
  std::list<google_breakpad::AppMemory>::~list(v13);
  return v8;
}

