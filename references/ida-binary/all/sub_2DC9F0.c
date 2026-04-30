__int64 __fastcall sub_2DC9F0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r13d
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, __int64); // rax

  if ( (unsigned __int8)auto_is_ok() )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 304) + 152LL))(a1 + 304, 0);
    return sub_522EE0(a1, a2, a3);
  }
  v6 = a3;
  v7 = a1 + 304;
  if ( (a3 & 0x100) != 0
    || *(int *)(a1 + 2136) > 0
    || !*(_QWORD *)(a1 + 2176) && (v7 = a1 + 304, !(unsigned __int8)sub_4DFF10()) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 304) + 152LL))(v7, 0);
LABEL_6:
    LOBYTE(v6) = a3 | 0x80;
    a3 = v6;
    return sub_522EE0(a1, a2, a3);
  }
  v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 304) + 152LL);
  if ( QT::QCoreApplication::self[13] )
  {
    v8(v7, 0);
    goto LABEL_6;
  }
  v8(v7, 1);
  return 0;
}
