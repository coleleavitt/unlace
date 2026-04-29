// attributes: thunk
__int64 __fastcall dyld4::APIs::_dyld_after_fork_dlopen_parent(dyld4::APIs *this)
{
  return dyld4::RuntimeState::releaseDlopenLockInForkParent(this);
}
