__int64 __fastcall app_logger_t::do_vlog(_BYTE *a1, const char *a2)
{
  __int64 v2; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  v2 = 0;
  if ( QT::QCoreApplication::self )
  {
    a2 = a1 + 24;
    v2 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, _QWORD))(QT::QCoreApplication::self[2] + 152LL))(
           QT::QCoreApplication::self + 2,
           a1 + 24,
           *((unsigned int *)a1 + 20));
  }
  if ( !a1[84] || !a1 )
    return v2;
  v5 = *((_QWORD *)a1 + 6);
  *(_QWORD *)a1 = &app_logger_t::do_vlog;
  if ( v5 )
  {
    *((_QWORD *)a1 + 7) = 0;
    qfree(v5, a2);
  }
  v6 = *((_QWORD *)a1 + 3);
  if ( v6 )
  {
    *((_QWORD *)a1 + 4) = 0;
    qfree(v6, a2);
  }
  v7 = *((_QWORD *)a1 + 2);
  *(_QWORD *)a1 = &off_86FF78;
  qsem_free(v7);
  operator delete(a1, 0x58u);
  return v2;
}
