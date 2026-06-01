__int64 __fastcall sub_22F240(
        const char ***a1,
        char a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char **v12; // r9
  const char **v13; // rsi
  const char **v14; // r15
  int *v15; // r8
  unsigned __int64 v16; // r14
  int *i; // rbp
  unsigned __int64 v18; // rdx
  char v19; // cl
  int *v20; // rax
  bool v21; // dl
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  char v25; // cl
  int *v26; // rax
  bool v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 *v30; // rax
  __m128 v31; // xmm0
  unsigned __int64 v32; // r14
  void *v33; // rax
  int *v34; // rbp
  __int64 v35; // r15
  unsigned __int64 v36; // rdx
  char v37; // cl
  int *v38; // rax
  bool v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __m128 v49; // xmm4
  __m128 v50; // xmm5
  const char *v51; // rsi
  __int64 v52; // rdx
  __m128i *v53; // rcx
  __m128i *v54; // rax
  __int64 v55; // rax
  unsigned int v56; // ebx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  int v60; // ebp
  __int64 v61; // rax
  const char *v62; // r15
  __int64 v63; // rax
  __int64 v64; // rcx
  __m128i *v65; // rdx
  __m128i *v66; // rax
  int *v67; // r14
  unsigned __int64 v68; // rcx
  int *v69; // rax
  __int64 v70; // rax
  __m128i *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __m128i *v76; // r12
  __int64 v77; // rbx
  char *v78; // rbp
  unsigned __int64 v79; // rdx
  __m128i *v80; // rbx
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rdx
  __int64 *v83; // rax
  __int64 *v84; // rsi
  __int64 v85; // rax
  int *v86; // [rsp+0h] [rbp-2D8h]
  int *v87; // [rsp+8h] [rbp-2D0h]
  __int128 *v88; // [rsp+10h] [rbp-2C8h]
  const char **v89; // [rsp+10h] [rbp-2C8h]
  __int64 v90; // [rsp+18h] [rbp-2C0h]
  __int64 v91; // [rsp+20h] [rbp-2B8h] BYREF
  __int128 v92; // [rsp+28h] [rbp-2B0h]
  int v93; // [rsp+48h] [rbp-290h] BYREF
  int *v94; // [rsp+50h] [rbp-288h]
  int *v95; // [rsp+58h] [rbp-280h]
  int *v96; // [rsp+60h] [rbp-278h]
  __int64 v97; // [rsp+68h] [rbp-270h]
  int v98; // [rsp+78h] [rbp-260h] BYREF
  int *v99; // [rsp+80h] [rbp-258h]
  int *v100; // [rsp+88h] [rbp-250h]
  int *v101; // [rsp+90h] [rbp-248h]
  __int64 v102; // [rsp+98h] [rbp-240h]
  const char *v103; // [rsp+A0h] [rbp-238h] BYREF
  __int64 item_end; // [rsp+A8h] [rbp-230h]
  __int64 v105; // [rsp+B0h] [rbp-228h]
  __int64 v106; // [rsp+B8h] [rbp-220h]
  __int64 v107; // [rsp+C0h] [rbp-218h]
  __int16 v108; // [rsp+C8h] [rbp-210h]
  __int128 v109; // [rsp+D0h] [rbp-208h]
  __int64 v110; // [rsp+E0h] [rbp-1F8h]
  __int64 v111; // [rsp+E8h] [rbp-1F0h]
  int v112; // [rsp+F0h] [rbp-1E8h]
  __int64 v113; // [rsp+F8h] [rbp-1E0h]
  int v114; // [rsp+100h] [rbp-1D8h]
  __int64 v115; // [rsp+108h] [rbp-1D0h]
  int v116; // [rsp+110h] [rbp-1C8h]
  __int64 v117; // [rsp+118h] [rbp-1C0h]
  int v118; // [rsp+120h] [rbp-1B8h]
  __int64 v119; // [rsp+128h] [rbp-1B0h]
  __int128 v120; // [rsp+130h] [rbp-1A8h] BYREF
  __int64 v121; // [rsp+140h] [rbp-198h]
  __int64 v122; // [rsp+148h] [rbp-190h]
  __int64 v123; // [rsp+150h] [rbp-188h]
  char v124; // [rsp+158h] [rbp-180h] BYREF
  unsigned __int64 v125; // [rsp+298h] [rbp-40h] BYREF

  v12 = a1[1];
  BYTE6(v90) = a2;
  v13 = *a1;
  v125 = __readfsqword(0x28u);
  v93 = 0;
  v95 = &v93;
  v94 = nullptr;
  v96 = &v93;
  v97 = 0;
  if ( !(16LL * (_QWORD)v12) )
  {
    v23 = qword_8BA5A8;
    v15 = &v93;
LABEL_118:
    if ( v15 == &v93 )
    {
      v27 = 1;
      goto LABEL_25;
    }
    v15 = &v93;
LABEL_112:
    v86 = v15;
    v85 = std::_Rb_tree_decrement(v15);
    v15 = v86;
    v24 = *(_QWORD *)(v85 + 32);
    goto LABEL_22;
  }
  v14 = v13;
  v15 = nullptr;
  do
  {
    v16 = (unsigned __int64)*v14;
    if ( v15 )
    {
      for ( i = v15; ; i = v20 )
      {
        v18 = *((_QWORD *)i + 4);
        v19 = 0;
        v20 = *((int **)i + 3);
        if ( v16 < v18 )
        {
          v20 = *((int **)i + 2);
          v19 = 1;
        }
        if ( !v20 )
          break;
      }
      if ( !v19 )
      {
LABEL_10:
        if ( v18 >= v16 )
          goto LABEL_14;
        goto LABEL_11;
      }
      if ( v95 == i )
      {
LABEL_11:
        v21 = 1;
        if ( i != &v93 )
          v21 = v16 < *((_QWORD *)i + 4);
        goto LABEL_13;
      }
LABEL_57:
      v89 = v12;
      v86 = v15;
      v58 = std::_Rb_tree_decrement(i);
      v12 = v89;
      v18 = *(_QWORD *)(v58 + 32);
      v15 = v86;
      goto LABEL_10;
    }
    i = v95;
    if ( v95 != &v93 )
    {
      i = &v93;
      goto LABEL_57;
    }
    v21 = 1;
LABEL_13:
    LOBYTE(v86) = v21;
    v22 = operator new(0x28u);
    *(_QWORD *)(v22 + 32) = *v14;
    std::_Rb_tree_insert_and_rebalance((unsigned __int8)v86, v22, i, &v93);
    ++v97;
    v15 = v94;
    v13 = *a1;
    v12 = a1[1];
LABEL_14:
    v14 += 2;
  }
  while ( v14 != &v13[2 * (_QWORD)v12] );
  v23 = qword_8BA5A8;
  if ( !v15 )
  {
    v15 = v95;
    goto LABEL_118;
  }
  while ( 1 )
  {
    v24 = *((_QWORD *)v15 + 4);
    v25 = 0;
    v26 = *((int **)v15 + 3);
    if ( qword_8BA5A8 < v24 )
    {
      v26 = *((int **)v15 + 2);
      v25 = 1;
    }
    if ( !v26 )
      break;
    v15 = v26;
  }
  if ( v25 )
  {
    if ( v15 == v95 )
      goto LABEL_23;
    goto LABEL_112;
  }
LABEL_22:
  if ( v24 >= v23 )
  {
    v29 = v97;
  }
  else
  {
LABEL_23:
    v27 = 1;
    if ( v15 != &v93 )
      v27 = v23 < *((_QWORD *)v15 + 4);
LABEL_25:
    v86 = v15;
    v28 = operator new(0x28u);
    *(_QWORD *)(v28 + 32) = qword_8BA5A8;
    std::_Rb_tree_insert_and_rebalance(v27, v28, v86, &v93);
    v29 = ++v97;
  }
  v98 = 0;
  v99 = nullptr;
  v102 = 0;
  v121 = -1;
  v122 = 0;
  v123 = 0;
  v87 = &v98;
  v100 = &v98;
  v101 = &v98;
  v30 = (unsigned __int64 *)&v124;
  v120 = -1;
  v31 = 0;
  do
  {
    *(_WORD *)v30 = 0;
    v30 += 5;
    *((_WORD *)v30 - 19) = 0;
    *((_WORD *)v30 - 18) = 0;
    *((_DWORD *)v30 - 2) = 0;
    *((_WORD *)v30 - 17) = 0;
    *((_OWORD *)v30 - 2) = 0;
    *(v30 - 2) = 0;
  }
  while ( v30 != &v125 );
  v88 = &v120;
  if ( !v29 )
  {
LABEL_51:
    v55 = *(_QWORD *)(a3 + 8);
    if ( !v55 )
      goto LABEL_52;
    v76 = *(__m128i **)a3;
    v77 = 8 * v55;
    v78 = &v76->m128i_i8[8 * v55];
    if ( v76 == (__m128i *)v78 )
      goto LABEL_108;
    if ( v77 >> 3 )
    {
      _BitScanReverse64(&v79, v77 >> 3);
      sub_228270(
        v76,
        (unsigned __int64 *)v76 + v55,
        2LL * (int)v79,
        *(double *)v31.m128_u64,
        *(double *)a5.m128_u64,
        a6);
      if ( v77 > 128 )
      {
        v80 = v76 + 8;
        sub_227B40(v76->m128i_i8, v76[8].m128i_i8);
        do
        {
          v81 = v80->m128i_i64[0];
          v82 = v80[-1].m128i_u64[1];
          v83 = &v80[-1].m128i_i64[1];
          if ( v80->m128i_i64[0] >= v82 )
          {
            v84 = (__int64 *)v80;
          }
          else
          {
            do
            {
              v83[1] = v82;
              v84 = v83;
              v82 = *--v83;
            }
            while ( v81 < v82 );
          }
          v80 = (__m128i *)((char *)v80 + 8);
          *v84 = v81;
        }
        while ( v78 != (char *)v80 );
        goto LABEL_108;
      }
    }
    else
    {
      sub_228270(v76, (unsigned __int64 *)v76 + v55, -2, *(double *)v31.m128_u64, *(double *)a5.m128_u64, a6);
    }
    sub_227B40(v76->m128i_i8, v78);
LABEL_108:
    v56 = 1;
    goto LABEL_53;
  }
  while ( 2 )
  {
    v32 = *((_QWORD *)v95 + 4);
    v33 = (void *)std::_Rb_tree_rebalance_for_erase(v95, &v93);
    operator delete(v33, 0x28u);
    v34 = v99;
    v35 = --v97;
    if ( v99 )
    {
      while ( 1 )
      {
        v36 = *((_QWORD *)v34 + 4);
        v37 = 0;
        v38 = *((int **)v34 + 3);
        if ( v32 < v36 )
        {
          v38 = *((int **)v34 + 2);
          v37 = 1;
        }
        if ( !v38 )
          break;
        v34 = v38;
      }
      if ( !v37 )
        goto LABEL_36;
      if ( v100 != v34 )
        goto LABEL_55;
LABEL_37:
      v39 = 1;
      if ( v34 != v87 )
        v39 = v32 < *((_QWORD *)v34 + 4);
    }
    else
    {
      v34 = v100;
      if ( v100 != v87 )
      {
        v34 = v87;
LABEL_55:
        v36 = *(_QWORD *)(std::_Rb_tree_decrement(v34) + 32);
LABEL_36:
        if ( v36 < v32 )
          goto LABEL_37;
LABEL_50:
        if ( !v35 )
          goto LABEL_51;
        continue;
      }
      v39 = 1;
    }
    break;
  }
  v40 = operator new(0x28u);
  *(_QWORD *)(v40 + 32) = v32;
  std::_Rb_tree_insert_and_rebalance(v39, v40, v34, v87);
  ++v102;
  if ( (unsigned int)decode_insn(v88, v32, v41, v42, v43, v44, *(double *)v31.m128_u64, v86, v87, v88, v90, v91) )
  {
    v31 = 0;
    v92 = 0;
    v91 = 0;
    LODWORD(v86) = sub_1E73C0(0x3EAu, &v91, v88, BYTE6(v90));
    if ( (int)v86 < 0 || !(_QWORD)v92 )
    {
      v51 = *(const char **)a3;
      v52 = *(_QWORD *)(a3 + 8);
      v53 = (__m128i *)(*(_QWORD *)a3 + 8 * v52);
      if ( *(__m128i **)a3 == v53 )
        goto LABEL_58;
      v54 = *(__m128i **)a3;
      while ( v32 != v54->m128i_i64[0] )
      {
        v54 = (__m128i *)((char *)v54 + 8);
        if ( v53 == v54 )
          goto LABEL_58;
      }
      if ( v53 == v54 )
      {
LABEL_58:
        v59 = v52 + 1;
        if ( *(_QWORD *)(a3 + 16) < v59 )
        {
          v74 = qvector_reserve(a3, v51, v59, 8);
          v75 = *(_QWORD *)(a3 + 8);
          *(_QWORD *)a3 = v74;
          v53 = (__m128i *)(v74 + 8 * v75);
        }
        v53->m128i_i64[0] = v32;
        ++*(_QWORD *)(a3 + 8);
      }
LABEL_47:
      if ( v91 )
      {
        *(_QWORD *)&v92 = 0;
        *(double *)v31.m128_u64 = qfree(v91, v51);
      }
      v35 = v97;
      goto LABEL_50;
    }
    v60 = 0;
    v61 = 0;
    while ( 2 )
    {
      v62 = *(const char **)(v91 + 8 * v61);
      if ( (int)v86 > v60 )
      {
        a5 = 0;
        item_end = 0;
        v105 = 512;
        v106 = -1;
        v107 = 0;
        v108 = 0;
        v110 = 0xFFFFFFFFLL;
        v111 = 0;
        v112 = 0;
        v113 = 0;
        v114 = 0;
        v115 = 0;
        v116 = 0;
        v117 = 0;
        v118 = 0;
        v119 = 0;
        v103 = v62;
        v109 = 0;
        item_end = get_item_end(v62);
        v63 = calc_thunk_func_target(&v103, 0);
        if ( v63 != -1 )
          v62 = (const char *)v63;
      }
      if ( a1[1] && (v51 = v62, rangeset_t_find_range(a1, v62)) )
      {
        if ( **a1 != v62 )
        {
          v67 = v94;
          if ( v94 )
          {
            while ( 1 )
            {
              v68 = *((_QWORD *)v67 + 4);
              v51 = nullptr;
              v69 = *((int **)v67 + 3);
              if ( (unsigned __int64)v62 < v68 )
              {
                v69 = *((int **)v67 + 2);
                v51 = (_BYTE *)(&dword_0 + 1);
              }
              if ( !v69 )
                break;
              v67 = v69;
            }
            if ( !(_BYTE)v51 )
              goto LABEL_84;
            if ( v95 != v67 )
              goto LABEL_97;
LABEL_85:
            HIBYTE(v90) = 1;
            if ( v67 != &v93 )
              HIBYTE(v90) = (unsigned __int64)v62 < *((_QWORD *)v67 + 4);
          }
          else
          {
            v67 = v95;
            if ( v95 != &v93 )
            {
              v67 = &v93;
LABEL_97:
              v68 = *(_QWORD *)(std::_Rb_tree_decrement(v67) + 32);
LABEL_84:
              if ( v68 < (unsigned __int64)v62 )
                goto LABEL_85;
LABEL_73:
              v61 = ++v60;
              if ( v60 >= (unsigned __int64)v92 )
                goto LABEL_47;
              continue;
            }
            HIBYTE(v90) = 1;
          }
          v70 = operator new(0x28u);
          *(_QWORD *)(v70 + 32) = v62;
          v51 = (const char *)v70;
          std::_Rb_tree_insert_and_rebalance(HIBYTE(v90), v70, v67, &v93);
          ++v97;
          goto LABEL_73;
        }
        v51 = *(const char **)a3;
        v64 = *(_QWORD *)(a3 + 8);
        v65 = (__m128i *)(*(_QWORD *)a3 + 8 * v64);
        if ( *(__m128i **)a3 != v65 )
        {
          v71 = *(__m128i **)a3;
          while ( (const char *)v71->m128i_i64[0] != v62 )
          {
            v71 = (__m128i *)((char *)v71 + 8);
            if ( v65 == v71 )
              goto LABEL_93;
          }
          if ( v71 != v65 )
            goto LABEL_73;
        }
      }
      else
      {
        v51 = *(const char **)a3;
        v64 = *(_QWORD *)(a3 + 8);
        v65 = (__m128i *)(*(_QWORD *)a3 + 8 * v64);
        if ( *(__m128i **)a3 != v65 )
        {
          v66 = *(__m128i **)a3;
          while ( (const char *)v66->m128i_i64[0] != v62 )
          {
            v66 = (__m128i *)((char *)v66 + 8);
            if ( v65 == v66 )
              goto LABEL_93;
          }
          if ( v65 != v66 )
            goto LABEL_73;
        }
      }
      break;
    }
LABEL_93:
    if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v64 + 1) )
    {
      v72 = qvector_reserve(a3, v51, v64 + 1, 8);
      v73 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)a3 = v72;
      v65 = (__m128i *)(v72 + 8 * v73);
    }
    v65->m128i_i64[0] = (__int64)v62;
    ++*(_QWORD *)(a3 + 8);
    goto LABEL_73;
  }
  sub_169700((int)"%a: cannot decode\n", v32, v45, v46, v47, v48, v31, a5, a6, a7, v49, v50, a10, a11, (char)v86);
LABEL_52:
  v56 = 0;
LABEL_53:
  sub_22BD50(v99);
  sub_22BD50(v94);
  return v56;
}
