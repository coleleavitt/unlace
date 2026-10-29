__int64 __fastcall sub_500EB0(
        __int64 a1,
        const QT::QObject *a2,
        unsigned __int8 a3,
        char *a4,
        void *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        unsigned int a15,
        char *a16)
{
  unsigned int v16; // ebx
  char v19; // al
  unsigned int v20; // r9d
  char *v21; // r8
  void (*v23)(void); // rax
  int v24; // eax
  __int64 v26; // rax
  char *v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  void *v30; // r14
  int v31; // r12d
  char isChecked; // si
  int v33; // edx
  volatile signed __int32 *v34; // rax
  __int64 *v35; // rax
  double v36; // xmm4_8
  double v37; // xmm5_8
  QT::QTabWidget *v38; // rax
  __int64 v39; // r12
  char *v40; // r15
  size_t v41; // rax
  size_t v42; // r14
  __int16 v43; // ax
  __int64 v44; // rdx
  __int64 v45; // rcx
  char *v46; // r8
  void *v47; // r11
  __int64 v48; // r9
  size_t v49; // r15
  const char *v50; // rsi
  unsigned int v51; // eax
  void *v52; // rdi
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r14
  __int64 i; // r15
  int v57; // r8d
  char *v58; // r12
  size_t v59; // rax
  size_t v60; // r15
  QT::QComboBox *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __m128 v64; // xmm4
  __m128 v65; // xmm5
  char *v66; // r15
  void *v67; // r11
  __int64 v68; // r13
  unsigned int v69; // eax
  size_t v70; // rdx
  void *v71; // rdi
  size_t v72; // r14
  void *v73; // rdi
  const void *v74; // rsi
  __int64 v75; // rax
  __int64 v76; // [rsp-10h] [rbp-120h]
  __int64 v77; // [rsp-10h] [rbp-120h]
  const char *v78; // [rsp-8h] [rbp-118h]
  char v79; // [rsp+0h] [rbp-110h]
  unsigned int v80; // [rsp+10h] [rbp-100h]
  char *v81; // [rsp+10h] [rbp-100h]
  int v82; // [rsp+10h] [rbp-100h]
  unsigned int v83; // [rsp+18h] [rbp-F8h]
  char *src; // [rsp+20h] [rbp-F0h]
  unsigned int srca; // [rsp+20h] [rbp-F0h]
  char *srcc; // [rsp+20h] [rbp-F0h]
  unsigned int srcb; // [rsp+20h] [rbp-F0h]
  char *srcd; // [rsp+20h] [rbp-F0h]
  char *srce; // [rsp+20h] [rbp-F0h]
  unsigned int srcg; // [rsp+20h] [rbp-F0h]
  void *srcf; // [rsp+20h] [rbp-F0h]
  unsigned int n; // [rsp+28h] [rbp-E8h]
  size_t na; // [rsp+28h] [rbp-E8h]
  size_t nb; // [rsp+28h] [rbp-E8h]
  unsigned int nc; // [rsp+28h] [rbp-E8h]
  unsigned int nd; // [rsp+28h] [rbp-E8h]
  size_t ne; // [rsp+28h] [rbp-E8h]
  unsigned int nf; // [rsp+28h] [rbp-E8h]
  unsigned int ng; // [rsp+28h] [rbp-E8h]
  size_t nh; // [rsp+28h] [rbp-E8h]
  size_t nj; // [rsp+28h] [rbp-E8h]
  char *ni; // [rsp+28h] [rbp-E8h]
  void *v103; // [rsp+30h] [rbp-E0h]
  unsigned __int64 v104; // [rsp+30h] [rbp-E0h]
  void *v105; // [rsp+30h] [rbp-E0h]
  void *v106; // [rsp+30h] [rbp-E0h]
  int v107; // [rsp+30h] [rbp-E0h]
  void *v108; // [rsp+30h] [rbp-E0h]
  void *v109; // [rsp+30h] [rbp-E0h]
  void *v110; // [rsp+30h] [rbp-E0h]
  void *v111; // [rsp+30h] [rbp-E0h]
  char *v112; // [rsp+30h] [rbp-E0h]
  void *v114; // [rsp+40h] [rbp-D0h] BYREF
  __int128 v115; // [rsp+48h] [rbp-C8h]
  void *v116[4]; // [rsp+60h] [rbp-B0h] BYREF
  void *ptr; // [rsp+80h] [rbp-90h] BYREF
  char *s; // [rsp+88h] [rbp-88h]
  __int64 v119; // [rsp+90h] [rbp-80h]
  __m128i v120[3]; // [rsp+A0h] [rbp-70h] BYREF
  unsigned __int64 v121; // [rsp+D8h] [rbp-38h]

  v19 = *(_BYTE *)(a6 + 52);
  v20 = a15;
  v121 = __readfsqword(0x28u);
  v21 = a16;
  LOBYTE(v16) = v19 != 107 && v19 != 66;
  if ( (_BYTE)v16 )
  {
    v23 = *(void (**)(void))(*(_QWORD *)a1 + 424LL);
    if ( v23 != nullsub_293 )
    {
      v108 = a5;
      v23();
      v21 = a16;
      v20 = a15;
      a5 = v108;
    }
    switch ( a3 )
    {
      case ' ':
      case 'h':
        na = (size_t)a5;
        QT::QLabel::text((QT::QLabel *)v116);
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v116);
        v27 = s;
        if ( !s )
          v27 = (char *)&QT::QByteArray::_empty;
        qstrncpy(a4, v27, na);
        goto LABEL_15;
      case '=':
        v38 = (QT::QTabWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QTabWidget::staticMetaObject, a2);
        if ( v38 )
          *(_DWORD *)a4 = QT::QTabWidget::currentIndex(v38);
        return v16;
      case 'C':
      case 'R':
      case 'c':
      case 'r':
        *(_WORD *)a4 = (unsigned __int8)QT::QAbstractButton::isChecked(a2);
        return v16;
      case 'E':
        v35 = (__int64 *)sub_50FA70(a2);
        if ( v35 && a4 )
          sub_4A6F30(v35, a4, *(double *)a7.m128_u64, a8, a9, a10, v36, v37, a13, a14);
        return v16;
      case 'G':
        QT::QButtonGroup::buttons((QT::QButtonGroup *)&ptr);
        if ( (int)v119 <= 0 )
        {
          LOWORD(v31) = 0;
        }
        else
        {
          v30 = nullptr;
          v31 = 0;
          v104 = (unsigned int)(v119 - 1);
          while ( 1 )
          {
            if ( !ptr || *(int *)ptr > 1 )
              sub_4FFFF0((__int64)&ptr, 0, 0, 0, v28, v29);
            isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)&s[8 * (_QWORD)v30]);
            v33 = v31;
            if ( isChecked )
              v33 = v31 | (1 << (char)v30);
            v31 = v33;
            if ( (void *)v104 == v30 )
              break;
            v30 = (char *)v30 + 1;
          }
        }
        *(_WORD *)a4 = v31;
        v34 = (volatile signed __int32 *)ptr;
        if ( !ptr )
          return v16;
        goto LABEL_31;
      case 'K':
        v24 = -1;
        v120[0] = _mm_loadu_si128((const __m128i *)(*((_QWORD *)a2 + 5) + 64LL));
        if ( _mm_cvtsi128_si32(v120[0]) )
          v24 = __ROR4__(_byteswap_ulong(QT::QColor::rgb((QT::QColor *)v120)), 8) & 0xFFFFFF;
        *(_DWORD *)a4 = v24;
        return v16;
      case 'b':
        if ( (unsigned __int8)QT::QComboBox::isEditable(a2) )
        {
          QT::QComboBox::currentText((QT::QComboBox *)v116);
          QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v116);
          v58 = s;
          if ( (s || (v58 = (char *)&QT::QByteArray::_empty) != nullptr) && (v59 = strlen(v58), (v60 = v59) != 0) )
          {
            v72 = v59 + 1;
            v73 = *(void **)a4;
            if ( *((_QWORD *)a4 + 2) < v59 + 1 )
            {
              v73 = (void *)qvector_reserve(a4, *(_QWORD *)a4, v72, 1);
              *(_QWORD *)a4 = v73;
            }
            *((_QWORD *)a4 + 1) = v72;
            memmove(v73, v58, v60);
            *(_BYTE *)(*(_QWORD *)a4 + v60) = 0;
          }
          else
          {
            *((_QWORD *)a4 + 1) = 0;
          }
