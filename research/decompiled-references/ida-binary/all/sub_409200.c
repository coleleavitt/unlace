QT::QMimeData *__fastcall sub_409200(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 v10; // rax
  const __m128i *v11; // r14
  const __m128i *v12; // rbx
  __int32 v13; // r15d
  void **v14; // r13
  signed __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  int *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char *v31; // rax
  _QWORD *v32; // rbx
  char *v33; // rax
  __m128 si128; // xmm1
  int *v35; // r13
  __int64 v36; // rax
  __m128 v37; // xmm4
  const __m128i *v38; // r14
  __m128i *v39; // rbp
  __m128 v40; // xmm5
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __m128i v43; // xmm1
  const __m128i *i; // rdi
  __m128i v45; // xmm2
  __int64 *v46; // rcx
  int v47; // esi
  const __m128i *v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rdx
  __int64 v51; // rbx
  QT::QVariant *(__fastcall *v52)(QT::QVariant *, __int64, __int64, __int64); // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r8
  __int64 v60; // r9
  QT::QVariant *(__fastcall *v61)(QT::QVariant *, __int64, __int64, __int64); // rax
  __int64 v62; // rdx
  __m128i v63; // xmm0
  __m128i v64; // xmm1
  double v65; // xmm0_8
  void *v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // r9
  double v72; // xmm0_8
  void *v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r8
  __int64 v78; // r9
  void *v79; // rax
  void **v80; // rbx
  void **v81; // rbp
  void **v82; // rbx
  void **v83; // rbp
  void *v84; // r15
  __int64 v85; // rax
  __int64 v86; // rbx
  int *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  _QWORD *v92; // rsi
  __int64 v93; // rdx
  void *v94; // r15
  double v95; // xmm0_8
  void *v96; // rdx
  double v97; // xmm0_8
  void *v98; // rdx
  QT::QMimeData *v99; // rbx
  void **v100; // rbx
  void **v101; // rbx
  void **v102; // rbp
  void **v103; // rbx
  void **v104; // rbp
  QT::QString *v106[2]; // [rsp+0h] [rbp-1E8h] BYREF
  __m128i *v107; // [rsp+18h] [rbp-1D0h]
  __int64 v108; // [rsp+20h] [rbp-1C8h]
  __int64 v109; // [rsp+28h] [rbp-1C0h]
  __int64 v110; // [rsp+30h] [rbp-1B8h]
  __int64 v111; // [rsp+38h] [rbp-1B0h] BYREF
  void *v112; // [rsp+40h] [rbp-1A8h]
  void *v113; // [rsp+48h] [rbp-1A0h]
  __m128i *v114; // [rsp+50h] [rbp-198h]
  __m128i *v115; // [rsp+58h] [rbp-190h]
  void ***v116; // [rsp+60h] [rbp-188h]
  QT::QMimeData *v117; // [rsp+68h] [rbp-180h]
  _QWORD *v118; // [rsp+78h] [rbp-170h] BYREF
  void *v119[2]; // [rsp+80h] [rbp-168h] BYREF
  __int64 v120; // [rsp+90h] [rbp-158h]
  void *v121[2]; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v122; // [rsp+B0h] [rbp-138h]
  void *v123[2]; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v124; // [rsp+D0h] [rbp-118h]
  __m128 v125; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v126; // [rsp+F0h] [rbp-F8h]
  void *v127[2]; // [rsp+100h] [rbp-E8h] BYREF
  __int64 v128; // [rsp+110h] [rbp-D8h]
  __m128i v129; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v130; // [rsp+130h] [rbp-B8h]
  void *v131[2]; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v132; // [rsp+150h] [rbp-98h]
  _BYTE ptr[24]; // [rsp+160h] [rbp-88h] BYREF
  __int64 v134; // [rsp+178h] [rbp-70h]
  _BYTE v135[40]; // [rsp+180h] [rbp-68h] BYREF
  unsigned __int64 v136; // [rsp+1A8h] [rbp-40h]

  v136 = __readfsqword(0x28u);
  v117 = (QT::QMimeData *)operator new(0x10u);
  QT::QMimeData::QMimeData(v117);
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(const __m128i **)(a2 + 8);
  v120 = 0;
  v122 = 0;
  *(_OWORD *)v119 = 0;
  v12 = (const __m128i *)((char *)v11 + 24 * v10);
  v113 = nullptr;
  v116 = (void ***)&v118;
  *(_OWORD *)v121 = 0;
  if ( v11 != v12 )
  {
    v106[0] = (QT::QString *)v119;
    do
    {
      v13 = v11->m128i_i32[0];
      if ( v11->m128i_i32[0] >= 0 && v11->m128i_i32[1] >= 0 && v11[1].m128i_i64[0] )
      {
        if ( !v113 || *(_DWORD *)v113 == 1 )
        {
          v14 = nullptr;
        }
        else
        {
          _InterlockedAdd((volatile signed __int32 *)v113, 1u);
          v14 = (void **)v113;
        }
        v118 = v113;
        sub_3F9E50(v116);
        v113 = v118;
        v17 = (__int64)(v118 + 2);
        v18 = v118[3];
        if ( !v18 )
          goto LABEL_16;
        v19 = v118 + 2;
        do
        {
          while ( 1 )
          {
            v20 = *(_QWORD *)(v18 + 16);
            v21 = *(_QWORD *)(v18 + 24);
            if ( v13 > *(_DWORD *)(v18 + 32) )
              break;
            v19 = (_QWORD *)v18;
            v18 = *(_QWORD *)(v18 + 16);
            if ( !v20 )
              goto LABEL_14;
          }
          v18 = *(_QWORD *)(v18 + 24);
        }
        while ( v21 );
LABEL_14:
        if ( (_QWORD *)v17 == v19 || v13 < *((_DWORD *)v19 + 8) )
        {
LABEL_16:
          v131[1] = nullptr;
          v132 = 0;
          *(_DWORD *)ptr = v13;
          v134 = 0;
          *(_OWORD *)&ptr[8] = 0;
          v22 = sub_3FAD00((_QWORD *)v113 + 1, (int *)ptr);
          v23 = *(void **)&ptr[8];
          v19 = (_QWORD *)v22;
          if ( *(_QWORD *)&ptr[8] && !_InterlockedSub(*(volatile signed __int32 **)&ptr[8], 1u) )
            free(v23);
        }
        if ( v14 && !_InterlockedSub((volatile signed __int32 *)v14, 1u) )
        {
          sub_3EF0C0(v14[3]);
          operator delete(v14, 0x38u);
        }
        v24 = v19[7];
        v114 = (__m128i *)v106[0];
        v115 = (__m128i *)v121;
        sub_3FBE30((__m128i *)(v19 + 5), v24, v11, v17, v15, v16);
        v27 = (int *)v19[5];
        if ( !v27 || *v27 > 1 )
        {
          v114 = (__m128i *)v106[0];
          v115 = (__m128i *)v121;
          sub_3FB980((__m128i *)(v19 + 5), 0, 0, 0, v25, v26);
        }
      }
      v11 = (const __m128i *)((char *)v11 + 24);
    }
    while ( v12 != v11 );
  }
  v118 = v113;
  sub_3F9E50(v116);
  v110 = v118[4];
  if ( v118 )
  {
    v113 = v118;
    v114 = (__m128i *)v119;
    v115 = (__m128i *)v121;
    goto LABEL_124;
  }
  v31 = (char *)operator new(0x38u);
  *(_DWORD *)v31 = 0;
  v32 = v31;
  *((_DWORD *)v31 + 4) = 0;
  *((_QWORD *)v31 + 3) = 0;
  v113 = v31;
  v33 = v31 + 16;
  v32[4] = v33;
  v32[5] = v33;
  v32[6] = 0;
  if ( v32 )
    _InterlockedAdd((volatile signed __int32 *)v113, 1u);
  v114 = (__m128i *)v119;
  v115 = (__m128i *)v121;
LABEL_30:
  if ( (char *)v110 != v33 )
  {
    do
    {
      v124 = 0;
      v128 = 0;
      *(_OWORD *)v123 = 0;
      *(_OWORD *)v127 = 0;
      si128 = (__m128)_mm_loadu_si128((const __m128i *)(v110 + 40));
      v35 = (int *)si128.m128_u64[0];
      v109 = *(_QWORD *)(v110 + 56);
      if ( si128.m128_u64[0]
        && (v36 = *(_QWORD *)(v110 + 48),
            v112 = *(void **)(v110 + 40),
            v111 = v36,
            _InterlockedAdd((volatile signed __int32 *)si128.m128_u64[0], 1u),
            *(int *)si128.m128_u64[0] <= 1) )
      {
        a9 = _mm_movehl_ps(a9, si128);
        v38 = (const __m128i *)a9.m128_u64[0];
        v39 = (__m128i *)(a9.m128_u64[0] + 24 * v109);
      }
      else
      {
        v125 = si128;
        v126 = v109;
        sub_3FB980((__m128i *)&v125, 0, 0, 0, v29, v30);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v125);
        v109 = v126;
        v35 = (int *)si128.m128_u64[0];
        v38 = (const __m128i *)_mm_movehl_ps(v37, si128).m128_u64[0];
        v39 = (__m128i *)((char *)v38 + 24 * v126);
        if ( !si128.m128_u64[0] )
          goto LABEL_34;
        v111 = v125.m128_i64[1];
        v112 = (void *)v125.m128_u64[0];
      }
      if ( *v35 > 1 )
      {
LABEL_34:
        v125 = si128;
        v126 = v109;
        sub_3FB980((__m128i *)&v125, 0, 0, 0, v29, v30);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v125);
        v112 = (void *)v125.m128_u64[0];
        v35 = (int *)si128.m128_u64[0];
        v38 = (const __m128i *)_mm_movehl_ps(v40, si128).m128_u64[0];
        v111 = v125.m128_i64[1];
        v109 = v126;
      }
      if ( v38 != v39 )
      {
        v41 = 0xAAAAAAAAAAAAAAABLL * (((char *)v39 - (char *)v38) >> 3);
        v42 = -2;
        if ( v41 )
        {
          _BitScanReverse64(&v41, v41);
          v42 = 2LL * (int)v41;
        }
        *(__m128 *)v106 = si128;
        sub_3EFAD0((__int64)v38, v39, v42, v28, v29, v30);
        v43 = _mm_load_si128((const __m128i *)v106);
        if ( (char *)v39 - (char *)v38 <= 384 )
        {
          *(__m128i *)v106 = v43;
          sub_3EEBA0((__int64)v38, v39);
          si128 = (__m128)_mm_load_si128((const __m128i *)v106);
        }
        else
        {
          sub_3EEBA0((__int64)v38, v38 + 24);
          si128 = (__m128)_mm_load_si128((const __m128i *)v106);
          for ( i = v38 + 24; v39 != i; *v46 = v45.m128i_i64[0] )
          {
            v45 = _mm_loadl_epi64(i);
            v30 = i->m128i_i64[1];
            v46 = (__int64 *)i;
            v29 = i[1].m128i_i64[0];
            v47 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v45, 229));
            if ( i[-2].m128i_i32[3] > v47 )
            {
              v48 = (const __m128i *)((char *)i - 24);
              do
              {
                v49 = _mm_loadu_si128(v48);
                v50 = v48[1].m128i_i64[0];
                v46 = (__int64 *)v48;
                v48 = (const __m128i *)((char *)v48 - 24);
                v48[3] = v49;
                v48[4].m128i_i64[0] = v50;
              }
              while ( v47 < v48->m128i_i32[1] );
            }
            i = (const __m128i *)((char *)i + 24);
            v46[1] = v30;
            v46[2] = v29;
          }
        }
      }
      if ( !v35 || *v35 > 1 )
      {
        v125 = si128;
        v126 = v109;
        sub_3FB980((__m128i *)&v125, 0, 0, 0, v29, v30);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v125);
        v111 = v125.m128_i64[1];
        v109 = v126;
        if ( !si128.m128_u64[0] )
        {
          si128 = _mm_loadh_ps((const double *)&v111);
          goto LABEL_48;
        }
        v112 = (void *)v125.m128_u64[0];
      }
      if ( *(int *)v112 <= 1 )
      {
        v51 = v111;
        goto LABEL_49;
      }
