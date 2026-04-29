__int64 __fastcall dyld4::DyldCacheDataConstLazyScopedWriter::DyldCacheDataConstLazyScopedWriter(
        __int64 this,
        dyld4::RuntimeState *a2)
{
  *(_QWORD *)this = a2;
  *(_BYTE *)(this + 8) = 0;
  return this;
}
