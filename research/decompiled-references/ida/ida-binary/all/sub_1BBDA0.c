unsigned __int64 __fastcall sub_1BBDA0(
        QT::QWidget **this,
        unsigned __int8 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r8
  __int64 v11; // r9
  int *v12; // rax
  char *v13; // rdx
  QT::QAbstractButton **v14; // r12
  QT::QAbstractButton **i; // r15
  char *v16; // rsi
  QT::QAbstractButton *v17; // r13
  const char *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 j; // r12
  QT::QAbstractButton *v26; // r14
  char v28; // [rsp+0h] [rbp-E8h]
  __int64 v29; // [rsp+28h] [rbp-C0h] BYREF
  void *ptr[4]; // [rsp+30h] [rbp-B8h] BYREF
  void *v31[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v32; // [rsp+60h] [rbp-88h]
  int v33[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v34; // [rsp+78h] [rbp-70h]
  _QWORD v35[3]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+A8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  sub_52EAB0(ptr, this + 20, a2);
  QT::QWidget::setStyleSheet((QT::QWidget *)this, (const QT::QString *)ptr);
  QT::QWidget::setStyleSheet(*(this + 37), (const QT::QString *)ptr);
  QT::QWidget::setStyleSheet(*(this + 38), (const QT::QString *)ptr);
  QT::QWidget::setStyleSheet(*(this + 39), (const QT::QString *)ptr);
  QT::QWidget::setStyleSheet(*(this + 41), (const QT::QString *)ptr);
  sub_1B5120((_QWORD **)this);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v33);
  sub_1B4C50((__int64)this, v33[0]);
  sub_341530(*(this + 36));
  v32 = 0;
  *(_OWORD *)v31 = 0;
  QT::qt_qFindChildren_helper(this, 0, 0, &off_8979C0, v31, 1);
  v12 = (int *)v31[0];
  if ( !v31[0] || *(int *)v31[0] > 1 )
  {
    sub_1BB9C0((__int64)v31, 0, 0, 0, v10, v11);
    v12 = (int *)v31[0];
  }
  v13 = (char *)v31[1];
  v14 = (QT::QAbstractButton **)v31[1];
  if ( !v12 || *v12 > 1 )
  {
    sub_1BB9C0((__int64)v31, 0, 0, 0, v10, v11);
    v13 = (char *)v31[1];
  }
  for ( i = (QT::QAbstractButton **)&v13[8 * v32]; i != v14; ++v14 )
  {
    v17 = *v14;
    *(_QWORD *)v33 = 0;
    v34 = 0;
    v16 = (char *)sub_1B98F0(this, (__int64 *)v33);
    if ( v16 )
    {
      v18 = &s1;
      if ( (_QWORD)v34 )
        v18 = *(const char **)v33;
      v35[0] = sub_1B5200((__int64)this, v16, v18);
      v35[1] = v19;
      if ( LODWORD(v35[0]) )
      {
        v16 = (char *)v35;
        sub_4AF280(v17);
      }
      else
      {
        v16 = (char *)&s1;
        if ( (_QWORD)v34 )
          v16 = *(char **)v33;
        sub_169700(
          (int)"Unknown property \"%s\"\n",
          (__int64)v16,
          v19,
          v20,
          v21,
          v22,
          (__m128)0LL,
          (__m128)0LL,
          a5,
          a6,
          v23,
          v24,
          a9,
          a10,
          v28);
      }
    }
    if ( *(_QWORD *)v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(*(_QWORD *)v33, v16);
    }
  }
  for ( j = 1; j != 12; ++j )
  {
    v26 = *(this + j + 45);
    sub_5184C0((QT::QTextFormat *)v33);
    QT::QTextFormat::brushProperty((QT::QTextFormat *)&v29, (int)v33);
    sub_4AF280(v26);
    QT::QBrush::~QBrush((QT::QBrush *)&v29);
    QT::QTextFormat::~QTextFormat((QT::QTextFormat *)v33);
  }
  sub_1B5160((__int64)this, 0.0);
  if ( v31[0] && !_InterlockedSub((volatile signed __int32 *)v31[0], 1u) )
    free(v31[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v36 - __readfsqword(0x28u);
}
