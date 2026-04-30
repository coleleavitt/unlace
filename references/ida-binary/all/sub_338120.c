unsigned __int64 sub_338120(QT::QObject **a1, __int64 a2, __int64 a3, QT::QAction *a4, __int64 a5, ...)
{
  int v7; // ebx
  QT::QAction *v8; // rbp
  size_t v9; // rax
  QT::QKeySequence *v10; // r15
  QT::QKeySequence *v11; // rdi
  QT::QWidget *v12; // rdi
  QT::QWidget *v13; // rax
  QT::QKeySequence *v15; // [rsp+0h] [rbp-548h]
  void *ptr[2]; // [rsp+10h] [rbp-538h] BYREF
  __int64 v17; // [rsp+20h] [rbp-528h]
  gcc_va_list va; // [rsp+30h] [rbp-518h] BYREF
  char s[1032]; // [rsp+50h] [rbp-4F8h] BYREF
  unsigned __int64 v20; // [rsp+458h] [rbp-F0h]
  __int64 v21; // [rsp+488h] [rbp-C0h]
  __int128 v22; // [rsp+490h] [rbp-B8h]

  va_start(va, a5);
  v21 = va_arg(va, _QWORD);
  *(double *)&v22 = va_arg(va, double);
  va_end(va);
  v7 = a3;
  v20 = __readfsqword(0x28u);
  if ( !(_DWORD)a3 )
  {
    if ( !under_debugger )
      interr(40441, a2, a3, a4, *(double *)&v22);
    BUG();
  }
  if ( a4 )
  {
    va_start(va, a5);
    qvsnprintf(s, 1024, a5, va, a5, v21);
    v8 = sub_336670(*a1, a4, 0, (unsigned __int8)a2 ^ 1u);
    v9 = strlen(s);
    QT::QString::fromUtf8(ptr, v9, s);
    QT::QAction::setText(v8, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v17 = 0;
    *(_OWORD *)ptr = 0;
    QT::QAction::setShortcuts(v8, ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      v10 = (QT::QKeySequence *)ptr[1];
      v15 = (QT::QKeySequence *)((char *)ptr[1] + 8 * v17);
      if ( ptr[1] != v15 )
      {
        do
        {
          v11 = v10;
          v10 = (QT::QKeySequence *)((char *)v10 + 8);
          QT::QKeySequence::~QKeySequence(v11);
        }
        while ( v15 != v10 );
      }
      free(ptr[0]);
    }
    v12 = *a1;
    if ( (_BYTE)a2 )
    {
      v13 = sub_337FF0(v12);
      sub_2DE800(v13, v8, 0.0);
    }
    else
    {
      QT::QWidget::addAction(v12, v8);
    }
    QT::QVariant::QVariant((QT::QVariant *)va, v7);
    QT::QAction::setData(v8, (const QT::QVariant *)va);
    QT::QVariant::~QVariant((QT::QVariant *)va);
    QT::QObject::connect(ptr, v8, "2triggered()", qword_8CD748, "1customidamemo_popup_operation_clicked()", 0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  }
  return v20 - __readfsqword(0x28u);
}
