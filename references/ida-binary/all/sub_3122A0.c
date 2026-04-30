unsigned __int64 __fastcall sub_3122A0(__int64 a1)
{
  QT::QWidget *v1; // rbp
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  sub_30EF20(a1);
  sub_312240(a1);
  v1 = *(QT::QWidget **)(a1 + 320);
  (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 144LL))(
    &v3,
    QT::QCoreApplication::self,
    unk_8CA458);
  QT::QWidget::setWindowIcon(v1, (const QT::QIcon *)&v3);
  QT::QIcon::~QIcon((QT::QIcon *)&v3);
  return v4 - __readfsqword(0x28u);
}
