// Alternative name is '_ZN15google_breakpad10ClientInfoC2EiPNS_21CrashGenerationServerE'
google_breakpad::ClientInfo *__fastcall google_breakpad::ClientInfo::ClientInfo(
        google_breakpad::ClientInfo *this,
        int a2,
        google_breakpad::CrashGenerationServer *a3)
{
  *(_QWORD *)this = a3;
  *((_DWORD *)this + 2) = a2;
  return this;
}

