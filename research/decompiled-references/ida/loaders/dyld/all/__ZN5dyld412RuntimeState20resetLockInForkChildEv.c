__int64 (__fastcall ***__fastcall dyld4::RuntimeState::resetLockInForkChild(dyld4::RuntimeState *this))(_QWORD)
{
  __int64 (__fastcall ***result)(_QWORD); // x0

  result = *((__int64 (__fastcall ****)(_QWORD))this + 15);
  if ( result )
  {
    result = (__int64 (__fastcall ***)(_QWORD))(**result)(result);
    if ( (unsigned __int64)result >= 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 15) + 152LL))(
        *((_QWORD *)this + 15),
        *((_QWORD *)this + 13));
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 152LL))(
        *((_QWORD *)this + 15),
        *((_QWORD *)this + 13) + 8LL);
      result = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15)
                                                                                            + 152LL))(
                                                   *((_QWORD *)this + 15),
                                                   *((_QWORD *)this + 13) + 16LL);
      *(_DWORD *)(*((_QWORD *)this + 13) + 32LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 13) + 36LL) = 0;
    }
  }
  return result;
}
