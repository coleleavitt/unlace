void __cdecl __noreturn pthread_exit(void *a1)
{
  unsigned __int64 StatusReg; // x8

  StatusReg = _ReadStatusReg(TPIDRRO_EL0);
  if ( (*(_WORD *)(StatusReg - 146) & 0x400) != 0 )
  {
    qword_9C1C0 = (__int64)"BUG IN CLIENT OF LIBPTHREAD: pthread_exit() called from a thread not created by pthread_create()";
    __break(1u);
  }
  else if ( (_pthread_ptr_munge_token ^ *(_QWORD *)(StatusReg - 224)) == StatusReg - 224 )
  {
    _pthread_exit(StatusReg - 224, (__int64)a1);
  }
  abort_with_reason(18, 4, "pthread_t was corrupted", 0);
}
