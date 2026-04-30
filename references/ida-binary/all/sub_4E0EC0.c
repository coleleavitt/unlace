_BOOL8 __fastcall sub_4E0EC0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  bool v3; // bl
  __int64 v4; // rdi

  v1 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 80LL))(v1, a1);
  v3 = v2 != 0;
  if ( v2 )
  {
    if ( !*(_BYTE *)(v2 + 1120) )
    {
      v4 = *(_QWORD *)(v2 + 1112);
      if ( v4 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 104LL))(v4, 1);
    }
  }
  return v3;
}
