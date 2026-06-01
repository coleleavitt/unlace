__int64 __fastcall dyld4::RuntimeState::exitTLV(dyld4::RuntimeState *this)
{
  __int64 result; // x0
  __int64 v3; // x20
  __int64 (__fastcall *v4)(dyld4::RuntimeState *, __int64); // x3
  __int64 _18; // [xsp+18h] [xbp+8h]

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 15) + 64LL))(
             *((_QWORD *)this + 15),
             *((_QWORD *)this + 100));
  if ( result )
  {
    v3 = result;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 15) + 72LL))(
      *((_QWORD *)this + 15),
      *((_QWORD *)this + 100),
      0);
    v4 = **(__int64 (__fastcall ***)(dyld4::RuntimeState *, __int64))this;
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v4(this, v3);
  }
  return result;
}
