// attributes: thunk
__int64 __fastcall dyld4::APIs::_dyld_before_fork_dlopen(dyld4::APIs *this)
{
  return dyld4::RuntimeState::takeDlopenLockBeforeFork(this);
}
