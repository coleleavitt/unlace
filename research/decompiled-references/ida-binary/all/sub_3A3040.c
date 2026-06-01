__int64 __fastcall sub_3A3040(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // r13d
  void (__fastcall *v6)(__int64, __int64); // rax

  if ( (unsigned __int8)auto_is_ok() )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 520LL))(a1, 0);
    return sub_4A4570(a1, a2, a3);
  }
  v5 = a3;
  LOBYTE(v5) = a3 | 0x80;
  if ( (a3 & 0x100) != 0 || *(int *)(a1 + 1936) > 0 || !*(_QWORD *)(a1 + 1976) && !(unsigned __int8)sub_4DFF10(a1 + 104) )
  {
    a3 = v5;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 520LL))(a1, 0);
    return sub_4A4570(a1, a2, a3);
  }
  v6 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL);
  if ( QT::QCoreApplication::self[13] )
  {
    a3 = v5;
    v6(a1, 0);
    return sub_4A4570(a1, a2, a3);
  }
  v6(a1, 1);
  return 0;
}
