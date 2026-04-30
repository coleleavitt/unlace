unsigned __int64 __fastcall sub_4B8E20(QT::QWidget *this, __int64 a2, double a3)
{
  __int64 v3; // rcx
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, 0, 0);
  *(_QWORD *)this = &PlaceHolderWidget___vtable;
  *((_QWORD *)this + 2) = PlaceHolderWidget___vtable_at__16;
  *((_QWORD *)this + 5) = a2;
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(40620, 0, &PlaceHolderWidget___vtable, v3, a3);
    BUG();
  }
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v6 - __readfsqword(0x28u);
}
