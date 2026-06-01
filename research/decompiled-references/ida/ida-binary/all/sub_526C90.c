void __fastcall text_area_t__::vfunc_3(QT::QPlainTextEdit *this, __int64 a2, __int64 a3, __int64 a4, const char *a5)
{
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi

  *(_QWORD *)this = &text_area_t___vtable;
  *((_QWORD *)this + 2) = text_area_t___vtable_at__16;
  *((_QWORD *)this + 5) = text_area_t___vtable_at__40;
  QT::QObject::disconnect(this, (const QT::QObject *)"2updateRequest(QRect,int)", nullptr, nullptr, a5);
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
    *((_QWORD *)this + 17) = 0;
  }
  v7 = *((volatile signed __int32 **)this + 14);
  if ( v7 && !_InterlockedSub(v7, 1u) )
    free(*((void **)this + 14));
  v8 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 5) = &stylable_widget_mixin_t___vtable;
  if ( v8 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v8, "2updateRequest(QRect,int)");
  }
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v9, "2updateRequest(QRect,int)");
  }
  QT::QPlainTextEdit::~QPlainTextEdit(this);
}
