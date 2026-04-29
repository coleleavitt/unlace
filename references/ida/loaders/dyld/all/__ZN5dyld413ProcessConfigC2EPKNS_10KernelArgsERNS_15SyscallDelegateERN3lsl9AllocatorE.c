dyld4::ProcessConfig *__fastcall dyld4::ProcessConfig::ProcessConfig(
        dyld4::ProcessConfig *this,
        const dyld4::KernelArgs *a2,
        dyld4::SyscallDelegate *a3,
        lsl::Allocator *a4)
{
  dyld4::ProcessConfig::Process *v7; // x22
  const dyld4::ProcessConfig::Logging *v8; // x3

  v7 = (dyld4::ProcessConfig *)((char *)this + 8);
  dyld4::ProcessConfig::Process::Process((dyld4::ProcessConfig *)((char *)this + 8), a2, a3, a4);
  dyld4::ProcessConfig::Security::Security((dyld4::ProcessConfig *)((char *)this + 168), v7, a3);
  dyld4::ProcessConfig::Logging::Logging(
    (dyld4::ProcessConfig *)((char *)this + 180),
    v7,
    (dyld4::ProcessConfig *)((char *)this + 168),
    a3);
  dyld4::ProcessConfig::DyldCache::DyldCache(
    (dyld4::ProcessConfig *)((char *)this + 200),
    v7,
    (dyld4::ProcessConfig *)((char *)this + 168),
    (dyld4::ProcessConfig *)((char *)this + 180),
    a3,
    a4);
  dyld4::ProcessConfig::PathOverrides::PathOverrides(
    (dyld4::ProcessConfig *)((char *)this + 344),
    v7,
    (dyld4::ProcessConfig *)((char *)this + 168),
    v8,
    (dyld4::ProcessConfig *)((char *)this + 200),
    a3,
    a4);
  return this;
}
