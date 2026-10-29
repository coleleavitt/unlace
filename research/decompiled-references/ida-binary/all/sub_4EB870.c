unsigned __int64 __fastcall sub_4EB870(QT::QObject *this, QT::QFont *a2)
{
  _BYTE v3[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  QT::QWidget::setFont(this, a2);
  QT::QFont::operator QT::QVariant(v3, a2);
  QT::QObject::doSetProperty(this, "_q_styleSheetWidgetFont", (const QT::QVariant *)v3, (QT::QVariant *)v3);
  QT::QVariant::~QVariant((QT::QVariant *)v3);
  return v4 - __readfsqword(0x28u);
}
