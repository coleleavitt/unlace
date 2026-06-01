unsigned __int64 __fastcall sub_526EF0(const QT::QObject **this, __int64 *a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r8
  char v7; // al
  const QT::QObject *v8; // rsi
  __int64 v9; // rax
  QT::QSyntaxHighlighter *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  QT::QTextDocument *v13; // rax
  __int64 v15; // [rsp+8h] [rbp-60h] BYREF
  char v16[16]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h]
  char v18; // [rsp+30h] [rbp-38h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  QT::QObject::QObject((QT::QObject *)v16, nullptr);
  v17 = 0;
  *(_QWORD *)v16 = &object_lifecycle_monitor_t___vtable;
  sub_478D00(v16, (__int64)this, a3, v4, v5, v6);
  v7 = QT::QObject::blockSignals((QT::QObject *)this, 1);
  v8 = *(this + 17);
  v18 = v7;
  v9 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89ADC0, v8);
  v10 = *(this + 17);
  if ( !v9 || *(_QWORD *)(v9 + 32) == *a2 )
  {
    if ( v10 )
      goto LABEL_10;
  }
  else if ( v10 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 32LL))(*(this + 17));
    *(this + 17) = nullptr;
  }
  v10 = (QT::QSyntaxHighlighter *)operator new(0x28u);
  v11 = *a2;
  v15 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 12);
  sub_5182A0(v10, (QT::QObject *)this, &v15);
  v12 = v15;
  *(this + 17) = v10;
  if ( v12 )
  {
    --*(_DWORD *)(v12 + 12);
    v10 = *(this + 17);
  }
LABEL_10:
  v13 = (QT::QTextDocument *)QT::QPlainTextEdit::document((QT::QPlainTextEdit *)this);
  QT::QSyntaxHighlighter::setDocument(v10, v13);
  sub_51A3D0((QT::QObject *)v16);
  return v19 - __readfsqword(0x28u);
}
