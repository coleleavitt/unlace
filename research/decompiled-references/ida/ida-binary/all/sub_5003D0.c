__int64 __fastcall sub_5003D0(
        __int64 *a1,
        QT::QAbstractButton **a2,
        unsigned __int8 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v18; // rax
  void (*v20)(); // rax
  char v21; // al
  __int64 v22; // rdi
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  QT::QComboBox *v27; // rax
  QT::QLineEdit *v28; // rbp
  __int64 v29; // rax
  size_t v30; // rdx
  size_t v31; // rax
  const char *v32; // rbx
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  size_t v35; // rax
  char *v36; // rbx
  double v37; // xmm0_8
  void (__fastcall *v38)(QT::QAbstractButton **, _BOOL8, double); // rbx
  _BOOL8 v39; // rsi
  __int64 v40; // rax
  size_t v41; // rdx
  size_t v42; // rax
  const char *v43; // rbx
  double v44; // xmm0_8
  __int64 v45; // rax
  size_t v46; // rax
  const char *v47; // rbx
  size_t v48; // rdx
  int v49; // ebp
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r12
  __int64 v54; // rax
  size_t v55; // rdx
  __int64 v56; // rbp
  __int64 v57; // rax
  size_t v58; // rax
  const char *v59; // r12
  size_t v60; // rdx
  double v61; // xmm0_8
  __int64 v62; // rax
  double v63; // xmm4_8
  double v64; // xmm5_8
  int v65; // ebp
  __int64 v66; // rbx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r12
  QT::QTabWidget *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  size_t v73; // rax
  const char *v74; // r12
  size_t v75; // rdx
  const char *v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rcx
  QT::QComboBox *v79; // rdi
  __int64 v80; // r8
  __int64 v81; // r9
  __m128 v82; // xmm4
  __m128 v83; // xmm5
  QT::QLineEdit *v84; // rbp
  size_t v85; // rax
  char *v86; // rbx
  unsigned __int64 v87; // rdx
  double v88; // xmm0_8
  char *s; // [rsp+0h] [rbp-98h] BYREF
  __int128 v90; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v92; // [rsp+28h] [rbp-70h]
  __int64 v93; // [rsp+30h] [rbp-68h]
  __int128 v94; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v95; // [rsp+58h] [rbp-40h]

  v18 = *a1;
  v95 = __readfsqword(0x28u);
  v20 = *(void (**)())(v18 + 424);
  if ( v20 == nullsub_293 )
  {
    v21 = a3 - 32;
    goto LABEL_3;
  }
  v20();
  v21 = a3 - 32;
  if ( (unsigned __int8)(a3 - 32) <= 0x54u )
  {
LABEL_3:
    switch ( v21 )
    {
      case 0:
      case 72:
        v33 = (unsigned int)*((char *)a2 + 40);
        v90 = 0;
        s = nullptr;
        sub_4F9450(
          (__int64)a1,
          (const char *)a4,
          v33,
          (__int64 *)&s,
          1,
          a6,
          (__m128)0LL,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14);
        if ( (_QWORD)v90 )
        {
          v35 = v90 - 1;
          v36 = s;
          v34 = (unsigned __int64)(v90 - 1) >> 63;
        }
        else
        {
          LOBYTE(v34) = 0;
          v35 = 0;
          v36 = (char *)&s1;
        }
        if ( !v36 || (_BYTE)v34 )
        {
          v35 = 0;
          if ( v36 )
            v35 = strlen(v36);
        }
        v37 = QT::QString::fromUtf8(&ptr, v35, v36);
        QT::QLabel::setText((QT::QLabel *)a2, (const QT::QString *)&ptr);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        v38 = *((void (__fastcall **)(QT::QAbstractButton **, _BOOL8, double))*a2 + 13);
        QT::QLabel::text((QT::QLabel *)&ptr);
        v39 = v93 != 0;
        v38(a2, v39, v37);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( s )
        {
          *(_QWORD *)&v90 = 0;
          qfree(s, (const char *)v39);
        }
        return 1;
      case 29:
        v70 = (QT::QTabWidget *)QT::QMetaObject::cast(
                                  (QT::QMetaObject *)&QT::QTabWidget::staticMetaObject,
                                  (const QT::QObject *)a2);
        QT::QTabWidget::setCurrentIndex(v70, *(_DWORD *)a4);
        return 1;
      case 34:
      case 75:
        v40 = *((_QWORD *)a4 + 1);
        if ( v40 )
        {
          v42 = v40 - 1;
          v43 = *(const char **)a4;
          v41 = v42 >> 63;
        }
        else
        {
          LOBYTE(v41) = 0;
          v42 = 0;
          v43 = &s1;
        }
        if ( !v43 || (_BYTE)v41 )
        {
          v42 = 0;
          if ( v43 )
            v42 = strlen(v43);
        }
        v44 = QT::QString::fromUtf8(&ptr, v42, v43);
        sub_4FED90((__int64)a1, (QT::QAbstractButton *)a2, (const QT::QString *)&ptr, v44, a8);
        goto LABEL_14;
      case 35:
      case 50:
      case 67:
      case 82:
        QT::QAbstractButton::setChecked((QT::QAbstractButton *)a2, *a4 != 0);
        return 1;
      case 37:
        v62 = sub_50FA70(a2);
        if ( v62 && a4 )
          sub_4A8AF0(v62, (__int64)a4, -1, a7, a8, a9, a10, v63, v64, a13, a14);
        return 1;
      case 39:
        v65 = *a4;
        v66 = 0;
        QT::QButtonGroup::buttons((QT::QButtonGroup *)&ptr);
        v69 = (unsigned int)(v93 - 1);
        if ( (int)v93 > 0 )
        {
          while ( 1 )
          {
            if ( !ptr || *(int *)ptr > 1 )
              sub_4FFFF0((__int64)&ptr, 0, 0, 0, v67, v68);
            QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(v92 + 8 * v66), (v65 >> v66) & 1);
            if ( v69 == v66 )
              break;
            ++v66;
          }
        }
        goto LABEL_14;
      case 41:
      case 73:
      case 81:
        v27 = (QT::QComboBox *)QT::QMetaObject::cast(
                                 (QT::QMetaObject *)&QT::QComboBox::staticMetaObject,
                                 (const QT::QObject *)a2);
        v28 = (QT::QLineEdit *)QT::QComboBox::lineEdit(v27);
        v29 = *((_QWORD *)a4 + 1);
        if ( v29 )
        {
          v31 = v29 - 1;
          v32 = *(const char **)a4;
          v30 = v31 >> 63;
        }
        else
        {
          LOBYTE(v30) = 0;
          v31 = 0;
          v32 = &s1;
        }
        if ( !v32 || (_BYTE)v30 )
        {
          v31 = 0;
          if ( v32 )
            goto LABEL_98;
        }
        goto LABEL_13;
      case 43:
        if ( *(_DWORD *)a4 == -1 )
        {
          LODWORD(v94) = 0;
          *(_QWORD *)((char *)&v94 + 4) = 0xFFFF;
          WORD6(v94) = 0;
        }
        else
        {
          *(_QWORD *)&v94 = QT::QColor::fromRgb(
                              (QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(*(_DWORD *)a4), 8),
                              (unsigned int)a2);
          *((_QWORD *)&v94 + 1) = v71;
        }
        sub_4AF280(a2[5], (int *)&v94);
        return 1;
      case 66:
        if ( (unsigned __int8)QT::QComboBox::isEditable((QT::QComboBox *)a2) )
        {
          v45 = *((_QWORD *)a4 + 1);
          if ( v45 )
          {
            v46 = v45 - 1;
            v47 = *(const char **)a4;
            v48 = v46 >> 63;
          }
          else
          {
            LOBYTE(v48) = 0;
            v46 = 0;
            v47 = &s1;
          }
          if ( !v47 || (_BYTE)v48 )
          {
            v46 = 0;
            if ( v47 )
              v46 = strlen(v47);
          }
          QT::QString::fromUtf8(&ptr, v46, v47);
          QT::QComboBox::setEditText((QT::QComboBox *)a2, (const QT::QString *)&ptr);
LABEL_14:
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
        }
        else
        {
          QT::QComboBox::setCurrentIndex((QT::QComboBox *)a2, *(_DWORD *)a4);
        }
        break;
      case 71:
        v49 = *a4;
        v50 = 0;
        QT::QButtonGroup::buttons((QT::QButtonGroup *)&ptr);
        v53 = (unsigned int)(v93 - 1);
        if ( (int)v93 > 0 )
        {
          while ( 1 )
          {
            if ( !ptr || *(int *)ptr > 1 )
              sub_4FFFF0((__int64)&ptr, 0, 0, 0, v51, v52);
            QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(v92 + 8 * v50), v49 == (_DWORD)v50);
            if ( v50 == v53 )
              break;
            ++v50;
          }
        }
        goto LABEL_14;
      case 80:
        v28 = (QT::QLineEdit *)QT::QMetaObject::cast((QT::QMetaObject *)&off_89BE00, (const QT::QObject *)a2);
        v54 = *((_QWORD *)a4 + 1);
        if ( v54 )
        {
          v31 = v54 - 1;
          v32 = *(const char **)a4;
          v55 = v31 >> 63;
        }
        else
        {
          LOBYTE(v55) = 0;
          v31 = 0;
          v32 = &s1;
        }
        if ( !v32 || (_BYTE)v55 )
        {
          v31 = 0;
          if ( v32 )
LABEL_98:
            v31 = strlen(v32);
        }
LABEL_13:
        QT::QString::fromUtf8(&ptr, v31, v32);
        QT::QLineEdit::setText(v28, (const QT::QString *)&ptr);
        goto LABEL_14;
      case 84:
        v56 = sub_50FF00(a2);
        *(_BYTE *)(v56 + 105) = a4[16];
        *(_BYTE *)(v56 + 105) &= 1u;
        sub_527D10((QT::QPlainTextEdit *)v56);
        QT::QPlainTextEdit::setReadOnly((QT::QPlainTextEdit *)v56, (a4[16] & 4) != 0);
        if ( (~(unsigned __int8)a4[16] & 0x84) != 0 )
        {
          v57 = *((_QWORD *)a4 + 2);
          if ( v57 )
          {
            v58 = v57 - 1;
            v59 = *((const char **)a4 + 1);
            v60 = v58 >> 63;
          }
          else
          {
            LOBYTE(v60) = 0;
            v58 = 0;
            v59 = &s1;
          }
          if ( !v59 || (_BYTE)v60 )
          {
            v58 = 0;
            if ( v59 )
              v58 = strlen(v59);
          }
          v61 = QT::QString::fromUtf8(&ptr, v58, v59);
          QT::QPlainTextEdit::setPlainText((QT::QPlainTextEdit *)v56, (const QT::QString *)&ptr);
        }
        else
        {
          QT::QPlainTextEdit::clear((QT::QPlainTextEdit *)v56);
          v72 = *((_QWORD *)a4 + 2);
          if ( v72 )
          {
            v73 = v72 - 1;
            v74 = *((const char **)a4 + 1);
            v75 = v73 >> 63;
          }
          else
          {
            LOBYTE(v75) = 0;
            v73 = 0;
            v74 = &s1;
          }
          if ( !v74 || (_BYTE)v75 )
          {
            v73 = 0;
            if ( v74 )
              v73 = strlen(v74);
          }
          v61 = QT::QString::fromUtf8(&ptr, v73, v74);
          QT::QPlainTextEdit::appendHtml((QT::QPlainTextEdit *)v56, (const QT::QString *)&ptr);
        }
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        *(_BYTE *)(v56 + 104) = (a4[16] & 0x10) != 0;
        QT::QFont::QFont(
          (QT::QFont *)&ptr,
          (const QT::QFont *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 8) + 16LL) + 32LL) + 56LL));
        if ( (a4[16] & 0x20) != 0 )
          sub_47A5E0(QT::QCoreApplication::self, (__int64)&ptr, "Text input");
        if ( (unsigned __int8)QT::QFont::operator!=(*(_QWORD *)(v56 + 32) + 56LL, &ptr, v61) )
          QT::QWidget::setFont((QT::QWidget *)v56, (const QT::QFont *)&ptr);
        if ( (a4[16] & 8) != 0 )
          QT::QPlainTextEdit::selectAll((QT::QPlainTextEdit *)v56);
        QT::QFont::~QFont((QT::QFont *)&ptr);
        return 1;
      default:
        goto LABEL_5;
    }
    return 1;
  }
