__int64 (__fastcall ***__fastcall dyld4::RuntimeState::setDyldPatchedObjCClasses(dyld4::RuntimeState *this))(_QWORD)
{
  __int64 (__fastcall ***result)(_QWORD); // x0
  __int64 (*v3)(void); // x1
  __int64 _18; // [xsp+18h] [xbp+8h]

  result = *((__int64 (__fastcall ****)(_QWORD))this + 15);
  if ( result )
  {
    result = (__int64 (__fastcall ***)(_QWORD))(**result)(result);
    if ( (unsigned __int64)result >= 3 )
    {
      v3 = *(__int64 (**)(void))(**((_QWORD **)this + 15) + 160LL);
      if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (__int64 (__fastcall ***)(_QWORD))v3();
    }
  }
  return result;
}
