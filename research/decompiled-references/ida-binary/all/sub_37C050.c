__int64 __fastcall sub_37C050(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rdi
  QT::QTableWidget *v5; // rdi
  _QWORD *first_seg; // rbx
  size_t v7; // rax
  char *v8; // r13
  unsigned __int64 v9; // rdx
  double v10; // xmm0_8
  void (__fastcall *v11)(QT::QTableWidgetItem *, _QWORD, char *); // r15
  __int64 v12; // r15
  unsigned int v13; // r14d
  double v14; // xmm0_8
  QT::QTableWidgetItem *v15; // r15
  size_t v16; // rax
  double v17; // xmm0_8
  double v18; // xmm0_8
  QT::QTableWidgetItem *v19; // r15
  size_t v20; // rax
  double v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rsi
  QT::QTableWidgetItem *v25; // r12
  __int64 v26; // rax
  __int64 v27; // r15
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  _QWORD *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 segment_translations; // rax
  __int64 v37; // r12
  __int64 v38; // r12
  QT::QTableWidget *v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rdi
  __int64 v43; // rdx
  __int64 *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rbx
  _QWORD *v48; // rdx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdx
  bool v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  const char *v55; // rsi
  __int64 v56; // r12
  unsigned __int64 v57; // r15
  __int64 v58; // rdi
  __int64 v59; // r14
  __int64 k; // r13
  __int64 v61; // rbx
  void *v62; // rdi
  __m128i v63; // xmm4
  unsigned __int64 v65; // r13
  __int64 v66; // rbx
  void *v67; // rdi
  __int64 v68; // r14
  __int64 v69; // rbx
  QT::QTableWidget *v70; // r8
  __int64 v71; // r13
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rax
  const char *v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r13
  __int64 v85; // r12
  __int64 v86; // rbx
  __int64 v87; // rdx
  char *v88; // rax
  _QWORD *v89; // rdi
  __m128 v90; // xmm0
  __int64 v91; // rcx
  __int64 v92; // rcx
  const char *v93; // rsi
  __int64 v94; // r12
  __int64 v95; // rdx
  QT::QTableWidget *v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rax
  __m128 v100; // xmm0
  __int64 v101; // rcx
  __int64 v102; // rcx
  _QWORD *j; // r13
  _QWORD *v104; // rdi
  void *v105; // rdi
  QT::QTableWidget *v106; // [rsp+8h] [rbp-500h]
  QT::QTableWidget *v107; // [rsp+8h] [rbp-500h]
  QT::QTableWidget *v108; // [rsp+8h] [rbp-500h]
  QT::QTableWidget *v109; // [rsp+8h] [rbp-500h]
  QT::QTableWidget *v110; // [rsp+8h] [rbp-500h]
  QT::QTableWidget *v111; // [rsp+8h] [rbp-500h]
  __m128i v112; // [rsp+10h] [rbp-4F8h] BYREF
  char **i; // [rsp+20h] [rbp-4E8h]
  __int64 v114; // [rsp+28h] [rbp-4E0h]
  __int64 v115; // [rsp+30h] [rbp-4D8h]
  int *v116; // [rsp+38h] [rbp-4D0h]
  char *v117; // [rsp+40h] [rbp-4C8h] BYREF
  __int128 v118; // [rsp+48h] [rbp-4C0h] BYREF
  __int128 *v119; // [rsp+58h] [rbp-4B0h]
  __int128 *v120; // [rsp+60h] [rbp-4A8h]
  __int64 v121; // [rsp+68h] [rbp-4A0h]
  void *ptr; // [rsp+70h] [rbp-498h] BYREF
  __int128 v123; // [rsp+78h] [rbp-490h] BYREF
  __int128 *v124; // [rsp+88h] [rbp-480h]
  __int128 *v125; // [rsp+90h] [rbp-478h]
  __int64 v126; // [rsp+98h] [rbp-470h]
  char v127[32]; // [rsp+A0h] [rbp-468h] BYREF
  char s[1032]; // [rsp+C0h] [rbp-448h] BYREF
  unsigned __int64 v129; // [rsp+4C8h] [rbp-40h]

  v2 = a1 + 7;
  v129 = __readfsqword(0x28u);
  v4 = a1[7];
  v114 = (__int64)v2;
  if ( v4 )
  {
    a1[8] = 0;
    qfree(v4, a2);
    a1[7] = 0;
    a1[9] = 0;
  }
  QT::QTableWidget::clearContents(*(QT::QTableWidget **)(a1[6] + 32LL));
  v5 = *(QT::QTableWidget **)(a1[6] + 32LL);
  QT::QTableWidget::setRowCount(v5, 0);
  first_seg = (_QWORD *)get_first_seg(v5, 0);
  for ( i = &v117; first_seg; first_seg = (_QWORD *)get_next_seg(*first_seg) )
  {
    v22 = a1[8];
    v23 = *first_seg;
    v24 = a1[7];
    if ( a1[9] < (unsigned __int64)(v22 + 1) )
    {
      v26 = qvector_reserve(v114, v24, v22 + 1, 8);
      a1[7] = v26;
      v24 = v26;
      v22 = a1[8];
    }
    *(_QWORD *)(v24 + 8 * v22) = v23;
    ++a1[8];
    v25 = (QT::QTableWidgetItem *)operator new(0x40u);
    QT::QTableWidgetItem::QTableWidgetItem(v25, 0);
    v117 = nullptr;
    v118 = 0;
    get_segm_name(i, first_seg, 0);
    if ( (_QWORD)v118 )
    {
      v7 = v118 - 1;
      v8 = v117;
      v9 = (unsigned __int64)(v118 - 1) >> 63;
      if ( !v117 )
        goto LABEL_23;
    }
    else
    {
      v8 = (char *)&s1;
      LOBYTE(v9) = 0;
      v7 = 0;
      if ( !&s1 )
      {
LABEL_23:
        v7 = 0;
        if ( v8 )
          v7 = strlen(v8);
        goto LABEL_7;
      }
    }
    if ( (_BYTE)v9 )
      goto LABEL_23;
LABEL_7:
    v10 = QT::QString::fromUtf8(&ptr, v7, v8);
    v11 = *(void (__fastcall **)(QT::QTableWidgetItem *, _QWORD, char *))(*(_QWORD *)v25 + 32LL);
    QT::QVariant::QVariant((QT::QVariant *)v127, (const QT::QString *)&ptr);
    v11(v25, 0, v127);
    QT::QVariant::~QVariant((QT::QVariant *)v127);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v12 = *first_seg;
    v112.m128i_i64[0] = v12 - get_segm_base(first_seg) + first_seg[1] - *first_seg;
    v13 = QT::QTableWidget::rowCount(*(QT::QTableWidget **)(a1[6] + 32LL));
    QT::QTableWidget::insertRow(*(QT::QTableWidget **)(a1[6] + 32LL), v13);
    QT::QTableWidget::setItem(*(QT::QTableWidget **)(a1[6] + 32LL), v13, 0, v25);
    v14 = qsnprintf(s, 1024, "%08a", v10);
    v106 = *(QT::QTableWidget **)(a1[6] + 32LL);
    v15 = (QT::QTableWidgetItem *)operator new(0x40u);
    v16 = strlen(s);
    v17 = QT::QString::fromUtf8(&ptr, v16, s, v14);
    QT::QTableWidgetItem::QTableWidgetItem(v15, (const QT::QString *)&ptr, 0);
    QT::QTableWidget::setItem(v106, v13, 1, v15);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v18 = qsnprintf(s, 1024, "%08a", v17);
    v107 = *(QT::QTableWidget **)(a1[6] + 32LL);
    v19 = (QT::QTableWidgetItem *)operator new(0x40u);
    v20 = strlen(s);
    v21 = QT::QString::fromUtf8(&ptr, v20, s, v18);
    QT::QTableWidgetItem::QTableWidgetItem(v19, (const QT::QString *)&ptr, 0);
    QT::QTableWidget::setItem(v107, v13, 2, v19);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v117 )
    {
      *(_QWORD *)&v118 = 0;
      qfree(v117, (const char *)v13, v21);
    }
  }
  v27 = a1[8];
  v28 = a1[14];
  if ( (int)v27 == v28 )
    goto LABEL_33;
  LODWORD(v118) = 0;
  *((_QWORD *)&v118 + 1) = 0;
  v119 = &v118;
  v120 = &v118;
  v121 = 0;
  if ( (int)v27 < v28 )
  {
    v65 = (int)v27;
    do
    {
      v66 = *(_QWORD *)(a1[13] + 48 * v65 + 16);
      while ( v66 )
      {
        sub_37A730(*(_QWORD **)(v66 + 24));
        v67 = (void *)v66;
        v66 = *(_QWORD *)(v66 + 16);
        operator delete(v67, 0x28u);
      }
      ++v65;
    }
    while ( v65 < v28 );
  }
  else
  {
    v29 = a1[13];
    v30 = a1[15];
    v31 = a1 + 13;
    if ( (unsigned __int64)&v117 >= v29 && (unsigned __int64)&v117 < 48 * v30 + v29 )
    {
      LODWORD(v123) = 0;
      *((_QWORD *)&v123 + 1) = 0;
      v124 = &v123;
      v125 = &v123;
      v126 = 0;
      if ( v30 < (int)v27 )
      {
        v93 = nullptr;
        v94 = qvector_reserve(v31, 0, (int)v27, 48);
        v95 = a1[14];
        v96 = (QT::QTableWidget *)a1[15];
        a1[15] = v30;
        v97 = a1[13];
        v111 = v96;
        v98 = v95 - 1;
        if ( v98 >= 0 )
        {
          v99 = v94 + 8;
          do
          {
            v102 = *(_QWORD *)(v97 + 16);
            if ( v102 )
            {
              v100 = _mm_loadh_ps((const double *)(v97 + 24));
              *(_DWORD *)v99 = *(_DWORD *)(v97 + 8);
              v93 = *(const char **)(v97 + 32);
              *(__m128 *)(v99 + 8) = v100;
              *(_QWORD *)(v99 + 24) = v93;
              *(_QWORD *)(v102 + 8) = v99;
              v101 = *(_QWORD *)(v97 + 40);
              *(_QWORD *)(v97 + 16) = 0;
              *(_QWORD *)(v99 + 32) = v101;
              *(_QWORD *)(v97 + 24) = v97 + 8;
              *(_QWORD *)(v97 + 32) = v97 + 8;
              *(_QWORD *)(v97 + 40) = 0;
            }
            else
            {
              *(_DWORD *)v99 = 0;
              *(_QWORD *)(v99 + 8) = 0;
              *(_QWORD *)(v99 + 16) = v99;
              *(_QWORD *)(v99 + 24) = v99;
              *(_QWORD *)(v99 + 32) = 0;
              for ( j = *(_QWORD **)(v97 + 16); j; v98 = (__int64)i )
              {
                v104 = (_QWORD *)j[3];
                i = (char **)v98;
                v112.m128i_i64[0] = v99;
                sub_37A730(v104);
                v105 = j;
                j = (_QWORD *)j[2];
                v93 = (const char *)&qword_28;
                operator delete(v105, 0x28u);
                v99 = v112.m128i_i64[0];
              }
            }
            --v98;
            v97 += 48;
            v99 += 48;
          }
          while ( v98 != -1 );
          v97 = a1[13];
        }
        qfree(v97, v93);
        a1[13] = v94;
        v28 = a1[14];
        a1[15] = v111;
      }
      v79 = 48 * v28;
      if ( v28 < (int)v27 )
      {
        do
        {
          ++v28;
          v80 = v79 + a1[13];
          v79 += 48;
          *(_DWORD *)(v80 + 8) = 0;
          *(_QWORD *)(v80 + 16) = 0;
          *(_QWORD *)(v80 + 24) = v80 + 8;
          *(_QWORD *)(v80 + 32) = v80 + 8;
          *(_QWORD *)(v80 + 40) = 0;
        }
        while ( (int)v27 != v28 );
      }
      a1[14] = (int)v27;
      sub_37A730(nullptr);
      goto LABEL_32;
    }
    if ( v30 < (int)v27 )
    {
      v81 = nullptr;
      v82 = qvector_reserve(v31, 0, (int)v27, 48);
      v83 = a1[14];
      v84 = a1[15];
      v85 = v82;
      a1[15] = v30;
      v86 = a1[13];
      v87 = v83 - 1;
      if ( v87 >= 0 )
      {
        v88 = (char *)(v82 + 8);
        do
        {
          v92 = *(_QWORD *)(v86 + 16);
          if ( v92 )
          {
            v89 = nullptr;
            v90 = _mm_loadh_ps((const double *)(v86 + 24));
            *(_DWORD *)v88 = *(_DWORD *)(v86 + 8);
            v81 = *(const char **)(v86 + 32);
            *(__m128 *)(v88 + 8) = v90;
            *((_QWORD *)v88 + 3) = v81;
            *(_QWORD *)(v92 + 8) = v88;
            v91 = *(_QWORD *)(v86 + 40);
            *(_QWORD *)(v86 + 16) = 0;
            *((_QWORD *)v88 + 4) = v91;
            *(_QWORD *)(v86 + 24) = v86 + 8;
            *(_QWORD *)(v86 + 32) = v86 + 8;
            *(_QWORD *)(v86 + 40) = 0;
          }
          else
          {
            *(_DWORD *)v88 = 0;
            *((_QWORD *)v88 + 1) = 0;
            *((_QWORD *)v88 + 2) = v88;
            *((_QWORD *)v88 + 3) = v88;
            *((_QWORD *)v88 + 4) = 0;
            v89 = *(_QWORD **)(v86 + 16);
          }
          v112.m128i_i64[0] = v87;
          v86 += 48;
          v110 = (QT::QTableWidget *)v88;
          sub_37A730(v89);
          v87 = v112.m128i_i64[0] - 1;
          v88 = (char *)v110 + 48;
        }
        while ( v112.m128i_i64[0] );
        v86 = a1[13];
      }
      qfree(v86, v81);
      a1[13] = v85;
      v28 = a1[14];
      a1[15] = v84;
    }
    v32 = 48 * v28;
    if ( v28 < (int)v27 )
    {
      do
      {
        ++v28;
        v33 = v32 + a1[13];
        v32 += 48;
        *(_DWORD *)(v33 + 8) = 0;
        *(_QWORD *)(v33 + 16) = 0;
        *(_QWORD *)(v33 + 24) = v33 + 8;
        *(_QWORD *)(v33 + 32) = v33 + 8;
        *(_QWORD *)(v33 + 40) = 0;
      }
      while ( (int)v27 != v28 );
    }
  }
  a1[14] = (int)v27;
