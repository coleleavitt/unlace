google_breakpad::MinidumpDescriptor *__fastcall google_breakpad::MinidumpDescriptor::UpdatePath(
        google_breakpad::MinidumpDescriptor *this)
{
  __int64 v2; // rdx
  _BYTE v4[48]; // [rsp+10h] [rbp-70h] BYREF
  _BYTE v5[24]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v6[8]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v7[8]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v8[24]; // [rsp+68h] [rbp-18h] BYREF

  if ( *(_DWORD *)this != 1
    || (unsigned __int8)std::string::empty((google_breakpad::MinidumpDescriptor *)((char *)this + 8)) == 1 )
  {
    __assert_fail(
      "mode_ == kWriteMinidumpToFile && !directory_.empty()",
      "src/client/linux/handler/minidump_descriptor.cc",
      0x57u,
      "void google_breakpad::MinidumpDescriptor::UpdatePath()");
  }
  if ( (unsigned __int8)CreateGUID(v5) != 1 || (unsigned __int8)GUIDToString(v5, v4, 37) != 1 )
    __assert_fail(
      "false",
      "src/client/linux/handler/minidump_descriptor.cc",
      0x5Cu,
      "void google_breakpad::MinidumpDescriptor::UpdatePath()");
  std::string::clear((google_breakpad::MinidumpDescriptor *)((char *)this + 16));
  std::operator+<char>(v8, (char *)this + 8, "/");
  std::operator+<char>(v7, v8, v4);
  std::operator+<char>(v6, v7, ".dmp");
  std::string::operator=((char *)this + 16, v6);
  std::string::~string((std::string *)v6);
  std::string::~string((std::string *)v7);
  std::string::~string((std::string *)v8);
  v2 = std::string::c_str((google_breakpad::MinidumpDescriptor *)((char *)this + 16));
  *((_QWORD *)this + 3) = v2;
  return this;
}

