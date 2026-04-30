__int64 __fastcall sub_2DC750(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v4; // r13
  __int64 v5; // rax
  __int64 result; // rax

  v4 = QT::QCoreApplication::self;
  v5 = *(_QWORD *)(a1 + 2448);
  if ( v5 )
  {
    *a2 = v5;
    result = *(_QWORD *)(a1 + 2464);
    if ( result )
    {
LABEL_3:
      *a3 = result;
      return result;
    }
  }
  else
  {
    *a2 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*QT::QCoreApplication::self + 120LL))(
            QT::QCoreApplication::self,
            7);
    result = *(_QWORD *)(a1 + 2464);
    if ( result )
      goto LABEL_3;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v4 + 120LL))(v4, 8);
  *a3 = result;
  return result;
}
