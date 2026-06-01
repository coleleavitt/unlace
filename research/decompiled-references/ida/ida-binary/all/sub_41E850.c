char *__fastcall sub_41E850(char *a1, __int64 a2, __int32 a3, __int32 a4, __int64 a5)
{
  int v5; // r13d
  const char *v7; // rdi
  const char *file_ext; // rax
  const char *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rbx
  const char *v14; // rsi
  const char *v15; // rdi
  __int32 v16; // eax
  char v17; // bl
  const char *v18; // rsi
  __int64 v20; // rax
  __int128 v21; // rax
  const char *v22; // rsi
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  char *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rbp
  __int64 v30; // rax
  const char *v31; // rsi
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  char *v36; // rax
  __m128i v37; // xmm0
  char *v38; // rax
  __int64 v39; // r13
  __int64 v40; // rbx
  char *v41; // rbp
  _QWORD *v42; // rax
  unsigned __int64 v43; // rcx
  char *v44; // rax
  char *v45; // rbp
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // edx
  __int64 v49; // rsi
  unsigned __int64 v50; // rdi
  __int64 v51; // rax
  char *v52; // rax
  const char *v53; // rbx
  size_t v54; // rax
  double v55; // xmm0_8
  unsigned __int64 v56; // rbx
  const char *v57; // r14
  __int64 v58; // r15
  __int64 v59; // rdx
  __int64 v60; // rbp
  size_t v61; // rax
  char *v62; // r15
  unsigned __int64 v63; // rcx
  __int8 v64; // al
  __int64 v65; // rax
  char *v66; // rsi
  unsigned __int64 v67; // rdx
  size_t v68; // r15
  __int64 v69; // rbp
  __int64 v70; // r9
  __int64 v71; // rbx
  __m128i v72; // xmm0
  __m128i v73; // xmm1
  char *v74; // rax
  char *v75; // rdx
  __int64 v76; // rax
  const char *v77; // rdx
  __int64 v78; // rbp
  __int64 v79; // rbx
  const char *v80; // rax
  __int64 v81; // rdi
  _DWORD *v82; // rax
  __int128 v83; // rax
  const char *v84; // rsi
  unsigned __int64 v85; // rdi
  __int64 v86; // rbx
  __m128i v87; // xmm0
  __m128i v88; // xmm1
  char *v89; // rax
  __int64 v90; // rdi
  char *v91; // rax
  __int64 v92; // rax
  _DWORD *v93; // rax
  unsigned __int64 v94; // rdi
  __int64 v95; // rbx
  __m128i v96; // xmm0
  unsigned __int64 v97; // rbp
  char *v98; // rax
  __int32 v99; // eax
  bool v101; // [rsp+10h] [rbp-138h]
  __m128i v102; // [rsp+18h] [rbp-130h] BYREF
  __m128i v103; // [rsp+28h] [rbp-120h] BYREF
  void *v104; // [rsp+38h] [rbp-110h]
  char v105[8]; // [rsp+48h] [rbp-100h] BYREF
  __int64 v106; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v107; // [rsp+58h] [rbp-F0h]
  const char *v108; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v109; // [rsp+78h] [rbp-D0h]
  _BYTE v110[32]; // [rsp+90h] [rbp-B8h] BYREF
  char *s; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v112; // [rsp+B8h] [rbp-90h]
  _QWORD v113[4]; // [rsp+D0h] [rbp-78h] BYREF
  _BYTE ptr[24]; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v115; // [rsp+108h] [rbp-40h]

  v103.m128i_i32[2] = a4;
  v103.m128i_i32[0] = a3;
  v5 = 16 * (unsigned __int8)a4;
  v115 = __readfsqword(0x28u);
  v102.m128i_i32[2] = (unsigned __int8)a3;
  v102.m128i_i32[0] = (unsigned __int8)a3 - 1;
  if ( !a5 )
  {
    if ( (unsigned int)(unsigned __int8)a3 - 1 <= 2 )
    {
      v101 = 0;
      v17 = 0;
      v5 |= v102.m128i_u32[2];
      goto LABEL_22;
    }
    goto LABEL_36;
  }
  v7 = &s1;
  if ( *(_QWORD *)(a5 + 8) )
    v7 = *(const char **)a5;
  file_ext = (const char *)get_file_ext(v7);
  v101 = 0;
  v9 = file_ext;
  if ( file_ext )
  {
    v101 = 1;
    if ( strcasecmp(file_ext, "idb") )
      v101 = strcasecmp(v9, "i64") == 0;
  }
  v10 = *(_QWORD *)(a2 + 32);
  v11 = *(_QWORD *)(v10 + 304);
  v12 = v11 + 24LL * *(_QWORD *)(v10 + 312);
  if ( v11 != v12 )
  {
    v13 = *(_QWORD *)(a5 + 8);
    while ( 1 )
    {
      if ( *(_QWORD *)(v11 + 8) )
      {
        v14 = *(const char **)v11;
        v15 = &s1;
        if ( !v13 )
          goto LABEL_10;
      }
      else
      {
        if ( !v13 )
          goto LABEL_16;
        v14 = &s1;
      }
      v15 = *(const char **)a5;
LABEL_10:
      if ( strcmp(v15, v14) )
      {
        v11 += 24;
        if ( v12 != v11 )
          continue;
      }
LABEL_16:
      v16 = 0;
      if ( v102.m128i_i32[0] < 3u )
        v16 = v102.m128i_i32[2];
      v5 |= v16;
      if ( v101 )
        v5 |= 0x20u;
      v17 = 0;
      if ( v12 != v11 )
      {
        v5 |= 0x40u;
        v17 = 1;
      }
      goto LABEL_22;
    }
  }
  if ( v102.m128i_i32[0] > 2u )
  {
    if ( v101 )
    {
      v5 |= 0x20u;
      v17 = 0;
      goto LABEL_22;
    }
LABEL_36:
    v101 = 0;
    v17 = 0;
    goto LABEL_22;
  }
  v17 = 0;
  v99 = v102.m128i_i32[2] | v5;
  if ( v101 )
    v99 = v102.m128i_i32[2] | v5 | 0x20;
  v5 = v99;
LABEL_22:
  v102.m128i_i64[1] = (__int64)&v106;
  v106 = 0;
  v107 = 0;
  sub_169A50(&v106, (__int64)"__cfi__%x", v5);
  v18 = (const char *)QT::QCoreApplication::self;
  sub_479BE0(a1, QT::QCoreApplication::self, &v106);
  if ( (unsigned __int8)QT::QIcon::isNull((QT::QIcon *)a1) )
  {
    v104 = &v108;
    v108 = nullptr;
    v109 = 0;
    v108 = (const char *)qvector_reserve(&v108, 0, 4, 24);
    switch ( v103.m128i_i8[0] )
    {
      case 2:
        memset(ptr, 0, sizeof(ptr));
        v82 = (_DWORD *)qvector_reserve(ptr, 0, 8, 1);
        *(_QWORD *)ptr = v82;
        *(_QWORD *)&ptr[8] = 8;
        *v82 = 1701602660;
        *(_DWORD *)((char *)v82 + 3) = 1684370533;
        *(_BYTE *)(*(_QWORD *)ptr + 7LL) = 0;
        v83 = v109;
        v84 = v108;
        v85 = v109 + 1;
        if ( ptr >= v108 && ptr < &v108[24 * *((_QWORD *)&v109 + 1)] )
        {
          v86 = *(_QWORD *)ptr;
          v87 = _mm_loadl_epi64((const __m128i *)&ptr[8]);
          memset(ptr, 0, sizeof(ptr));
          v88 = _mm_loadl_epi64((const __m128i *)&ptr[16]);
          if ( *((_QWORD *)&v109 + 1) < v85 )
          {
            v103.m128i_i64[0] = v88.m128i_i64[0];
            v102.m128i_i64[0] = v87.m128i_i64[0];
            v108 = (const char *)qvector_reserve(v104, v108, v109 + 1, 24);
            v84 = v108;
            v88 = _mm_loadl_epi64(&v103);
            *(_QWORD *)&v83 = v109;
            v87 = _mm_loadl_epi64(&v102);
          }
          v89 = (char *)&v84[24 * v83];
          *(_QWORD *)v89 = v86;
          *(__m128i *)(v89 + 8) = _mm_unpacklo_epi64(v87, v88);
          v90 = *(_QWORD *)ptr;
          *(_QWORD *)&v109 = v109 + 1;
          if ( !*(_QWORD *)ptr )
            goto LABEL_48;
LABEL_111:
          *(_QWORD *)&ptr[8] = 0;
          qfree(v90, v84, *((_QWORD *)&v83 + 1));
          goto LABEL_48;
        }
        if ( *((_QWORD *)&v109 + 1) < v85 )
        {
          v92 = qvector_reserve(v104, v108, v109 + 1, 24);
LABEL_115:
          v108 = (const char *)v92;
          v84 = (const char *)v92;
          *(_QWORD *)&v83 = v109;
        }
        break;
      case 3:
        memset(ptr, 0, sizeof(ptr));
        *(_QWORD *)ptr = qvector_reserve(ptr, 0, 17, 1);
        *(_QWORD *)&ptr[8] = 17;
        **(__m128i **)ptr = _mm_load_si128((const __m128i *)&xmmword_5DDA40);
        v29 = *(_QWORD *)ptr;
        v30 = v109;
        v31 = v108;
        *(_BYTE *)(*(_QWORD *)ptr + 16LL) = 0;
        v32 = v30 + 1;
        v33 = *((_QWORD *)&v109 + 1);
        if ( ptr < v31 || ptr >= &v31[24 * *((_QWORD *)&v109 + 1)] )
        {
          if ( *((_QWORD *)&v109 + 1) < v32 )
          {
            v108 = (const char *)qvector_reserve(v104, v31, v30 + 1, 24);
            v31 = v108;
            v29 = *(_QWORD *)ptr;
            v30 = v109;
          }
          v37 = _mm_loadu_si128((const __m128i *)&ptr[8]);
          v38 = (char *)&v31[24 * v30];
          *(_QWORD *)v38 = v29;
          *(__m128i *)(v38 + 8) = v37;
          *(_QWORD *)&v109 = v109 + 1;
        }
        else
        {
          v34 = _mm_loadl_epi64((const __m128i *)&ptr[8]);
          v35 = _mm_loadl_epi64((const __m128i *)&ptr[16]);
          memset(ptr, 0, sizeof(ptr));
          if ( *((_QWORD *)&v109 + 1) < v32 )
          {
            v103.m128i_i64[0] = v35.m128i_i64[0];
            v102.m128i_i64[0] = v34.m128i_i64[0];
            v108 = (const char *)qvector_reserve(v104, v31, v30 + 1, 24);
            v31 = v108;
            v35 = _mm_loadl_epi64(&v103);
            v30 = v109;
            v34 = _mm_loadl_epi64(&v102);
          }
          v36 = (char *)&v31[24 * v30];
          *(_QWORD *)v36 = v29;
          *(__m128i *)(v36 + 8) = _mm_unpacklo_epi64(v34, v35);
          *(_QWORD *)&v109 = v109 + 1;
          if ( *(_QWORD *)ptr )
          {
            *(_QWORD *)&ptr[8] = 0;
            qfree(*(_QWORD *)ptr, v31, v33);
          }
        }
        if ( !v17 )
          goto LABEL_48;
        memset(ptr, 0, sizeof(ptr));
        v93 = (_DWORD *)qvector_reserve(ptr, 0, 8, 1);
        *(_QWORD *)ptr = v93;
        *(_QWORD *)&ptr[8] = 8;
        *v93 = 1668248176;
        *(_DWORD *)((char *)v93 + 3) = 1936942435;
        *(_BYTE *)(*(_QWORD *)ptr + 7LL) = 0;
        v83 = v109;
        v84 = v108;
        v94 = v109 + 1;
        if ( ptr >= v108 && ptr < &v108[24 * *((_QWORD *)&v109 + 1)] )
        {
          v95 = *(_QWORD *)ptr;
          v96 = _mm_loadl_epi64((const __m128i *)&ptr[8]);
          memset(ptr, 0, sizeof(ptr));
          v97 = *(_QWORD *)&ptr[16];
          if ( *((_QWORD *)&v109 + 1) < v94 )
          {
            v102.m128i_i64[0] = v96.m128i_i64[0];
            v108 = (const char *)qvector_reserve(v104, v108, v109 + 1, 24);
            v84 = v108;
            v96 = _mm_loadl_epi64(&v102);
            *(_QWORD *)&v83 = v109;
          }
          v98 = (char *)&v84[24 * v83];
          *(_QWORD *)v98 = v95;
          *(__m128i *)(v98 + 8) = _mm_unpacklo_epi64(v96, (__m128i)v97);
          v90 = *(_QWORD *)ptr;
          *(_QWORD *)&v109 = v109 + 1;
          if ( !*(_QWORD *)ptr )
            goto LABEL_48;
          goto LABEL_111;
        }
        if ( *((_QWORD *)&v109 + 1) < v94 )
        {
          v92 = qvector_reserve(v104, v108, v109 + 1, 24);
          goto LABEL_115;
        }
        break;
      case 1:
        memset(ptr, 0, sizeof(ptr));
        v20 = qvector_reserve(ptr, 0, 6, 1);
        *(_QWORD *)ptr = v20;
        *(_QWORD *)&ptr[8] = 6;
        *(_DWORD *)v20 = 1701078113;
        *(_BYTE *)(v20 + 4) = 100;
        *(_BYTE *)(*(_QWORD *)ptr + 5LL) = 0;
        v21 = v109;
        v22 = v108;
        v23 = v109 + 1;
        if ( ptr >= v108 && ptr < &v108[24 * *((_QWORD *)&v109 + 1)] )
        {
          v24 = *(_QWORD *)ptr;
          v25 = _mm_loadl_epi64((const __m128i *)&ptr[8]);
          memset(ptr, 0, sizeof(ptr));
          v26 = _mm_loadl_epi64((const __m128i *)&ptr[16]);
          if ( *((_QWORD *)&v109 + 1) < v23 )
          {
            v103.m128i_i64[0] = v26.m128i_i64[0];
            v102.m128i_i64[0] = v25.m128i_i64[0];
            v108 = (const char *)qvector_reserve(v104, v108, v109 + 1, 24);
            v22 = v108;
            v26 = _mm_loadl_epi64(&v103);
            *(_QWORD *)&v21 = v109;
            v25 = _mm_loadl_epi64(&v102);
          }
          v27 = (char *)&v22[24 * v21];
          *(_QWORD *)v27 = v24;
          *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v25, v26);
          v28 = *(_QWORD *)ptr;
          *(_QWORD *)&v109 = v109 + 1;
          if ( *(_QWORD *)ptr )
          {
LABEL_34:
            *(_QWORD *)&ptr[8] = 0;
            qfree(v28, v22, *((_QWORD *)&v21 + 1));
          }
LABEL_58:
          v103.m128i_i64[0] = (__int64)v110;
          QT::QImage::QImage((QT::QImage *)v110);
          v53 = ":/HVUI/resources/icons/files/plain_idb.svg";
          if ( !v101 )
            v53 = ":/HVUI/resources/icons/files/plain.svg";
          v54 = strlen(v53 + 1);
          v55 = QT::QString::fromUtf8(ptr, v54 + 1, v53);
          QT::QImage::load((QT::QImage *)v110, (const QT::QString *)ptr, nullptr);
          if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
            free(*(void **)ptr);
          QT::QPainter::QPainter((QT::QPainter *)v105, (QT::QPaintDevice *)v103.m128i_i64[0]);
          v56 = (unsigned __int64)v108;
          v57 = &v108[24 * v109];
          if ( v57 == v108 )
          {
LABEL_98:
            QT::QPainter::~QPainter((QT::QPainter *)v105);
            QT::QPixmap::fromImage(ptr, v103.m128i_i64[0], 0, v55);
            QT::QIcon::QIcon((QT::QIcon *)&s, (const QT::QPixmap *)ptr);
            v75 = s;
            s = nullptr;
            v76 = *(_QWORD *)a1;
            *(_QWORD *)a1 = v75;
            v113[0] = v76;
            QT::QIcon::~QIcon((QT::QIcon *)v113);
            QT::QIcon::~QIcon((QT::QIcon *)&s);
            QT::QPixmap::~QPixmap((QT::QPixmap *)ptr);
            v18 = a1;
            sub_481B70(QT::QCoreApplication::self, a1, v102.m128i_i64[1]);
            QT::QImage::~QImage((QT::QImage *)v103.m128i_i64[0]);
            v77 = v108;
            if ( v108 )
            {
              v78 = v109;
              if ( (_QWORD)v109 )
              {
                v79 = 0;
                do
                {
                  v80 = &v77[24 * v79];
                  v81 = *(_QWORD *)v80;
                  if ( *(_QWORD *)v80 )
                  {
                    *((_QWORD *)v80 + 1) = 0;
                    qfree(v81, a1);
                    v77 = v108;
                  }
                  ++v79;
                }
                while ( v78 != v79 );
              }
              *(_QWORD *)&v109 = 0;
              qfree(v77, a1);
            }
            goto LABEL_23;
          }
          while ( 1 )
          {
            v112 = 0;
            s = nullptr;
            v65 = qvector_reserve(&s, 0, 30, 1);
            s = (char *)v65;
            *(_QWORD *)&v112 = 30;
            *(__m128i *)v65 = _mm_load_si128((const __m128i *)&xmmword_5DDA50);
            *(__m128i *)(v65 + 13) = _mm_load_si128((const __m128i *)&xmmword_5DDA60);
            v66 = s;
            s[29] = 0;
            v67 = *(_QWORD *)(v56 + 8);
            if ( v67 )
            {
              v68 = v67 - 1;
              if ( v67 != 1 )
              {
                v69 = v112;
                v70 = v67 - 1;
                if ( (_QWORD)v112 )
                {
                  v69 = v112 - 1;
                  v70 = v68 + v112 - 1;
                  v67 += v112 - 1;
                }
                if ( *((_QWORD *)&v112 + 1) < v67 )
                {
                  v103.m128i_i64[1] = v70;
                  v102.m128i_i64[0] = v67;
                  s = (char *)qvector_reserve(&s, v66, v67, 1);
                  v70 = v103.m128i_i64[1];
                  v66 = s;
                  v67 = v102.m128i_i64[0];
                }
                *(_QWORD *)&v112 = v67;
                v66[v70] = 0;
                memcpy(&s[v69], *(const void **)v56, v68);
                v66 = s;
              }
            }
            v60 = v112;
            if ( (_QWORD)v112 )
            {
              v58 = v112 + 3;
              v59 = v112 + 4;
              v60 = v112 - 1;
              if ( *((_QWORD *)&v112 + 1) < (unsigned __int64)(v112 + 4) )
                goto LABEL_87;
            }
            else
            {
              v59 = 5;
              v58 = 4;
              if ( *((_QWORD *)&v112 + 1) < 5u )
              {
LABEL_87:
                v102.m128i_i64[0] = v59;
                s = (char *)qvector_reserve(&s, v66, v59, 1);
                v59 = v102.m128i_i64[0];
                v66 = s;
              }
            }
            *(_QWORD *)&v112 = v59;
            v66[v58] = 0;
            *(_DWORD *)&s[v60] = 1735815982;
            QT::QImage::QImage((QT::QImage *)v113);
            if ( (_QWORD)v112 )
            {
              v61 = v112 - 1;
              v62 = s;
              v63 = (unsigned __int64)(v112 - 1) >> 63;
            }
            else
            {
              LOBYTE(v63) = 0;
              v61 = 0;
              v62 = (char *)&s1;
            }
            if ( !v62 || (_BYTE)v63 )
            {
              v61 = 0;
              if ( v62 )
                v61 = strlen(v62);
            }
            v55 = QT::QString::fromUtf8(ptr, v61, v62);
            v64 = QT::QImage::load((QT::QImage *)v113, (const QT::QString *)ptr, nullptr);
            if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
            {
              v102.m128i_i8[0] = v64;
              free(*(void **)ptr);
              v64 = v102.m128i_i8[0];
            }
            if ( v64 )
            {
              v55 = 0.0;
              *(_OWORD *)ptr = 0;
              QT::QPainter::drawImage(v105, ptr, v113);
            }
            QT::QImage::~QImage((QT::QImage *)v113);
            if ( s )
            {
              *(_QWORD *)&v112 = 0;
              v55 = qfree(s, ptr, v55);
            }
            v56 += 24LL;
            if ( v57 == (const char *)v56 )
              goto LABEL_98;
          }
        }
        if ( *((_QWORD *)&v109 + 1) < v23 )
        {
          v51 = qvector_reserve(v104, v108, v109 + 1, 24);
          goto LABEL_56;
        }
        goto LABEL_57;
      default:
LABEL_48:
        memset(ptr, 0, sizeof(ptr));
        if ( v103.m128i_i8[8] )
        {
          v39 = 11;
          v40 = 10;
          v41 = "latest_rev";
        }
        else
        {
          v39 = 15;
          v40 = 14;
          v41 = "not_latest_rev";
        }
        v42 = (_QWORD *)qvector_reserve(ptr, 0, v39, 1);
        *(_QWORD *)ptr = v42;
        *(_QWORD *)&ptr[8] = v39;
        v43 = (unsigned __int64)(v42 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        *v42 = *(_QWORD *)v41;
        *(_QWORD *)((char *)v42 + v40 - 8) = *(_QWORD *)&v41[v40 - 8];
        v44 = (char *)v42 - v43;
        v45 = (char *)(v41 - v44);
        v46 = (v40 + (_DWORD)v44) & 0xFFFFFFF8;
        if ( v46 >= 8 )
        {
          v47 = v46 & 0xFFFFFFF8;
          v48 = 0;
          do
          {
            v49 = v48;
            v48 += 8;
            *(_QWORD *)(v43 + v49) = *(_QWORD *)&v45[v49];
          }
          while ( v48 < v47 );
        }
        *(_BYTE *)(*(_QWORD *)ptr + v40) = 0;
        v21 = v109;
        v22 = v108;
        v50 = v109 + 1;
        if ( ptr >= v108 && ptr < &v108[24 * *((_QWORD *)&v109 + 1)] )
        {
          v71 = *(_QWORD *)ptr;
          v72 = _mm_loadl_epi64((const __m128i *)&ptr[8]);
          memset(ptr, 0, sizeof(ptr));
          v73 = _mm_loadl_epi64((const __m128i *)&ptr[16]);
          if ( *((_QWORD *)&v109 + 1) < v50 )
          {
            v103.m128i_i64[0] = v73.m128i_i64[0];
            v102.m128i_i64[0] = v72.m128i_i64[0];
            v108 = (const char *)qvector_reserve(v104, v108, v109 + 1, 24);
            v22 = v108;
            v73 = _mm_loadl_epi64(&v103);
            *(_QWORD *)&v21 = v109;
            v72 = _mm_loadl_epi64(&v102);
          }
          v74 = (char *)&v22[24 * v21];
          *(_QWORD *)v74 = v71;
          *(__m128i *)(v74 + 8) = _mm_unpacklo_epi64(v72, v73);
          v28 = *(_QWORD *)ptr;
          *(_QWORD *)&v109 = v109 + 1;
          if ( *(_QWORD *)ptr )
            goto LABEL_34;
          goto LABEL_58;
        }
        if ( *((_QWORD *)&v109 + 1) < v50 )
        {
          v51 = qvector_reserve(v104, v108, v109 + 1, 24);
LABEL_56:
          v108 = (const char *)v51;
          v22 = (const char *)v51;
          *(_QWORD *)&v21 = v109;
        }
LABEL_57:
        v52 = (char *)&v22[24 * v21];
        *(_QWORD *)v52 = *(_QWORD *)ptr;
        *(__m128i *)(v52 + 8) = _mm_loadu_si128((const __m128i *)&ptr[8]);
        *(_QWORD *)&v109 = v109 + 1;
        goto LABEL_58;
    }
    v91 = (char *)&v84[24 * v83];
    *(_QWORD *)v91 = *(_QWORD *)ptr;
    *(__m128i *)(v91 + 8) = _mm_loadu_si128((const __m128i *)&ptr[8]);
    *(_QWORD *)&v109 = v109 + 1;
    goto LABEL_48;
  }
LABEL_23:
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree(v106, v18);
  }
  return a1;
}
