unsigned __int64 __fastcall sub_1BB400(
        QT::QSyntaxHighlighter **this,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // r14
  QT::QAbstractButton *v11; // rax
  QT::QAbstractButton *v12; // rbp
  const QT::QString *v14; // rax
  const char *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rsi
  __m128i si128; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  __m128 v23; // xmm0
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  const char *v28; // rdi
  void **v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  QT::QWidget *v32; // rax
  QT::QObject *v33; // r14
  char v34; // [rsp+0h] [rbp-558h]
  char *v35; // [rsp+8h] [rbp-550h]
  __int64 v36; // [rsp+18h] [rbp-540h]
  __int64 v37; // [rsp+20h] [rbp-538h]
  __int64 v38; // [rsp+28h] [rbp-530h]
  __int16 v39; // [rsp+3Eh] [rbp-51Ah] BYREF
  __int64 v40; // [rsp+40h] [rbp-518h] BYREF
  __int128 v41; // [rsp+48h] [rbp-510h]
  void *ptr[4]; // [rsp+60h] [rbp-4F8h] BYREF
  void *v43[4]; // [rsp+80h] [rbp-4D8h] BYREF
  void *v44[4]; // [rsp+A0h] [rbp-4B8h] BYREF
  void *v45; // [rsp+C0h] [rbp-498h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-490h]
  _QWORD v47[2]; // [rsp+E0h] [rbp-478h] BYREF
  _BYTE v48[32]; // [rsp+F0h] [rbp-468h] BYREF
  char v49[1032]; // [rsp+110h] [rbp-448h] BYREF
  unsigned __int64 v50; // [rsp+518h] [rbp-40h]

  v9 = 1;
  v50 = __readfsqword(0x28u);
  v11 = (QT::QAbstractButton *)QT::QObject::sender((QT::QObject *)this);
  v12 = v11;
  while ( *(this + v9 + 45) != v11 )
  {
    if ( ++v9 == 12 )
      return v50 - __readfsqword(0x28u);
  }
  v40 = 0;
  v41 = 0;
  QT::QAbstractButton::text((QT::QAbstractButton *)ptr);
  QT::QString::fromUtf8(v44, 0, (const char *)&unk_5C2F25);
  QT::QString::fromUtf8(v43, 1, "&");
  v14 = (const QT::QString *)QT::QString::replace(ptr, v43, v44, 1);
  QT::QString::toUtf8_helper((QT::QString *)&v45, v14);
  v15 = (const char *)v46;
  if ( !(_QWORD)v46 )
    v15 = (const char *)&QT::QByteArray::_empty;
  sub_169A50(&v40, (__int64)"Set %s style\n", v15);
  if ( v45 && !_InterlockedSub((volatile signed __int32 *)v45, 1u) )
    free(v45);
  if ( v43[0] && !_InterlockedSub((volatile signed __int32 *)v43[0], 1u) )
    free(v43[0]);
  if ( v44[0] && !_InterlockedSub((volatile signed __int32 *)v44[0], 1u) )
    free(v44[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v16 = v41;
  if ( !(_QWORD)v41 )
  {
    v19 = v40;
    v18 = 53;
    v17 = 52;
    if ( *((_QWORD *)&v41 + 1) >= 0x35u )
      goto LABEL_21;
LABEL_27:
    v38 = v16;
    v37 = v17;
    v36 = v18;
    v40 = qvector_reserve(&v40, v19, v18, 1);
    v16 = v38;
    v19 = v40;
    v17 = v37;
    v18 = v36;
    goto LABEL_21;
  }
  v17 = v41 + 51;
  v18 = v41 + 52;
  v19 = v40;
  v16 = v41 - 1;
  if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 52) )
    goto LABEL_27;
LABEL_21:
  *(_QWORD *)&v41 = v18;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC590);
  *(_BYTE *)(v19 + v17) = 0;
  v21 = v16 + v40;
  *(__m128i *)v21 = si128;
  v22 = _mm_load_si128((const __m128i *)&xmmword_5DC5A0);
  *(_DWORD *)(v21 + 48) = 1044265530;
  *(__m128i *)(v21 + 16) = v22;
  v23 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC5B0);
  *(__m128 *)(v21 + 32) = v23;
  sub_5184C0((QT::QTextFormat *)v44);
  QT::QTextFormat::brushProperty((QT::QTextFormat *)&v45, (int)v44);
  LODWORD(v43[0]) = __ROR4__(_byteswap_ulong(QT::QColor::rgba((QT::QColor *)((char *)v45 + 8))), 8);
  QT::QBrush::~QBrush((QT::QBrush *)&v45);
  QT::QTextCharFormat::font((QT::QTextCharFormat *)&v45);
  v39 = (int)QT::QFont::weight((QT::QFont *)&v45) > 500;
  QT::QFont::~QFont((QT::QFont *)&v45);
  QT::QTextCharFormat::font((QT::QTextCharFormat *)&v45);
  LOWORD(ptr[0]) = (unsigned int)QT::QFont::style((QT::QFont *)&v45) != 0;
  QT::QFont::~QFont((QT::QFont *)&v45);
  v28 = &s1;
  if ( (_QWORD)v41 )
    LODWORD(v28) = v40;
  v29 = v43;
  if ( (unsigned int)sub_1697D0(
                       (int)v28,
                       (__int64)v43,
                       (__int64)&v39,
                       (__int64)ptr,
                       v24,
                       v25,
                       v23,
                       a3,
                       a4,
                       a5,
                       v26,
                       v27,
                       a8,
                       a9,
                       v34) == 1 )
  {
    v30 = QT::QColor::fromRgb(
            (QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong((unsigned int)v43[0]), 8),
            (unsigned int)v43);
    v47[1] = v31;
    v47[0] = v30;
    v45 = nullptr;
    v46 = 0;
    v32 = sub_1B98F0(this, (__int64 *)&v45);
    v33 = *(this + 40);
    if ( v33 == v32 )
    {
      v35 = (char *)&s1;
      if ( (_QWORD)v46 )
        v35 = (char *)v45;
      QT::QColor::operator QT::QVariant(v48, v47);
      QT::QObject::doSetProperty(v33, v35, (const QT::QVariant *)v48, (QT::QVariant *)v48);
      QT::QVariant::~QVariant((QT::QVariant *)v48);
      if ( (unsigned __int8)sub_527040(v33, v49, 1024, 0, v35) )
      {
        QT::QVariant::QVariant((QT::QVariant *)v48, v39 != 0);
        QT::QObject::doSetProperty(v33, v49, (const QT::QVariant *)v48, (QT::QVariant *)v48);
        QT::QVariant::~QVariant((QT::QVariant *)v48);
      }
      if ( (unsigned __int8)sub_527040(v33, v49, 1024, 1, v35) )
      {
        QT::QVariant::QVariant((QT::QVariant *)v48, LOWORD(ptr[0]) != 0);
        QT::QObject::doSetProperty(v33, v49, (const QT::QVariant *)v48, (QT::QVariant *)v48);
        QT::QVariant::~QVariant((QT::QVariant *)v48);
      }
      QT::QSyntaxHighlighter::rehighlight(*(this + 44));
    }
    v29 = (void **)v47;
    sub_4AF280(v12);
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45, (const char *)v47);
    }
  }
  QT::QTextFormat::~QTextFormat((QT::QTextFormat *)v44);
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, (const char *)v29);
  }
  return v50 - __readfsqword(0x28u);
}
