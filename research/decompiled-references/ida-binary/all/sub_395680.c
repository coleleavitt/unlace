unsigned __int64 __fastcall sub_395680(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  QT::QComboBox *v11; // rdi
  __m128i si128; // xmm0
  __int64 v13; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  double v16; // xmm4_8
  double v17; // xmm5_8
  char *v18; // rax
  __m128 v19; // xmm0
  int i; // ebp
  QT::QTableWidgetItem *v21; // rbx
  QT::QTableWidgetItem *v22; // rsi
  unsigned __int64 v23; // rdi
  int v24; // r13d
  int v25; // eax
  int v26; // r13d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  double v30; // xmm4_8
  double v31; // xmm5_8
  const char *v32; // rsi
  const char *v33; // r13
  int tinfo_udt_member; // r12d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  QT::QTableWidgetItem *v39; // r13
  __int64 v40; // rax
  __int64 v41; // rbx
  __m128i *v42; // r12
  __m128i *v43; // r13
  char *v44; // rbx
  unsigned __int64 v45; // rbp
  const char *v46; // rsi
  char *j; // r12
  __int64 v48; // rdi
  unsigned __int64 v49; // rbp
  __int64 *v50; // rdx
  unsigned __int64 v51; // r12
  __int64 *m128i_i64; // rdi
  const char *v53; // rcx
  const char *v54; // rsi
  unsigned __int64 v55; // rax
  double v56; // xmm4_8
  double v57; // xmm5_8
  __int64 *v58; // rdx
  __int64 v59; // rbp
  __int64 v60; // rbx
  __int64 *v61; // rax
  __int64 v62; // rdi
  const char *v63; // rsi
  __int64 *v64; // r12
  __int64 v65; // rdi
  __int64 v66; // rbx
  __int64 *v67; // rax
  signed __int64 v68; // rdx
  __int64 v69; // rcx
  __m128i v70; // xmm0
  __int64 v71; // rcx
  bool v72; // cf
  __int64 *v73; // r12
  __int64 *v74; // rax
  __int64 v75; // rdi
  __int64 *v76; // rax
  signed __int64 v77; // rdx
  __int64 v78; // rcx
  __m128i v79; // xmm0
  __int64 v80; // rcx
  __int64 *v81; // rbp
  __int64 v82; // rdi
  __int64 v83; // rbx
  __int64 *v84; // rax
  signed __int64 v85; // rdx
  __int64 v86; // rcx
  __m128i v87; // xmm0
  __int64 v88; // rcx
  __int64 v89; // rbp
  __int64 v90; // rdx
  unsigned __int64 tinfo_size; // rcx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rdx
  const char *v95; // rsi
  unsigned int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __m128 v101; // xmm4
  __m128 v102; // xmm5
  __int64 *v103; // r14
  unsigned __int64 v104; // r13
  double v105; // xmm0_8
  size_t v106; // rbx
  const char *m128i_i8; // rsi
  void *v108; // r12
  __int64 v109; // rbx
  __int64 *v110; // r12
  void **v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  __int64 *v115; // rax
  void *v116; // rax
  __int64 v117; // rax
  __int64 *v118; // rdi
  __int64 *v119; // rbp
  __int64 *v120; // rbx
  __int64 v121; // r12
  __int64 v122; // rcx
  __m128i v123; // xmm0
  __m128i v124; // xmm0
  __int64 v125; // rdi
  __int64 v126; // rax
  __int64 *v127; // rdi
  __int64 *v128; // rbp
  __int64 *v129; // rbx
  __int64 v130; // r12
  __int64 v131; // rcx
  __m128i v132; // xmm0
  __m128i v133; // xmm0
  __int64 v134; // rdi
  char v135; // [rsp+0h] [rbp-728h]
  int v136; // [rsp+18h] [rbp-710h]
  void *src; // [rsp+20h] [rbp-708h]
  QT::QTreeWidgetItem *v138; // [rsp+28h] [rbp-700h]
  __int64 dtype_size; // [rsp+30h] [rbp-6F8h]
  __int64 dtype_flag; // [rsp+38h] [rbp-6F0h]
  __int64 v141; // [rsp+40h] [rbp-6E8h]
  void *v142; // [rsp+48h] [rbp-6E0h] BYREF
  __int64 v143; // [rsp+50h] [rbp-6D8h]
  __int64 *v144; // [rsp+58h] [rbp-6D0h]
  __int64 v145; // [rsp+60h] [rbp-6C8h]
  __int64 *v146; // [rsp+68h] [rbp-6C0h]
  const char *v147; // [rsp+70h] [rbp-6B8h] BYREF
  const char *v148; // [rsp+78h] [rbp-6B0h] BYREF
  __m128i *v149; // [rsp+80h] [rbp-6A8h] BYREF
  __int128 v150; // [rsp+88h] [rbp-6A0h]
  void *v151; // [rsp+A0h] [rbp-688h] BYREF
  size_t n[2]; // [rsp+A8h] [rbp-680h]
  void *ptr[3]; // [rsp+C0h] [rbp-668h] BYREF
  __int128 v154; // [rsp+D8h] [rbp-650h]
  __int64 v155; // [rsp+E8h] [rbp-640h]
  __int128 v156; // [rsp+F0h] [rbp-638h]
  _OWORD v157[3]; // [rsp+100h] [rbp-628h] BYREF
  __int64 v158; // [rsp+130h] [rbp-5F8h]
  int v159; // [rsp+138h] [rbp-5F0h]
  __int64 v160; // [rsp+140h] [rbp-5E8h]
  char v161; // [rsp+148h] [rbp-5E0h]
  _QWORD v162[3]; // [rsp+150h] [rbp-5D8h] BYREF
  unsigned __int64 v163; // [rsp+168h] [rbp-5C0h]
  __int128 v164; // [rsp+170h] [rbp-5B8h] BYREF
  __int64 v165; // [rsp+180h] [rbp-5A8h]
  __int64 v166; // [rsp+188h] [rbp-5A0h]
  __int64 v167; // [rsp+190h] [rbp-598h]
  _BYTE v168[320]; // [rsp+198h] [rbp-590h] BYREF
  char v169; // [rsp+2D8h] [rbp-450h] BYREF
  char s[1032]; // [rsp+2E0h] [rbp-448h] BYREF
  unsigned __int64 v171; // [rsp+6E8h] [rbp-40h]

  v171 = __readfsqword(0x28u);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 72LL))(*(_QWORD *)(a1 + 64)) )
  {
    QT::QTreeWidget::selectedItems((QT::QTreeWidget *)ptr);
    if ( ptr[2] )
    {
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( (unsigned int)sub_1698A0(
                           0,
                           (int)"HIDECANCEL\nDo you really want to modify the structure by adding new members?") == 1 )
      {
        v136 = QT::QTableWidget::rowCount(*(QT::QTableWidget **)(a1 + 88));
        QT::QTreeWidget::selectedItems((QT::QTreeWidget *)ptr);
        v138 = *(QT::QTreeWidgetItem **)ptr[1];
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        v11 = *(QT::QComboBox **)(a1 + 96);
        v149 = nullptr;
        v150 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DD0F0);
        v147 = nullptr;
        LODWORD(ptr[2]) = 0;
        *(__m128i *)ptr = si128;
        v13 = QT::QComboBox::lineEdit(v11);
        sub_357F80(&v148, v13, (__int128 *)ptr, *(double *)si128.m128i_i64, a3, a4, a5, v14, v15, a8, a9);
        v165 = -1;
        v18 = v168;
        v166 = 0;
        v167 = 0;
        v164 = -1;
        v19 = 0;
        do
        {
          *(_WORD *)v18 = 0;
          v18 += 40;
          *((_WORD *)v18 - 19) = 0;
          *((_WORD *)v18 - 18) = 0;
          *((_DWORD *)v18 - 2) = 0;
          *((_WORD *)v18 - 17) = 0;
          *((_OWORD *)v18 - 2) = 0;
          *((_QWORD *)v18 - 2) = 0;
        }
        while ( v18 != &v169 );
        if ( v136 > 0 )
        {
          for ( i = 0; i != v136; ++i )
          {
            v21 = (QT::QTableWidgetItem *)QT::QTableWidget::item(*(QT::QTableWidget **)(a1 + 88), i, 0);
            v22 = v21;
            (*(void (__fastcall **)(_QWORD *, QT::QTableWidgetItem *, __int64, double))(*(_QWORD *)v21 + 24LL))(
              v162,
              v21,
              10,
              *(double *)v19.m128_u64);
            v23 = v163 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (_UNKNOWN *)(v163 & 0xFFFFFFFFFFFFFFFCLL) == &unk_8BCA80 )
              goto LABEL_27;
            if ( !v23 || !&unk_8BCA80 )
              goto LABEL_37;
            v24 = *(_DWORD *)&byte_9[4 * (v163 >> 2) + 3];
            if ( !v24 )
              v24 = QT::QMetaType::registerHelper(v23);
            v25 = dword_8BCA8C;
            if ( !dword_8BCA8C )
              v25 = QT::QMetaType::registerHelper(&unk_8BCA80);
            if ( v24 == v25 )
            {
LABEL_27:
              v26 = v162[0];
            }
            else
            {
LABEL_37:
              LODWORD(ptr[0]) = 0;
              v39 = (QT::QTableWidgetItem *)v162;
              if ( (v163 & 1) != 0 )
                v39 = (QT::QTableWidgetItem *)(*(int *)(v162[0] + 4LL) + v162[0]);
              v40 = QT::QVariant::metaType((QT::QVariant *)v162);
              v22 = v39;
              QT::QMetaType::convert(v40, v39, &unk_8BCA80, ptr);
              v26 = (int)ptr[0];
            }
            QT::QVariant::~QVariant((QT::QVariant *)v162);
            if ( v26 == 2 )
            {
              v29 = sub_389C80(v21, v22, v27, v28, *(double *)v19.m128_u64);
              qword_8CF398 = *(_QWORD *)(v29 + 8);
              if ( (unsigned int)sub_38F320(
                                   a1,
                                   (char *)&qword_8CF3A0,
                                   qword_8CF398,
                                   v138,
                                   0,
                                   *(double *)v19.m128_u64,
                                   a3,
                                   a4,
                                   a5,
                                   v30,
                                   v31,
                                   a8,
                                   a9) != -1 )
              {
                if ( (_QWORD)xmmword_8CF3A8 )
                {
                  get_type_by_tid(&v147, *(_QWORD *)(*(_QWORD *)qword_8CF3A0 + 48LL));
                  v32 = v147;
                  v19 = 0;
                  ptr[1] = nullptr;
                  v33 = &v148[qword_8CF398];
                  ptr[2] = nullptr;
                  v155 = 0;
                  v158 = 1;
                  v159 = -1;
                  v160 = 0;
                  v161 = 0;
                  ptr[0] = (void *)(8LL * (_QWORD)&v148[qword_8CF398]);
                  v154 = 0;
                  v156 = 0;
                  v157[0] = 0;
                  tinfo_udt_member = find_tinfo_udt_member(ptr, v147, 0x1000000);
                  clear_tinfo_t(v157);
                  if ( v155 )
                  {
                    *(_QWORD *)&v156 = 0;
                    *(double *)v19.m128_u64 = qfree(v155, v32);
                  }
                  if ( ptr[2] )
                  {
                    *(_QWORD *)&v154 = 0;
                    *(double *)v19.m128_u64 = qfree(ptr[2], v32);
                  }
                  if ( tinfo_udt_member == -1 )
                  {
                    if ( (int)decode_insn(&v164, *(_QWORD *)(v29 + 16), v35, v36, v37, v38, *(double *)v19.m128_u64) > 0 )
                    {
                      v105 = qsnprintf(s, 1024, "field_%a", *(double *)v19.m128_u64);
                      dtype_size = get_dtype_size((unsigned __int8)v168[40 * *(int *)(v29 + 24) + 5]);
                      dtype_flag = get_dtype_flag((unsigned __int8)v168[40 * *(int *)(v29 + 24) + 5], v105);
                      v151 = nullptr;
                      *(_OWORD *)n = 0;
                      v106 = strlen(s);
                      m128i_i8 = s;
                      v151 = (void *)qvector_reserve(&v151, 0, v106 + 1, 1);
                      n[0] = v106 + 1;
                      memmove(v151, s, v106);
                      *((_BYTE *)v151 + v106) = 0;
                      v108 = (void *)n[0];
                      v109 = 0;
                      memset(ptr, 0, sizeof(ptr));
                      if ( n[0] )
                      {
                        v116 = (void *)qalloc_or_throw(n[0]);
                        m128i_i8 = (const char *)v151;
                        ptr[0] = v116;
                        ptr[2] = v108;
                        v109 = (__int64)v116;
                        memcpy(v116, v151, (size_t)v108);
                        ptr[1] = v108;
                      }
                      v110 = (__int64 *)v149;
                      *(_QWORD *)&v154 = v33;
                      v111 = ptr;
                      v112 = *((_QWORD *)&v150 + 1);
                      *((_QWORD *)&v154 + 1) = dtype_flag;
                      v155 = dtype_size;
                      v113 = v150;
                      v114 = v150 + 1;
                      if ( ptr < (void **)v149
                        || (m128i_i8 = v149[3 * *((_QWORD *)&v150 + 1)].m128i_i8, ptr >= (void **)m128i_i8) )
                      {
                        if ( *((_QWORD *)&v150 + 1) < v114 )
                        {
                          v142 = *((void **)&v150 + 1);
                          v110 = (__int64 *)qvector_reserve(&v149, 0, v114, 48);
                          v117 = *((_QWORD *)&v150 + 1);
                          v118 = (__int64 *)v149;
                          *((_QWORD *)&v150 + 1) = v142;
                          v141 = v117;
                          m128i_i8 = (const char *)(v150 - 1);
                          if ( (__int64)v150 - 1 >= 0 )
                          {
                            LODWORD(v142) = i;
                            v119 = v110;
                            v143 = v109;
                            v120 = (__int64 *)v149;
                            v144 = v110;
                            v121 = v150 - 1;
                            do
                            {
                              v122 = *v120;
                              v123 = _mm_loadu_si128((const __m128i *)(v120 + 1));
                              *v120 = 0;
                              v120[2] = 0;
                              *v119 = v122;
                              *(__m128i *)(v119 + 1) = v123;
                              v124 = _mm_loadu_si128((const __m128i *)v120 + 2);
                              v119[3] = v120[3];
                              *((__m128i *)v119 + 2) = v124;
                              v125 = *v120;
                              if ( *v120 )
                              {
                                v120[1] = 0;
                                qfree(v125, m128i_i8);
                              }
                              v120 += 6;
                              v119 += 6;
                              v72 = v121-- == 0;
                            }
                            while ( !v72 );
                            i = (int)v142;
                            v109 = v143;
                            v110 = v144;
                            v118 = (__int64 *)v149;
                          }
                          qfree(v118, m128i_i8);
                          v149 = (__m128i *)v110;
                          *((_QWORD *)&v150 + 1) = v141;
                          v113 = v150;
                        }
                        v19 = (__m128)_mm_loadu_si128((const __m128i *)&ptr[1]);
                        v115 = &v110[6 * v113];
                        *v115 = v109;
                      }
                      else
                      {
                        memset(ptr, 0, sizeof(ptr));
                        m128i_i8 = (const char *)ptr[2];
                        v142 = ptr[2];
                        if ( *((_QWORD *)&v150 + 1) < v114 )
                        {
                          v144 = *((__int64 **)&v150 + 1);
                          v110 = (__int64 *)qvector_reserve(&v149, 0, v114, 48);
                          v126 = *((_QWORD *)&v150 + 1);
                          v127 = (__int64 *)v149;
                          *((_QWORD *)&v150 + 1) = v144;
                          v143 = v126;
                          m128i_i8 = (const char *)(v150 - 1);
                          if ( (__int64)v150 - 1 >= 0 )
                          {
                            LODWORD(v144) = i;
                            v128 = v110;
                            v145 = v109;
                            v129 = (__int64 *)v149;
                            v146 = v110;
                            v130 = v150 - 1;
                            do
                            {
                              v131 = *v129;
                              v132 = _mm_loadu_si128((const __m128i *)(v129 + 1));
                              *v129 = 0;
                              v129[2] = 0;
                              *v128 = v131;
                              *(__m128i *)(v128 + 1) = v132;
                              v133 = _mm_loadu_si128((const __m128i *)v129 + 2);
                              v128[3] = v129[3];
                              *((__m128i *)v128 + 2) = v133;
                              v134 = *v129;
                              if ( *v129 )
                              {
                                v129[1] = 0;
                                qfree(v134, m128i_i8);
                              }
                              v129 += 6;
                              v128 += 6;
                              v72 = v130-- == 0;
                            }
                            while ( !v72 );
                            i = (int)v144;
                            v109 = v145;
                            v110 = v146;
                            v127 = (__int64 *)v149;
                          }
                          qfree(v127, m128i_i8);
                          v149 = (__m128i *)v110;
                          *((_QWORD *)&v150 + 1) = v143;
                          v113 = v150;
                        }
                        v115 = &v110[6 * v113];
                        v19 = _mm_loadh_ps((const double *)&v142);
                        *v115 = v109;
                      }
                      v115[3] = (__int64)v33;
                      *(__m128 *)(v115 + 1) = v19;
                      v115[4] = dtype_flag;
                      v115[5] = dtype_size;
                      *(_QWORD *)&v150 = v150 + 1;
                      if ( v151 )
                      {
                        n[0] = 0;
                        *(double *)v19.m128_u64 = qfree(v151, m128i_i8, v114, v111, v112);
                      }
                    }
                  }
                  else
                  {
                    sub_17CE30(1183, v33);
                  }
                }
              }
            }
          }
        }
        v41 = v150;
        v42 = v149;
        v43 = &v149[3 * v150];
        if ( v149 != v43 )
        {
          ptr[2] = nullptr;
          sub_392D80(
            (__int64 *)ptr,
            v149->m128i_i64,
            (__int64)(0xAAAAAAAAAAAAAAABLL * ((48 * (__int64)v150) >> 4) + 1) / 2);
          v44 = (char *)ptr[2];
          v45 = 3 * (__int64)ptr[1];
          if ( ptr[0] == ptr[1] )
          {
            v46 = v42[v45].m128i_i8;
            sub_3954E0(
              v42,
              &v42[v45],
              v43,
              (__int64 *)ptr[2],
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))sub_389660);
          }
          else
          {
            v46 = (const char *)v43;
            if ( ptr[2] )
              sub_395560(
                v42,
                v43,
                (__int64 *)ptr[2],
                (__int64)ptr[1],
                (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))sub_389660);
            else
              sub_394770(v42, v43, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))sub_389660);
          }
          for ( j = v44; &v44[v45 * 16] != j; j += 48 )
          {
            v48 = *(_QWORD *)j;
            if ( *(_QWORD *)j )
            {
              *((_QWORD *)j + 1) = 0;
              *(double *)v19.m128_u64 = qfree(v48, v46);
            }
          }
          operator delete(v44, v45 * 16);
          v41 = v150;
        }
        v49 = 0;
