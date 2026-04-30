__int64 __fastcall sub_2A8140(
        QT::QAbstractScrollArea **a1,
        __int64 (__fastcall *a2)(QT::QAbstractScrollArea **),
        unsigned int a3)
{
  __int64 v4; // rsi
  int v5; // ebp
  __int64 result; // rax

  v4 = (*((__int64 (__fastcall **)(QT::QAbstractScrollArea **, _QWORD))*a1 + 92))(a1, a3);
  sub_27EB40((__int64)&qword_8CC800, v4);
  v5 = a2(a1);
  if ( (v5 & 1) != 0 )
    sub_1C7D20(nullptr);
  result = v5 & 0x10000;
  if ( (v5 & 4) != 0 )
  {
    if ( (_DWORD)result )
      return (*((__int64 (__fastcall **)(QT::QAbstractScrollArea **, _QWORD, _QWORD))*a1 + 19))(a1, 0, 0);
    if ( (v5 & 0x8000) == 0 )
      return (*(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(*(_QWORD *)a1[2] + 760LL))(a1[2]);
    return sub_1F4880(a1[2], 0);
  }
  if ( (_DWORD)result )
    return (*((__int64 (__fastcall **)(QT::QAbstractScrollArea **, _QWORD, _QWORD))*a1 + 19))(a1, 0, 0);
  if ( (v5 & 0x8000) != 0 )
    return sub_1F4880(a1[2], 0);
  if ( (v5 & 2) != 0 )
    return (*(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(*(_QWORD *)a1[2] + 760LL))(a1[2]);
  return result;
}
