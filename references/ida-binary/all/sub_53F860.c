QT::QObject *__fastcall sub_53F860(_QWORD *a1, QT::QMenu *a2, const QT::QString *a3, __int64 a4, double a5)
{
  QT::QObject *v7; // rbp
  void *ptr[4]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v10[40]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  QT::QMenu::menuAction(a2);
  QT::QAction::text((QT::QAction *)ptr);
  v7 = sub_53F320(a1, a3, (__int64)ptr, a4, a5);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QWidget::actions((QT::QWidget *)ptr);
  QT::QWidget::addActions(v7, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QObject::property((QT::QObject *)v10, (const char *)a2);
  QT::QObject::doSetProperty(v7, "libui_menu_role", (const QT::QVariant *)v10, (QT::QVariant *)v10);
  QT::QVariant::~QVariant((QT::QVariant *)v10);
  return v7;
}
