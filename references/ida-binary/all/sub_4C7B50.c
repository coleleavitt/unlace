unsigned __int64 __fastcall sub_4C7B50(QT::QObject *a1)
{
  const char **v1; // rbx
  const char *v2; // r12
  bool v3; // r14
  char v4; // r15
  QT::QObject *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-C0h]
  const char **v10; // [rsp+10h] [rbp-B8h]
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  const char **v12; // [rsp+28h] [rbp-A0h]
  __int64 v13; // [rsp+30h] [rbp-98h]
  _BYTE v14[32]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v15[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  sub_4D2960(&ptr);
  v9 = sub_4CF3F0(a1);
  v1 = v12;
  v10 = &v12[v13];
  if ( v10 != v12 )
  {
    do
    {
      while ( 1 )
      {
        v2 = *v1;
        v3 = v9 == (_QWORD)*v1;
        QT::QVariant::QVariant((QT::QVariant *)v15, v3);
        QT::QObject::property((QT::QObject *)v14, v2);
        v4 = QT::QVariant::equals((QT::QVariant *)v14, (const QT::QVariant *)v15);
        QT::QVariant::~QVariant((QT::QVariant *)v14);
        QT::QVariant::~QVariant((QT::QVariant *)v15);
        if ( !v4 )
          break;
        if ( v10 == ++v1 )
          goto LABEL_6;
      }
      v5 = (QT::QObject *)sub_4CD6A0(v2);
      QT::QVariant::QVariant((QT::QVariant *)v15, v3);
      QT::QObject::doSetProperty(v5, "active", (const QT::QVariant *)v15, (QT::QVariant *)v15);
      QT::QVariant::~QVariant((QT::QVariant *)v15);
      v6 = QT::QWidget::style(v5);
      (*(void (__fastcall **)(__int64, QT::QObject *))(*(_QWORD *)v6 + 104LL))(v6, v5);
      v7 = QT::QWidget::style(v5);
      (*(void (__fastcall **)(__int64, QT::QObject *))(*(_QWORD *)v7 + 96LL))(v7, v5);
      ++v1;
    }
    while ( v10 != v1 );
  }
LABEL_6:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v16 - __readfsqword(0x28u);
}
