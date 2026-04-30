__int64 __fastcall sub_4EEF70(
        int a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _BOOL8 v10; // rbp
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int *v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // rax
  bool v20; // bl
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned int *v25; // rax
  __int64 v26; // rax
  QT::QAbstractItemView *v27; // r13
  unsigned int v28; // eax
  __int64 *v29; // rdx
  void **v30; // rsi
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rcx
  unsigned int v42; // esi
  int *v43; // rax
  int v44; // ebx
  QT::QWidget *v45; // rax
  _BOOL8 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdi
  void ***v50; // rax
  void **v51; // rbx
  __int64 v52; // rax
  _QWORD *v53; // rdx
  unsigned int *v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 *v57; // r13
  double v58; // xmm4_8
  double v59; // xmm5_8
  double v60; // xmm0_8
  unsigned int v61; // eax
  __int64 *v62; // rdx
  __int64 v63; // rbx
  unsigned __int64 v64; // r14
  void *v65; // rdi
  __int64 *v66; // rdx
  unsigned int *v67; // rax
  __int64 v68; // rsi
  __int64 *v69; // rax
  unsigned int *v70; // rdx
  __int64 v71; // r8
  __int64 *v72; // rax
  unsigned int v73; // esi
  __int64 v74; // rbx
  const QT::QObject *v75; // rax
  QT::QComboBox *v76; // rax
  QT::QLineEdit *v77; // r12
  __int64 v78; // rax
  size_t v79; // rax
  const char *v80; // rbx
  size_t v81; // rdx
  __int64 *v82; // rax
  unsigned int *v83; // rdx
  __int64 v84; // rdi
  int *v85; // rax
  unsigned int v86; // esi
  int v87; // r12d
  QT::QObject *v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 *v91; // rdx
  unsigned int *v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rcx
  unsigned int v99; // esi
  __int64 *v100; // rax
  __int64 v101; // rbx
  QT::QWidget *v102; // r12
  __int64 v103; // rax
  size_t v104; // rax
  const char *v105; // rbx
  size_t v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // r8
  __int64 v110; // rcx
  unsigned int v111; // esi
  _QWORD *v112; // rax
  _QWORD *v113; // rbx
  const QT::QObject *v114; // rax
  __int64 v115; // r12
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rcx
  const char *v119; // rbp
  __int64 **v120; // rax
  __int64 *v121; // r12
  __int64 v122; // rax
  const char *v123; // rsi
  QT::QWidget *v124; // r15
  QT::QVBoxLayout *v125; // r12
  __int64 v126; // rdx
  __int64 v127; // rcx
  void (*v128)(); // rax
  __int64 v129; // rax
  __int64 v130; // r12
  __int64 v131; // rax
  __int64 v132; // rsi
  __int64 v133; // r8
  __int64 v134; // rcx
  unsigned int v135; // esi
  int *v136; // rax
  int v137; // ebx
  const QT::QObject *v138; // rax
  QT::QAbstractButton *v139; // rax
  _QWORD *v140; // rdx
  __int64 *v141; // rax
  unsigned int *v142; // rdx
  _DWORD **v143; // rdx
  __int64 *v144; // rax
  unsigned int *v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 *v148; // rax
  unsigned int *v149; // rdx
  _QWORD *v150; // rdx
  __int64 *v151; // rax
  unsigned int *v152; // rdx
  __int64 *v153; // rdx
  _QWORD *v154; // rdx
  __int64 v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rsi
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rsi
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rcx
  __m128i *v165; // rsi
  __m128i si128; // xmm0
  __int64 *v167; // rdx
  __int64 v168; // rbx
  unsigned __int64 v169; // r12
  void *v170; // r14
  __int64 v171; // rax
  __int64 *v172; // rdx
  __int64 v173; // rbx
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 *v177; // rdx
  __int64 v178; // rbx
  __int64 v179; // rax
  void *v180; // rax
  const char *v181; // rsi
  __int64 *v182; // rax
  const void *v183; // rsi
  __int64 *v184; // r12
  __m128i v185; // [rsp+0h] [rbp-128h] BYREF
  void *v186[4]; // [rsp+10h] [rbp-118h] BYREF
  __int64 v187; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v188; // [rsp+38h] [rbp-F0h]
  void **p_ptr; // [rsp+48h] [rbp-E0h]
  __int64 v190; // [rsp+50h] [rbp-D8h]
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v192; // [rsp+68h] [rbp-C0h]
  __m128i v193; // [rsp+78h] [rbp-B0h]
  _BYTE v194[40]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 v195; // [rsp+E8h] [rbp-40h]

  v195 = __readfsqword(0x28u);
  v10 = 0;
  v13 = *(_DWORD *)a2;
  switch ( a1 )
  {
    case 0:
      if ( v13 > 0x2F )
      {
        v143 = *(_DWORD ***)(a2 + 8);
        v120 = (__int64 **)(v143 + 1);
        *(_QWORD *)(a2 + 8) = v143 + 1;
        v119 = (const char *)*v143;
      }
      else
      {
        v117 = *(_QWORD *)(a2 + 16);
        v118 = v13 + 8;
        *(_DWORD *)a2 = v118;
        v119 = *(const char **)(v117 + v13);
        if ( (unsigned int)v118 <= 0x2F )
        {
          v120 = (__int64 **)(v118 + v117);
          *(_DWORD *)a2 = v13 + 16;
          goto LABEL_108;
        }
        v120 = *(__int64 ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v120 + 1;
LABEL_108:
      v121 = *v120;
      if ( batch )
      {
        if ( v121 )
        {
          v165 = (__m128i *)*v121;
          if ( (unsigned __int64)v121[2] <= 0x24 )
          {
            v171 = qvector_reserve(v121, v165, 37, 1);
            *v121 = v171;
            v165 = (__m128i *)v171;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_5DDD80);
          v121[1] = 37;
          v165[2].m128i_i32[0] = 1701080941;
          *v165 = si128;
          v165[1] = _mm_load_si128((const __m128i *)&xmmword_5DDD90);
          *(_BYTE *)(*v121 + 36) = 0;
        }
        return 0;
      }
      else
      {
        v122 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 112LL))(QT::QCoreApplication::self);
        sub_4F62A0(&ptr, v119, v122);
        v123 = v119;
        p_ptr = &ptr;
        v187 = 0;
        v190 = 0;
        v188 = 0;
        v124 = sub_4EEE60(&v187, (__int64)v119, (__int64)v121);
        if ( v124 )
        {
          QT::QWidget::windowTitle((QT::QWidget *)v186);
          QT::QWidget::setWindowTitle((QT::QWidget *)&ptr, (const QT::QString *)v186);
          if ( v186[0] && !_InterlockedSub((volatile signed __int32 *)v186[0], 1u) )
            free(v186[0]);
          v125 = (QT::QVBoxLayout *)operator new(0x20u);
          QT::QVBoxLayout::QVBoxLayout(v125);
          QT::QBoxLayout::addWidget(v125, v124, 0, 0);
          QT::QWidget::setLayout((QT::QWidget *)&ptr, v125);
          sub_4EEE00((__int64)&v187, (__int64)(v119 + 176), v126, v127, 0.0);
          sub_4F5D80(&ptr);
          v128 = *(void (**)())(*(_QWORD *)v119 + 24LL);
          if ( v128 != nullsub_38 )
            ((void (__fastcall *)(const char *, __int64))v128)(v119, 1);
          if ( *((_DWORD *)v119 + 42) != -1 )
            sub_4F5FC0(&ptr);
          sub_4F60A0(&ptr);
          v129 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
          v123 = nullptr;
          v130 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v129 + 72LL))(v129, 0);
          v10 = (unsigned int)sub_53AB40((QT::QWidget *)&ptr) == 1;
          if ( v130 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v130 + 8LL))(v130);
          QT::QWidget::hide((QT::QWidget *)&ptr);
        }
        else
        {
          v10 = 0;
        }
        if ( v187 )
        {
          *(_QWORD *)&v188 = 0;
          qfree(v187, v123);
        }
        forms_ui::dialog_t__::vfunc_3((QT::QDialog *)&ptr);
      }
      return v10;
    case 1:
      if ( v13 > 0x2F )
      {
        v140 = *(_QWORD **)(a2 + 8);
        v17 = (unsigned int *)(v140 + 1);
        *(_QWORD *)(a2 + 8) = v140 + 1;
        v16 = *v140;
      }
      else
      {
        v14 = *(_QWORD *)(a2 + 16);
        v15 = v13 + 8;
        *(_DWORD *)a2 = v15;
        v16 = *(_QWORD *)(v14 + v13);
        if ( (unsigned int)v15 <= 0x2F )
        {
          v17 = (unsigned int *)(v15 + v14);
          *(_DWORD *)a2 = v13 + 16;
          goto LABEL_5;
        }
        v17 = *(unsigned int **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v17 + 2;
LABEL_5:
      v18 = *v17;
      v19 = sub_4F5C00(v16);
      v20 = v19 != 0;
      if ( v19 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 432LL))(v19, v18);
      LOBYTE(v10) = v20;
      return v10;
    case 2:
    case 4:
      if ( v13 > 0x2F )
      {
        v53 = *(_QWORD **)(a2 + 8);
        v54 = (unsigned int *)(v53 + 1);
        *(_QWORD *)(a2 + 8) = v53 + 1;
        v55 = *v53;
LABEL_44:
        *(_QWORD *)(a2 + 8) = v54 + 2;
        goto LABEL_45;
      }
      v146 = *(_QWORD *)(a2 + 16);
      v147 = v13 + 8;
      *(_DWORD *)a2 = v147;
      v55 = *(_QWORD *)(v146 + v13);
      if ( (unsigned int)v147 > 0x2F )
      {
        v54 = *(unsigned int **)(a2 + 8);
        goto LABEL_44;
      }
      v54 = (unsigned int *)(v147 + v146);
      *(_DWORD *)a2 = v13 + 16;
LABEL_45:
      v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 16LL))(v55, *v54);
      if ( v56 )
      {
        if ( *(_DWORD *)(v56 + 8) == 8 )
        {
          v57 = (__int64 *)sub_49EE00(*(_QWORD *)(v56 + 104));
          if ( v57 )
          {
            ptr = nullptr;
            v60 = 0.0;
            v61 = *(_DWORD *)a2;
            v193.m128i_i64[0] = -1;
            v192 = 0;
            if ( a1 == 2 )
            {
              if ( v61 > 0x2F )
              {
                v62 = *(__int64 **)(a2 + 8);
                *(_QWORD *)(a2 + 8) = v62 + 1;
              }
              else
              {
                v62 = (__int64 *)(*(_QWORD *)(a2 + 16) + v61);
                *(_DWORD *)a2 = v61 + 8;
              }
              v63 = *v62;
              if ( *v62 )
              {
                v64 = *(_QWORD *)(v63 + 8);
                if ( v64 )
                {
                  v182 = (__int64 *)qalloc_or_throw(8 * v64);
                  v183 = *(const void **)v63;
                  a5 = (__m128)_mm_unpacklo_epi64((__m128i)v64, (__m128i)v64);
                  v184 = v182;
                  v185 = (__m128i)a5;
                  memcpy(v182, v183, 8 * v64);
                  if ( ptr )
                  {
                    v192.m128i_i64[0] = 0;
                    v60 = qfree(ptr, (const char *)v183);
                  }
                  a6 = (__m128)_mm_load_si128(&v185);
                  ptr = v184;
                  v192 = (__m128i)a6;
                  v193.m128i_i64[0] = *v184;
                }
              }
              sub_4A4600((__int64)v57, (unsigned __int64 *)&ptr, 7u, 0, v60, a4, a5, a6, v58, v59, a9, a10);
              v65 = ptr;
            }
            else
            {
              if ( v61 > 0x2F )
              {
                v177 = *(__int64 **)(a2 + 8);
                *(_QWORD *)(a2 + 8) = v177 + 1;
              }
              else
              {
                v177 = (__int64 *)(*(_QWORD *)(a2 + 16) + v61);
                *(_DWORD *)a2 = v61 + 8;
              }
              v178 = *v177;
              sub_4A6DB0(v57, (__int64 *)&ptr, 3, 0.0, a4, a5, a6, v58, v59, a9, a10);
              v65 = *(void **)v178;
              LOBYTE(v10) = 1;
              v179 = *(_QWORD *)(v178 + 16);
              *(_QWORD *)v178 = ptr;
              *(__m128i *)(v178 + 8) = v192;
              ptr = v65;
              v192.m128i_i64[1] = v179;
            }
            if ( v65 )
            {
              v192.m128i_i64[0] = 0;
              qfree(v65, (const char *)&ptr);
            }
          }
        }
      }
      return v10;
    case 3:
    case 5:
    case 6:
      if ( v13 > 0x2F )
      {
        v154 = *(_QWORD **)(a2 + 8);
        v25 = (unsigned int *)(v154 + 1);
        *(_QWORD *)(a2 + 8) = v154 + 1;
        v24 = *v154;
      }
      else
      {
        v22 = *(_QWORD *)(a2 + 16);
        v23 = v13 + 8;
        *(_DWORD *)a2 = v23;
        v24 = *(_QWORD *)(v22 + v13);
        if ( (unsigned int)v23 <= 0x2F )
        {
          v25 = (unsigned int *)(v23 + v22);
          *(_DWORD *)a2 = v13 + 16;
          goto LABEL_12;
        }
        v25 = *(unsigned int **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v25 + 2;
LABEL_12:
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 16LL))(v24, *v25);
      if ( !v26 || *(_DWORD *)(v26 + 8) != 9 )
        return v10;
      v27 = *(QT::QAbstractItemView **)(v26 + 104);
      v28 = *(_DWORD *)a2;
      ptr = nullptr;
      v192 = 0;
      v193 = (__m128i)-1LL;
      if ( a1 == 3 )
      {
        if ( v28 > 0x2F )
        {
          v167 = *(__int64 **)(a2 + 8);
          *(_QWORD *)(a2 + 8) = v167 + 1;
        }
        else
        {
          v167 = (__int64 *)(*(_QWORD *)(a2 + 16) + v28);
          *(_DWORD *)a2 = v28 + 8;
        }
        v168 = *v167;
        if ( *v167 )
        {
          v169 = *(_QWORD *)(v168 + 8);
          v170 = nullptr;
          if ( v169 )
          {
            v180 = (void *)qalloc_or_throw(16 * v169);
            v181 = *(const char **)v168;
            v170 = v180;
            memcpy(v180, *(const void **)v168, 16 * v169);
            if ( ptr )
            {
              v192.m128i_i64[0] = 0;
              qfree(ptr, v181);
            }
          }
          ptr = v170;
          v192 = _mm_unpacklo_epi64((__m128i)v169, (__m128i)v169);
          v193 = _mm_loadu_si128((const __m128i *)(v168 + 24));
        }
        v30 = &ptr;
        (*(void (__fastcall **)(QT::QAbstractItemView *, void **, _QWORD, __int64, _QWORD))(*(_QWORD *)v27 + 792LL))(
          v27,
          &ptr,
          0,
          7,
          0);
        goto LABEL_19;
      }
      if ( a1 != 5 )
      {
        if ( v28 > 0x2F )
        {
          v29 = *(__int64 **)(a2 + 8);
          *(_QWORD *)(a2 + 8) = v29 + 1;
        }
        else
        {
          v29 = (__int64 *)(*(_QWORD *)(a2 + 16) + v28);
          *(_DWORD *)a2 = v28 + 8;
        }
        v30 = (void **)*v29;
        sub_493F70(v27, *v29);
LABEL_19:
        v31 = ptr;
        goto LABEL_20;
      }
      if ( v28 > 0x2F )
      {
        v172 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v172 + 1;
      }
      else
      {
        v172 = (__int64 *)(*(_QWORD *)(a2 + 16) + v28);
        *(_DWORD *)a2 = v28 + 8;
      }
      v173 = *v172;
      v30 = nullptr;
      sub_48FF00(v27, nullptr, (__int64 *)&ptr, 24, 0);
      v31 = *(void **)v173;
      LOBYTE(v10) = 1;
      v174 = *(_QWORD *)(v173 + 16);
      *(_QWORD *)v173 = ptr;
      *(__m128i *)(v173 + 8) = v192;
      ptr = v31;
      v192.m128i_i64[1] = v174;
      v175 = *(_QWORD *)(v173 + 24);
      *(_QWORD *)(v173 + 24) = v193.m128i_i64[0];
      v193.m128i_i64[0] = v175;
      v176 = *(_QWORD *)(v173 + 32);
      *(_QWORD *)(v173 + 32) = v193.m128i_i64[1];
      v193.m128i_i64[1] = v176;
