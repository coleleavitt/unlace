unsigned __int64 __fastcall sub_313A50(__int64 a1)
{
  QT::QMenu *v1; // rax
  QT::QWidget *v2; // rbx
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v1 = (QT::QMenu *)sub_53DC50(a1, "Toolbars");
  if ( v1 )
  {
    v2 = v1;
    QT::QMenu::clear(v1);
    QT::QWidget::addAction(v2, unk_8CA5B8);
    QT::QWidget::addAction(v2, unk_8CA5C0);
    QT::QMenu::addSeparator(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 416LL))(a1);
    QT::QWidget::actions((QT::QWidget *)ptr);
    QT::QWidget::addActions(v2, ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return v5 - __readfsqword(0x28u);
}
