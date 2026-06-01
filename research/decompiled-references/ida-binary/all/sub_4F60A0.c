__int64 __fastcall sub_4F60A0(
        __int64 a1,
        const char *a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  const QT::QObject *v16; // rax
  QT::QPushButton *v17; // rax

  v11 = *(_QWORD **)(a1 + 56);
  v12 = v11[5];
  if ( *(_QWORD *)(v12 + 184) )
  {
    v14 = *(int *)(v12 + 200);
    v15 = *(_QWORD *)(v12 + 176);
    if ( (int)v14 < 0 )
      v14 = 0;
    a2 = *(const char **)(v15 + 8 * v14);
    v16 = (const QT::QObject *)sub_4F2360((__int64)v11, (__int64)a2, a3);
    if ( v16 )
    {
      a2 = (const char *)v16;
      v17 = (QT::QPushButton *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QPushButton::staticMetaObject, v16);
      if ( v17 )
      {
        a2 = (_BYTE *)(&dword_0 + 1);
        QT::QPushButton::setDefault(v17, 1);
      }
    }
    v11 = *(_QWORD **)(a1 + 56);
  }
  return sub_4F2F80(v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
