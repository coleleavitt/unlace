_BOOL8 __fastcall google_breakpad::ExceptionHandler::WriteMinidumpForChild(
        google_breakpad::ExceptionHandler *this,
        int a2,
        const std::string *a3,
        const std::string *a4,
        bool (*a5)(const google_breakpad::MinidumpDescriptor *, void *, bool),
        void *a6)
{
  google_breakpad *v6; // rax
  _BOOL4 v7; // ebx
  char *v11[14]; // [rsp+1Ch] [rbp-74h] BYREF

  google_breakpad::MinidumpDescriptor::MinidumpDescriptor((google_breakpad::MinidumpDescriptor *)((char *)v11 + 4), a3);
  google_breakpad::MinidumpDescriptor::UpdatePath((google_breakpad::MinidumpDescriptor *)((char *)v11 + 4));
  v6 = (google_breakpad *)google_breakpad::MinidumpDescriptor::path((google_breakpad::MinidumpDescriptor *)((char *)v11 + 4));
  v7 = (unsigned __int8)google_breakpad::WriteMinidump(v6, (const char *)(unsigned int)this, a2, (int)v6) == 1
    && (!a4 || ((unsigned __int8 (__fastcall *)(char *, _QWORD, __int64))a4)((char *)v11 + 4, a5, 1));
  google_breakpad::MinidumpDescriptor::~MinidumpDescriptor((google_breakpad::MinidumpDescriptor *)((char *)v11 + 4));
  return v7;
}

