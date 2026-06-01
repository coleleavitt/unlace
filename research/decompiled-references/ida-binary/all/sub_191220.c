unsigned __int64 __fastcall sub_191220(QT::QWidget *this, __int64 a2)
{
  __int64 v2; // rax
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, a2, 0);
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)this = &FlagsContainer___vtable;
  *((_QWORD *)this + 2) = FlagsContainer___vtable_at__16;
  v2 = operator new(0x28u);
  *((_QWORD *)this + 7) = v2;
  *(_QWORD *)(v2 + 32) = 0;
  *(_OWORD *)v2 = 0;
  *(_OWORD *)(v2 + 16) = 0;
  sub_190F70(v2, this);
  QT::QCoreApplication::translate((QT::QCoreApplication *)ptr, "flags_container", "Form", nullptr, -1);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v5 - __readfsqword(0x28u);
}