LABEL_49:
        if ( v41 )
        {
          while ( v49 < v41 - 1 )
          {
            v50 = (__int64 *)v149;
            v51 = v49 + 1;
            m128i_i64 = v149[3 * v49].m128i_i64;
            v53 = (const char *)m128i_i64[3];
            v54 = (const char *)m128i_i64[9];
            v55 = m128i_i64[5];
            if ( v53 == v54 )
            {
              v63 = v149[3 * v41].m128i_i8;
              if ( v55 < m128i_i64[11] )
              {
                v64 = (__int64 *)v149;
                if ( v63 != (const char *)v149 )
                {
                  while ( v53 != (const char *)v64[3] || v55 != v64[5] )
                  {
                    v64 += 6;
                    if ( v63 == (const char *)v64 )
                      goto LABEL_97;
                  }
                  if ( v63 != (const char *)v64 )
                  {
                    v65 = *v64;
                    if ( *v64 )
                    {
                      v64[1] = 0;
                      *(double *)v19.m128_u64 = qfree(v65, v63);
                      v50 = (__int64 *)v149;
                    }
                    v66 = v150;
                    v67 = v64 + 6;
                    v68 = 0xAAAAAAAAAAAAAAABLL * (((char *)&v50[6 * (_QWORD)v150] - (char *)v64) >> 4) - 2;
                    if ( v68 >= 0 )
                    {
                      do
                      {
                        v69 = *v67;
                        v70 = _mm_loadu_si128((const __m128i *)(v67 + 1));
                        *v67 = 0;
                        v67 += 6;
                        *(v67 - 4) = 0;
                        *(v67 - 12) = v69;
                        v71 = *(v67 - 3);
                        *(__m128i *)(v67 - 11) = v70;
                        v19 = (__m128)_mm_loadu_si128((const __m128i *)v67 - 1);
                        *(v67 - 9) = v71;
                        *((__m128 *)v67 - 4) = v19;
                        v72 = v68-- == 0;
                      }
                      while ( !v72 );
LABEL_72:
                      v66 = v150;
                    }
LABEL_73:
                    v41 = v66 - 1;
                    *(_QWORD *)&v150 = v41;
                    goto LABEL_49;
                  }
                }
LABEL_97:
                v41 = v150;
                goto LABEL_49;
              }
              v81 = (__int64 *)v149;
              if ( 48 * v41 )
              {
                while ( v53 != (const char *)v81[3] || v55 != v81[5] )
                {
                  v81 += 6;
                  if ( v63 == (const char *)v81 )
                    goto LABEL_53;
                }
                if ( v63 != (const char *)v81 )
                {
                  v82 = *v81;
                  if ( *v81 )
                  {
                    v81[1] = 0;
                    *(double *)v19.m128_u64 = qfree(v82, v63);
                    v50 = (__int64 *)v149;
                  }
                  v83 = v150;
                  v84 = v81 + 6;
                  v85 = 0xAAAAAAAAAAAAAAABLL * (((char *)&v50[6 * (_QWORD)v150] - (char *)v81) >> 4) - 2;
                  if ( v85 >= 0 )
                  {
                    do
                    {
                      v86 = *v84;
                      v87 = _mm_loadu_si128((const __m128i *)(v84 + 1));
                      *v84 = 0;
                      v84 += 6;
                      *(v84 - 4) = 0;
                      *(v84 - 12) = v86;
                      v88 = *(v84 - 3);
                      *(__m128i *)(v84 - 11) = v87;
                      v19 = (__m128)_mm_loadu_si128((const __m128i *)v84 - 1);
                      *(v84 - 9) = v88;
                      *((__m128 *)v84 - 4) = v19;
                      v72 = v85-- == 0;
                    }
                    while ( !v72 );
                    v83 = v150;
                  }
                  v41 = v83 - 1;
                  v49 = v51;
                  *(_QWORD *)&v150 = v41;
                  goto LABEL_49;
                }
              }
            }
            else if ( v54 < &v53[v55] )
            {
              v73 = (__int64 *)v149;
              v74 = v149[3 * v41].m128i_i64;
              if ( v149 != (__m128i *)v74 )
              {
                while ( v54 != (const char *)v73[3] || m128i_i64[11] != v73[5] )
                {
                  v73 += 6;
                  if ( v74 == v73 )
                    goto LABEL_97;
                }
                if ( v73 != v74 )
                {
                  v75 = *v73;
                  if ( *v73 )
                  {
                    v73[1] = 0;
                    *(double *)v19.m128_u64 = qfree(v75, v54);
                    v50 = (__int64 *)v149;
                  }
                  v66 = v150;
                  v76 = v73 + 6;
                  v77 = 0xAAAAAAAAAAAAAAABLL * (((char *)&v50[6 * (_QWORD)v150] - (char *)v73) >> 4) - 2;
                  if ( v77 >= 0 )
                  {
                    do
                    {
                      v78 = *v76;
                      v79 = _mm_loadu_si128((const __m128i *)(v76 + 1));
                      *v76 = 0;
                      v76 += 6;
                      *(v76 - 4) = 0;
                      *(v76 - 12) = v78;
                      v80 = *(v76 - 3);
                      *(__m128i *)(v76 - 11) = v79;
                      v19 = (__m128)_mm_loadu_si128((const __m128i *)v76 - 1);
                      *(v76 - 9) = v80;
                      *((__m128 *)v76 - 4) = v19;
                      v72 = v77-- == 0;
                    }
                    while ( !v72 );
                    goto LABEL_72;
                  }
                  goto LABEL_73;
                }
              }
              goto LABEL_97;
            }
LABEL_53:
            v41 = v150;
            v49 = v51;
            if ( !(_QWORD)v150 )
              goto LABEL_54;
          }
          v89 = 0;
          do
          {
            v19 = 0;
            v158 = 1;
            v103 = v149[3 * v89].m128i_i64;
            v155 = 0;
            v159 = -1;
            v160 = 0;
            v161 = 0;
            memset(ptr, 0, sizeof(ptr));
            v154 = 0;
            v156 = 0;
            v157[0] = 0;
            if ( v103 != (__int64 *)&ptr[2] )
            {
              v104 = v103[1];
              if ( v104 >= 2 )
              {
                src = (void *)*v103;
                ptr[2] = (void *)qvector_reserve(&ptr[2], 0, v103[1], 1);
                *(_QWORD *)&v154 = v104;
                memmove(ptr[2], src, v104 - 1);
                *((_BYTE *)ptr[2] + v104 - 1) = 0;
              }
            }
            ptr[0] = (void *)(8 * v103[3]);
            if ( !(unsigned __int8)get_tinfo_by_flags(v157, v103[4]) )
            {
              v151 = &word_10 + 1;
              copy_tinfo_t(v157, &v151, v90);
              clear_tinfo_t(&v151);
            }
            tinfo_size = get_tinfo_size(0, *(_QWORD *)&v157[0], 0);
            v92 = v103[5];
            if ( tinfo_size < v92 )
            {
              v93 = v92 / tinfo_size;
              v94 = v103[5] % tinfo_size;
              if ( v93 != 1 )
              {
                LODWORD(n[0]) = 0;
                HIDWORD(n[0]) = v93;
                v151 = nullptr;
                copy_tinfo_t(&v151, v157, v94);
                create_tinfo(v157, 11, 11, &v151);
                clear_tinfo_t(&v151);
              }
            }
            v95 = byte_9;
            ptr[1] = (void *)(8 * get_tinfo_size(0, *(_QWORD *)&v157[0], 0));
            v96 = set_tinfo_property4(&v147, 9, ptr, 1, -1, 0);
            if ( v96 )
            {
              v95 = (const char *)tinfo_errstr(v96);
              sub_169630(
                (int)"%s",
                (__int64)v95,
                v97,
                v98,
                v99,
                v100,
                (__m128)0LL,
                a3,
                a4,
                a5,
                v101,
                v102,
                a8,
                a9,
                v135);
            }
            clear_tinfo_t(v157);
            if ( v155 )
            {
              *(_QWORD *)&v156 = 0;
              *(double *)v19.m128_u64 = qfree(v155, v95);
            }
            if ( ptr[2] )
            {
              *(_QWORD *)&v154 = 0;
              *(double *)v19.m128_u64 = qfree(ptr[2], v95, *(double *)v19.m128_u64);
            }
            ++v89;
          }
          while ( v89 != v41 );
        }
LABEL_54:
        sub_391470(a1, *(double *)v19.m128_u64, a3, a4, a5, v16, v17, a8, a9);
        sub_390F70(a1, v138, v19, a3, a4, a5, v56, v57, a8, a9);
        clear_tinfo_t(&v147);
        v58 = (__int64 *)v149;
        if ( v149 )
        {
          v59 = v150;
          if ( (_QWORD)v150 )
          {
            v60 = 0;
            do
            {
              v61 = &v58[6 * v60];
              v62 = *v61;
              if ( *v61 )
              {
                v61[1] = 0;
                qfree(v62, (const char *)v138);
                v58 = (__int64 *)v149;
              }
              ++v60;
            }
            while ( v59 != v60 );
          }
          *(_QWORD *)&v150 = 0;
          qfree(v58, (const char *)v138);
        }
      }
    }
    else if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
    }
  }
  return v171 - __readfsqword(0x28u);
}
