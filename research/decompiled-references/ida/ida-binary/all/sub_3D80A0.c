__int64 __fastcall sub_3D80A0(__int64 a1, unsigned __int8 a2)
{
  _QWORD *v2; // r15
  int v3; // ebx
  _QWORD *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 i; // rsi
  __int64 *v9; // rbp
  __int64 *v10; // r12
  __int64 v11; // rdi

  if ( !qword_8D0B20[0] )
  {
    v9 = (__int64 *)off_869700;
    v10 = qword_8D0B20;
    do
    {
      v11 = *v9++;
      *v10++ = sub_534430(v11);
    }
    while ( v9 != &`vtable for'windowlist_chooser_t );
  }
  v2 = QT::QCoreApplication::self;
  v3 = 8 * (a2 ^ 1);
  v4 = QT::QCoreApplication::self + 2;
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v6);
  for ( i = qword_8D0B20[v3]; i; i = qword_8D0B20[v3] )
  {
    ++v3;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v2[2] + 112LL))(v4, i, v6);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v6);
}
