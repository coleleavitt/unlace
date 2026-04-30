QT::QWidget *__fastcall sub_4EE8D0(__int64 *a1, __int64 a2, char a3)
{
  QT::QGroupBox *v3; // rax
  __int64 v4; // rsi
  QT::QWidget *v5; // rbx
  QT::QGridLayout *v6; // rsi

  v3 = sub_4ED450((__int64)a1, a2, a3);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a2 + 104);
    v5 = v3;
    if ( !v4 )
      return v5;
    v6 = sub_4EE5F0(a1, v4);
    if ( v6 )
    {
      QT::QWidget::setLayout(v5, v6);
      return v5;
    }
    (*(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)v5 + 32LL))(v5);
  }
  return nullptr;
}
