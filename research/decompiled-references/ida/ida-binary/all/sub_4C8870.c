void __fastcall sub_4C8870(QT::QWidget *a1, bool a2)
{
  __int64 v2; // rax
  QT::QWidget *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  int *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r13
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  while ( 1 )
  {
    v2 = *((_QWORD *)a1 + 1);
    v11 = __readfsqword(0x28u);
    v3 = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(v2 + 16));
    if ( !v3 )
      break;
    a1 = v3;
  }
  QT::QWidget::setUpdatesEnabled(a1, a2);
  sub_4C8370((__int64)ptr, (__int64)a1);
  v6 = (int *)ptr[0];
  if ( (int)v10 > 0 )
  {
    v7 = 0;
    v8 = 8LL * (unsigned int)(v10 - 1) + 8;
    do
    {
      if ( !v6 || *v6 > 1 )
      {
        ptr[0] = v6;
        sub_4BCCA0((__int64)ptr, 0, 0, 0, v4, v5);
        v6 = (int *)ptr[0];
      }
      QT::QWidget::setUpdatesEnabled(*(QT::QWidget **)((char *)ptr[1] + v7), a2);
      v7 += 8;
    }
    while ( v8 != v7 );
  }
  if ( v6 )
  {
    if ( !_InterlockedSub(v6, 1u) )
      free(v6);
  }
}
