__int64 __fastcall dyld4::ProcessConfig::Process::appleParam(dyld4::ProcessConfig::Process *this, char *a2)
{
  return _simple_getenv(*((_QWORD *)this + 14), a2);
}
