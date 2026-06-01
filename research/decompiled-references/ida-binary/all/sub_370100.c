QT::QWidget *__fastcall sub_370100(char *s, int a2)
{
  QT::QWidget *v2; // rbx
  size_t v3; // rax
  double v4; // xmm0_8
  __int64 v5; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v2, 0, 0);
  *((_QWORD *)v2 + 2) = PluginForm___vtable_at__16;
  v3 = 0;
  *(_QWORD *)v2 = &PluginForm___vtable;
  if ( s )
    v3 = strlen(s);
  v4 = QT::QString::fromUtf8(ptr, v3, s);
  QT::QWidget::setWindowTitle(v2, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = *QT::QCoreApplication::self;
  if ( a2 < 0 )
    (*(void (__fastcall **)(void **, _QWORD *, _QWORD, double))(v5 + 144))(
      ptr,
      QT::QCoreApplication::self,
      unk_8CA050,
      v4);
  else
    (*(void (__fastcall **)(void **, _QWORD *, _QWORD, double))(v5 + 136))(
      ptr,
      QT::QCoreApplication::self,
      (unsigned int)a2,
      v4);
  QT::QWidget::setWindowIcon(v2, (const QT::QIcon *)ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  return v2;
}
