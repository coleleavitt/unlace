void __fastcall sub_18DE90(char a1)
{
  QT::QWidget *v1; // rax

  if ( qword_8CABB8 )
  {
    if ( *(char *)(*((_QWORD *)qword_8CABB8 + 4) + 9LL) < 0 )
    {
      v1 = (QT::QWidget *)QT::QScrollArea::widget(qword_8CABB8);
      sub_18DC70(v1, a1);
    }
  }
}
