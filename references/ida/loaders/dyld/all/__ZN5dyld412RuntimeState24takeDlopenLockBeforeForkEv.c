__int64 __fastcall dyld4::RuntimeState::takeDlopenLockBeforeFork(dyld4::RuntimeState *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 15);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)result + 104LL))(
             result,
             *((_QWORD *)this + 13) + 24LL,
             0);
  return result;
}
