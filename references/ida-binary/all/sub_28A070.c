__int64 __fastcall sub_28A070(__int64 *a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  char v10; // al
  __int64 v12; // rbx

  v7 = *(__int64 (__fastcall **)(__int64))(QT::QCoreApplication::self[2] + 80LL);
  if ( v7 == IDAApplication__::vfunc_10 )
    v8 = QT::QCoreApplication::self + 85;
  else
    v8 = (_QWORD *)v7((__int64)(QT::QCoreApplication::self + 2));
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v8 + 72LL))(v8, a1);
  if ( v9 )
  {
    v10 = sub_4A0660(v9, a2);
  }
  else
  {
    if ( (*((_BYTE *)a1 + 346) & 1) == 0 )
      return 6;
    v12 = *a1;
    v10 = sub_521140(v12, a3);
    if ( (a4 & 0x40000000) != 0 )
    {
      if ( !v10 )
        return 6;
      v10 = sub_521140(v12, 0x40000000) ^ 1;
    }
  }
  if ( v10 )
    return 2;
  return 6;
}
