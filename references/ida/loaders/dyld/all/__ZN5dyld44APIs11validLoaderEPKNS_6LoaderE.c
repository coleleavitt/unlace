bool __fastcall dyld4::APIs::validLoader(dyld4::APIs *this, const dyld4::Loader *a2)
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( !a2
    || ((***((__int64 (__fastcall ****)(_QWORD, const dyld4::Loader *, __int64))this + 2))(*((_QWORD *)this + 2), a2, 8)
      & 1) == 0
    && !dyld4::RuntimeState::inPrebuiltLoader(this, a2, 8u) )
  {
    return 0;
  }
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return dyld4::Loader::hasMagic(a2);
}
