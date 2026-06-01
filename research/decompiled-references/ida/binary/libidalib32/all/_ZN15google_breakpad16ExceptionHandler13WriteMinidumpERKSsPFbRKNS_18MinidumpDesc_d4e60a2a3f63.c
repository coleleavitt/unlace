__int64 __fastcall google_breakpad::ExceptionHandler::WriteMinidump(
        google_breakpad::ExceptionHandler *this,
        const std::string *a2,
        bool (*a3)(const google_breakpad::MinidumpDescriptor *, void *, bool),
        void *a4)
{
  unsigned int v4; // ebx
  _BYTE v7[176]; // [rsp+20h] [rbp-120h] BYREF
  _BYTE v8[104]; // [rsp+D0h] [rbp-70h] BYREF

  google_breakpad::MinidumpDescriptor::MinidumpDescriptor((google_breakpad::MinidumpDescriptor *)v8, this);
  google_breakpad::ExceptionHandler::ExceptionHandler(
    (google_breakpad::ExceptionHandler *)v7,
    (const google_breakpad::MinidumpDescriptor *)v8,
    nullptr,
    (bool (*)(const google_breakpad::MinidumpDescriptor *, void *, bool))a2,
    a3,
    0,
    (google_breakpad::CrashGenerationClient *)0xFFFFFFFFFFFFFFFFLL);
  v4 = google_breakpad::ExceptionHandler::WriteMinidump((google_breakpad::ExceptionHandler *)v7);
  google_breakpad::ExceptionHandler::~ExceptionHandler((google_breakpad::ExceptionHandler *)v7);
  google_breakpad::MinidumpDescriptor::~MinidumpDescriptor((google_breakpad::MinidumpDescriptor *)v8);
  return v4;
}

