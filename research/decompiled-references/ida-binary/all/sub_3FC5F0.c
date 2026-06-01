unsigned __int64 __fastcall sub_3FC5F0(QT::QObject *a1, QT::QWidget *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int *v4; // rax
  char *v5; // rdx
  QT::QWidget **v6; // rbx
  QT::QWidget **i; // r12
  QT::QObject *v8; // rbp
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( this )
  {
    if ( (unsigned int)QT::QWidget::focusPolicy(this) )
      QT::QObject::installEventFilter(this, a1);
    *(_OWORD *)ptr = 0;
    v11 = 0;
    QT::qt_qFindChildren_helper(this, 0, 0, &QT::QWidget::staticMetaObject, ptr, 1);
    v4 = (int *)ptr[0];
    if ( !ptr[0] || *(int *)ptr[0] > 1 )
    {
      sub_1A2030((__int64)ptr, 0, 0, 0, v2, v3);
      v4 = (int *)ptr[0];
    }
    v5 = (char *)ptr[1];
    v6 = (QT::QWidget **)ptr[1];
    if ( !v4 || *v4 > 1 )
    {
      sub_1A2030((__int64)ptr, 0, 0, 0, v2, v3);
      v5 = (char *)ptr[1];
    }
    for ( i = (QT::QWidget **)&v5[8 * v11]; i != v6; ++v6 )
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( (unsigned int)QT::QWidget::focusPolicy(*v6) )
          break;
        if ( i == ++v6 )
          goto LABEL_15;
      }
      QT::QObject::installEventFilter(v8, a1);
    }
LABEL_15:
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v12 - __readfsqword(0x28u);
}
