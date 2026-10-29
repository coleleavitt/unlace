unsigned __int64 __fastcall sub_186680(QT::QWidget *a1)
{
  QT::QWidget *v1; // r13
  __int64 v2; // r14
  int v3; // ebx
  int v4; // ebp
  int v5; // r15d
  int v7; // [rsp+Ch] [rbp-6Ch]
  unsigned __int64 v8; // [rsp+38h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  sub_4B8B20(a1, 128);
  v1 = (QT::QWidget *)sub_2DDD60(a1);
  v2 = QT::QWidget::style(a1);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 224LL))(v2, 75, 0, 0);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 224LL))(v2, 76, 0, 0);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 224LL))(v2, 77, 0, 0);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 224LL))(v2, 78, 0, 0);
  QT::QWidget::setContentsMargins(v1, v3, v4, v5, v7);
  sub_4CAF60(qword_8CD8B8);
  QT::QWidget::raise(v1);
  QT::QWidget::activateWindow(v1);
  if ( (*((_BYTE *)a1 + 56) & 0x10) != 0 )
    QT::QWidget::setFocus(*((_QWORD *)a1 + 16), 7);
  return v8 - __readfsqword(0x28u);
}
