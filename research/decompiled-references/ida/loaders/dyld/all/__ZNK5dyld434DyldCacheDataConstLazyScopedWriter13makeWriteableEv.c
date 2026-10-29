_BYTE *__fastcall dyld4::DyldCacheDataConstLazyScopedWriter::makeWriteable(_BYTE *this)
{
  _BYTE *v1; // x2

  if ( !*(this + 8) )
  {
    v1 = *(_BYTE **)(*(_QWORD *)this + 8LL);
    if ( v1[158] )
    {
      if ( *((_QWORD *)v1 + 25) )
      {
        *(this + 8) = 1;
        return (_BYTE *)dyld4::ProcessConfig::DyldCache::makeDataConstWritable(
                          (dyld4::ProcessConfig::DyldCache *)(v1 + 200),
                          (const dyld4::ProcessConfig::Logging *)(v1 + 180),
                          (const dyld4::SyscallDelegate *)v1,
                          1);
      }
    }
  }
  return this;
}
