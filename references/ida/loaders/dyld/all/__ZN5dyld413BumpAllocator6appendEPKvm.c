void *__fastcall dyld4::BumpAllocator::append(dyld4::BumpAllocator *this, const void *a2, char *a3)
{
  __int64 v6; // x22
  void *v7; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v6 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  dyld4::BumpAllocator::zeroFill(this, a3);
  v7 = (void *)(*(_QWORD *)this + v6);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _platform_memmove(v7, a2, (size_t)a3);
}
