// attributes: thunk
__int64 (__fastcall ***__fastcall dyld4::APIs::_dyld_after_fork_dlopen_child(dyld4::RuntimeState *this))(_QWORD)
{
  return dyld4::RuntimeState::resetDlopenLockInForkChild(this);
}
