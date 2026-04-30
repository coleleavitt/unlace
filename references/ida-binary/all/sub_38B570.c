__int64 __fastcall sub_38B570(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD v4[9]; // [rsp+0h] [rbp-48h] BYREF

  v4[5] = __readfsqword(0x28u);
  if ( a2 == -1 || a2 >= (int)QT::QComboBox::count(*(QT::QComboBox **)(*(_QWORD *)(a1 + 72) + 48LL)) )
    return 0;
  QT::QComboBox::itemData((QT::QComboBox *)v4, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 48LL), a2);
  v2 = sub_1C7FC0((QT::QVariant *)v4);
  QT::QVariant::~QVariant((QT::QVariant *)v4);
  return v2;
}
