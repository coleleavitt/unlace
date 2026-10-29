__int64 __fastcall sub_3D83F0(QT::QWidget *this, __int64 a2)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 29);
  if ( *(_DWORD *)(a2 + 16) == (_DWORD)result )
  {
    result = *((unsigned int *)this + 23);
    if ( (_DWORD)result )
    {
      result = (unsigned int)~sub_47B6A0(QT::QCoreApplication::self, 0);
      if ( ((unsigned int)result & *((_DWORD *)this + 23)) != 0 )
      {
        QT::QBasicTimer::stop((QT::QWidget *)((char *)this + 116));
        return QT::QWidget::close(this);
      }
    }
  }
  return result;
}
