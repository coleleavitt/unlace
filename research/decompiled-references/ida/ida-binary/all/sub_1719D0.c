__int64 __fastcall sub_1719D0(int a1)
{
  __int64 v2; // rax
  size_t v3; // rax
  size_t v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  const char *v13; // rdi
  int v14; // eax
  __int64 license_manager; // rax
  __int64 v16; // rax
  unsigned __int8 *v17; // rbx
  __int64 v18; // rax
  __int64 v20; // rax
  void **v21; // rax
  void *v22; // rdx
  size_t v23; // rax
  size_t v24; // rdx
  const char *v25; // r14
  __int64 v26; // rax
  void *v27; // rdx
  void *v28; // rdx
  void *v29; // rdx
  __int64 v30; // rax
  QT::QLabel *v31; // r15
  __int64 v32; // r8
  __int64 v33; // r9
  QT::QLabel *v34; // rdi
  QT::QString *v35; // rbx
  void *v36; // rdi
  size_t v37; // r15
  __int64 v38; // rcx
  size_t v39; // rax
  __int64 v40; // rax
  size_t v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  void *v45; // r12
  __m128i v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __m128i si128; // xmm0
  __int64 v51; // rax
  char *v52; // r15
  size_t v53; // r12
  void *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  size_t v57; // r8
  unsigned __int64 v58; // r12
  int v59; // eax
  void *v60; // rsi
  _DWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  QT::QString *v64; // r8
  unsigned __int64 v65; // r12
  __int64 v66; // r15
  __int64 v67; // r9
  __int64 v68; // rsi
  void *v69; // rdi
  size_t v70; // rax
  unsigned __int64 v71; // rdx
  const char *v72; // r12
  size_t v73; // rax
  char *v74; // r12
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  void *v77; // rdx
  void *v78; // rdx
  void *v79; // rdx
  __int64 v80; // rax
  void *v81; // rdx
  void *v82; // rdx
  void *v83; // rdx
  __int64 v84; // rax
  void *v85; // rdx
  QT::QString *v86; // rsi
  void *v87; // rdx
  void *v88; // rdx
  __int64 v89; // rax
  void *v90; // rdx
  QT::QLabel *v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rdx
  const char *v98; // r15
  QT::QLabel *v99; // r12
  size_t v100; // rax
  QT::QString *v101; // rbx
  __int64 v102; // rax
  void *v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  unsigned __int64 v106; // r12
  __int64 v107; // r15
  QT::QString *v108; // r9
  __int64 v109; // rsi
  __int64 v110; // r15
  QT::QString *v111; // r9
  __int64 v112; // rsi
  void *v113; // rax
  unsigned __int64 v114; // r12
  __int64 v115; // r15
  __int64 v116; // r9
  __int64 v117; // rsi
  void *v118; // rax
  unsigned __int64 v119; // r12
  __int64 v120; // r15
  QT::QString *v121; // r9
  __int64 v122; // rsi
  void *v123; // rax
  __int64 v124; // [rsp+18h] [rbp-1288h]
  __int64 v125; // [rsp+18h] [rbp-1288h]
  __int64 v126; // [rsp+18h] [rbp-1288h]
  __int64 v127; // [rsp+18h] [rbp-1288h]
  __int64 v128; // [rsp+18h] [rbp-1288h]
  QT::QString *v129[2]; // [rsp+30h] [rbp-1270h] BYREF
  QT::QLabel *v130; // [rsp+40h] [rbp-1260h]
  unsigned __int64 v131; // [rsp+48h] [rbp-1258h]
  bool v132; // [rsp+57h] [rbp-1249h]
  QT::QIcon *v133; // [rsp+58h] [rbp-1248h]
  QT::QEventLoop *p_dest; // [rsp+60h] [rbp-1240h]
  QT::QString *v135; // [rsp+68h] [rbp-1238h]
  _BYTE v136[8]; // [rsp+78h] [rbp-1228h] BYREF
  void *v137[4]; // [rsp+80h] [rbp-1220h] BYREF
  void *v138[4]; // [rsp+A0h] [rbp-1200h] BYREF
  char *v139; // [rsp+C0h] [rbp-11E0h] BYREF
  __int128 v140; // [rsp+C8h] [rbp-11D8h]
  void *v141[4]; // [rsp+E0h] [rbp-11C0h] BYREF
  void *v142[4]; // [rsp+100h] [rbp-11A0h] BYREF
  __int64 v143; // [rsp+120h] [rbp-1180h] BYREF
  __m128i v144; // [rsp+128h] [rbp-1178h]
  void *v145[4]; // [rsp+140h] [rbp-1160h] BYREF
  void *v146[4]; // [rsp+160h] [rbp-1140h] BYREF
  void *v147[4]; // [rsp+180h] [rbp-1120h] BYREF
  void *v148[4]; // [rsp+1A0h] [rbp-1100h] BYREF
  void *v149[4]; // [rsp+1C0h] [rbp-10E0h] BYREF
  void *v150[4]; // [rsp+1E0h] [rbp-10C0h] BYREF
  void *ptr; // [rsp+200h] [rbp-10A0h] BYREF
  __m128i v152; // [rsp+208h] [rbp-1098h] BYREF
  void *dest; // [rsp+220h] [rbp-1080h] BYREF
  __int128 v154; // [rsp+228h] [rbp-1078h]
  void *v155; // [rsp+250h] [rbp-1050h]
  char s[4104]; // [rsp+260h] [rbp-1040h] BYREF
  unsigned __int64 v157; // [rsp+1268h] [rbp-38h]

  v157 = __readfsqword(0x28u);
  v154 = 0;
  dest = nullptr;
  v2 = idadir(0);
  qmakepath(s, 4096, v2, "license.txt", 0);
  if ( !(unsigned __int8)qfileexist(s) )
    sub_16B930((__int64)"The license.txt file is missing or unreadable, cannot continue");
  v3 = strlen(s);
  v4 = v3;
  if ( v3 )
  {
    v36 = dest;
    v37 = v3 + 1;
    if ( *((_QWORD *)&v154 + 1) < v3 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v37, 1);
      v36 = dest;
    }
    *(_QWORD *)&v154 = v37;
    memmove(v36, s, v4);
    *((_BYTE *)dest + v4) = 0;
  }
  else
  {
    *(_QWORD *)&v154 = 0;
  }
  v5 = 0;
  if ( !(unsigned int)reg_int_op("EULA 90", 0, 0, 0) )
  {
    if ( batch || (unsigned __int8)sub_1A15A0() )
    {
      sub_16BC90((__int64)"License not yet accepted, cannot run in batch mode");
      sub_16B930((__int64)"License not yet accepted, cannot run in batch mode");
    }
    v13 = &s1;
    if ( (_QWORD)v154 )
      LODWORD(v13) = (_DWORD)dest;
    v14 = sub_281BB0((_DWORD)v13, 0, v9, v10, v11, v12);
    if ( !v14 )
      sub_16B930((__int64)"You have to agree with the license in order to use IDA");
    if ( v14 != 1 )
      sub_16B930((__int64)"The license.txt file is missing or unreadable, cannot continue");
    v5 = 1;
    reg_int_op("EULA 90", 1, 1, 0);
  }
  if ( dest )
  {
    *(_QWORD *)&v154 = 0;
    qfree(dest, v5, v6, v7, v8);
  }
  license_manager = get_license_manager();
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0);
  v17 = (unsigned __int8 *)v16;
  if ( v16 )
    v132 = *(_DWORD *)(v16 + 8) != 0;
  else
    v132 = 0;
  if ( !a1 || (LOBYTE(v131) = batch) != 0 )
  {
    p_dest = (QT::QEventLoop *)&dest;
    QT::QEventLoop::QEventLoop((QT::QEventLoop *)&dest, nullptr);
    v18 = operator new(0x20u);
    *(_DWORD *)v18 = 1;
    *(_QWORD *)(v18 + 24) = 0;
    *(__m128 *)(v18 + 8) = _mm_loadh_ps((const double *)&QT::QEventLoop::quit);
    QT::QTimer::singleShotImpl(0, 0, &dest);
    QT::QEventLoop::exec(&dest, 0);
    QT::QEventLoop::~QEventLoop((QT::QEventLoop *)&dest);
    return 1;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 112LL))(QT::QCoreApplication::self);
  p_dest = (QT::QEventLoop *)&dest;
  sub_171770((QT::QWidget *)&dest, v20, a1 == 2);
  v21 = sub_16C010();
  v22 = v21[1];
  if ( v22 )
  {
    v24 = (size_t)v22 - 1;
    v25 = (const char *)*v21;
    v23 = v24 >> 63;
  }
  else
  {
    LOBYTE(v23) = 0;
    v24 = 0;
    v25 = &s1;
  }
  if ( !v25 || (_BYTE)v23 )
  {
    v24 = 0;
    if ( v25 )
      v24 = strlen(v25);
  }
  v135 = (QT::QString *)v150;
  QT::QString::fromUtf8(v150, v24, v25);
  QT::QString::fromUtf8(&ptr, 8, "Version ");
  QT::QString::append((QT::QString *)&ptr, (const QT::QString *)v150);
  v26 = QT::QString::append(&ptr, " Linux x86_64 (64-bit address size)", 35);
  v27 = *(void **)v26;
  *(_QWORD *)v26 = 0;
  v137[0] = v27;
  v28 = *(void **)(v26 + 8);
  *(_QWORD *)(v26 + 8) = 0;
  v137[1] = v28;
  v29 = *(void **)(v26 + 16);
  *(_QWORD *)(v26 + 16) = 0;
  v137[2] = v29;
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v150[0] && !_InterlockedSub((volatile signed __int32 *)v150[0], 1u) )
    free(v150[0]);
  QT::QLabel::setText(*((QT::QLabel **)v155 + 7), (const QT::QString *)v137);
  v30 = *QT::QCoreApplication::self;
  v133 = (QT::QIcon *)v136;
  (*(void (__fastcall **)(_BYTE *, _QWORD *, __int64))(v30 + 160))(v136, QT::QCoreApplication::self, 2);
  v31 = *((QT::QLabel **)v155 + 4);
  QT::QIcon::availableSizes(v135, v136, 0, 1);
  if ( !v150[0] || *(int *)v150[0] > 1 )
    sub_170CA0((__m128i *)v135, 0, 0, 0, v32, v33);
  QT::QIcon::pixmap(&ptr, v133, v150[1], 0, 1);
  QT::QLabel::setPixmap(v31, (const QT::QPixmap *)&ptr);
  QT::QPixmap::~QPixmap((QT::QPixmap *)&ptr);
  if ( v150[0] && !_InterlockedSub((volatile signed __int32 *)v150[0], 1u) )
    free(v150[0]);
  v34 = *((QT::QLabel **)v155 + 10);
  v130 = v34;
  if ( v132 )
  {
    v38 = *((_QWORD *)v17 + 14);
    if ( v38 )
    {
      qstrftime(s, 40, "%Y-%m-%d", v38);
      v39 = strlen(s);
      QT::QString::fromUtf8(v149, v39, s);
      QT::QString::fromUtf8(v135, 19, "License expires on ");
      QT::QString::append(v135, (const QT::QString *)v149);
    }
    else
    {
      QT::QString::fromUtf8(v135, 0, &unk_5C2F25);
      v132 = 0;
    }
    QT::QString::fromUtf8(v147, 1, "\n");
    v40 = *((_QWORD *)v17 + 3);
    v143 = 0;
    v144 = 0;
    if ( (_DWORD)v40 == 1 )
    {
      v123 = (void *)qvector_reserve(&v143, 0, 11, 1);
      v144.m128i_i64[0] = 11;
      v143 = (__int64)v123;
      qmemcpy(v123, ", 1 user, ", 10);
      *(_BYTE *)(v143 + 10) = 0;
    }
    else
    {
      qsnprintf(s, 20, ", %d users, ", v40);
      ptr = nullptr;
      v152 = 0;
      v41 = strlen(s);
      v129[0] = (QT::QString *)(v41 + 1);
      ptr = (void *)qvector_reserve(&ptr, 0, v41 + 1, 1);
      v152.m128i_i64[0] = v41 + 1;
      memmove(ptr, s, v41);
      *((_BYTE *)ptr + v41) = 0;
      v45 = ptr;
      v46 = _mm_loadu_si128(&v152);
      ptr = nullptr;
      v152 = 0;
      if ( v143 )
      {
        *(__m128i *)v129 = v46;
        v144.m128i_i64[0] = 0;
        qfree(v143, s, v42, v43, v44);
        si128 = _mm_load_si128((const __m128i *)v129);
        v143 = (__int64)v45;
        v144 = si128;
        if ( ptr )
        {
          v152.m128i_i64[0] = 0;
          qfree(ptr, s, v47, v48, v49);
        }
      }
      else
      {
        v143 = (__int64)v45;
        v144 = v46;
      }
    }
    v51 = *((int *)v17 + 3);
    ptr = nullptr;
    v152 = 0;
    if ( (int)v51 >= 7 )
      v51 = 0;
    v52 = off_8A5020[v51];
    if ( v52 )
    {
      v53 = strlen(off_8A5020[v51]);
      v129[0] = (QT::QString *)(v53 + 1);
      v54 = v52;
      ptr = (void *)qvector_reserve(&ptr, 0, v53 + 1, 1);
      v152.m128i_i64[0] = (__int64)v129[0];
      memmove(ptr, v52, v53);
      *((_BYTE *)ptr + v53) = 0;
      v58 = v152.m128i_i64[0];
      if ( v152.m128i_i64[0] )
      {
        v57 = v152.m128i_i64[0] - 1;
        if ( v152.m128i_i64[0] != 1 )
        {
          v110 = v144.m128i_i64[0];
          v111 = (QT::QString *)(v152.m128i_i64[0] - 1);
          if ( v144.m128i_i64[0] )
          {
            v110 = v144.m128i_i64[0] - 1;
            v111 = (QT::QString *)(v57 + v144.m128i_i64[0] - 1);
            v58 = v152.m128i_i64[0] + v144.m128i_i64[0] - 1;
          }
          v112 = v143;
          if ( v144.m128i_i64[1] < v58 )
          {
            v124 = v152.m128i_i64[0] - 1;
            v129[0] = v111;
            v143 = qvector_reserve(&v143, v143, v58, 1);
            v57 = v124;
            v112 = v143;
            v111 = v129[0];
          }
          v144.m128i_i64[0] = v58;
          *((_BYTE *)v111 + v112) = 0;
          v54 = ptr;
          memcpy((void *)(v110 + v143), ptr, v57);
        }
      }
      if ( ptr )
      {
        v152.m128i_i64[0] = 0;
        qfree(ptr, v54, v55, v56, v57);
      }
    }
    v59 = *((_DWORD *)v17 + 2);
    ptr = nullptr;
    v152 = 0;
    switch ( v59 )
    {
      case 2:
        v118 = (void *)qvector_reserve(&ptr, 0, 11, 1);
        v63 = 0x7475706D6F63202CLL;
        v60 = &stru_7258 + 13;
        ptr = v118;
        v152.m128i_i64[0] = 11;
        qmemcpy(v118, ", computer", 10);
        v69 = ptr;
        *((_BYTE *)ptr + 10) = 0;
        v119 = v152.m128i_i64[0];
        if ( v152.m128i_i64[0] )
        {
          v64 = (QT::QString *)(v152.m128i_i64[0] - 1);
          if ( v152.m128i_i64[0] != 1 )
          {
            v120 = v144.m128i_i64[0];
            v121 = (QT::QString *)(v152.m128i_i64[0] - 1);
            if ( v144.m128i_i64[0] )
            {
              v120 = v144.m128i_i64[0] - 1;
              v121 = (QT::QString *)((char *)v64 + v144.m128i_i64[0] - 1);
              v119 = v152.m128i_i64[0] + v144.m128i_i64[0] - 1;
            }
            v122 = v143;
            if ( v144.m128i_i64[1] < v119 )
            {
              v127 = v152.m128i_i64[0] - 1;
              v129[0] = v121;
              v143 = qvector_reserve(&v143, v143, v119, 1);
              v64 = (QT::QString *)v127;
              v122 = v143;
              v121 = v129[0];
            }
            v144.m128i_i64[0] = v119;
            *((_BYTE *)v121 + v122) = 0;
            v60 = ptr;
            memcpy((void *)(v120 + v143), ptr, (size_t)v64);
            v69 = ptr;
          }
        }
        if ( !v69 )
          goto LABEL_76;
        break;
      case 3:
        v60 = nullptr;
        v113 = (void *)qvector_reserve(&ptr, 0, 11, 1);
        v63 = 0x6974616F6C66202CLL;
        v62 = 26478;
        ptr = v113;
        v152.m128i_i64[0] = 11;
        qmemcpy(v113, ", floating", 10);
        v69 = ptr;
        *((_BYTE *)ptr + 10) = 0;
        v114 = v152.m128i_i64[0];
        if ( v152.m128i_i64[0] )
        {
          v64 = (QT::QString *)(v152.m128i_i64[0] - 1);
          if ( v152.m128i_i64[0] != 1 )
          {
            v115 = v144.m128i_i64[0];
            v116 = v152.m128i_i64[0] - 1;
            if ( v144.m128i_i64[0] )
            {
              v115 = v144.m128i_i64[0] - 1;
              v116 = (__int64)v64 + v144.m128i_i64[0] - 1;
              v114 = v152.m128i_i64[0] + v144.m128i_i64[0] - 1;
            }
            v117 = v143;
            if ( v144.m128i_i64[1] < v114 )
            {
              v125 = v116;
              v129[0] = (QT::QString *)(v152.m128i_i64[0] - 1);
              v143 = qvector_reserve(&v143, v143, v114, 1);
              v116 = v125;
              v117 = v143;
              v64 = v129[0];
            }
            v144.m128i_i64[0] = v114;
            *(_BYTE *)(v117 + v116) = 0;
            v60 = ptr;
            memcpy((void *)(v115 + v143), ptr, (size_t)v64);
            v69 = ptr;
          }
        }
        if ( !v69 )
          goto LABEL_76;
        break;
      case 1:
        v60 = nullptr;
        v61 = (_DWORD *)qvector_reserve(&ptr, 0, 8, 1);
        ptr = v61;
        v152.m128i_i64[0] = 8;
        *v61 = 1634607148;
        *(_DWORD *)((char *)v61 + 3) = 1684368737;
        *((_BYTE *)ptr + 7) = 0;
        v65 = v152.m128i_i64[0];
        if ( v152.m128i_i64[0] )
        {
          v64 = (QT::QString *)(v152.m128i_i64[0] - 1);
          if ( v152.m128i_i64[0] != 1 )
          {
            v66 = v144.m128i_i64[0];
            v67 = v152.m128i_i64[0] - 1;
            if ( v144.m128i_i64[0] )
            {
              v66 = v144.m128i_i64[0] - 1;
              v67 = (__int64)v64 + v144.m128i_i64[0] - 1;
              v65 = v152.m128i_i64[0] + v144.m128i_i64[0] - 1;
            }
            v68 = v143;
            if ( v144.m128i_i64[1] < v65 )
            {
              v126 = v67;
              v129[0] = (QT::QString *)(v152.m128i_i64[0] - 1);
              v143 = qvector_reserve(&v143, v143, v65, 1);
              v67 = v126;
              v68 = v143;
              v64 = v129[0];
            }
            v144.m128i_i64[0] = v65;
            *(_BYTE *)(v68 + v67) = 0;
            v60 = ptr;
            memcpy((void *)(v66 + v143), ptr, (size_t)v64);
          }
        }
        v69 = ptr;
        if ( !ptr )
          goto LABEL_76;
        break;
      default:
        v60 = nullptr;
        ptr = (void *)qvector_reserve(&ptr, 0, 15, 1);
        v152.m128i_i64[0] = 15;
        strcpy((char *)ptr, ", unknown type");
        v63 = 0x65707974206E776FLL;
        v69 = ptr;
        v106 = v152.m128i_i64[0];
        if ( v152.m128i_i64[0] )
        {
          v64 = (QT::QString *)(v152.m128i_i64[0] - 1);
          if ( v152.m128i_i64[0] != 1 )
          {
            v107 = v144.m128i_i64[0];
            v108 = (QT::QString *)(v152.m128i_i64[0] - 1);
            if ( v144.m128i_i64[0] )
            {
              v107 = v144.m128i_i64[0] - 1;
              v108 = (QT::QString *)((char *)v64 + v144.m128i_i64[0] - 1);
              v106 = v152.m128i_i64[0] + v144.m128i_i64[0] - 1;
            }
            v109 = v143;
            if ( v144.m128i_i64[1] < v106 )
            {
              v128 = v152.m128i_i64[0] - 1;
              v129[0] = v108;
              v143 = qvector_reserve(&v143, v143, v106, 1);
              v64 = (QT::QString *)v128;
              v109 = v143;
              v108 = v129[0];
            }
            v144.m128i_i64[0] = v106;
            *((_BYTE *)v108 + v109) = 0;
            v60 = ptr;
            memcpy((void *)(v107 + v143), ptr, (size_t)v64);
            v69 = ptr;
          }
        }
        if ( !v69 )
          goto LABEL_76;
        break;
    }
    v152.m128i_i64[0] = 0;
    qfree(v69, v60, v62, v63, v64);
LABEL_76:
    v70 = v144.m128i_i64[0];
    LOBYTE(v71) = 0;
    v72 = &s1;
    if ( v144.m128i_i64[0] )
    {
      v70 = v144.m128i_i64[0] - 1;
      v72 = (const char *)v143;
      v71 = (unsigned __int64)(v144.m128i_i64[0] - 1) >> 63;
    }
    if ( !v72 || (_BYTE)v71 )
    {
      v70 = 0;
      if ( v72 )
        v70 = strlen(v72);
    }
    QT::QString::fromUtf8(v145, v70, v72);
    v139 = nullptr;
    v140 = 0;
    sub_169A50((__int64 *)&v139, (__int64)"%02X-%02X%02X-%02X%02X-%02X", *v17, v17[1], v17[2], v17[3], v17[4], v17[5]);
    if ( (_QWORD)v140 )
    {
      v73 = v140 - 1;
      v74 = v139;
      v75 = (unsigned __int64)(v140 - 1) >> 63;
    }
    else
    {
      LOBYTE(v75) = 0;
      v73 = 0;
      v74 = (char *)&s1;
    }
    if ( !v74 || (_BYTE)v75 )
    {
      v73 = 0;
      if ( v74 )
        v73 = strlen(v74);
    }
    QT::QString::fromUtf8(v141, v73, v74);
    v129[0] = (QT::QString *)v138;
    QT::QString::fromUtf8(v138, 9, "License: ");
    v76 = QT::QString::append(v129[0], (const QT::QString *)v141);
    v77 = *(void **)v76;
    *(_QWORD *)v76 = 0;
    v142[0] = v77;
    v78 = *(void **)(v76 + 8);
    *(_QWORD *)(v76 + 8) = 0;
    v142[1] = v78;
    v79 = *(void **)(v76 + 16);
    *(_QWORD *)(v76 + 16) = 0;
    v142[2] = v79;
    v80 = QT::QString::append((QT::QString *)v142, (const QT::QString *)v145);
    v81 = *(void **)v80;
    *(_QWORD *)v80 = 0;
    v146[0] = v81;
    v82 = *(void **)(v80 + 8);
    *(_QWORD *)(v80 + 8) = 0;
    v146[1] = v82;
    v83 = *(void **)(v80 + 16);
    *(_QWORD *)(v80 + 16) = 0;
    v146[2] = v83;
    v84 = QT::QString::append((QT::QString *)v146, (const QT::QString *)v147);
    v85 = *(void **)v84;
    *(_QWORD *)v84 = 0;
    v86 = v135;
    v148[0] = v85;
    v87 = *(void **)(v84 + 8);
    *(_QWORD *)(v84 + 8) = 0;
    v148[1] = v87;
    v88 = *(void **)(v84 + 16);
    *(_QWORD *)(v84 + 16) = 0;
    v148[2] = v88;
    v89 = QT::QString::append((QT::QString *)v148, v86);
    v90 = *(void **)v89;
    *(_QWORD *)v89 = 0;
    v91 = v130;
    ptr = v90;
    v92 = *(_QWORD *)(v89 + 8);
    *(_QWORD *)(v89 + 8) = 0;
    v152.m128i_i64[0] = v92;
    v93 = *(_QWORD *)(v89 + 16);
    *(_QWORD *)(v89 + 16) = 0;
    v152.m128i_i64[1] = v93;
    QT::QLabel::setText(v91, (const QT::QString *)&ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v148[0] && !_InterlockedSub((volatile signed __int32 *)v148[0], 1u) )
      free(v148[0]);
    if ( v146[0] && !_InterlockedSub((volatile signed __int32 *)v146[0], 1u) )
      free(v146[0]);
    if ( v142[0] && !_InterlockedSub((volatile signed __int32 *)v142[0], 1u) )
      free(v142[0]);
    if ( v138[0] && !_InterlockedSub((volatile signed __int32 *)v138[0], 1u) )
      free(v138[0]);
    if ( v141[0] && !_InterlockedSub((volatile signed __int32 *)v141[0], 1u) )
      free(v141[0]);
    if ( v139 )
    {
      *(_QWORD *)&v140 = 0;
      qfree(v139, &ptr, v94, v95, v96);
    }
    if ( v145[0] && !_InterlockedSub((volatile signed __int32 *)v145[0], 1u) )
      free(v145[0]);
    if ( v143 )
    {
      v144.m128i_i64[0] = 0;
      qfree(v143, &ptr, v94, v95, v96);
    }
    if ( v147[0] && !_InterlockedSub((volatile signed __int32 *)v147[0], 1u) )
      free(v147[0]);
    if ( v150[0] && !_InterlockedSub((volatile signed __int32 *)v150[0], 1u) )
      free(v150[0]);
    if ( v132 && v149[0] && !_InterlockedSub((volatile signed __int32 *)v149[0], 1u) )
      free(v149[0]);
    v97 = *((_QWORD *)v17 + 5);
    v98 = &s1;
    v99 = *((QT::QLabel **)v155 + 11);
    v100 = 0;
    if ( v97 )
    {
      v100 = v97 - 1;
      v98 = *((const char **)v17 + 4);
      v131 = (unsigned __int64)(v97 - 1) >> 63;
    }
    if ( !v98 || (_BYTE)v131 )
    {
      v100 = 0;
      if ( v98 )
        v100 = strlen(v98);
    }
    QT::QString::fromUtf8(v149, v100, v98);
    v101 = v135;
    QT::QString::fromUtf8(v135, 3, "<b>");
    QT::QString::append(v101, (const QT::QString *)v149);
    v102 = QT::QString::append(v135, "</b>", 4);
    v103 = *(void **)v102;
    *(_QWORD *)v102 = 0;
    ptr = v103;
    v104 = *(_QWORD *)(v102 + 8);
    *(_QWORD *)(v102 + 8) = 0;
    v152.m128i_i64[0] = v104;
    v105 = *(_QWORD *)(v102 + 16);
    *(_QWORD *)(v102 + 16) = 0;
    v152.m128i_i64[1] = v105;
    QT::QLabel::setText(v99, (const QT::QString *)&ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v150[0] && !_InterlockedSub((volatile signed __int32 *)v150[0], 1u) )
      free(v150[0]);
    if ( v149[0] && !_InterlockedSub((volatile signed __int32 *)v149[0], 1u) )
      free(v149[0]);
    goto LABEL_38;
  }
  (*(void (__fastcall **)(QT::QLabel *, _QWORD))(*(_QWORD *)v34 + 104LL))(v34, 0);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v155 + 11) + 104LL))(*((_QWORD *)v155 + 11), 0);
LABEL_38:
  QT::QTimer::QTimer((QT::QTimer *)&ptr, nullptr);
  QT::QTimer::setSingleShot((QT::QTimer *)&ptr, 1);
  v35 = v135;
  QT::QObject::connect(v135, &ptr, "2timeout()", p_dest, "1accept()", 0);
  QT::QMetaObject::Connection::~Connection(v35);
  if ( a1 == 1 )
    QT::QTimer::start((QT::QTimer *)&ptr, 3000);
  sub_53AB40(p_dest);
  QT::QTimer::~QTimer((QT::QTimer *)&ptr);
  QT::QIcon::~QIcon(v133);
  if ( v137[0] && !_InterlockedSub((volatile signed __int32 *)v137[0], 1u) )
    free(v137[0]);
  dest = &AboutDialog___vtable;
  *((_QWORD *)&v154 + 1) = AboutDialog___vtable_at__16;
  if ( v155 )
    operator delete(v155, 0x70u);
  dest = &ui_dialog_t___vtable;
  *((_QWORD *)&v154 + 1) = ui_dialog_t___vtable_at__16;
  QT::QDialog::~QDialog(p_dest);
  return 1;
}