LABEL_48:
      v125 = si128;
      v126 = v109;
      sub_3FB980((__m128i *)&v125, 0, 0, 0, v29, v30);
      v51 = v111;
      v112 = (void *)v125.m128_u64[0];
      v109 = v126;
      v111 = v125.m128_i64[1];
LABEL_49:
      v108 = v111 + 24 * v109;
      if ( v108 == v51 )
      {
        v107 = (__m128i *)v123;
        v106[0] = (QT::QString *)v127;
      }
      else
      {
        v107 = (__m128i *)v123;
        v106[0] = (QT::QString *)v127;
        do
        {
          v61 = *(QT::QVariant *(__fastcall **)(QT::QVariant *, __int64, __int64, __int64))(*(_QWORD *)a1 + 144LL);
          if ( v61 == sub_408230 )
          {
            if ( *(_DWORD *)(v51 + 4) )
            {
              QT::QStandardItemModel::data(v135, a1, v51, 0);
            }
            else
            {
              sub_3F6FF0((__m128 *)v131, a1, v51, 1u);
              QT::QVariant::QVariant((QT::QVariant *)v135, (const QT::QString *)v131);
              if ( v131[0] && !_InterlockedSub((volatile signed __int32 *)v131[0], 1u) )
                free(v131[0]);
            }
          }
          else
          {
            v61((QT::QVariant *)v135, a1, v51, 0);
          }
          QT::QVariant::toString((QT::QVariant *)&v129);
          QT::QVariant::~QVariant((QT::QVariant *)v135);
          v52 = *(QT::QVariant *(__fastcall **)(QT::QVariant *, __int64, __int64, __int64))(*(_QWORD *)a1 + 144LL);
          if ( v52 == sub_408230 )
          {
            sub_3F6FF0((__m128 *)ptr, a1, v51, 0);
            QT::QVariant::QVariant((QT::QVariant *)v135, (const QT::QString *)ptr);
            if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
              free(*(void **)ptr);
          }
          else
          {
            v52((QT::QVariant *)v135, a1, v51, 18790);
          }
          QT::QVariant::toString((QT::QVariant *)v131);
          QT::QVariant::~QVariant((QT::QVariant *)v135);
          if ( !v132 )
          {
            if ( v130 )
            {
              sub_409110((QT::QTextDocument *)ptr, a1, (volatile signed __int32 **)&v129);
              v62 = v132;
              v53 = *(_QWORD *)&ptr[16];
              v63 = _mm_load_si128((const __m128i *)v131);
              v64 = _mm_load_si128((const __m128i *)ptr);
              v132 = *(_QWORD *)&ptr[16];
              *(_QWORD *)&ptr[16] = v62;
              *(__m128i *)v131 = v64;
              *(__m128i *)ptr = v63;
              if ( v63.m128i_i64[0] )
              {
                if ( !_InterlockedSub((volatile signed __int32 *)v63.m128i_i64[0], 1u) )
                  free(*(void **)ptr);
              }
            }
          }
          sub_1D5510(v107, v124, &v129, v53, v54, v55);
          if ( !v123[0] || *(int *)v123[0] > 1 )
            sub_1B21C0(v107, 0, 0, 0, v57, v58);
          sub_1D5510((__m128i *)v106[0], v128, (const __m128i *)v131, v56, v57, v58);
          if ( !v127[0] || *(int *)v127[0] > 1 )
            sub_1B21C0((__m128i *)v106[0], 0, 0, 0, v59, v60);
          if ( v131[0] && !_InterlockedSub((volatile signed __int32 *)v131[0], 1u) )
            free(v131[0]);
          if ( v129.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v129.m128i_i64[0], 1u) )
            free((void *)v129.m128i_i64[0]);
          v51 += 24;
        }
        while ( v108 != v51 );
      }
      v65 = QT::QString::fromUtf8(v131, 1, "\t");
      v66 = v131[1];
      if ( !v131[1] )
        v66 = &QT::QString::_empty;
      QT::QtPrivate::QStringList_join(ptr, v107, v66, v132, v65);
      sub_1D5280(v114, v120, (const __m128i *)ptr, v67, v68, v69);
      if ( !v119[0] || *(int *)v119[0] > 1 )
        sub_1B21C0(v114, 0, 0, 0, v70, v71);
      if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
        free(*(void **)ptr);
      if ( v131[0] && !_InterlockedSub((volatile signed __int32 *)v131[0], 1u) )
        free(v131[0]);
      v72 = QT::QString::fromUtf8(v131, 1, "\t");
      v73 = v131[1];
      if ( !v131[1] )
        v73 = &QT::QString::_empty;
      QT::QtPrivate::QStringList_join(ptr, v106[0], v73, v132, v72);
      sub_1D5280(v115, v122, (const __m128i *)ptr, v74, v75, v76);
      if ( !v121[0] || *(int *)v121[0] > 1 )
        sub_1B21C0(v115, 0, 0, 0, v77, v78);
      if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
        free(*(void **)ptr);
      if ( v131[0] && !_InterlockedSub((volatile signed __int32 *)v131[0], 1u) )
        free(v131[0]);
      v79 = v112;
      if ( v112 && !_InterlockedSub((volatile signed __int32 *)v112, 1u) )
        free(v79);
      if ( v127[0] && !_InterlockedSub((volatile signed __int32 *)v127[0], 1u) )
      {
        v80 = (void **)v127[1];
        v81 = (void **)((char *)v127[1] + 24 * v128);
        if ( v127[1] != v81 )
        {
          do
          {
            if ( *v80 && !_InterlockedSub((volatile signed __int32 *)*v80, 1u) )
              free(*v80);
            v80 += 3;
          }
          while ( v81 != v80 );
        }
        free(v127[0]);
      }
      if ( v123[0] && !_InterlockedSub((volatile signed __int32 *)v123[0], 1u) )
      {
        v82 = (void **)v123[1];
        v83 = (void **)((char *)v123[1] + 24 * v124);
        if ( v123[1] != v83 )
        {
          do
          {
            if ( *v82 && !_InterlockedSub((volatile signed __int32 *)*v82, 1u) )
              free(*v82);
            v82 += 3;
          }
          while ( v83 != v82 );
        }
        free(v123[0]);
      }
      v110 = std::_Rb_tree_increment(v110);
