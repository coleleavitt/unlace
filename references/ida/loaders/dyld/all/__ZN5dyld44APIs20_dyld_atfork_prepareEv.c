// attributes: thunk
unsigned __int64 __fastcall dyld4::APIs::_dyld_atfork_prepare(dyld4::RuntimeState *this)
{
  return dyld4::RuntimeState::takeLockBeforeFork(this);
}
