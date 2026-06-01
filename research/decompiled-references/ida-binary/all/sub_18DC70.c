__int64 __fastcall sub_18DC70(QT::QWidget *this, char a2)
{
  __int64 result; // rax

  if ( !(unsigned __int8)netnode_inited() )
    return QT::QWidget::setEnabled(this, 0);
  result = QT::QWidget::setEnabled(this, 1);
  if ( *((_BYTE *)this + 112) )
  {
    *((_BYTE *)this + 113) = 1;
    if ( (a2 & 4) != 0 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 48LL) + 424LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 48LL));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 7) + 48LL) + 424LL))(*(_QWORD *)(*((_QWORD *)this + 7) + 48LL));
    result = 0;
    *((_WORD *)this + 56) = 0;
  }
  return result;
}
