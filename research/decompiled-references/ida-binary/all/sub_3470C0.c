__int64 __fastcall sub_3470C0(
        __int64 a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  QT::QLabel *v11; // r14
  double v12; // xmm0_8
  QT::QWidget *v13; // r14
  void *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  bool v19; // cc
  QT::QLabel *v20; // r12
  unsigned __int64 v21; // rdx
  size_t v22; // rax
  const char *v23; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  QT::QLabel *v31; // r12
  size_t v32; // rax
  QT::QWidget *v33; // r12
  unsigned __int64 v34; // rdx
  QT::QLabel *v35; // r12
  const char *v36; // r8
  const char *v37; // rcx
  double v38; // xmm0_8
  QT::QWidget *v39; // rbp
  size_t v40; // rax
  char v41; // [rsp+0h] [rbp-4D8h]
  const char *v42; // [rsp+8h] [rbp-4D0h]
  void *v43[4]; // [rsp+10h] [rbp-4C8h] BYREF
  void *v44[4]; // [rsp+30h] [rbp-4A8h] BYREF
  void *v45; // [rsp+50h] [rbp-488h] BYREF
  const char *v46; // [rsp+58h] [rbp-480h]
  void *ptr; // [rsp+70h] [rbp-468h] BYREF
  const char *v48; // [rsp+78h] [rbp-460h]
  char s[1032]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int64 v50; // [rsp+498h] [rbp-40h]

  v11 = *(QT::QLabel **)(a1 + 88);
  v50 = __readfsqword(0x28u);
  v12 = QT::QString::fromUtf8(&ptr, 0, (const char *)&unk_5C2F25);
  QT::QLabel::setText(v11, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v13 = *(QT::QWidget **)(a1 + 704);
  *(double *)a3.m128_u64 = QT::QString::fromUtf8(&ptr, 0, (const char *)&unk_5C2F25, v12);
  v14 = v13;
  QT::QWidget::setToolTip(v13, (const QT::QString *)&ptr);
  if ( !ptr || _InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    v19 = a2 <= 3;
    if ( a2 != 3 )
      goto LABEL_7;
LABEL_21:
    if ( qword_8CD7E8 )
    {
      sub_27ED20(qword_8CD7E8, (__int64)&ptr, *(double *)a3.m128_u64, v15, v16);
      *((_QWORD *)&xmmword_8BCDB0 + 1) = xmmword_8CC810;
      if ( (unsigned int)sub_1697D0(
                           (int)"Cross reference search\n\n<~T~arget address:$::40::>\n\n\n",
                           (__int64)&xmmword_8BCDB0 + 8,
                           v25,
                           v26,
                           v27,
                           v28,
                           a3,
                           a4,
                           a5,
                           a6,
                           v29,
                           v30,
                           a9,
                           a10,
                           v41) )
      {
        ea2str(s, 1024, *((_QWORD *)&xmmword_8BCDB0 + 1));
        v31 = *(QT::QLabel **)(a1 + 88);
        v32 = strlen(s);
        *(double *)a3.m128_u64 = QT::QString::fromUtf8(&ptr, v32, s);
        QT::QLabel::setText(v31, (const QT::QString *)&ptr);
        goto LABEL_24;
      }
    }
    return 0;
  }
  v14 = ptr;
  free(ptr);
  v19 = a2 <= 3;
  if ( a2 == 3 )
    goto LABEL_21;
LABEL_7:
  if ( v19 )
  {
    if ( a2 == 1 )
    {
      if ( (unsigned __int8)sub_32AF40(*(double *)a3.m128_u64) )
      {
        v20 = *(QT::QLabel **)(a1 + 88);
        if ( (_QWORD)xmmword_8D0AC8 )
        {
          v22 = xmmword_8D0AC8 - 1;
          v23 = (const char *)qword_8D0AC0;
          v34 = (unsigned __int64)(xmmword_8D0AC8 - 1) >> 63;
        }
        else
        {
          LOBYTE(v34) = 0;
          v22 = 0;
          v23 = &s1;
        }
        if ( v23 && !(_BYTE)v34 )
          goto LABEL_16;
        v22 = 0;
        if ( !v23 )
          goto LABEL_16;
LABEL_66:
        v22 = strlen(v23);
LABEL_16:
        *(double *)a3.m128_u64 = QT::QString::fromUtf8(&ptr, v22, v23);
        QT::QLabel::setText(v20, (const QT::QString *)&ptr);
LABEL_24:
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        goto LABEL_27;
      }
      return 0;
    }
    if ( a2 == 2 )
    {
      if ( qword_8CD7E8 && (unsigned int)sub_1F3560(qword_8CD7E8, (__int64)&ptr, v15, v16, *(double *)a3.m128_u64) )
      {
        v20 = *(QT::QLabel **)(a1 + 88);
        if ( (_QWORD)xmmword_8D0AA8 )
        {
          v22 = xmmword_8D0AA8 - 1;
          v23 = (const char *)qword_8D0AA0;
          v21 = (unsigned __int64)(xmmword_8D0AA8 - 1) >> 63;
        }
        else
        {
          LOBYTE(v21) = 0;
          v22 = 0;
          v23 = &s1;
        }
        if ( v23 && !(_BYTE)v21 )
          goto LABEL_16;
        v22 = 0;
        if ( !v23 )
          goto LABEL_16;
        goto LABEL_66;
      }
      return 0;
    }
  }
  else if ( a2 == 4 )
  {
    if ( (unsigned __int8)sub_328690((__int64)v14, (__int64)&ptr, v15, v16, v17, v18) )
    {
      v35 = *(QT::QLabel **)(a1 + 88);
      QT::QString::number((QT::QString *)&ptr, SDWORD2(xmmword_8BCDB0), 10);
      QT::QLabel::setText(v35, (const QT::QString *)&ptr);
      goto LABEL_24;
    }
    return 0;
  }
LABEL_27:
  v33 = *(QT::QWidget **)(a1 + 704);
  QT::QString::fromUtf8(&ptr, 0, (const char *)&unk_5C2F25, *(double *)a3.m128_u64);
  QT::QWidget::setToolTip(v33, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( (unsigned int)QT::QComboBox::currentIndex(*(QT::QComboBox **)(a1 + 704)) != -1 )
  {
    QT::QComboBox::currentText((QT::QComboBox *)v43);
    if ( v43[2] )
    {
      QT::QLabel::text((QT::QLabel *)v44);
      if ( v44[2] )
      {
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v44);
        v36 = v48;
        if ( !v48 )
          v36 = (const char *)&QT::QByteArray::_empty;
        v42 = v36;
        QT::QString::toUtf8_helper((QT::QString *)&v45, (const QT::QString *)v43);
        v37 = v46;
        if ( !v46 )
          v37 = (const char *)&QT::QByteArray::_empty;
        v38 = qsnprintf(s, 1024, "%s : \"%s\"", v37, v42);
        if ( v45 && !_InterlockedSub((volatile signed __int32 *)v45, 1u) )
          free(v45);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        v39 = *(QT::QWidget **)(a1 + 704);
        v40 = strlen(s);
        QT::QString::fromUtf8(&ptr, v40, s, v38);
        QT::QWidget::setToolTip(v39, (const QT::QString *)&ptr);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
      else
      {
        QT::QWidget::setToolTip(*(QT::QWidget **)(a1 + 704), (const QT::QString *)v43);
      }
      if ( v44[0] && !_InterlockedSub((volatile signed __int32 *)v44[0], 1u) )
        free(v44[0]);
    }
    if ( v43[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v43[0], 1u) )
        free(v43[0]);
    }
  }
  return 1;
}
