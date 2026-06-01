__int64 __fastcall sub_2D21B0(
        const QT::QObject **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 result; // rax
  char *v11; // rdi
  QT::QAbstractScrollArea *v12; // rax
  QT::QObject *v13; // rdi
  QT::QAbstractScrollArea *v14; // rbp
  const QT::QObject *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  result = a2;
  if ( a2 )
  {
    v11 = (char *)(a1 + 5);
    *((_QWORD *)v11 - 1) = a3;
    *((_QWORD *)v11 - 3) = a2;
    *((_QWORD *)v11 - 2) = 0;
    qstrncpy(v11, a4, 512);
    v12 = (QT::QAbstractScrollArea *)QT::QMetaObject::cast(
                                       (QT::QMetaObject *)&QT::QAbstractScrollArea::staticMetaObject,
                                       a1[2]);
    v13 = a1[2];
    v14 = v12;
    if ( v12 )
    {
      a1[3] = v13;
      QT::QObject::installEventFilter(v13, (QT::QObject *)a1);
      v15 = (const QT::QObject *)QT::QAbstractScrollArea::viewport(v14);
      a1[2] = v15;
      v13 = v15;
    }
    QT::QObject::installEventFilter(v13, (QT::QObject *)a1);
    return QT::QWidget::setAttribute(a1[2], 2, 1, v16, v17, v18, a7, a8, a9);
  }
  return result;
}
