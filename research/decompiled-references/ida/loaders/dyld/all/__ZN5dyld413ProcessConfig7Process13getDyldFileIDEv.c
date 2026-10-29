dyld4::ProcessConfig::Process *__fastcall dyld4::ProcessConfig::Process::getDyldFileID(
        dyld4::ProcessConfig::Process *this)
{
  dyld4::ProcessConfig::Process *result; // x0

  result = (dyld4::ProcessConfig::Process *)_simple_getenv(*((_QWORD *)this + 14), "dyld_file");
  if ( result )
    return (dyld4::ProcessConfig::Process *)dyld4::ProcessConfig::Process::fileIDFromFileHexStrings(
                                              result,
                                              (const char *)result);
  return result;
}
