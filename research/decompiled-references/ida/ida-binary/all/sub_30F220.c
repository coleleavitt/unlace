__int64 sub_30F220()
{
  __int64 v0; // rdi

  if ( sub_30F190(qword_8CD748) )
  {
    v0 = *((_QWORD *)qword_8CD748 + 40);
    if ( v0 )
      v0 = *(_QWORD *)(v0 + 40);
    QT::QWidget::setFocus(v0, 7);
  }
  return 1;
}
