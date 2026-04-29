void __fastcall __noreturn _pthread_exit(__int64 a1, __int64 a2)
{
  __int64 i; // x21
  unsigned __int64 StatusReg; // x8
  __int64 v6; // x0

  __disable_threadsignal(1);
  _pthread_setcancelstate_exit(a1, a2);
  for ( i = *(_QWORD *)(a1 + 8); i; *(_QWORD *)(a1 + 8) = i )
  {
    (*(void (__fastcall **)(_QWORD))i)(*(_QWORD *)(i + 8));
    i = *(_QWORD *)(i + 16);
  }
  _pthread_tsd_cleanup(a1);
  StatusReg = _ReadStatusReg(TPIDRRO_EL0);
  v6 = *(_QWORD *)(StatusReg + 72);
  *(_QWORD *)(StatusReg + 72) = 0;
  if ( v6 )
    goto LABEL_5;
  while ( 1 )
  {
    LODWORD(v6) = _pthread_terminate_invoke(a1, a2);
LABEL_5:
    _os_semaphore_dispose(v6);
  }
}
