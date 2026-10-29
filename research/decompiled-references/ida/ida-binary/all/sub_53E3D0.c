QT::QAction *__fastcall sub_53E3D0(
        QT::QObject *a1,
        const char *a2,
        const char *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  QT::QAction *v19; // r13
  QT::QAction *v20; // rbp
  QT::QMenu *v21; // r13
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v12 = sub_534430(a2);
  if ( !v12 )
  {
    sub_169700(
      (int)"Invalid action name: %s\n",
      (__int64)a2,
      v13,
      v14,
      v15,
      v16,
      a4,
      a5,
      a6,
      a7,
      v17,
      v18,
      a10,
      a11,
      (char)ptr[0]);
    return nullptr;
  }
  v19 = *(QT::QAction **)(v12 + 192);
  if ( !v19 )
    return nullptr;
  v20 = (QT::QAction *)operator new(0x10u);
  sub_518130(v20, v19, a1);
  if ( !sub_53DC50((__int64)a1, a3) )
    return nullptr;
  v21 = (QT::QMenu *)operator new(0x28u);
  QT::QMenu::QMenu(v21, a1);
  QT::QWidget::actions((QT::QWidget *)ptr);
  QT::QWidget::addActions(v21, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QAction::setMenuObject(v20, v21);
  return v20;
}
