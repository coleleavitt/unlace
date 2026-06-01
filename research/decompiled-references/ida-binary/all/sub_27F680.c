QT::QWidget **__fastcall sub_27F680(char a1)
{
  QT::QWidget **result; // rax

  sub_2DF640();
  result = (QT::QWidget **)sub_2C9520();
  if ( a1 )
  {
    result = &qword_8CF010;
    if ( qword_8CF010 )
      return (QT::QWidget **)sub_3464D0();
  }
  return result;
}
