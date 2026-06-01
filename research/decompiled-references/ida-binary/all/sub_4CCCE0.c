unsigned __int64 __fastcall sub_4CCCE0(QT::QWidget *this, int a2, __int64 a3)
{
  QT::QImage *v3; // r12
  unsigned int v5; // eax
  int v6; // edx
  const char *v7; // r14
  __m128i *v8; // rax
  __int64 v9; // rsi
  size_t v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // r13d
  size_t v13; // r8
  size_t v14; // rdx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  char *v17; // rax
  const char *v18; // r14
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rsi
  const char *v23; // rbp
  unsigned __int64 v24; // rdx
  size_t v25; // rax
  double v26; // xmm0_8
  char v27; // bp
  __int64 v29; // r13
  double v30; // xmm0_8
  __int64 v31; // r13
  size_t v32; // rax
  const char *v33; // r15
  double v34; // xmm0_8
  void **v35; // rsi
  size_t v36; // [rsp+0h] [rbp-C8h]
  size_t v37; // [rsp+8h] [rbp-C0h]
  __int64 v38; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+28h] [rbp-A0h]
  void *v41[4]; // [rsp+40h] [rbp-88h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int128 v43; // [rsp+68h] [rbp-60h]
  char *v44; // [rsp+78h] [rbp-50h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v3 = (QT::QWidget *)((char *)this + 48);
  v45 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, a3, 0);
  *(_QWORD *)this = &DockArrow___vtable;
  *((_QWORD *)this + 2) = DockArrow___vtable_at__16;
  QT::QImage::QImage((QT::QWidget *)((char *)this + 48));
  sub_545630();
  *((_QWORD *)this + 5) = a3;
  *((_DWORD *)this + 18) = a2;
  QT::QWidget::setVisible(this, 0);
  QT::QWidget::setAcceptDrops(this, 1);
  v5 = *((_DWORD *)this + 18);
  if ( v5 == 3 )
  {
    v6 = 6;
    v7 = "arrow_left.bmp";
  }
  else if ( v5 > 3 )
  {
    v6 = 7;
    v7 = "arrow_right.bmp";
    if ( v5 != 4 )
      goto LABEL_21;
  }
  else
  {
    if ( v5 != 1 )
    {
      v6 = 9;
      v7 = "arrow_down.bmp";
      if ( v5 == 2 )
        goto LABEL_5;
LABEL_21:
      ptr = (void *)QT::QImage::size(v3);
      QT::QWidget::resize(this, &ptr);
      QT::QWidget::setSizePolicy(this, 0);
      return v45 - __readfsqword(0x28u);
    }
    v6 = 8;
    v7 = "arrow_up.bmp";
  }
LABEL_5:
  *((_DWORD *)this + 19) = v6;
  v39 = 0;
  v40 = 0;
  v8 = (__m128i *)qvector_reserve(&v39, 0, 25, 1);
  v39 = (__int64)v8;
  *(_QWORD *)&v40 = 25;
  *v8 = _mm_load_si128((const __m128i *)&xmmword_5DDD10);
  v9 = v39;
  v8[1].m128i_i64[0] = 0x2F736B636F642F73LL;
  *(_BYTE *)(v9 + 24) = 0;
  v10 = strlen(v7);
  v11 = v40;
  v12 = v10;
  v13 = v10;
  if ( (_QWORD)v40 )
  {
    v11 = v40 - 1;
    v13 = v10 + v40 - 1;
  }
  v14 = v13 + 1;
  if ( *((_QWORD *)&v40 + 1) < v13 + 1 )
  {
    v37 = v13;
    v36 = v13 + 1;
    v39 = qvector_reserve(&v39, v9, v14, 1);
    v13 = v37;
    v9 = v39;
    v14 = v36;
  }
  *(_QWORD *)&v40 = v14;
  *(_BYTE *)(v9 + v13) = 0;
  v15 = (_QWORD *)(v11 + v39);
  *v15 = *(_QWORD *)v7;
  *(_QWORD *)((char *)v15 + v12 - 8) = *(_QWORD *)&v7[v12 - 8];
  v16 = (unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  v17 = (char *)v15 - v16;
  v18 = (const char *)(v7 - v17);
  v19 = (v12 + (_DWORD)v17) & 0xFFFFFFF8;
  if ( v19 >= 8 )
  {
    v20 = v19 & 0xFFFFFFF8;
    v21 = 0;
    do
    {
      v22 = v21;
      v21 += 8;
      *(_QWORD *)(v16 + v22) = *(_QWORD *)&v18[v22];
    }
    while ( v21 < v20 );
  }
  if ( (_QWORD)v40 )
  {
    v25 = v40 - 1;
    v23 = (const char *)v39;
    v24 = (unsigned __int64)(v40 - 1) >> 63;
    if ( v39 )
    {
LABEL_14:
      if ( !(_BYTE)v24 )
        goto LABEL_15;
    }
  }
  else
  {
    v23 = &s1;
    LOBYTE(v24) = 0;
    v25 = 0;
    if ( &s1 )
      goto LABEL_14;
  }
  v25 = 0;
  if ( v23 )
    v25 = strlen(v23);
LABEL_15:
  v26 = QT::QString::fromUtf8(&ptr, v25, v23);
  v27 = QT::QImage::load(v3, (const QT::QString *)&ptr, nullptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v27 )
  {
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39, (const char *)&ptr, v26);
    }
    goto LABEL_21;
  }
  v44 = "default";
  ptr = &dword_0 + 2;
  v43 = 0;
  QT::QMessageLogger::debug((QT::QMessageLogger *)&v38);
  v29 = v38;
  v30 = QT::QString::fromUtf8(v41, 10, "Can't load");
  QT::QTextStream::operator<<(v29, v41, v30);
  if ( v41[0] && !_InterlockedSub((volatile signed __int32 *)v41[0], 1u) )
    free(v41[0]);
  v31 = v38;
  if ( *(_BYTE *)(v38 + 48) )
  {
    QT::QTextStream::operator<<(v38, 32);
    v31 = v38;
  }
  v32 = 0;
  v33 = &s1;
  if ( (_QWORD)v40 )
  {
    v33 = (const char *)v39;
    if ( v39 )
    {
      if ( *(_BYTE *)v39 )
        v32 = strlen((const char *)(v39 + 1)) + 1;
    }
  }
  v34 = QT::QString::fromUtf8(v41, v32, v33);
  v35 = v41;
  QT::QTextStream::operator<<(v31, v41, v34);
  if ( v41[0] && !_InterlockedSub((volatile signed __int32 *)v41[0], 1u) )
    free(v41[0]);
  if ( *(_BYTE *)(v38 + 48) )
  {
    v35 = (void **)&qword_20;
    QT::QTextStream::operator<<(v38, 32);
  }
  QT::QDebug::~QDebug((QT::QDebug *)&v38);
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, (const char *)v35);
  }
  return v45 - __readfsqword(0x28u);
}
