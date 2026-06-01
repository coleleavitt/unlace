__int64 sub_311410()
{
  __int64 v0; // rax
  __int64 v1; // rax

  sub_30F190(qword_8CD748);
  v0 = *((_QWORD *)qword_8CD748 + 40);
  if ( v0 )
  {
    v1 = *(_QWORD *)(v0 + 48);
    if ( v1 )
      QT::QWidget::setFocus(*(_QWORD *)(v1 + 48), 7);
  }
  return 1;
}