LABEL_124:
      v84 = v113;
      v33 = (char *)v113 + 16;
      if ( *(_DWORD *)v113 == 1 )
        goto LABEL_30;
      v85 = operator new(0x38u);
      *(_DWORD *)v85 = 0;
      v86 = v85;
      *(_DWORD *)(v85 + 16) = 0;
      *(_QWORD *)(v85 + 24) = 0;
      *(_QWORD *)(v85 + 32) = v85 + 16;
      *(_QWORD *)(v85 + 40) = v85 + 16;
      *(_QWORD *)(v85 + 48) = 0;
      v87 = *((int **)v84 + 3);
      if ( v87 )
      {
        v88 = sub_3EF120(v87, v85 + 16);
        v89 = v88;
        do
        {
          v90 = v89;
          v89 = *(_QWORD *)(v89 + 16);
        }
        while ( v89 );
        *(_QWORD *)(v86 + 32) = v90;
        v91 = v88;
        do
        {
          v28 = v91;
          v91 = *(_QWORD *)(v91 + 24);
        }
        while ( v91 );
        v92 = v113;
        *(_QWORD *)(v86 + 40) = v28;
        v93 = v92[6];
        *(_QWORD *)(v86 + 24) = v88;
        *(_QWORD *)(v86 + 48) = v93;
      }
      if ( v86 )
        _InterlockedAdd((volatile signed __int32 *)v86, 1u);
      if ( !_InterlockedSub((volatile signed __int32 *)v113, 1u) )
      {
        v94 = v113;
        sub_3EF0C0(*((void **)v113 + 3));
        operator delete(v94, 0x38u);
      }
      v113 = (void *)v86;
    }
    while ( v110 != v86 + 16 );
  }
  v95 = QT::QString::fromUtf8(ptr, 1, "\n");
  v96 = *(void **)&ptr[8];
  if ( !*(_QWORD *)&ptr[8] )
    v96 = &QT::QString::_empty;
  v106[0] = (QT::QString *)v127;
  QT::QtPrivate::QStringList_join(v127, v114, v96, *(_QWORD *)&ptr[16], v95);
  if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
    free(*(void **)ptr);
  v97 = QT::QString::fromUtf8(ptr, 1, "\n");
  v98 = *(void **)&ptr[8];
  if ( !*(_QWORD *)&ptr[8] )
    v98 = &QT::QString::_empty;
  QT::QtPrivate::QStringList_join(&v129, v115, v98, *(_QWORD *)&ptr[16], v97);
  if ( *(_QWORD *)ptr && !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
    free(*(void **)ptr);
  v99 = v117;
  QT::QMimeData::setHtml(v117, v106[0]);
  QT::QMimeData::setText(v99, (const QT::QString *)&v129);
  if ( v129.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v129.m128i_i64[0], 1u) )
    free((void *)v129.m128i_i64[0]);
  if ( v127[0] && !_InterlockedSub((volatile signed __int32 *)v127[0], 1u) )
    free(v127[0]);
  v100 = (void **)v113;
  if ( !_InterlockedSub((volatile signed __int32 *)v113, 1u) )
  {
    sub_3EF0C0(v100[3]);
    operator delete(v100, 0x38u);
  }
  if ( v121[0] && !_InterlockedSub((volatile signed __int32 *)v121[0], 1u) )
  {
    v101 = (void **)v121[1];
    v102 = (void **)((char *)v121[1] + 24 * v122);
    if ( v121[1] != v102 )
    {
      do
      {
        if ( *v101 && !_InterlockedSub((volatile signed __int32 *)*v101, 1u) )
          free(*v101);
        v101 += 3;
      }
      while ( v102 != v101 );
    }
    free(v121[0]);
  }
  if ( v119[0] && !_InterlockedSub((volatile signed __int32 *)v119[0], 1u) )
  {
    v103 = (void **)v119[1];
    v104 = (void **)((char *)v119[1] + 24 * v120);
    if ( v119[1] != v104 )
    {
      do
      {
        if ( *v103 && !_InterlockedSub((volatile signed __int32 *)*v103, 1u) )
          free(*v103);
        v103 += 3;
      }
      while ( v104 != v103 );
    }
    free(v119[0]);
  }
  return v117;
}
