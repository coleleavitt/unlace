void *__fastcall dyld4::MissingPaths::addPath(dyld4::MissingPaths *this, const char *__s)
{
  char *v4; // x21
  __int64 v5; // x22
  void *v6; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v4 = (char *)(_platform_strlen(__s) + 1);
  v5 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  dyld4::BumpAllocator::zeroFill(this, v4);
  v6 = (void *)(*(_QWORD *)this + v5);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _platform_memmove(v6, __s, (size_t)v4);
}
