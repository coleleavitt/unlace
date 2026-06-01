__int64 __fastcall sub_53AB40(void **this)
{
  void **v1; // rsi
  void (__fastcall **v2)(char **, void **); // rax
  char *v4; // rdi
  bool v5; // bp
  QT::QWidget *v6; // rax
  QT::QScreen *v7; // r12
  void **v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm1
  unsigned int v13; // r12d
  __int64 (*v15)(); // rax
  __int64 v16; // r12
  unsigned __int64 v17; // r14
  const char *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  void **v21; // [rsp+0h] [rbp-88h]
  char *s2; // [rsp+8h] [rbp-80h]
  char *v23; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-70h]
  void *ptr[11]; // [rsp+30h] [rbp-58h] BYREF

  v1 = this;
  v2 = (void (__fastcall **)(char **, void **))*this;
  ptr[3] = (void *)__readfsqword(0x28u);
  v2[58](&v23, this);
  v4 = (char *)QT::QCoreApplication::self;
  v5 = QT::QCoreApplication::self != nullptr && v24 > 1;
  if ( !v5
    || (v15 = *(__int64 (**)())(*QT::QCoreApplication::self + 192LL), v15 != sub_53A4B0)
    && (v1 = this, !((unsigned __int8 (__fastcall *)(_QWORD *, void **))v15)(QT::QCoreApplication::self, this)) )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v16 = qword_8D2570 + 48 * xmmword_8D2578;
  if ( qword_8D2570 != v16 )
  {
    v17 = v24;
    v18 = &s1;
    v19 = qword_8D2570;
    s2 = v23;
    if ( v24 )
      v18 = v23;
    v20 = *(_QWORD *)(qword_8D2570 + 8);
    v21 = (void **)v18;
    if ( !v24 )
      goto LABEL_21;
    while ( 1 )
    {
      v1 = (void **)s2;
      v4 = (char *)&s1;
      if ( v20 )
        goto LABEL_22;
      while ( 1 )
      {
        if ( !strcmp(v4, (const char *)v1) )
        {
LABEL_26:
          if ( v19 )
          {
            v1 = (void **)(v19 + 24);
            v4 = (char *)this;
            QT::QWidget::restoreGeometry((QT::QWidget *)this, (const QT::QByteArray *)(v19 + 24));
          }
          goto LABEL_3;
        }
        v19 += 48;
        if ( v16 == v19 )
          goto LABEL_3;
        v20 = *(_QWORD *)(v19 + 8);
        if ( v17 )
          break;
LABEL_21:
        if ( !v20 )
          goto LABEL_26;
LABEL_22:
        v4 = *(char **)v19;
        v1 = v21;
      }
    }
  }
LABEL_3:
  v6 = (QT::QWidget *)QT::QApplication::focusWidget((QT::QApplication *)v4);
  v7 = v6;
  if ( v6 )
    v7 = (QT::QScreen *)QT::QWidget::screen(v6);
  ptr[0] = (void *)QT::QWidget::pos((QT::QWidget *)this);
  v8 = ptr;
  v9 = QT::QGuiApplication::screenAt(ptr);
  if ( v7 != (QT::QScreen *)v9 && v9 != 0 && v7 )
  {
    v10 = QT::QScreen::geometry(v7);
    v8 = this;
    v12 = _mm_sub_epi32(
            _mm_loadl_epi64((const __m128i *)((char *)*(this + 4) + 28)),
            _mm_loadl_epi64((const __m128i *)((char *)*(this + 4) + 20)));
    v1 = ptr;
    ptr[0] = (void *)_mm_sub_epi32(
                       _mm_unpacklo_epi32(
                         (__m128i)(unsigned __int64)(((int)v11 + (__int64)(int)v10) / 2),
                         _mm_cvtsi32_si128(((v11 >> 32) + (v10 >> 32)) / 2)),
                       _mm_srai_epi32(_mm_sub_epi32(v12, _mm_cmpgt_epi32((__m128i)0LL, v12)), 1u)).m128i_u64[0];
    QT::QWidget::move(this, ptr);
  }
  *(this + 5) = (void *)get_nsec_stamp(v8, v1);
  v13 = QT::QDialog::exec((QT::QDialog *)this);
  if ( v5 )
  {
    QT::QWidget::saveGeometry((QT::QWidget *)ptr);
    v1 = (void **)&v23;
    sub_53A700(&qword_8D2570, (__int64)&v23, (__int64)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  if ( v23 )
  {
    v24 = 0;
    qfree(v23, (const char *)v1);
  }
  return v13;
}