LABEL_20:
      if ( v31 )
      {
        v192.m128i_i64[0] = 0;
        qfree(v31, (const char *)v30);
      }
      return v10;
    case 7:
    case 9:
      if ( v13 > 0x2F )
      {
        v153 = *(__int64 **)(a2 + 8);
        v35 = (unsigned int *)(v153 + 1);
        *(_QWORD *)(a2 + 8) = v153 + 1;
        v34 = *v153;
      }
      else
      {
        v32 = *(_QWORD *)(a2 + 16);
        v33 = v13 + 8;
        *(_DWORD *)a2 = v33;
        v34 = *(_QWORD *)(v32 + v13);
        if ( (unsigned int)v33 <= 0x2F )
        {
          v35 = (unsigned int *)(v33 + v32);
          *(_DWORD *)a2 = v13 + 16;
          goto LABEL_25;
        }
        v35 = *(unsigned int **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v35 + 2;
LABEL_25:
      v36 = sub_4ECF40(nullptr, v34, *v35);
      if ( v36 )
      {
        v37 = *(_DWORD *)(*(_QWORD *)(v36 + 32) + 8LL);
        if ( a1 == 7 )
          v37 >>= 15;
        else
          LOBYTE(v37) = ~(_BYTE)v37;
        LOBYTE(v10) = v37 & 1;
      }
      return v10;
    case 8:
    case 10:
      if ( v13 > 0x2F )
      {
        v151 = *(__int64 **)(a2 + 8);
        v152 = (unsigned int *)(v151 + 1);
        *(_QWORD *)(a2 + 8) = v151 + 1;
        v40 = *v151;
      }
      else
      {
        v38 = *(_QWORD *)(a2 + 16);
        v39 = v13 + 8;
        *(_DWORD *)a2 = v39;
        v40 = *(_QWORD *)(v38 + v13);
        if ( (unsigned int)v39 <= 0x2F )
        {
          v41 = v13 + 16;
          *(_DWORD *)a2 = v41;
          v42 = *(_DWORD *)(v38 + v39);
          if ( (unsigned int)v41 <= 0x2F )
          {
            v43 = (int *)(v41 + v38);
            *(_DWORD *)a2 = v13 + 24;
            goto LABEL_33;
          }
          v43 = *(int **)(a2 + 8);
LABEL_149:
          *(_QWORD *)(a2 + 8) = v43 + 2;
LABEL_33:
          v44 = *v43;
          v45 = (QT::QWidget *)sub_4ECF40(nullptr, v40, v42);
          if ( v45 )
          {
            v46 = v44 != 0;
            if ( a1 == 8 )
              (*(void (__fastcall **)(QT::QWidget *, _BOOL8))(*(_QWORD *)v45 + 104LL))(v45, v46);
            else
              QT::QWidget::setEnabled(v45, v46);
          }
          return v10;
        }
        v152 = *(unsigned int **)(a2 + 8);
      }
      v43 = (int *)(v152 + 2);
      *(_QWORD *)(a2 + 8) = v152 + 2;
      v42 = *v152;
      goto LABEL_149;
    case 11:
      if ( v13 > 0x2F )
      {
        v141 = *(__int64 **)(a2 + 8);
        v142 = (unsigned int *)(v141 + 1);
        *(_QWORD *)(a2 + 8) = v141 + 1;
        v133 = *v141;
      }
      else
      {
        v131 = *(_QWORD *)(a2 + 16);
        v132 = v13 + 8;
        *(_DWORD *)a2 = v132;
        v133 = *(_QWORD *)(v131 + v13);
        if ( (unsigned int)v132 <= 0x2F )
        {
          v134 = v13 + 16;
          *(_DWORD *)a2 = v134;
          v135 = *(_DWORD *)(v131 + v132);
          if ( (unsigned int)v134 <= 0x2F )
          {
            v136 = (int *)(v134 + v131);
            *(_DWORD *)a2 = v13 + 24;
            goto LABEL_127;
          }
          v136 = *(int **)(a2 + 8);
LABEL_134:
          *(_QWORD *)(a2 + 8) = v136 + 2;
LABEL_127:
          v137 = *v136;
          ptr = nullptr;
          v138 = (const QT::QObject *)sub_4ECF40((__int64 *)&ptr, v133, v135);
          if ( (unsigned int)(*((_DWORD *)ptr + 2) - 6) <= 1 )
          {
            v139 = (QT::QAbstractButton *)QT::QMetaObject::cast(
                                            (QT::QMetaObject *)&QT::QAbstractButton::staticMetaObject,
                                            v138);
            if ( v139 )
              QT::QAbstractButton::setChecked(v139, v137 != 0);
          }
          return v10;
        }
        v142 = *(unsigned int **)(a2 + 8);
      }
      v136 = (int *)(v142 + 2);
      *(_QWORD *)(a2 + 8) = v142 + 2;
      v135 = *v142;
      goto LABEL_134;
    case 12:
    case 13:
      if ( v13 > 0x2F )
      {
        v150 = *(_QWORD **)(a2 + 8);
        v50 = (void ***)(v150 + 1);
        *(_QWORD *)(a2 + 8) = v150 + 1;
        v49 = *v150;
      }
      else
      {
        v47 = *(_QWORD *)(a2 + 16);
        v48 = v13 + 8;
        *(_DWORD *)a2 = v48;
        v49 = *(_QWORD *)(v47 + v13);
        if ( (unsigned int)v48 <= 0x2F )
        {
          v50 = (void ***)(v48 + v47);
          *(_DWORD *)a2 = v13 + 16;
          goto LABEL_39;
        }
        v50 = *(void ****)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v50 + 1;
LABEL_39:
      v51 = *v50;
      v52 = sub_4F5C00(v49);
      if ( v52 )
      {
        if ( a1 == 12 )
        {
          *v51 = (void *)_mm_sub_epi32(
                           _mm_add_epi32(
                             _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v52 + 32) + 28LL)),
                             _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
                           _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v52 + 32) + 20LL))).m128i_u64[0];
        }
        else
        {
          ptr = *v51;
          QT::QWidget::resize(v52, &ptr);
        }
      }
      return v10;
    case 14:
      if ( v13 > 0x2F )
      {
        v66 = *(__int64 **)(a2 + 8);
        v67 = (unsigned int *)(v66 + 1);
        *(_QWORD *)(a2 + 8) = v66 + 1;
        v68 = *v66;
LABEL_58:
        *(_QWORD *)(a2 + 8) = v67 + 2;
        return sub_4ECF40(nullptr, v68, *v67);
      }
      v155 = *(_QWORD *)(a2 + 16);
      v156 = v13 + 8;
      *(_DWORD *)a2 = v156;
      v68 = *(_QWORD *)(v155 + v13);
      if ( (unsigned int)v156 > 0x2F )
      {
        v67 = *(unsigned int **)(a2 + 8);
        goto LABEL_58;
      }
      v67 = (unsigned int *)(v156 + v155);
      *(_DWORD *)a2 = v13 + 16;
      return sub_4ECF40(nullptr, v68, *v67);
    case 15:
      if ( v13 > 0x2F )
      {
        v69 = *(__int64 **)(a2 + 8);
        v70 = (unsigned int *)(v69 + 1);
        *(_QWORD *)(a2 + 8) = v69 + 1;
        v71 = *v69;
LABEL_62:
        v72 = (__int64 *)(v70 + 2);
        *(_QWORD *)(a2 + 8) = v70 + 2;
        v73 = *v70;
LABEL_63:
        *(_QWORD *)(a2 + 8) = v72 + 1;
        goto LABEL_64;
      }
      v157 = *(_QWORD *)(a2 + 16);
      v158 = v13 + 8;
      *(_DWORD *)a2 = v158;
      v71 = *(_QWORD *)(v157 + v13);
      if ( (unsigned int)v158 > 0x2F )
      {
        v70 = *(unsigned int **)(a2 + 8);
        goto LABEL_62;
      }
      v159 = v13 + 16;
      *(_DWORD *)a2 = v159;
      v73 = *(_DWORD *)(v157 + v158);
      if ( (unsigned int)v159 > 0x2F )
      {
        v72 = *(__int64 **)(a2 + 8);
        goto LABEL_63;
      }
      v72 = (__int64 *)(v159 + v157);
      *(_DWORD *)a2 = v13 + 24;
