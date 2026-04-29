void __fastcall dyld4::RuntimeState::allocateProcessArrays(dyld4::RuntimeState *this, unsigned __int64 a2)
{
  void *v4; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  *((_QWORD *)this + 86) = lsl::Allocator::malloc(*((lsl::Allocator **)this + 2), a2);
  *((_QWORD *)this + 87) = lsl::Allocator::malloc(*((lsl::Allocator **)this + 2), 8 * a2);
  __bzero(*((void **)this + 86), a2);
  v4 = *((void **)this + 87);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  __bzero(v4, 8 * a2);
}
