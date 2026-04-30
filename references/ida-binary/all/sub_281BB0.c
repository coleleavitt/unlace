__int64 __fastcall sub_281BB0(const char *a1)
{
  size_t v1; // rax
  double v2; // xmm0_8
  __int64 v3; // rax
  QT::QPlainTextEdit *v4; // r14
  unsigned int v5; // r13d
  _BYTE v7[16]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v8[16]; // [rsp+10h] [rbp-98h] BYREF
  void *v9[4]; // [rsp+20h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+50h] [rbp-58h]
  void *v12; // [rsp+70h] [rbp-38h]
  unsigned __int64 v13; // [rsp+78h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v1 = 0;
  if ( a1 )
    v1 = strlen(a1);
  v2 = QT::QString::fromUtf8(ptr, v1, a1);
  QT::QFile::QFile((QT::QFile *)v7, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( (unsigned __int8)QT::QFile::open(v7, 17, v2) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 112LL))(QT::QCoreApplication::self);
    sub_281910((QT::QWidget *)ptr, v3);
    QT::QTextStream::QTextStream(v8, v7);
    QT::QTextStream::setEncoding(v8, 0);
    v4 = *((QT::QPlainTextEdit **)v12 + 2);
    QT::QTextStream::readAll((QT::QTextStream *)v9);
    QT::QPlainTextEdit::setPlainText(v4, (const QT::QString *)v9);
    if ( v9[0] && !_InterlockedSub((volatile signed __int32 *)v9[0], 1u) )
      free(v9[0]);
    v5 = sub_53AB40((QT::QWidget *)ptr) == 1;
    QT::QTextStream::~QTextStream((QT::QTextStream *)v8);
    ptr[0] = &EULADialog___vtable;
    v11 = EULADialog___vtable_at__16;
    if ( v12 )
      operator delete(v12, 0x20u);
    ptr[0] = &ui_dialog_t___vtable;
    v11 = ui_dialog_t___vtable_at__16;
    QT::QDialog::~QDialog((QT::QDialog *)ptr);
  }
  else
  {
    v5 = -1;
  }
  QT::QFile::~QFile((QT::QFile *)v7);
  return v5;
}