LABEL_64:
      v74 = *v72;
      v187 = 0;
      v75 = (const QT::QObject *)sub_4ECF40(&v187, v71, v73);
      if ( (unsigned int)(*(_DWORD *)(v187 + 8) - 3) <= 2 )
      {
        if ( *(_QWORD *)(v187 + 112) <= 1u )
        {
          v77 = (QT::QLineEdit *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QLineEdit::staticMetaObject, v75);
        }
        else
        {
          v76 = (QT::QComboBox *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QComboBox::staticMetaObject, v75);
          if ( !v76 )
            return v10;
          v77 = (QT::QLineEdit *)QT::QComboBox::lineEdit(v76);
        }
        if ( v77 )
        {
          v78 = *(_QWORD *)(v74 + 8);
          if ( v78 )
          {
            v79 = v78 - 1;
            v80 = *(const char **)v74;
            v81 = v79 >> 63;
          }
          else
          {
            LOBYTE(v81) = 0;
            v79 = 0;
            v80 = &s1;
          }
          if ( !v80 || (_BYTE)v81 )
          {
            v79 = 0;
            if ( v80 )
              v79 = strlen(v80);
          }
          QT::QString::fromUtf8(&ptr, v79, v80);
          QT::QLineEdit::setText(v77, (const QT::QString *)&ptr);
          goto LABEL_95;
        }
      }
      return v10;
    case 16:
      if ( v13 > 0x2F )
      {
        v82 = *(__int64 **)(a2 + 8);
        v83 = (unsigned int *)(v82 + 1);
        *(_QWORD *)(a2 + 8) = v82 + 1;
        v84 = *v82;
LABEL_76:
        v85 = (int *)(v83 + 2);
        *(_QWORD *)(a2 + 8) = v83 + 2;
        v86 = *v83;
LABEL_77:
        *(_QWORD *)(a2 + 8) = v85 + 2;
        goto LABEL_78;
      }
      v160 = *(_QWORD *)(a2 + 16);
      v161 = v13 + 8;
      *(_DWORD *)a2 = v161;
      v84 = *(_QWORD *)(v160 + v13);
      if ( (unsigned int)v161 > 0x2F )
      {
        v83 = *(unsigned int **)(a2 + 8);
        goto LABEL_76;
      }
      v162 = v13 + 16;
      *(_DWORD *)a2 = v162;
      v86 = *(_DWORD *)(v160 + v161);
      if ( (unsigned int)v162 > 0x2F )
      {
        v85 = *(int **)(a2 + 8);
        goto LABEL_77;
      }
      v85 = (int *)(v162 + v160);
      *(_DWORD *)a2 = v13 + 24;
