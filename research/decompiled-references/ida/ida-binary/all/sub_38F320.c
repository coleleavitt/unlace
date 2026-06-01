__int64 __fastcall sub_38F320(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        QT::QTreeWidgetItem *a4,
        char a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  QT::QTreeWidgetItem *v13; // rbx
  __int64 v14; // rax
  __int64 v18; // r15
  __int64 i; // r14
  __int64 v20; // rdi
  QT::QTreeWidgetItem *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbx
  _QWORD *(__fastcall *v24)(__int64 *, __int64); // rax
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int16 v27; // dx
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r15
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __m128i si128; // xmm0
  QT::QComboBox *v35; // rdi
  __int64 v36; // rax
  double v37; // xmm4_8
  double v38; // xmm5_8
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // r15
  __int64 j; // rbx
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rbx
  _QWORD *(__fastcall *v46)(__int64 *, __int64); // rax
  __int64 v47; // rax
  __m128i v48; // xmm0
  QT::QTreeWidgetItem *v49; // r9
  __int16 v50; // dx
  __int64 v51; // rdx
  __m128i v52; // xmm0
  __int64 v53; // rax
  __int64 v54; // rbx
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // rdx
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // r13
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  int v63; // edx
  QT::QTreeWidgetItem *v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  bool v75; // cf
  const char *v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rcx
  const char **v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // r14
  __int64 *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  const char *v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rcx
  const char **v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // [rsp+0h] [rbp-98h]
  __int64 v95; // [rsp+0h] [rbp-98h]
  QT::QTreeWidgetItem *v96; // [rsp+0h] [rbp-98h]
  QT::QTreeWidgetItem *v97; // [rsp+0h] [rbp-98h]
  __int64 v98; // [rsp+0h] [rbp-98h]
  __int64 v99; // [rsp+0h] [rbp-98h]
  QT::QTreeWidgetItem *v100; // [rsp+0h] [rbp-98h]
  unsigned __int64 v101; // [rsp+0h] [rbp-98h]
  __int64 v102; // [rsp+0h] [rbp-98h]
  __int64 v103; // [rsp+8h] [rbp-90h]
  const char *v105; // [rsp+30h] [rbp-68h] BYREF
  __int64 v106; // [rsp+38h] [rbp-60h] BYREF
  __m128i v107; // [rsp+40h] [rbp-58h] BYREF
  int v108; // [rsp+50h] [rbp-48h]
  unsigned __int64 v109; // [rsp+58h] [rbp-40h]

  v109 = __readfsqword(0x28u);
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v13 = a4;
  if ( !a4 )
    return 0xFFFFFFFFLL;
  v14 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    v18 = *((_QWORD *)a2 + 1);
    if ( v18 )
    {
      for ( i = 0; i != v18; ++i )
      {
        v20 = *(_QWORD *)(v14 + 8 * i);
        if ( v20 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
          v14 = *(_QWORD *)a2;
        }
      }
    }
    *((_QWORD *)a2 + 1) = 0;
    qfree(v14, a2);
    *(_QWORD *)a2 = 0;
    *((_QWORD *)a2 + 2) = 0;
  }
  do
  {
    v21 = v13;
    v13 = *((QT::QTreeWidgetItem **)v13 + 7);
  }
  while ( v13 );
  v22 = sub_38B880(a1, (__int64)v21);
  v23 = v22;
  if ( !v22 )
    return 0xFFFFFFFFLL;
  v24 = *(_QWORD *(__fastcall **)(__int64 *, __int64))(*(_QWORD *)v22 + 16LL);
  if ( v24 == struc_tree_node_info_t__::vfunc_2 )
  {
    v25 = operator new(0x40u);
    v26 = _mm_loadu_si128((const __m128i *)(v23 + 8));
    *(_QWORD *)(v25 + 24) = *(_QWORD *)(v23 + 24);
    v27 = *(_WORD *)(v23 + 32);
    *(__m128i *)(v25 + 8) = v26;
    *(_WORD *)(v25 + 32) = v27;
    v28 = _mm_loadu_si128((const __m128i *)(v23 + 40));
    v29 = *(_QWORD *)(v23 + 56);
    *(_QWORD *)v25 = struc_tree_node_info_t___vtable;
    v106 = v25;
    *(_QWORD *)(v25 + 56) = v29;
    *(__m128i *)(v25 + 40) = v28;
  }
  else
  {
    v24(&v106, v23);
  }
  v30 = *((_QWORD *)a2 + 1);
  v31 = *(_QWORD *)a2;
  v32 = *((_QWORD *)a2 + 2);
  v33 = v30 + 1;
  if ( (unsigned __int64)&v106 >= *(_QWORD *)a2 && (unsigned __int64)&v106 < v31 + 8 * v32 )
  {
    v67 = v106;
    v106 = 0;
    v107.m128i_i64[0] = v67;
    if ( v32 < v33 )
    {
      v88 = nullptr;
      v101 = v32;
      v31 = qvector_reserve(a2, 0, v33, 8);
      v89 = *((_QWORD *)a2 + 1);
      v90 = *((_QWORD *)a2 + 2);
      v91 = *(const char ***)a2;
      *((_QWORD *)a2 + 2) = v101;
      v92 = v89 - 1;
      if ( v92 >= 0 )
      {
        v93 = v31;
        do
        {
          v88 = *v91;
          v93 += 8;
          ++v91;
          *(_QWORD *)(v93 - 8) = v88;
          v75 = v92-- == 0;
        }
        while ( !v75 );
        v91 = *(const char ***)a2;
      }
      v102 = v90;
      qfree(v91, v88);
      v30 = *((_QWORD *)a2 + 1);
      *(_QWORD *)a2 = v31;
      *((_QWORD *)a2 + 2) = v102;
    }
    *(_QWORD *)(v31 + 8 * v30) = v107.m128i_i64[0];
    v68 = v106;
    ++*((_QWORD *)a2 + 1);
    if ( v68 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 8LL))(v68);
  }
  else
  {
    if ( v32 < v33 )
    {
      v76 = nullptr;
      v98 = *((_QWORD *)a2 + 2);
      v31 = qvector_reserve(a2, 0, v33, 8);
      v77 = *((_QWORD *)a2 + 1);
      v78 = *((_QWORD *)a2 + 2);
      v79 = *(const char ***)a2;
      *((_QWORD *)a2 + 2) = v98;
      v80 = v77 - 1;
      if ( v80 >= 0 )
      {
        v81 = v31;
        do
        {
          v76 = *v79;
          v81 += 8;
          ++v79;
          *(_QWORD *)(v81 - 8) = v76;
          v75 = v80-- == 0;
        }
        while ( !v75 );
        v79 = *(const char ***)a2;
      }
      v99 = v78;
      qfree(v79, v76);
      v30 = *((_QWORD *)a2 + 1);
      *(_QWORD *)a2 = v31;
      *((_QWORD *)a2 + 2) = v99;
    }
    *(_QWORD *)(v31 + 8 * v30) = v106;
    ++*((_QWORD *)a2 + 1);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD0F0);
  v35 = *(QT::QComboBox **)(a1 + 96);
  v108 = 0;
  v107 = si128;
  v36 = QT::QComboBox::lineEdit(v35);
  if ( (unsigned __int8)sub_357F80(
                          &v105,
                          v36,
                          (__int128 *)v107.m128i_i8,
                          *(double *)si128.m128i_i64,
                          a7,
                          a8,
                          a9,
                          v37,
                          v38,
                          a12,
                          a13) )
    a3 += (unsigned __int64)v105;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, unsigned __int64))(**(_QWORD **)(a1 + 64) + 16LL))(
          *(_QWORD *)(a1 + 64),
          v23,
          a3) )
  {
    while ( 1 )
    {
      v39 = sub_38B880(a1, (__int64)v21);
      if ( !v39 )
        return 0xFFFFFFFFLL;
      v40 = *((_QWORD *)v21 + 10);
      if ( !*(_BYTE *)(v39 + 32) )
      {
        if ( !(_DWORD)v40 )
          return 1;
        if ( (int)v40 > 0 )
        {
          v95 = a1;
          v58 = 0;
          v103 = (unsigned int)(v40 - 1);
          while ( 1 )
          {
            v60 = 0;
            if ( v58 < v40 )
            {
              QT::QTreeWidgetItem::executePendingSort(v21);
              v60 = *(_QWORD *)(*((_QWORD *)v21 + 9) + 8 * v58);
            }
            v61 = sub_38B880(v95, v60);
            v62 = *(_QWORD *)(v61 + 8);
            if ( a3 < v62 )
              return 1;
            v59 = *(_QWORD *)(v61 + 24);
            if ( v59 == -1 )
              return 0xFFFFFFFFLL;
            v40 = *((_QWORD *)v21 + 10);
            if ( !v59 || v59 + v62 >= a3 )
              break;
            if ( v58 == v103 )
            {
              v64 = (QT::QTreeWidgetItem *)v60;
              a1 = v95;
              v63 = v58 + 1;
              goto LABEL_57;
            }
            ++v58;
          }
          v63 = v58;
          v64 = (QT::QTreeWidgetItem *)v60;
          a1 = v95;
LABEL_57:
          if ( v63 == (_DWORD)v40 )
            return 1;
          v21 = v64;
          goto LABEL_41;
        }
        return 0xFFFFFFFFLL;
      }
      if ( !(_DWORD)v40 )
        return 0xFFFFFFFFLL;
      if ( a5 )
        return 0;
      if ( (int)v40 <= 0 )
      {
        v43 = 0;
      }
      else
      {
        v41 = (unsigned int)(v40 - 1);
        for ( j = 0; ; ++j )
        {
          v43 = 0;
          if ( j < v40 )
          {
            QT::QTreeWidgetItem::executePendingSort(v21);
            v40 = *((_QWORD *)v21 + 10);
            v43 = *(_QWORD *)(*((_QWORD *)v21 + 9) + 8 * j);
          }
          if ( *(_DWORD *)(v43 + 92) == 1 )
          {
            v44 = j;
            goto LABEL_33;
          }
          if ( j == v41 )
            break;
        }
        v44 = j + 1;
LABEL_33:
        if ( v44 == (_DWORD)v40 )
          return 0;
      }
      v94 = v43;
      v45 = sub_38B880(a1, v43);
      v46 = *(_QWORD *(__fastcall **)(__int64 *, __int64))(*(_QWORD *)v45 + 16LL);
      if ( v46 == struc_tree_node_info_t__::vfunc_2 )
      {
        v47 = operator new(0x40u);
        v48 = _mm_loadu_si128((const __m128i *)(v45 + 8));
        v49 = (QT::QTreeWidgetItem *)v94;
        *(_QWORD *)(v47 + 24) = *(_QWORD *)(v45 + 24);
        v50 = *(_WORD *)(v45 + 32);
        *(__m128i *)(v47 + 8) = v48;
        *(_WORD *)(v47 + 32) = v50;
        v51 = *(_QWORD *)(v45 + 56);
        v52 = _mm_loadu_si128((const __m128i *)(v45 + 40));
        *(_QWORD *)v47 = struc_tree_node_info_t___vtable;
        *(_QWORD *)(v47 + 56) = v51;
        v106 = v47;
        *(__m128i *)(v47 + 40) = v52;
      }
      else
      {
        v46(&v106, v45);
        v49 = (QT::QTreeWidgetItem *)v94;
      }
      v53 = *((_QWORD *)a2 + 1);
      v54 = *(_QWORD *)a2;
      v55 = *((_QWORD *)a2 + 2);
      v56 = v53 + 1;
      if ( (unsigned __int64)&v106 >= *(_QWORD *)a2 && (unsigned __int64)&v106 < v54 + 8 * v55 )
      {
        v65 = v106;
        v106 = 0;
        v107.m128i_i64[0] = v65;
        if ( v55 < v56 )
        {
          v100 = v49;
          v54 = qvector_reserve(a2, 0, v56, 8);
          v82 = *((_QWORD *)a2 + 1);
          v83 = *((_QWORD *)a2 + 2);
          *((_QWORD *)a2 + 2) = v55;
          v84 = *(__int64 **)a2;
          v85 = v82 - 1;
          if ( v85 >= 0 )
          {
            v86 = v54;
            do
            {
              v87 = *v84;
              v86 += 8;
              ++v84;
              *(_QWORD *)(v86 - 8) = v87;
              v75 = v85-- == 0;
            }
            while ( !v75 );
            v84 = *(__int64 **)a2;
          }
          qfree(v84, nullptr);
          v53 = *((_QWORD *)a2 + 1);
          v49 = v100;
          *(_QWORD *)a2 = v54;
          *((_QWORD *)a2 + 2) = v83;
        }
        *(_QWORD *)(v54 + 8 * v53) = v107.m128i_i64[0];
        v66 = v106;
        ++*((_QWORD *)a2 + 1);
        if ( v66 )
        {
          v96 = v49;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
          v49 = v96;
        }
      }
      else
      {
        if ( v55 < v56 )
        {
          v97 = v49;
          v54 = qvector_reserve(a2, 0, v56, 8);
          v69 = *((_QWORD *)a2 + 1);
          v70 = *((_QWORD *)a2 + 2);
          *((_QWORD *)a2 + 2) = v55;
          v71 = *(__int64 **)a2;
          v72 = v69 - 1;
          if ( v72 >= 0 )
          {
            v73 = v54;
            do
            {
              v74 = *v71;
              v73 += 8;
              ++v71;
              *(_QWORD *)(v73 - 8) = v74;
              v75 = v72-- == 0;
            }
            while ( !v75 );
            v71 = *(__int64 **)a2;
          }
          qfree(v71, nullptr);
          v53 = *((_QWORD *)a2 + 1);
          v49 = v97;
          *(_QWORD *)a2 = v54;
          *((_QWORD *)a2 + 2) = v70;
        }
        *(_QWORD *)(v54 + 8 * v53) = v106;
        ++*((_QWORD *)a2 + 1);
      }
      v21 = v49;
LABEL_41:
      if ( !v21 )
        return 0xFFFFFFFFLL;
    }
  }
  return 1;
}
