__int64 __fastcall sub_30EE10(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  QT::QWidget *v5; // rdi

  byte_8BA8DC = 1;
  if ( !byte_8CC998 )
  {
    v5 = (QT::QWidget *)qword_8CC990;
    if ( !qword_8CC990 )
      goto LABEL_3;
    if ( QT::QMetaObject::cast(
           (QT::QMetaObject *)&off_887F00,
           *(const QT::QObject **)(*(_QWORD *)(qword_8CC990 + 8) + 16LL)) )
    {
      goto LABEL_4;
    }
    if ( !byte_8CC998 )
    {
      v5 = (QT::QWidget *)qword_8CC990;
      goto LABEL_3;
    }
  }
  v5 = nullptr;
LABEL_3:
  sub_2DDD60(v5, 0, a4, a5, a1);
LABEL_4:
  sub_4CB2D0(qword_8CD8B8);
  return 1;
}