LABEL_78:
      v87 = *v85;
      v88 = (QT::QObject *)sub_4ECF40(nullptr, v84, v86);
      if ( v88 )
      {
        QT::QVariant::QVariant((QT::QVariant *)v194, v87 != 0);
        QT::QObject::doSetProperty(v88, "field_validity", (const QT::QVariant *)v194, (QT::QVariant *)v194);
        QT::QVariant::~QVariant((QT::QVariant *)v194);
        v89 = QT::QWidget::style(v88);
        (*(void (__fastcall **)(__int64, QT::QObject *))(*(_QWORD *)v89 + 104LL))(v89, v88);
        v90 = QT::QWidget::style(v88);
        (*(void (__fastcall **)(__int64, QT::QObject *))(*(_QWORD *)v90 + 96LL))(v90, v88);
        QT::QWidget::update(v88);
      }
      return v10;
    case 17:
      if ( v13 > 0x2F )
      {
        v91 = *(__int64 **)(a2 + 8);
        v92 = (unsigned int *)(v91 + 1);
        *(_QWORD *)(a2 + 8) = v91 + 1;
        v93 = *v91;
LABEL_82:
        *(_QWORD *)(a2 + 8) = v92 + 2;
        goto LABEL_83;
      }
      v163 = *(_QWORD *)(a2 + 16);
      v164 = v13 + 8;
      *(_DWORD *)a2 = v164;
      v93 = *(_QWORD *)(v163 + v13);
      if ( (unsigned int)v164 > 0x2F )
      {
        v92 = *(unsigned int **)(a2 + 8);
        goto LABEL_82;
      }
      v92 = (unsigned int *)(v164 + v163);
      *(_DWORD *)a2 = v13 + 16;
