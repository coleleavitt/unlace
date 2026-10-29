__int64 *sub_1B2EE0()
{
  __int64 *result; // rax
  QT::QWidget *v1; // rax

  if ( (unsigned __int8)netnode_inited() && qword_8CF010 )
  {
    sub_3477F0();
    sub_341530(*((QT::QWidget **)qword_8CF010 + 87));
  }
  sub_1F9CB0();
  sub_3F16D0();
  result = &qword_8CC980;
  if ( !byte_8CC998 )
  {
    if ( qword_8CC990 )
    {
      v1 = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_885220, (const QT::QObject *)qword_8CC990);
      return (__int64 *)QT::QWidget::update(v1);
    }
  }
  return result;
}
