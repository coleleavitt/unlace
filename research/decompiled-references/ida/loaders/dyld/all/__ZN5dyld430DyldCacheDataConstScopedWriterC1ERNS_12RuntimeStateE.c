dyld4::DyldCacheDataConstScopedWriter *__fastcall dyld4::DyldCacheDataConstScopedWriter::DyldCacheDataConstScopedWriter(
        dyld4::DyldCacheDataConstScopedWriter *this,
        dyld4::RuntimeState *a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  dyld4::DyldCacheDataConstLazyScopedWriter::makeWriteable(this);
  return this;
}