LABEL_83:
      v94 = sub_4ECF40(nullptr, v93, *v92);
      if ( v94 )
        QT::QWidget::setFocus(v94, 7);
      return v10;
    case 18:
      if ( v13 > 0x2F )
      {
        v148 = *(__int64 **)(a2 + 8);
        v149 = (unsigned int *)(v148 + 1);
        *(_QWORD *)(a2 + 8) = v148 + 1;
        v97 = *v148;
      }
      else
      {
        v95 = *(_QWORD *)(a2 + 16);
        v96 = v13 + 8;
        *(_DWORD *)a2 = v96;
        v97 = *(_QWORD *)(v95 + v13);
        if ( (unsigned int)v96 <= 0x2F )
        {
          v98 = v13 + 16;
          *(_DWORD *)a2 = v98;
          v99 = *(_DWORD *)(v95 + v96);
          if ( (unsigned int)v98 <= 0x2F )
          {
            v100 = (__int64 *)(v98 + v95);
            *(_DWORD *)a2 = v13 + 24;
            goto LABEL_89;
          }
          v100 = *(__int64 **)(a2 + 8);
LABEL_144:
          *(_QWORD *)(a2 + 8) = v100 + 1;
LABEL_89:
          v101 = *v100;
          v102 = (QT::QWidget *)sub_4ECF40(nullptr, v97, v99);
          if ( v102 )
          {
            v103 = *(_QWORD *)(v101 + 8);
            if ( v103 )
            {
              v104 = v103 - 1;
              v105 = *(const char **)v101;
              v106 = v104 >> 63;
            }
            else
            {
              LOBYTE(v106) = 0;
              v104 = 0;
              v105 = &s1;
            }
            if ( !v105 || (_BYTE)v106 )
            {
              v104 = 0;
              if ( v105 )
                v104 = strlen(v105);
            }
            QT::QString::fromUtf8(&ptr, v104, v105);
            QT::QWidget::setToolTip(v102, (const QT::QString *)&ptr);
LABEL_95:
            if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
              free(ptr);
          }
          return v10;
        }
        v149 = *(unsigned int **)(a2 + 8);
      }
      v100 = (__int64 *)(v149 + 2);
      *(_QWORD *)(a2 + 8) = v149 + 2;
      v99 = *v149;
      goto LABEL_144;
    case 19:
      if ( v13 > 0x2F )
      {
        v144 = *(__int64 **)(a2 + 8);
        v145 = (unsigned int *)(v144 + 1);
        *(_QWORD *)(a2 + 8) = v144 + 1;
        v109 = *v144;
LABEL_138:
        v112 = v145 + 2;
        *(_QWORD *)(a2 + 8) = v145 + 2;
        v111 = *v145;
        goto LABEL_139;
      }
      v107 = *(_QWORD *)(a2 + 16);
      v108 = v13 + 8;
      *(_DWORD *)a2 = v108;
      v109 = *(_QWORD *)(v107 + v13);
      if ( (unsigned int)v108 > 0x2F )
      {
        v145 = *(unsigned int **)(a2 + 8);
        goto LABEL_138;
      }
      v110 = v13 + 16;
      *(_DWORD *)a2 = v110;
      v111 = *(_DWORD *)(v107 + v108);
      if ( (unsigned int)v110 <= 0x2F )
      {
        v112 = (_QWORD *)(v110 + v107);
        *(_DWORD *)a2 = v13 + 24;
        goto LABEL_102;
      }
      v112 = *(_QWORD **)(a2 + 8);
LABEL_139:
      *(_QWORD *)(a2 + 8) = v112 + 1;
LABEL_102:
      v113 = (_QWORD *)*v112;
      ptr = nullptr;
      v114 = (const QT::QObject *)sub_4ECF40((__int64 *)&ptr, v109, v111);
      if ( *((_DWORD *)ptr + 2) == 15 )
      {
        v115 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QCalendarWidget::staticMetaObject, v114);
        if ( v115 )
        {
          v116 = sub_51A410(*v113);
          QT::QCalendarWidget::setSelectedDate(v115, v116);
        }
      }
      return v10;
    default:
      return v10;
  }
}