LABEL_32:
  sub_37A730(nullptr);
LABEL_33:
  LODWORD(v117) = 0;
  if ( (int)v27 > 0 )
  {
    v34 = 0;
    v115 = (unsigned int)(v27 - 1);
    v116 = (int *)&v117;
    while ( 1 )
    {
      v35 = a1[7];
      ptr = nullptr;
      v123 = 0;
      segment_translations = get_segment_translations(&ptr, *(_QWORD *)(v35 + 8 * v34));
      v37 = a1[13];
      v114 = 48 * v34;
      v38 = 48 * v34 + v37;
      if ( segment_translations > 0 && (int)v123 > 0 )
        break;
LABEL_50:
      sub_37BDF0(v38, v116);
      if ( ptr )
      {
        *(_QWORD *)&v123 = 0;
        qfree(ptr, (const char *)v116);
      }
      LODWORD(v117) = v34 + 1;
      if ( v115 == v34 )
        goto LABEL_71;
      ++v34;
    }
    v39 = nullptr;
    v108 = (QT::QTableWidget *)(8LL * (unsigned int)(v123 - 1) + 8);
    while ( 1 )
    {
      v40 = a1[7];
      v41 = 8LL * a1[8];
      v42 = (_QWORD *)(v40 + v41);
      v43 = v41 >> 5;
      v44 = (__int64 *)((char *)ptr + (_QWORD)v39);
      v45 = v41 >> 3;
      if ( v43 > 0 )
      {
        v46 = *v44;
        v47 = (_QWORD *)a1[7];
        v48 = (_QWORD *)(v40 + 32 * v43);
        while ( *v47 != v46 )
        {
          if ( v46 == v47[1] )
          {
            ++v47;
            break;
          }
          if ( v46 == v47[2] )
          {
            v47 += 2;
            break;
          }
          if ( v46 == v47[3] )
          {
            v47 += 3;
            break;
          }
          v47 += 4;
          if ( v48 == v47 )
          {
            v45 = v42 - v47;
            goto LABEL_58;
          }
        }
LABEL_45:
        if ( v42 != v47 )
        {
          v49 = ((__int64)v47 - v40) >> 3;
          v50 = sub_37A6A0(v38, v49);
          if ( v51 )
          {
            v52 = 1;
            if ( !v50 && v51 != v38 + 8 )
              v52 = (int)v49 < *(_DWORD *)(v51 + 32);
            LOBYTE(i) = v52;
            v112.m128i_i64[0] = v51;
            v53 = operator new(0x28u);
            *(_DWORD *)(v53 + 32) = v49;
            std::_Rb_tree_insert_and_rebalance((unsigned __int8)i, v53, v112.m128i_i64[0], v38 + 8);
            ++*(_QWORD *)(v38 + 40);
            v38 = a1[13] + v114;
          }
        }
        goto LABEL_49;
      }
      v47 = (_QWORD *)a1[7];
LABEL_58:
      if ( v45 == 2 )
        break;
      if ( v45 == 3 )
      {
        v54 = *v44;
        if ( *v47 == *v44 )
          goto LABEL_45;
        ++v47;
        goto LABEL_68;
      }
      if ( v45 != 1 )
        goto LABEL_49;
      v54 = *v44;
LABEL_62:
      if ( *v47 == v54 )
        goto LABEL_45;
LABEL_49:
      v39 = (QT::QTableWidget *)((char *)v39 + 8);
      if ( v39 == v108 )
        goto LABEL_50;
    }
    v54 = *v44;
LABEL_68:
    if ( *v47 == v54 )
      goto LABEL_45;
    ++v47;
    goto LABEL_62;
  }
