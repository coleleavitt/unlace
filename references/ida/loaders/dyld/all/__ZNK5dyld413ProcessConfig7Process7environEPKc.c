__int64 __fastcall dyld4::ProcessConfig::Process::environ(dyld4::ProcessConfig::Process *this, char *a2)
{
  return _simple_getenv(*((_QWORD *)this + 13), a2);
}
