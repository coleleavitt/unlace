unsigned __int64 __fastcall sub_542320(QT::QWidget *this, __int64 a2)
{
  char v3; // si
  QT::QAbstractButton *v4; // rbx
  __int64 v5; // rax
  size_t v6; // rax
  const char *v7; // rbx
  size_t v8; // rdx
  __m128i si128; // xmm0
  double v10; // xmm0_8
  int v11; // ebx
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // ebx
  int v19; // ebx
  __int64 v20; // rsi
  _QWORD *v21; // rdi
  unsigned __int64 v22; // rbx
  QT::QWidget *v24; // rax
  __int64 v25; // rax
  size_t v26; // rdx
  size_t v27; // rax
  const char *v28; // rbp
  int v30; // [rsp+18h] [rbp-B0h]
  int v31; // [rsp+1Ch] [rbp-ACh]
  _BYTE v32[8]; // [rsp+28h] [rbp-A0h] BYREF
  void *v33[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v34; // [rsp+40h] [rbp-88h]
  void *v35[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v36; // [rsp+60h] [rbp-68h]
  void *ptr[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v38; // [rsp+80h] [rbp-48h]
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v3 = *(_BYTE *)(a2 + 48);
  v39 = __readfsqword(0x28u);
  v4 = *((QT::QAbstractButton **)this + 8);
  v31 = *(_DWORD *)(*((_QWORD *)v4 + 4) + 8LL);
  if ( v3 )
  {
    v25 = *(_QWORD *)(a2 + 32);
    if ( v25 )
    {
      v27 = v25 - 1;
      v28 = *(const char **)(a2 + 24);
      v26 = v27 >> 63;
    }
    else
    {
      LOBYTE(v26) = 0;
      v27 = 0;
      v28 = &s1;
    }
    if ( !v28 || (_BYTE)v26 )
    {
      v27 = 0;
      if ( v28 )
        v27 = strlen(v28);
    }
    QT::QString::fromUtf8(ptr, v27, v28);
    QT::QAbstractButton::setText(v4, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v4 = *((QT::QAbstractButton **)this + 8);
  }
  (*(void (__fastcall **)(QT::QAbstractButton *))(*(_QWORD *)v4 + 104LL))(v4);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    v6 = v5 - 1;
    v7 = *(const char **)a2;
    v8 = v6 >> 63;
  }
  else
  {
    LOBYTE(v8) = 0;
    v6 = 0;
    v7 = &s1;
  }
  if ( !v7 || (_BYTE)v8 )
  {
    v6 = 0;
    if ( v7 )
      v6 = strlen(v7);
  }
  QT::QString::fromUtf8(v33, v6, v7);
  si128 = _mm_load_si128((const __m128i *)v33);
  v36 = v34;
  *(__m128i *)v35 = si128;
  if ( si128.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
  v30 = 10;
  while ( 1 )
  {
    v10 = QT::QString::fromUtf8(ptr, 1, "\n");
    v11 = QT::QString::indexOf(v35, ptr, 0, 1, v10);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v32, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
    if ( v30 <= (int)QT::QFontMetrics::horizontalAdvance((QT::QFontMetrics *)v32, (const QT::QString *)v35, v11) )
    {
      QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)ptr, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
      v30 = QT::QFontMetrics::horizontalAdvance((QT::QFontMetrics *)ptr, (const QT::QString *)v35, v11);
      QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)ptr);
    }
    QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v32);
    if ( v11 == -1 )
      break;
    v12 = v11 + 1;
    if ( v12 >= v36 )
      break;
    QT::QString::mid(ptr, v35, v12, -1);
    v13 = _mm_load_si128((const __m128i *)v35);
    v14 = v36;
    *(__m128i *)v35 = _mm_load_si128((const __m128i *)ptr);
    v36 = v38;
    v38 = v14;
    *(__m128i *)ptr = v13;
    if ( v13.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v13.m128i_i64[0], 1u) )
        free(ptr[0]);
    }
  }
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)ptr, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
  v15 = QT::QFontMetrics::horizontalAdvance(ptr, 48);
  v16 = v30 % v15;
  v17 = v30 + v15 - v30 % v15;
  if ( !v16 )
    v17 = v30;
  v18 = v17;
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)ptr);
  QT::QLabel::setText(*((QT::QLabel **)this + 7), (const QT::QString *)v33);
  QT::QWidget::update(*((QT::QWidget **)this + 7));
  HIDWORD(ptr[0]) = 80;
  LODWORD(ptr[0]) = v18 + 80;
  QT::QWidget::resize(this, ptr);
  v19 = *(_DWORD *)(*((_QWORD *)this + 4) + 8LL) & 0x8000;
  if ( v19 )
  {
    if ( *(_BYTE *)(a2 + 48) == ((v31 & 0x8000) != 0) )
    {
      QT::QWidget::update(*((QT::QWidget **)this + 7));
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*QT::QCoreApplication::self + 448LL))(
        QT::QCoreApplication::self,
        200,
        1);
      goto LABEL_28;
    }
  }
  else
  {
    v24 = (QT::QWidget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 112LL))(*((_QWORD *)this + 6));
    sub_5193B0(this, v24);
    QT::QDialog::setModal(this, 1);
    QT::QWidget::setWindowModality(this, 2);
    QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFEFFFF);
    QT::QWidget::show(this);
    QT::QWidget::setFocus(this, 7);
  }
  v20 = 500;
  v21 = QT::QCoreApplication::self;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*QT::QCoreApplication::self + 448LL))(
    QT::QCoreApplication::self,
    500,
    1);
  if ( !v19 )
  {
    v22 = get_nsec_stamp(v21, 500) + 100000000;
    while ( !(unsigned __int8)QT::QWidget::isActiveWindow(this) && get_nsec_stamp(this, v20) < v22 )
    {
      v20 = 100;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*QT::QCoreApplication::self + 448LL))(
        QT::QCoreApplication::self,
        100,
        1);
    }
  }
LABEL_28:
  if ( v35[0] && !_InterlockedSub((volatile signed __int32 *)v35[0], 1u) )
    free(v35[0]);
  if ( v33[0] && !_InterlockedSub((volatile signed __int32 *)v33[0], 1u) )
    free(v33[0]);
  return v39 - __readfsqword(0x28u);
}
