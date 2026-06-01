__int64 (__fastcall ***__fastcall dyld4::APIs::_dyld_fork_child(dyld4::APIs *this))(_QWORD)
{
  _QWORD *v2; // x8
  __int64 _18; // [xsp+18h] [xbp+8h]

  mach_task_self_ = task_self_trap();
  v2 = gProcessInfo;
  *((_QWORD *)gProcessInfo + 9) = 0;
  v2[10] = 0;
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return dyld4::RuntimeState::resetLockInForkChild(this);
}