LABEL_71:
  v55 = nullptr;
  v56 = 0;
  QT::QTableView::selectRow(*(QT::QTableView **)(a1[6] + 32LL), 0);
  v57 = a1[14];
  v112 = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
  if ( v57 )
  {
    v68 = 0;
    v56 = qalloc_or_throw(48 * v57);
    v69 = v56 + 8;
    v70 = (QT::QTableWidget *)(-8 - v56);
    do
    {
      v71 = (__int64)v70 + v69 + a1[13];
      *(_DWORD *)v69 = 0;
      *(_QWORD *)(v69 + 8) = 0;
      *(_QWORD *)(v69 + 16) = v69;
      *(_QWORD *)(v69 + 24) = v69;
      *(_QWORD *)(v69 + 32) = 0;
      v72 = *(_QWORD *)(v71 + 16);
      if ( v72 )
      {
        v55 = (const char *)v69;
        v109 = v70;
        v73 = sub_37A900(v72, v69);
        v70 = v109;
        v74 = v73;
        do
        {
          v75 = v74;
          v74 = *(_QWORD *)(v74 + 16);
        }
        while ( v74 );
        *(_QWORD *)(v69 + 16) = v75;
        v76 = v73;
        do
        {
          v77 = v76;
          v76 = *(_QWORD *)(v76 + 24);
        }
        while ( v76 );
        *(_QWORD *)(v69 + 24) = v77;
        v78 = *(_QWORD *)(v71 + 40);
        *(_QWORD *)(v69 + 8) = v73;
        *(_QWORD *)(v69 + 32) = v78;
      }
      ++v68;
      v69 += 48;
    }
    while ( v57 != v68 );
  }
  v58 = a1[10];
  if ( v58 )
  {
    v59 = a1[11];
    if ( v59 )
    {
      for ( k = 0; k != v59; ++k )
      {
        v61 = *(_QWORD *)(v58 + 48 * k + 16);
        if ( v61 )
        {
          do
          {
            sub_37A730(*(_QWORD **)(v61 + 24));
            v62 = (void *)v61;
            v61 = *(_QWORD *)(v61 + 16);
            v55 = (const char *)&qword_28;
            operator delete(v62, 0x28u);
          }
          while ( v61 );
          v58 = a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v58, v55);
  }
  v63 = _mm_load_si128(&v112);
  a1[10] = v56;
  *(__m128i *)(a1 + 11) = v63;
  return sub_37B980((__int64)a1);
}