LABEL_5:
  v22 = sub_508440((unsigned int)(char)a3);
  if ( v22 )
    return (*(__int64 (__fastcall **)(__int64, __int64, QT::QAbstractButton **, unsigned __int16 *))(*(_QWORD *)v22 + 32LL))(
             v22,
             a5,
             a2,
             a4);
  v76 = (const char *)a4;
  v90 = 0;
  s = nullptr;
  if ( (unsigned __int8)sub_4F9450(
                          (__int64)a1,
                          (const char *)a4,
                          (unsigned int)(char)a3,
                          (__int64 *)&s,
                          0,
                          v23,
                          (__m128)0LL,
                          a8,
                          a9,
                          a10,
                          v24,
                          v25,
                          a13,
                          a14) )
  {
    v79 = (QT::QComboBox *)QT::QMetaObject::cast(
                             (QT::QMetaObject *)&QT::QComboBox::staticMetaObject,
                             (const QT::QObject *)a2);
    if ( v79 )
    {
      v84 = (QT::QLineEdit *)QT::QComboBox::lineEdit(v79);
      if ( (_QWORD)v90 )
      {
        v85 = v90 - 1;
        v86 = s;
        v87 = (unsigned __int64)(v90 - 1) >> 63;
      }
      else
      {
        LOBYTE(v87) = 0;
        v85 = 0;
        v86 = (char *)&s1;
      }
      if ( !v86 || (_BYTE)v87 )
      {
        v85 = 0;
        if ( v86 )
          v85 = strlen(v86);
      }
      v88 = QT::QString::fromUtf8(&ptr, v85, v86);
      QT::QLineEdit::setText(v84, (const QT::QString *)&ptr);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( s )
      {
        *(_QWORD *)&v90 = 0;
        qfree(s, (const char *)&ptr, v88);
      }
      return 1;
    }
    v76 = (const char *)a3;
    sub_169700(
      (int)"warning: unidentified control: %c\n",
      a3,
      v77,
      v78,
      v80,
      v81,
      (__m128)0LL,
      a8,
      a9,
      a10,
      v82,
      v83,
      a13,
      a14,
      (char)s);
  }
  if ( s )
  {
    *(_QWORD *)&v90 = 0;
    qfree(s, v76);
  }
  return 0;
}
