unsigned __int64 __fastcall dyld4::RuntimeState::releaseLockInForkParent(dyld4::RuntimeState *this)
{
  unsigned __int64 result; // x0
  __int64 (*v3)(void); // x2
  __int64 _18; // [xsp+18h] [xbp+8h]

  result = *((_QWORD *)this + 15);
  if ( result )
  {
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)result + 112LL))(result, *((_QWORD *)this + 13));
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 112LL))(
      *((_QWORD *)this + 15),
      *((_QWORD *)this + 13) + 8LL);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 112LL))(
      *((_QWORD *)this + 15),
      *((_QWORD *)this + 13) + 16LL);
    result = (***((__int64 (****)(void))this + 15))();
    if ( result >= 6 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 192LL))(
        *((_QWORD *)this + 15),
        *((_QWORD *)this + 13) + 32LL);
      v3 = *(__int64 (**)(void))(**((_QWORD **)this + 15) + 192LL);
      if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return v3();
    }
  }
  return result;
}
