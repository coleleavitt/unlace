_BOOL8 __fastcall sub_530B40(__int64 a1)
{
  _BOOL4 v1; // r14d
  _QWORD *v2; // rbp
  _QWORD *v3; // r15
  __int64 v4; // r12
  char *v5; // r13
  void (__fastcall *v6)(__int64, char *); // rax

  v1 = !(*(_BYTE *)(a1 + 116) & 1);
  if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
  {
    v2 = QT::QCoreApplication::self;
    v3 = QT::QCoreApplication::self + 2;
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
    v5 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 16LL))(v4, v5);
    (*(void (__fastcall **)(_QWORD *, __int64, char *))(v2[2] + 112LL))(v3, a1, v5);
    v6 = *(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL);
    if ( v6 == sub_52F550 )
    {
      if ( v5 )
        sub_52F4D0(v5, (const char *)a1);
    }
    else
    {
      v6(v4, v5);
    }
  }
  return v1;
}
