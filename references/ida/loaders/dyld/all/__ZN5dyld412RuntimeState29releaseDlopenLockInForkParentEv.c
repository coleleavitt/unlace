__int64 __fastcall dyld4::RuntimeState::releaseDlopenLockInForkParent(dyld4::RuntimeState *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 15);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 112LL))(
             result,
             *((_QWORD *)this + 13) + 24LL);
  return result;
}
