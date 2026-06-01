unsigned __int64 __fastcall sub_1916B0(QT::QScrollArea *this, QT::QWidget *a2)
{
  QT::QObject *v2; // rax
  void *ptr[3]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  QT::QScrollArea::QScrollArea(this, a2);
  *(_QWORD *)this = &TAddressDetails___vtable;
  *((_QWORD *)this + 2) = TAddressDetails___vtable_at__16;
  QT::QString::fromUtf8(ptr, 15, "Address details");
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QObject::setObjectName(this, "AddressDetails", 14);
  QT::QString::fromUtf8(ptr, 15, "Address details");
  QT::QWidget::setAccessibleName(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v2 = (QT::QObject *)operator new(0x80u);
  sub_191310(v2);
  QT::QScrollArea::setWidget(this, (QT::QWidget *)ptr);
  QT::QScrollArea::setWidgetResizable(this, 1);
  qword_8CABB8 = this;
  return vars18 - __readfsqword(0x28u);
}
