// Alternative name is '_ZN15google_breakpad18MinidumpDescriptorC1ERKS0_'
__int64 __fastcall google_breakpad::MinidumpDescriptor::MinidumpDescriptor(
        google_breakpad::MinidumpDescriptor *this,
        const google_breakpad::MinidumpDescriptor *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 result; // rax

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  std::string::string(
    (google_breakpad::MinidumpDescriptor *)((char *)this + 8),
    (const google_breakpad::MinidumpDescriptor *)((char *)a2 + 8));
  std::string::string((google_breakpad::MinidumpDescriptor *)((char *)this + 16));
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  *((_BYTE *)this + 48) = *((_BYTE *)a2 + 48);
  *((_BYTE *)this + 49) = *((_BYTE *)a2 + 49);
  v2 = *((_QWORD *)a2 + 8);
  *((_QWORD *)this + 7) = *((_QWORD *)a2 + 7);
  *((_QWORD *)this + 8) = v2;
  v3 = *((_QWORD *)a2 + 10);
  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 9);
  *((_QWORD *)this + 10) = v3;
  result = std::string::empty((const google_breakpad::MinidumpDescriptor *)((char *)a2 + 16));
  if ( !(_BYTE)result )
    __assert_fail(
      "descriptor.path_.empty()",
      "src/client/linux/handler/minidump_descriptor.cc",
      0x3Cu,
      "google_breakpad::MinidumpDescriptor::MinidumpDescriptor(const google_breakpad::MinidumpDescriptor&)");
  return result;
}

