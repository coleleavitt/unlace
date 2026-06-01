QT::QCalendarWidget *__fastcall sub_4ED040(__int64 a1, __int64 a2)
{
  QT::QDate *v2; // rdi
  __int64 v3; // rbp
  QT::QCalendarWidget *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE v8[8]; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v9[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v10[40]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v2 = **(QT::QDate ***)(a2 + 104);
  v3 = sub_51A410(v2);
  if ( (unsigned __int64)(v3 + 0xB69EEFF91FLL) > 0x16D3E147973LL )
    v3 = QT::QDate::currentDate(v2);
  v4 = (QT::QCalendarWidget *)operator new(0x28u);
  QT::QCalendarWidget::QCalendarWidget(v4, nullptr);
  QT::QCalendarWidget::setSelectedDate(v4, v3);
  v5 = QT::QDate::currentDate(v4);
  QT::QCalendarWidget::setMinimumDate(v4, v5);
  QT::QTextCharFormat::QTextCharFormat((QT::QTextCharFormat *)v9);
  QT::QVariant::QVariant((QT::QVariant *)v10, 1);
  QT::QTextFormat::setProperty((QT::QTextFormat *)v9, 8227, (const QT::QVariant *)v10);
  QT::QVariant::~QVariant((QT::QVariant *)v10);
  QT::QBrush::QBrush(v8, 18, 1);
  QT::QBrush::operator QT::QVariant(v10, v8);
  QT::QTextFormat::setProperty((QT::QTextFormat *)v9, 2080, (const QT::QVariant *)v10);
  QT::QVariant::~QVariant((QT::QVariant *)v10);
  QT::QBrush::~QBrush((QT::QBrush *)v8);
  v6 = QT::QDate::currentDate((QT::QDate *)v8);
  QT::QCalendarWidget::setDateTextFormat(v4, v6, v9);
  QT::QTextFormat::~QTextFormat((QT::QTextFormat *)v9);
  return v4;
}
