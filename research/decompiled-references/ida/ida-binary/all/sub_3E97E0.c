__int64 __fastcall sub_3E97E0(__int64 a1, int a2)
{
  __int64 v3; // rax
  void *v4; // rcx
  void *ptr[4]; // [rsp+0h] [rbp-88h] BYREF
  void *v6; // [rsp+20h] [rbp-68h] BYREF
  void *v7; // [rsp+28h] [rbp-60h]
  _BYTE v8[40]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return v9 - __readfsqword(0x28u);
  v3 = QT::QListWidget::item(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 112LL), a2);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v8, v3, 0);
  QT::QVariant::toString((QT::QVariant *)ptr);
  QT::QVariant::~QVariant((QT::QVariant *)v8);
  QT::QString::toUtf8_helper((QT::QString *)&v6, (const QT::QString *)ptr);
  v4 = v7;
  if ( !v7 )
    v4 = &QT::QByteArray::_empty;
  reg_update_strlist("History64", 0, dword_8BCE24, v4, 0);
  if ( v6 && !_InterlockedSub((volatile signed __int32 *)v6, 1u) )
    free(v6);
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  QT::QListWidget::clear(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 112LL));
  return sub_3E94D0(a1);
}
