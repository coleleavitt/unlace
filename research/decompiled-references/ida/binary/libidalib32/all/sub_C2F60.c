__int64 __fastcall sub_C2F60(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12

  if ( *(_QWORD *)(a1 + 56) )
  {
    sub_C2BF0(a1, 26);
    v1 = TProgram::application;
    v2 = TProgram::application + 136LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(TProgram::application + 136LL) + 232LL))(
      TProgram::application + 136LL,
      1);
    if ( *(_DWORD *)(a1 + 80) == 4 )
    {
      sub_8F660((__int64)"Debugger thread seems to be hung, killing it...\n");
      qthread_kill();
    }
    else
    {
      sub_C2BF0(a1, 5);
    }
    qthread_join();
    qthread_free();
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 136) + 216LL))(v2);
    inform_idc_about_debthread();
    qsem_free();
    qsem_free();
    qmutex_free();
  }
  if ( *(_QWORD *)(a1 + 224) )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 192) )
  {
    *(_QWORD *)(a1 + 200) = 0;
    qfree();
  }
  *(_QWORD *)(a1 + 88) = off_22F008;
  free_debug_event();
  *(_QWORD *)(a1 + 88) = &off_235C80;
  return qsem_free();
}

