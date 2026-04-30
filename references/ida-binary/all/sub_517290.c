QT::QAbstractButton *__fastcall sub_517290(__int64 a1, __int64 a2, __int64 a3)
{
  QT::QAbstractButton *v4; // rbp
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v4 = (QT::QAbstractButton *)QT::QMessageBox::addButton(a1, a2);
  if ( a3 )
  {
    sub_518A60((QT::QString *)ptr);
    QT::QAbstractButton::setText(v4, (const QT::QString *)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return v4;
}
