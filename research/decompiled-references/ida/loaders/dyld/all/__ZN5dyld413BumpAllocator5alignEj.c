dyld4::BumpAllocator *__fastcall dyld4::BumpAllocator::align(dyld4::BumpAllocator *this, unsigned int a2)
{
  unsigned __int64 v2; // x9

  v2 = (*((_QWORD *)this + 2) - *(_QWORD *)this) % (unsigned __int64)a2;
  if ( v2 )
    return dyld4::BumpAllocator::zeroFill(this, (char *)(a2 - v2));
  return this;
}