LABEL_15:
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
          if ( v116[0] )
          {
            if ( !_InterlockedSub((volatile signed __int32 *)v116[0], 1u) )
              free(v116[0]);
          }
        }
        else
        {
          *(_DWORD *)a4 = QT::QComboBox::currentIndex(a2);
        }
        return v16;
      case 'g':
        QT::QButtonGroup::buttons((QT::QButtonGroup *)&ptr);
        v107 = v119;
        if ( (int)v119 <= 0 )
        {
          v57 = 0;
        }
        else
        {
          v55 = (unsigned int)(v119 - 1);
          for ( i = 0; ; ++i )
          {
            if ( !ptr || *(int *)ptr > 1 )
              sub_4FFFF0((__int64)&ptr, 0, 0, 0, v53, v54);
            if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)&s[8 * i]) )
            {
              v57 = i;
              goto LABEL_77;
            }
            if ( i == v55 )
              break;
          }
          v57 = i + 1;
        }
LABEL_77:
        if ( v57 == v107 )
          LOWORD(v57) = -1;
        *(_WORD *)a4 = v57;
        v34 = (volatile signed __int32 *)ptr;
        if ( ptr )
        {
LABEL_31:
          if ( !_InterlockedSub(v34, 1u) )
            free(ptr);
        }
        return v16;
      case 'p':
        srca = v20;
        nb = (size_t)a5;
        if ( !QT::QMetaObject::cast((QT::QMetaObject *)&QT::QLineEdit::staticMetaObject, a2) )
          return v16;
        QT::QLineEdit::text((QT::QLineEdit *)v116);
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v116);
        v46 = s;
        v114 = nullptr;
        v47 = (void *)nb;
        v48 = srca;
        v115 = 0;
        if ( s || (v46 = (char *)&QT::QByteArray::_empty) != nullptr )
        {
          v80 = srca;
          srcc = v46;
          v49 = strlen(v46);
          v114 = (void *)qvector_reserve(&v114, 0, v49 + 1, 1);
          *(_QWORD *)&v115 = v49 + 1;
          memmove(v114, srcc, v49);
          v48 = v80;
          v47 = (void *)nb;
          *((_BYTE *)v114 + v49) = 0;
        }
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        {
          nc = v48;
          v105 = v47;
          free(ptr);
          v48 = nc;
          v47 = v105;
        }
        if ( v116[0] && !_InterlockedSub((volatile signed __int32 *)v116[0], 1u) )
        {
          nd = v48;
          v106 = v47;
          free(v116[0]);
          v48 = nd;
          v47 = v106;
        }
        v50 = a4;
        if ( a4 )
        {
          v51 = (*(__int64 (__fastcall **)(__int64, char *, void *, void **, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 464LL))(
                  a1,
                  a4,
                  v47,
                  &v114,
                  112,
                  (unsigned __int8)v48,
                  a6);
          v48 = v76;
          v16 = v51;
        }
        v52 = v114;
        if ( !v114 )
          return v16;
        goto LABEL_67;
      case 't':
        v39 = sub_50FF00(a2);
        QT::QPlainTextEdit::document((QT::QPlainTextEdit *)v39);
        QT::QTextDocument::toPlainText((QT::QTextDocument *)v116);
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v116);
        v40 = s;
        if ( (s || (v40 = (char *)&QT::QByteArray::_empty) != nullptr) && (v41 = strlen(v40), (v42 = v41) != 0) )
        {
          v70 = v41 + 1;
          v71 = *((void **)a4 + 1);
          if ( *((_QWORD *)a4 + 3) < v41 + 1 )
          {
            nh = v41 + 1;
            v71 = (void *)qvector_reserve(a4 + 8, *((_QWORD *)a4 + 1), v70, 1);
            v70 = nh;
            *((_QWORD *)a4 + 1) = v71;
          }
          *((_QWORD *)a4 + 2) = v70;
          memmove(v71, v40, v42);
          *(_BYTE *)(*((_QWORD *)a4 + 1) + v42) = 0;
        }
        else
        {
          *((_QWORD *)a4 + 2) = 0;
        }
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( v116[0] && !_InterlockedSub((volatile signed __int32 *)v116[0], 1u) )
          free(v116[0]);
        *((_WORD *)a4 + 17) = *(_DWORD *)(v39 + 108);
        *((_WORD *)a4 + 16) = 0;
        if ( (unsigned __int8)QT::QPlainTextEdit::isReadOnly((QT::QPlainTextEdit *)v39) )
          *((_WORD *)a4 + 16) |= 4u;
        if ( *(_BYTE *)(v39 + 105) )
          *((_WORD *)a4 + 16) |= 1u;
        if ( *((_WORD *)a4 + 17) )
          *((_WORD *)a4 + 16) |= 2u;
        v43 = *((_WORD *)a4 + 16)
            | (32
             * (unsigned __int8)QT::QFont::operator!=(
                                  *(_QWORD *)(v39 + 32) + 56LL,
                                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) + 16LL) + 32LL) + 56LL,
                                  *(double *)a7.m128_u64));
        *((_WORD *)a4 + 16) = v43 & 0xFFEF;
        if ( *(_BYTE *)(v39 + 104) )
        {
          *((_WORD *)a4 + 16) = v43 | 0x10;
          *(_BYTE *)(v39 + 104) = 0;
        }
        return v16;
      default:
        src = v21;
        n = v20;
        v103 = a5;
        v83 = (char)a3;
        v26 = sub_508440((unsigned int)(char)a3);
        if ( v26 )
          return (*(__int64 (__fastcall **)(__int64, __int64, const QT::QObject *, char *, char *, _QWORD))(*(_QWORD *)v26 + 24LL))(
                   v26,
                   a6,
                   a2,
                   a4,
                   src,
                   n);
        v61 = (QT::QComboBox *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QComboBox::staticMetaObject, a2);
        if ( !v61 )
        {
          v16 = 0;
          sub_169700(
            (int)"warning: unidentified control: %c\n",
            a3,
            v62,
            v63,
            (__int64)src,
            n,
            a7,
            a8,
            a9,
            a10,
            v64,
            v65,
            a13,
            a14,
            v79);
          return v16;
        }
        v81 = src;
        srcb = n;
        QT::QComboBox::lineEdit(v61);
        QT::QLineEdit::text((QT::QLineEdit *)v116);
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v116);
        v66 = s;
        v114 = nullptr;
        v67 = v103;
        v48 = n;
        v115 = 0;
        v46 = v81;
        if ( s )
          goto LABEL_90;
        if ( &QT::QByteArray::_empty )
        {
          v66 = (char *)&QT::QByteArray::_empty;
LABEL_90:
          ne = strlen(v66);
          v114 = (void *)qvector_reserve(&v114, 0, ne + 1, 1);
          *(_QWORD *)&v115 = ne + 1;
          memmove(v114, v66, ne);
          v46 = v81;
          v48 = srcb;
          v67 = v103;
          *((_BYTE *)v114 + ne) = 0;
        }
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        {
          srcd = v46;
          nf = v48;
          v109 = v67;
          free(ptr);
          v46 = srcd;
          v48 = nf;
          v67 = v109;
        }
        if ( v116[0] && !_InterlockedSub((volatile signed __int32 *)v116[0], 1u) )
        {
          srce = v46;
          ng = v48;
          v110 = v67;
          free(v116[0]);
          v46 = srce;
          v48 = ng;
          v67 = v110;
        }
        if ( v46 )
        {
          v68 = v115;
          if ( (unsigned __int64)v115 > 1 )
          {
            v111 = v114;
            if ( *((_QWORD *)v46 + 2) < (unsigned __int64)v115 )
            {
              v82 = v48;
              srcf = v67;
              ni = v46;
              v75 = qvector_reserve(v46, *(_QWORD *)v46, v115, 1);
              v46 = ni;
              LODWORD(v48) = v82;
              v67 = srcf;
              *(_QWORD *)ni = v75;
            }
            *((_QWORD *)v46 + 1) = v68;
            v74 = v111;
            srcg = v48;
            nj = (size_t)v67;
            v112 = v46;
            memmove(*(void **)v46, v74, v68 - 1);
            v46 = v112;
            v67 = (void *)nj;
            v48 = srcg;
            *(_BYTE *)(*(_QWORD *)v112 + v68 - 1) = 0;
          }
          else
          {
            *((_QWORD *)v46 + 1) = 0;
          }
        }
        v50 = a4;
        if ( a4 )
        {
          v69 = (*(__int64 (__fastcall **)(__int64, char *, void *, void **, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 464LL))(
                  a1,
                  a4,
                  v67,
                  &v114,
                  v83,
                  (unsigned __int8)v48,
                  a6);
          v45 = v77;
          v16 = v69;
          v50 = v78;
        }
        v52 = v114;
        if ( v114 )
        {
LABEL_67:
          *(_QWORD *)&v115 = 0;
          qfree(v52, v50, v44, v45, v46, v48);
        }
        break;
    }
  }
  return v16;
}
