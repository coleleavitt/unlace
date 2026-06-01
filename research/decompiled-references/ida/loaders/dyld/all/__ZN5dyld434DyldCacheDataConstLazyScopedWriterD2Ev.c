void __fastcall dyld4::DyldCacheDataConstLazyScopedWriter::~DyldCacheDataConstLazyScopedWriter(
        dyld4::DyldCacheDataConstLazyScopedWriter *this)
{
  if ( *((_BYTE *)this + 8) )
    dyld4::ProcessConfig::DyldCache::makeDataConstWritable(
      (dyld4::ProcessConfig::DyldCache *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 200LL),
      (const dyld4::ProcessConfig::Logging *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 180LL),
      *(const dyld4::SyscallDelegate **)(*(_QWORD *)this + 8LL),
      0);
}
