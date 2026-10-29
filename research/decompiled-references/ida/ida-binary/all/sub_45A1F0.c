__int64 __fastcall sub_45A1F0(
        QT::QObject *this,
        int a2,
        __int64 a3,
        _QWORD *a4,
        void **a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v14; // rdx
  _DWORD *v15; // rsi
  unsigned __int64 (__fastcall *v16)(QT::QMetaObject *, __int64, __int64, __int64, void **); // rax
  __int64 result; // rax
  void **v18; // rbp
  char *v19; // rdi
  void (*v20)(); // rax
  void *v21; // rdx
  void **v22; // rax
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rdx
  void **v26; // rax
  void *v27; // rcx
  void *v28; // rcx
  __m128i v29; // xmm0
  void *v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // rdx
  __int64 v139; // rdx
  __int64 v140; // rdx
  __int64 v141; // rdx
  __int64 v142; // rdx
  __int64 v143; // rdx
  __int64 v144; // rdx
  __int64 v145; // rdx
  __int64 v146; // rdx
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rdx
  __int64 v150; // rdx
  __int64 v151; // rdx
  void *ptr; // [rsp+0h] [rbp-7C8h] BYREF
  void *v153; // [rsp+8h] [rbp-7C0h]
  void *v154; // [rsp+10h] [rbp-7B8h]
  __int128 v155; // [rsp+780h] [rbp-48h]
  _BYTE v156[24]; // [rsp+790h] [rbp-38h] BYREF
  unsigned __int64 v157; // [rsp+7A8h] [rbp-20h]

  v157 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0:
      switch ( a3 )
      {
        case 0LL:
          v30 = *(void **)a4[1];
          *(_QWORD *)&v156[8] = &ptr;
          *(_QWORD *)v156 = 0;
          ptr = v30;
          QT::QMetaObject::activate(this, (QT::QObject *)&off_87B020, nullptr, (int)v156, a5);
          return v157 - __readfsqword(0x28u);
        case 1LL:
          return QT::QMetaObject::activate(
                   this,
                   (QT::QObject *)&off_87B020,
                   (const QT::QMetaObject *)((char *)&dword_0 + 1),
                   0,
                   a5);
        case 2LL:
          v31 = *(_DWORD *)a4[1];
          *(_QWORD *)&v156[8] = &ptr;
          *(_QWORD *)v156 = 0;
          LODWORD(ptr) = v31;
          QT::QMetaObject::activate(
            this,
            (QT::QObject *)&off_87B020,
            (const QT::QMetaObject *)((char *)&dword_0 + 2),
            (int)v156,
            a5);
          return v157 - __readfsqword(0x28u);
        case 3LL:
          return QT::QMetaObject::activate(
                   this,
                   (QT::QObject *)&off_87B020,
                   (const QT::QMetaObject *)((char *)&dword_0 + 3),
                   0,
                   a5);
        case 4LL:
          return QT::QMetaObject::activate(this, (QT::QObject *)&off_87B020, (const QT::QMetaObject *)&byte_4, 0, a5);
        case 5LL:
          return QT::QMetaObject::activate(this, (QT::QObject *)&off_87B020, (const QT::QMetaObject *)&byte_5, 0, a5);
        case 6LL:
          v29 = _mm_loadu_si128((const __m128i *)(a4 + 1));
          *(_QWORD *)v156 = 0;
          *(__m128i *)&v156[8] = v29;
          QT::QMetaObject::activate(this, (QT::QObject *)&off_87B020, (const QT::QMetaObject *)&byte_6, (int)v156, a5);
          return v157 - __readfsqword(0x28u);
        case 7LL:
          return sub_1EC570((__int64 *)this);
        case 8LL:
          return sub_1E85E0((__int64 *)this, *(unsigned int *)a4[1], a4[2], *(_QWORD *)a4[3]);
        case 9LL:
          return sub_1F95A0((__int64 *)this);
        case 10LL:
          return sub_1FF760((__m128i *)this, (const char *)*(unsigned int *)a4[1], a6, a7, a8, a9, a10, a11, a12, a13);
        case 11LL:
          return sub_1F8000((QT::QWidget **)this, *(unsigned int *)a4[1]);
        case 12LL:
          return sub_1F81F0((__int64 *)this);
        case 13LL:
          return sub_204A70(this, *(double *)a6.m128_u64, a7, a8, a9, a10, a11, a12, a13);
        case 14LL:
          return (*(__int64 (__fastcall **)(QT::QObject *))(*(_QWORD *)this + 1056LL))(this);
        case 15LL:
          return (*(__int64 (__fastcall **)(QT::QObject *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 1064LL))(
                   this,
                   *(_QWORD *)a4[1],
                   *(_QWORD *)a4[2],
                   *(_QWORD *)a4[3]);
        case 16LL:
          QT::QString::fromUtf8(&ptr, 11, "Disassembly");
          v25 = ptr;
          v26 = (void **)*a4;
          if ( *a4 )
          {
            v25 = *v26;
            *v26 = ptr;
            ptr = v25;
            v27 = v26[1];
            v26[1] = v153;
            v153 = v27;
            v28 = v26[2];
            v26[2] = v154;
            v154 = v28;
          }
          if ( !v25 || _InterlockedSub((volatile signed __int32 *)v25, 1u) )
            return v157 - __readfsqword(0x28u);
          goto LABEL_43;
        case 17LL:
          QT::QFont::QFont((QT::QFont *)&ptr, (const QT::QFont *)a4[1]);
          sub_1F6970(this, (const QT::QFont *)&ptr);
          QT::QFont::~QFont((QT::QFont *)&ptr);
          return v157 - __readfsqword(0x28u);
        case 18LL:
          return sub_1F67E0(this);
        case 19LL:
          return sub_206150((__int64)this, *(QT::QWidget ***)a4[1], *(double *)a6.m128_u64);
        case 20LL:
          v20 = *(void (**)())(*(_QWORD *)this + 1072LL);
          if ( v20 == nullsub_184 )
            return v157 - __readfsqword(0x28u);
          return ((__int64 (*)(void))v20)();
        case 21LL:
          v20 = *(void (**)())(*(_QWORD *)this + 1080LL);
          if ( v20 == nullsub_185 )
            return v157 - __readfsqword(0x28u);
          return ((__int64 (*)(void))v20)();
        case 22LL:
          (*(void (__fastcall **)(void **, QT::QObject *))(*(_QWORD *)this + 1088LL))(&ptr, this);
          v21 = ptr;
          v22 = (void **)*a4;
          if ( *a4 )
          {
            v21 = *v22;
            *v22 = ptr;
            ptr = v21;
            v23 = v22[1];
            v22[1] = v153;
            v153 = v23;
            v24 = v22[2];
            v22[2] = v154;
            v154 = v24;
          }
          if ( !v21 || _InterlockedSub((volatile signed __int32 *)v21, 1u) )
            return v157 - __readfsqword(0x28u);
LABEL_43:
          free(ptr);
          return v157 - __readfsqword(0x28u);
        default:
          return v157 - __readfsqword(0x28u);
      }
    case 5:
      v14 = a4[1];
      v15 = (_DWORD *)*a4;
      v16 = *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v14;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v14 == sub_459B80 )
      {
        if ( !*(_QWORD *)(v14 + 8) )
          *v15 = 0;
      }
      else if ( (char *)v16 == (char *)sub_459BE0 )
      {
        if ( !*(_QWORD *)(v14 + 8) )
          *v15 = 1;
      }
      else if ( (char *)v16 == (char *)sub_459C00 )
      {
        if ( !*(_QWORD *)(v14 + 8) )
          *v15 = 2;
      }
      else if ( (char *)v16 == (char *)sub_459C60 )
      {
        if ( !*(_QWORD *)(v14 + 8) )
          *v15 = 3;
      }
      else if ( (char *)v16 == (char *)sub_459C80 )
      {
        if ( !*(_QWORD *)(v14 + 8) )
          *v15 = 4;
      }
      else if ( (char *)v16 == (char *)sub_459CA0 )
      {
        if ( !*(_QWORD *)(v14 + 8) )
          *v15 = 5;
      }
      else if ( v16 == sub_459CC0 && !*(_QWORD *)(v14 + 8) )
      {
        *v15 = 6;
      }
      return v157 - __readfsqword(0x28u);
    case 1:
      v18 = (void **)*a4;
      v19 = (char *)this + 40;
      switch ( a3 )
      {
        case 0LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563905LL, 0);
          *(_QWORD *)&v156[8] = v131;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 1LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563906LL, 0);
          *(_QWORD *)&v156[8] = v132;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 2LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563907LL, 0);
          *(_QWORD *)&v156[8] = v133;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 3LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563908LL, 0);
          *(_QWORD *)&v156[8] = v134;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 4LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563909LL, 0);
          *(_QWORD *)&v156[8] = v135;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 5LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563910LL, 0);
          *(_QWORD *)&v156[8] = v136;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 6LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563911LL, 0);
          *(_QWORD *)&v156[8] = v137;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 7LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563912LL, 0);
          *(_QWORD *)&v156[8] = v138;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 8LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563913LL, 0);
          *(_QWORD *)&v156[8] = v139;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 9LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563914LL, 0);
          *(_QWORD *)&v156[8] = v140;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 10LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563915LL, 0);
          *(_QWORD *)&v156[8] = v141;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 11LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563916LL, 0);
          *(_QWORD *)&v156[8] = v142;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 12LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563917LL, 0);
          *(_QWORD *)&v156[8] = v143;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 13LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563918LL, 0);
          *(_QWORD *)&v156[8] = v144;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 14LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563919LL, 0);
          *(_QWORD *)&v156[8] = v145;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 15LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563920LL, 0);
          *(_QWORD *)&v156[8] = v146;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 16LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563921LL, 0);
          *(_QWORD *)&v156[8] = v147;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 17LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563922LL, 0);
          *(_QWORD *)&v156[8] = v148;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 18LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563923LL, 0);
          *(_QWORD *)&v156[8] = v149;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 19LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563924LL, 0);
          *(_QWORD *)&v156[8] = v150;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 20LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563925LL, 0);
          *(_QWORD *)&v156[8] = v151;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 21LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563926LL, 0);
          *(_QWORD *)&v156[8] = v66;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 22LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563927LL, 0);
          *(_QWORD *)&v156[8] = v67;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 23LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563928LL, 0);
          *(_QWORD *)&v156[8] = v68;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 24LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563929LL, 0);
          *(_QWORD *)&v156[8] = v69;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 25LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563930LL, 0);
          *(_QWORD *)&v156[8] = v70;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 26LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563931LL, 0);
          *(_QWORD *)&v156[8] = v71;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 27LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563932LL, 0);
          *(_QWORD *)&v156[8] = v72;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 28LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563933LL, 0);
          *(_QWORD *)&v156[8] = v73;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 29LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563934LL, 0);
          *(_QWORD *)&v156[8] = v74;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 30LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563935LL, 0);
          *(_QWORD *)&v156[8] = v75;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 31LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563936LL, 0);
          *(_QWORD *)&v156[8] = v76;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 32LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563937LL, 0);
          *(_QWORD *)&v156[8] = v77;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 33LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563938LL, 0);
          *(_QWORD *)&v156[8] = v78;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 34LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563939LL, 0);
          *(_QWORD *)&v156[8] = v79;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 35LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563940LL, 0);
          *(_QWORD *)&v156[8] = v80;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 36LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563941LL, 0);
          *(_QWORD *)&v156[8] = v81;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 37LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563942LL, 0);
          *(_QWORD *)&v156[8] = v82;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 38LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563943LL, 0);
          *(_QWORD *)&v156[8] = v83;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 39LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563945LL, 0);
          *(_QWORD *)&v156[8] = v84;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 40LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563946LL, 0);
          *(_QWORD *)&v156[8] = v85;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 41LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563947LL, 0);
          *(_QWORD *)&v156[8] = v86;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 42LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563948LL, 0);
          *(_QWORD *)&v156[8] = v87;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 43LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563949LL, 0);
          *(_QWORD *)&v156[8] = v88;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 44LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563950LL, 0);
          *(_QWORD *)&v156[8] = v89;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 45LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563951LL, 0);
          *(_QWORD *)&v156[8] = v90;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 46LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563952LL, 0);
          *(_QWORD *)&v156[8] = v91;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 47LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563953LL, 0);
          *(_QWORD *)&v156[8] = v92;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 48LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563954LL, 0);
          *(_QWORD *)&v156[8] = v93;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 49LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563955LL, 0);
          *(_QWORD *)&v156[8] = v94;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 50LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563956LL, 0);
          *(_QWORD *)&v156[8] = v95;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 51LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563958LL, 0);
          *(_QWORD *)&v156[8] = v96;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 52LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563959LL, 0);
          *(_QWORD *)&v156[8] = v97;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 53LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563961LL, 0);
          *(_QWORD *)&v156[8] = v98;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 54LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563962LL, 0);
          *(_QWORD *)&v156[8] = v99;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 55LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563963LL, 0);
          *(_QWORD *)&v156[8] = v100;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 56LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563964LL, 0);
          *(_QWORD *)&v156[8] = v101;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 57LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563965LL, 0);
          *(_QWORD *)&v156[8] = v102;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 58LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563966LL, 0);
          *(_QWORD *)&v156[8] = v103;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 59LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563967LL, 0);
          *(_QWORD *)&v156[8] = v104;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 60LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563968LL, 0);
          *(_QWORD *)&v156[8] = v105;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 61LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563969LL, 0);
          *(_QWORD *)&v156[8] = v106;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 62LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563970LL, 0);
          *(_QWORD *)&v156[8] = v107;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 63LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563971LL, 0);
          *(_QWORD *)&v156[8] = v108;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 64LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563972LL, 0);
          *(_QWORD *)&v156[8] = v109;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 65LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563973LL, 0);
          *(_QWORD *)&v156[8] = v110;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 66LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563974LL, 0);
          *(_QWORD *)&v156[8] = v111;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 67LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563975LL, 0);
          *(_QWORD *)&v156[8] = v112;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 68LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563977LL, 0);
          *(_QWORD *)&v156[8] = v113;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 69LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563978LL, 0);
          *(_QWORD *)&v156[8] = v114;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 70LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563979LL, 0);
          *(_QWORD *)&v156[8] = v115;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 71LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563981LL, 0);
          *(_QWORD *)&v156[8] = v116;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 72LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563982LL, 0);
          *(_QWORD *)&v156[8] = v117;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 73LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563983LL, 0);
          *(_QWORD *)&v156[8] = v118;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 74LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563984LL, 0);
          *(_QWORD *)&v156[8] = v119;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 75LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563985LL, 0);
          *(_QWORD *)&v156[8] = v120;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 76LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563986LL, 0);
          *(_QWORD *)&v156[8] = v121;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 77LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563987LL, 0);
          *(_QWORD *)&v156[8] = v122;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 78LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563988LL, 0);
          *(_QWORD *)&v156[8] = v123;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 79LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563989LL, 0);
          *(_QWORD *)&v156[8] = v124;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 80LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563990LL, 0);
          *(_QWORD *)&v156[8] = v125;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 81LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563991LL, 0);
          *(_QWORD *)&v156[8] = v126;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 82LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563992LL, 0);
          *(_QWORD *)&v156[8] = v127;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 83LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563993LL, 0);
          *(_QWORD *)&v156[8] = v128;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 84LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563994LL, 0);
          *(_QWORD *)&v156[8] = v129;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 85LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563995LL, 0);
          *(_QWORD *)&v156[8] = v34;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 86LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563996LL, 0);
          *(_QWORD *)&v156[8] = v35;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 87LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563997LL, 0);
          *(_QWORD *)&v156[8] = v36;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 88LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563998LL, 0);
          *(_QWORD *)&v156[8] = v37;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 89LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165563999LL, 0);
          *(_QWORD *)&v156[8] = v38;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 90LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564000LL, 0);
          *(_QWORD *)&v156[8] = v39;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 91LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564001LL, 0);
          *(_QWORD *)&v156[8] = v40;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 92LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564002LL, 0);
          *(_QWORD *)&v156[8] = v41;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 93LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564003LL, 0);
          *(_QWORD *)&v156[8] = v42;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 94LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564004LL, 0);
          *(_QWORD *)&v156[8] = v43;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 95LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564005LL, 0);
          *(_QWORD *)&v156[8] = v44;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 96LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564006LL, 0);
          *(_QWORD *)&v156[8] = v45;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 97LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564007LL, 0);
          *(_QWORD *)&v156[8] = v46;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 98LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564008LL, 0);
          *(_QWORD *)&v156[8] = v47;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 99LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564009LL, 0);
          *(_QWORD *)&v156[8] = v48;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 100LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564010LL, 0);
          *(_QWORD *)&v156[8] = v49;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 101LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564011LL, 0);
          *(_QWORD *)&v156[8] = v50;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 102LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564012LL, 0);
          *(_QWORD *)&v156[8] = v51;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 103LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564013LL, 0);
          *(_QWORD *)&v156[8] = v52;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 104LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564014LL, 0);
          *(_QWORD *)&v156[8] = v53;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 105LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564015LL, 0);
          *(_QWORD *)&v156[8] = v54;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 106LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564016LL, 0);
          *(_QWORD *)&v156[8] = v55;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 107LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564017LL, 0);
          *(_QWORD *)&v156[8] = v56;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 108LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564018LL, 0);
          *(_QWORD *)&v156[8] = v57;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 109LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564019LL, 0);
          *(_QWORD *)&v156[8] = v58;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 110LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564020LL, 0);
          *(_QWORD *)&v156[8] = v59;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 111LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564021LL, 0);
          *(_QWORD *)&v156[8] = v60;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 112LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564022LL, 0);
          *(_QWORD *)&v156[8] = v61;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 113LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564023LL, 0);
          *(_QWORD *)&v156[8] = v62;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 114LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564024LL, 0);
          *(_QWORD *)&v156[8] = v63;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 115LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564025LL, 0);
          *(_QWORD *)&v156[8] = v64;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 116LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564026LL, 0);
          *(_QWORD *)&v156[8] = v65;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 117LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564027LL, 0);
          *(_QWORD *)&v156[8] = v32;
          *v18 = *(void **)v156;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 118LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564028LL, 0);
          *(_QWORD *)&v156[8] = v33;
          *(_QWORD *)&v155 = *(_QWORD *)v156;
          *v18 = *(void **)v156;
          *((_QWORD *)&v155 + 1) = v33;
          *(void **)((char *)v18 + 6) = *(void **)&v156[6];
          break;
        case 119LL:
          *(_QWORD *)v156 = sub_524FA0(v19, 2165564029LL, 0);
          *(_QWORD *)&v156[8] = v130;
          *(_QWORD *)&v155 = *(_QWORD *)v156;
          *v18 = *(void **)v156;
          *((_QWORD *)&v155 + 1) = v130;
          *(void **)((char *)v18 + 6) = *(void **)((char *)&v155 + 6);
          break;
        default:
          return v157 - __readfsqword(0x28u);
      }
      return v157 - __readfsqword(0x28u);
  }
  if ( a2 != 2 )
    return v157 - __readfsqword(0x28u);
  switch ( a3 )
  {
    case 0LL:
      result = sub_524FF0((char *)this + 40, 2165563905LL, *a4, 0);
      break;
    case 1LL:
      result = sub_524FF0((char *)this + 40, 2165563906LL, *a4, 0);
      break;
    case 2LL:
      result = sub_524FF0((char *)this + 40, 2165563907LL, *a4, 0);
      break;
    case 3LL:
      result = sub_524FF0((char *)this + 40, 2165563908LL, *a4, 0);
      break;
    case 4LL:
      result = sub_524FF0((char *)this + 40, 2165563909LL, *a4, 0);
      break;
    case 5LL:
      result = sub_524FF0((char *)this + 40, 2165563910LL, *a4, 0);
      break;
    case 6LL:
      result = sub_524FF0((char *)this + 40, 2165563911LL, *a4, 0);
      break;
    case 7LL:
      result = sub_524FF0((char *)this + 40, 2165563912LL, *a4, 0);
      break;
    case 8LL:
      result = sub_524FF0((char *)this + 40, 2165563913LL, *a4, 0);
      break;
    case 9LL:
      result = sub_524FF0((char *)this + 40, 2165563914LL, *a4, 0);
      break;
    case 10LL:
      result = sub_524FF0((char *)this + 40, 2165563915LL, *a4, 0);
      break;
    case 11LL:
      result = sub_524FF0((char *)this + 40, 2165563916LL, *a4, 0);
      break;
    case 12LL:
      result = sub_524FF0((char *)this + 40, 2165563917LL, *a4, 0);
      break;
    case 13LL:
      result = sub_524FF0((char *)this + 40, 2165563918LL, *a4, 0);
      break;
    case 14LL:
      result = sub_524FF0((char *)this + 40, 2165563919LL, *a4, 0);
      break;
    case 15LL:
      result = sub_524FF0((char *)this + 40, 2165563920LL, *a4, 0);
      break;
    case 16LL:
      result = sub_524FF0((char *)this + 40, 2165563921LL, *a4, 0);
      break;
    case 17LL:
      result = sub_524FF0((char *)this + 40, 2165563922LL, *a4, 0);
      break;
    case 18LL:
      result = sub_524FF0((char *)this + 40, 2165563923LL, *a4, 0);
      break;
    case 19LL:
      result = sub_524FF0((char *)this + 40, 2165563924LL, *a4, 0);
      break;
    case 20LL:
      result = sub_524FF0((char *)this + 40, 2165563925LL, *a4, 0);
      break;
    case 21LL:
      result = sub_524FF0((char *)this + 40, 2165563926LL, *a4, 0);
      break;
    case 22LL:
      result = sub_524FF0((char *)this + 40, 2165563927LL, *a4, 0);
      break;
    case 23LL:
      result = sub_524FF0((char *)this + 40, 2165563928LL, *a4, 0);
      break;
    case 24LL:
      result = sub_524FF0((char *)this + 40, 2165563929LL, *a4, 0);
      break;
    case 25LL:
      result = sub_524FF0((char *)this + 40, 2165563930LL, *a4, 0);
      break;
    case 26LL:
      result = sub_524FF0((char *)this + 40, 2165563931LL, *a4, 0);
      break;
    case 27LL:
      result = sub_524FF0((char *)this + 40, 2165563932LL, *a4, 0);
      break;
    case 28LL:
      result = sub_524FF0((char *)this + 40, 2165563933LL, *a4, 0);
      break;
    case 29LL:
      result = sub_524FF0((char *)this + 40, 2165563934LL, *a4, 0);
      break;
    case 30LL:
      result = sub_524FF0((char *)this + 40, 2165563935LL, *a4, 0);
      break;
    case 31LL:
      result = sub_524FF0((char *)this + 40, 2165563936LL, *a4, 0);
      break;
    case 32LL:
      result = sub_524FF0((char *)this + 40, 2165563937LL, *a4, 0);
      break;
    case 33LL:
      result = sub_524FF0((char *)this + 40, 2165563938LL, *a4, 0);
      break;
    case 34LL:
      result = sub_524FF0((char *)this + 40, 2165563939LL, *a4, 0);
      break;
    case 35LL:
      result = sub_524FF0((char *)this + 40, 2165563940LL, *a4, 0);
      break;
    case 36LL:
      result = sub_524FF0((char *)this + 40, 2165563941LL, *a4, 0);
      break;
    case 37LL:
      result = sub_524FF0((char *)this + 40, 2165563942LL, *a4, 0);
      break;
    case 38LL:
      result = sub_524FF0((char *)this + 40, 2165563943LL, *a4, 0);
      break;
    case 39LL:
      result = sub_524FF0((char *)this + 40, 2165563945LL, *a4, 0);
      break;
    case 40LL:
      result = sub_524FF0((char *)this + 40, 2165563946LL, *a4, 0);
      break;
    case 41LL:
      result = sub_524FF0((char *)this + 40, 2165563947LL, *a4, 0);
      break;
    case 42LL:
      result = sub_524FF0((char *)this + 40, 2165563948LL, *a4, 0);
      break;
    case 43LL:
      result = sub_524FF0((char *)this + 40, 2165563949LL, *a4, 0);
      break;
    case 44LL:
      result = sub_524FF0((char *)this + 40, 2165563950LL, *a4, 0);
      break;
    case 45LL:
      result = sub_524FF0((char *)this + 40, 2165563951LL, *a4, 0);
      break;
    case 46LL:
      result = sub_524FF0((char *)this + 40, 2165563952LL, *a4, 0);
      break;
    case 47LL:
      result = sub_524FF0((char *)this + 40, 2165563953LL, *a4, 0);
      break;
    case 48LL:
      result = sub_524FF0((char *)this + 40, 2165563954LL, *a4, 0);
      break;
    case 49LL:
      result = sub_524FF0((char *)this + 40, 2165563955LL, *a4, 0);
      break;
    case 50LL:
      result = sub_524FF0((char *)this + 40, 2165563956LL, *a4, 0);
      break;
    case 51LL:
      result = sub_524FF0((char *)this + 40, 2165563958LL, *a4, 0);
      break;
    case 52LL:
      result = sub_524FF0((char *)this + 40, 2165563959LL, *a4, 0);
      break;
    case 53LL:
      result = sub_524FF0((char *)this + 40, 2165563961LL, *a4, 0);
      break;
    case 54LL:
      result = sub_524FF0((char *)this + 40, 2165563962LL, *a4, 0);
      break;
    case 55LL:
      result = sub_524FF0((char *)this + 40, 2165563963LL, *a4, 0);
      break;
    case 56LL:
      result = sub_524FF0((char *)this + 40, 2165563964LL, *a4, 0);
      break;
    case 57LL:
      result = sub_524FF0((char *)this + 40, 2165563965LL, *a4, 0);
      break;
    case 58LL:
      result = sub_524FF0((char *)this + 40, 2165563966LL, *a4, 0);
      break;
    case 59LL:
      result = sub_524FF0((char *)this + 40, 2165563967LL, *a4, 0);
      break;
    case 60LL:
      result = sub_524FF0((char *)this + 40, 2165563968LL, *a4, 0);
      break;
    case 61LL:
      result = sub_524FF0((char *)this + 40, 2165563969LL, *a4, 0);
      break;
    case 62LL:
      result = sub_524FF0((char *)this + 40, 2165563970LL, *a4, 0);
      break;
    case 63LL:
      result = sub_524FF0((char *)this + 40, 2165563971LL, *a4, 0);
      break;
    case 64LL:
      result = sub_524FF0((char *)this + 40, 2165563972LL, *a4, 0);
      break;
    case 65LL:
      result = sub_524FF0((char *)this + 40, 2165563973LL, *a4, 0);
      break;
    case 66LL:
      result = sub_524FF0((char *)this + 40, 2165563974LL, *a4, 0);
      break;
    case 67LL:
      result = sub_524FF0((char *)this + 40, 2165563975LL, *a4, 0);
      break;
    case 68LL:
      result = sub_524FF0((char *)this + 40, 2165563977LL, *a4, 0);
      break;
    case 69LL:
      result = sub_524FF0((char *)this + 40, 2165563978LL, *a4, 0);
      break;
    case 70LL:
      result = sub_524FF0((char *)this + 40, 2165563979LL, *a4, 0);
      break;
    case 71LL:
      result = sub_524FF0((char *)this + 40, 2165563981LL, *a4, 0);
      break;
    case 72LL:
      result = sub_524FF0((char *)this + 40, 2165563982LL, *a4, 0);
      break;
    case 73LL:
      result = sub_524FF0((char *)this + 40, 2165563983LL, *a4, 0);
      break;
    case 74LL:
      result = sub_524FF0((char *)this + 40, 2165563984LL, *a4, 0);
      break;
    case 75LL:
      result = sub_524FF0((char *)this + 40, 2165563985LL, *a4, 0);
      break;
    case 76LL:
      result = sub_524FF0((char *)this + 40, 2165563986LL, *a4, 0);
      break;
    case 77LL:
      result = sub_524FF0((char *)this + 40, 2165563987LL, *a4, 0);
      break;
    case 78LL:
      result = sub_524FF0((char *)this + 40, 2165563988LL, *a4, 0);
      break;
    case 79LL:
      result = sub_524FF0((char *)this + 40, 2165563989LL, *a4, 0);
      break;
    case 80LL:
      result = sub_524FF0((char *)this + 40, 2165563990LL, *a4, 0);
      break;
    case 81LL:
      result = sub_524FF0((char *)this + 40, 2165563991LL, *a4, 0);
      break;
    case 82LL:
      result = sub_524FF0((char *)this + 40, 2165563992LL, *a4, 0);
      break;
    case 83LL:
      result = sub_524FF0((char *)this + 40, 2165563993LL, *a4, 0);
      break;
    case 84LL:
      result = sub_524FF0((char *)this + 40, 2165563994LL, *a4, 0);
      break;
    case 85LL:
      result = sub_524FF0((char *)this + 40, 2165563995LL, *a4, 0);
      break;
    case 86LL:
      result = sub_524FF0((char *)this + 40, 2165563996LL, *a4, 0);
      break;
    case 87LL:
      result = sub_524FF0((char *)this + 40, 2165563997LL, *a4, 0);
      break;
    case 88LL:
      result = sub_524FF0((char *)this + 40, 2165563998LL, *a4, 0);
      break;
    case 89LL:
      result = sub_524FF0((char *)this + 40, 2165563999LL, *a4, 0);
      break;
    case 90LL:
      result = sub_524FF0((char *)this + 40, 2165564000LL, *a4, 0);
      break;
    case 91LL:
      result = sub_524FF0((char *)this + 40, 2165564001LL, *a4, 0);
      break;
    case 92LL:
      result = sub_524FF0((char *)this + 40, 2165564002LL, *a4, 0);
      break;
    case 93LL:
      result = sub_524FF0((char *)this + 40, 2165564003LL, *a4, 0);
      break;
    case 94LL:
      result = sub_524FF0((char *)this + 40, 2165564004LL, *a4, 0);
      break;
    case 95LL:
      result = sub_524FF0((char *)this + 40, 2165564005LL, *a4, 0);
      break;
    case 96LL:
      result = sub_524FF0((char *)this + 40, 2165564006LL, *a4, 0);
      break;
    case 97LL:
      result = sub_524FF0((char *)this + 40, 2165564007LL, *a4, 0);
      break;
    case 98LL:
      result = sub_524FF0((char *)this + 40, 2165564008LL, *a4, 0);
      break;
    case 99LL:
      result = sub_524FF0((char *)this + 40, 2165564009LL, *a4, 0);
      break;
    case 100LL:
      result = sub_524FF0((char *)this + 40, 2165564010LL, *a4, 0);
      break;
    case 101LL:
      result = sub_524FF0((char *)this + 40, 2165564011LL, *a4, 0);
      break;
    case 102LL:
      result = sub_524FF0((char *)this + 40, 2165564012LL, *a4, 0);
      break;
    case 103LL:
      result = sub_524FF0((char *)this + 40, 2165564013LL, *a4, 0);
      break;
    case 104LL:
      result = sub_524FF0((char *)this + 40, 2165564014LL, *a4, 0);
      break;
    case 105LL:
      result = sub_524FF0((char *)this + 40, 2165564015LL, *a4, 0);
      break;
    case 106LL:
      result = sub_524FF0((char *)this + 40, 2165564016LL, *a4, 0);
      break;
    case 107LL:
      result = sub_524FF0((char *)this + 40, 2165564017LL, *a4, 0);
      break;
    case 108LL:
      result = sub_524FF0((char *)this + 40, 2165564018LL, *a4, 0);
      break;
    case 109LL:
      result = sub_524FF0((char *)this + 40, 2165564019LL, *a4, 0);
      break;
    case 110LL:
      result = sub_524FF0((char *)this + 40, 2165564020LL, *a4, 0);
      break;
    case 111LL:
      result = sub_524FF0((char *)this + 40, 2165564021LL, *a4, 0);
      break;
    case 112LL:
      result = sub_524FF0((char *)this + 40, 2165564022LL, *a4, 0);
      break;
    case 113LL:
      result = sub_524FF0((char *)this + 40, 2165564023LL, *a4, 0);
      break;
    case 114LL:
      result = sub_524FF0((char *)this + 40, 2165564024LL, *a4, 0);
      break;
    case 115LL:
      result = sub_524FF0((char *)this + 40, 2165564025LL, *a4, 0);
      break;
    case 116LL:
      result = sub_524FF0((char *)this + 40, 2165564026LL, *a4, 0);
      break;
    case 117LL:
      result = sub_524FF0((char *)this + 40, 2165564027LL, *a4, 0);
      break;
    case 118LL:
      result = sub_524FF0((char *)this + 40, 2165564028LL, *a4, 0);
      break;
    case 119LL:
      result = sub_524FF0((char *)this + 40, 2165564029LL, *a4, 0);
      break;
    default:
      return v157 - __readfsqword(0x28u);
  }
  return result;
}
