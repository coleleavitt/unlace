// Alternative name is '_ZN15google_breakpad18MinidumpDescriptorD2Ev'
void __fastcall google_breakpad::MinidumpDescriptor::~MinidumpDescriptor(google_breakpad::MinidumpDescriptor *this)
{
  std::string::~string((google_breakpad::MinidumpDescriptor *)((char *)this + 16));
  std::string::~string((google_breakpad::MinidumpDescriptor *)((char *)this + 8));
}

