__int64 __fastcall sub_16B6C0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _BYTE *v11; // r13
  unsigned int v12; // ebp
  unsigned int v14; // r13d
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 *v17; // r10
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 *v22; // r10
  _QWORD *v23; // rbx
  unsigned __int64 v24; // r14
  _QWORD *v25; // r15
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _BOOL4 v29; // ebp
  __int64 v30; // rax
  __int64 *v31; // rdx
  size_t v32; // rsi
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  char v35; // di
  __int64 *v36; // rax
  bool v37; // cl
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 *v40; // rcx
  size_t v41; // rdx
  __int64 *v42; // rcx
  char v43; // al
  __int64 *v44; // rdx
  _BYTE *v45; // rax
  __int64 first_fcref_from; // rax
  __int64 v47; // rax
  char v48; // al
  __int64 flags; // rax
  _BYTE *v50; // rdi
  _BYTE *v51; // rax
  __int64 v52; // rax
  __int128 v53; // rdi
  char v54; // al
  __int128 v55; // rdi
  unsigned __int8 v56; // al
  __int64 v57; // rsi
  __int128 v58; // rdi
  char v59; // al
  __int128 v60; // rdi
  __int64 *v61; // r9
  __int64 *v62; // r10
  __int64 v63; // rcx
  _BYTE *v64; // rax
  unsigned __int64 v65; // r8
  _BYTE *v66; // r10
  __int64 *v67; // r10
  _BYTE *v68; // rax
  char v69; // al
  __int64 *v70; // r10
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // r9d
  __int64 *v75; // r10
  __int64 *v76; // r10
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 *v80; // r10
  _BYTE *v81; // rcx
  _BYTE *v82; // rax
  __int64 v83; // rdx
  __int64 *v84; // rax
  __int64 *v85; // rdx
  __int64 *v86; // rsi
  __int64 v87; // r15
  _BYTE *v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // r8
  _BYTE *v91; // rax
  _BYTE *v92; // rcx
  __int64 v93; // rsi
  unsigned int v94; // ebp
  __int64 v95; // rax
  char *v96; // rdi
  __int64 v97; // rax
  char *v98; // rdx
  int v99; // eax
  int v100; // eax
  __int64 v101; // rax
  const void *v102; // rsi
  __int64 v103; // rdi
  __int128 v104; // rdi
  char v105; // al
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  char v109; // al
  _BYTE *v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // rax
  char v113; // al
  _BYTE *v114; // [rsp+8h] [rbp-130h] BYREF
  __int64 *item_end; // [rsp+10h] [rbp-128h]
  __int64 *v116; // [rsp+18h] [rbp-120h]
  size_t n; // [rsp+20h] [rbp-118h]
  __int64 *v118; // [rsp+28h] [rbp-110h]
  __int64 *v119; // [rsp+30h] [rbp-108h]
  __int64 *v120; // [rsp+38h] [rbp-100h]
  __int64 *v121; // [rsp+40h] [rbp-F8h]
  __int64 *v122; // [rsp+48h] [rbp-F0h]
  _BYTE **v123; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v124; // [rsp+58h] [rbp-E0h]
  _QWORD v125[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v126; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v127; // [rsp+88h] [rbp-B0h]
  void *v128; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v129; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v130; // [rsp+B8h] [rbp-80h]
  _BYTE *v131; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v132; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v133; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v134; // [rsp+F8h] [rbp-40h]

  v134 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 64);
  v7 = *(_DWORD *)(v5 + 4) & 0x80;
  if ( *(_DWORD *)v4 != 55 || *(_BYTE *)(v4 + 32) != 7 )
  {
    v11 = sub_11C940((_BYTE *)v4, 1);
    v12 = v7 >> 7;
    LOBYTE(v12) = (v11 != nullptr) & v12;
    if ( !(_BYTE)v12 )
      return 0;
    v23 = (_QWORD *)a2[2];
    v24 = *((_QWORD *)v11 + 3);
    v25 = a2 + 1;
    if ( !v23 )
    {
      if ( v25 != (_QWORD *)a2[3] && *(_QWORD *)(std::_Rb_tree_decrement(a2 + 1, 1, v8, v9, v10) + 32) >= v24 )
        return 0;
      v23 = a2 + 1;
      v29 = 1;
      goto LABEL_30;
    }
    while ( 1 )
    {
      v26 = v23[4];
      v27 = 0;
      v28 = (_QWORD *)v23[3];
      if ( v24 < v26 )
      {
        v28 = (_QWORD *)v23[2];
        v27 = v12;
      }
      if ( !v28 )
        break;
      v23 = v28;
    }
    if ( (_BYTE)v27 )
    {
      if ( (_QWORD *)a2[3] == v23 )
      {
LABEL_28:
        v29 = 1;
        if ( v25 != v23 )
          v29 = v24 < v23[4];
LABEL_30:
        v30 = operator new(0x28u);
        *(_QWORD *)(v30 + 32) = *((_QWORD *)v11 + 3);
        std::_Rb_tree_insert_and_rebalance(v29, v30, v23, a2 + 1);
        ++a2[5];
        return 0;
      }
      v26 = *(_QWORD *)(std::_Rb_tree_decrement(v23, v23[2], v26, v27, v10) + 32);
    }
    if ( v26 >= v24 )
      return 0;
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(v4 + 6) & 0x10) != 0 )
    return 0;
  v14 = *(_DWORD *)(v4 + 40);
  if ( v14 >= *(_DWORD *)(v5 + 64) )
    sub_1640B0(v4);
  v15 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * v14);
  if ( !v15 )
    return 0;
  v16 = sub_11EF60(*(_QWORD *)(v15 + 48));
  v17 = (__int64 *)v16;
  if ( !v16 )
    return 0;
  LOBYTE(v2) = v14 == 1 || *(_QWORD *)(v16 + 8) != 0;
  if ( (_BYTE)v2 || *(int *)(v15 + 352) <= 1 || *(int *)(v15 + 376) > 1 || (unsigned int)(*(_DWORD *)v16 - 42) <= 0xA )
    return 0;
  if ( v7 )
  {
    if ( (*(_BYTE *)(v16 + 4) & 0x40) != 0 )
    {
      v45 = *(_BYTE **)(a1 + 64);
      item_end = v17;
      v114 = v45;
      v131 = *(_BYTE **)(*(_QWORD *)(a1 + 56) + 24LL);
      first_fcref_from = get_first_fcref_from(v131);
      v17 = item_end;
      if ( first_fcref_from != -1 )
      {
        if ( *(char *)(*(_QWORD *)(*((_QWORD *)v114 + 187) + 8LL) + 10LL) < 0 )
        {
          LOBYTE(v125[0]) = 1;
          LOBYTE(v128) = 1;
          sub_CC530(0x2Du, &v131, v125, &v128);
          v17 = item_end;
        }
        v116 = v17;
        item_end = (__int64 *)get_item_end(v131);
        v47 = sub_32CB20(v114, item_end);
        v48 = sub_32E510(v114 + 8, v47);
        v17 = v116;
        if ( v48 )
        {
          flags = get_flags_ex(item_end, 4);
          v17 = v116;
          if ( (flags & 0x10000) != 0 )
            return 0;
        }
      }
    }
  }
  v123 = nullptr;
  v114 = v17;
  v124 = 0;
  v18 = sub_11CA20(v17, (__int64 *)&v123);
  v22 = (__int64 *)v114;
  if ( v18 == 1 )
  {
    v31 = (__int64 *)a2[2];
    v114 = *v123;
    v32 = *((_QWORD *)v114 + 3);
    v116 = a2 + 1;
    if ( !v31 )
    {
      n = v32;
      if ( v116 != (__int64 *)a2[3] )
      {
        item_end = v22;
        v101 = std::_Rb_tree_decrement(v116, v32, 0, v19, v20);
        v22 = item_end;
        if ( *(_QWORD *)(v101 + 32) >= n )
          goto LABEL_47;
      }
      v31 = v116;
      v37 = 1;
      goto LABEL_46;
    }
    while ( 1 )
    {
      v33 = v31[4];
      v34 = v31[2];
      v35 = 0;
      v36 = (__int64 *)v31[3];
      if ( v32 < v33 )
      {
        v36 = (__int64 *)v31[2];
        v35 = 1;
      }
      if ( !v36 )
        break;
      v31 = v36;
    }
    if ( v35 )
    {
      if ( (__int64 *)a2[3] == v31 )
      {
LABEL_44:
        v37 = 1;
        if ( v116 != v31 )
          v37 = v32 < v31[4];
LABEL_46:
        LOBYTE(v118) = v37;
        n = (size_t)v31;
        item_end = v22;
        v38 = operator new(0x28u);
        v39 = (unsigned __int8)v118;
        v40 = v116;
        v41 = n;
        *(_QWORD *)(v38 + 32) = *((_QWORD *)v114 + 3);
        std::_Rb_tree_insert_and_rebalance(v39, v38, v41, v40);
        ++a2[5];
        v22 = item_end;
LABEL_47:
        if ( v114[64] != 8 )
          goto LABEL_18;
        item_end = *((__int64 **)v114 + 9);
        v118 = (__int64 *)item_end[4];
        if ( !v118 )
          goto LABEL_18;
        if ( (*(_DWORD *)(a1 + 24) & 0x600) != 0x200 )
        {
          n = (size_t)v22;
          sub_A3B50(a1, 0, (__int64)v31, v33, v34, v21);
          v22 = (__int64 *)n;
        }
        if ( *(_DWORD *)v114 == 57
          && (*(_QWORD *)&v104 = a1,
              n = (size_t)v22,
              *((_QWORD *)&v104 + 1) = v114 + 48,
              v105 = sub_1652B0(v104),
              v22 = (__int64 *)n,
              v105)
          || ((LODWORD(n) = *((_DWORD *)item_end + 5), (n & 0xFFFFFFF0) == 0x40) || (n & 0xFFFFFFF0) == 0xD0)
          && (*(_QWORD *)&v58 = a1,
              v119 = v22,
              LODWORD(n) = *((_DWORD *)item_end + 2),
              *((_QWORD *)&v58 + 1) = item_end[3] + 80LL * ((int)n - 1),
              v59 = sub_1652B0(v58),
              v22 = v119,
              v59) )
        {
LABEL_83:
          v125[0] = 0;
          *(_QWORD *)&v60 = a1;
          v125[1] = 0;
          v126 = 0;
          *((_QWORD *)&v60 + 1) = v125;
          item_end = v22;
          v120 = v125;
          v127 = 0;
          sub_120460(v60, (__int64)(v114 + 64), 0, 0xFFFF0000);
          v61 = *(__int64 **)(a1 + 64);
          v62 = item_end;
          v128 = nullptr;
          v129 = 0;
          v63 = v61[27];
          if ( v63 )
          {
            v119 = v61;
            v118 = item_end;
            v114 = (_BYTE *)v63;
            n = 16 * v63;
            v128 = (void *)qalloc_or_throw(16 * v63);
            *((_QWORD *)&v129 + 1) = v114;
            v102 = (const void *)v119[26];
            item_end = (__int64 *)v114;
            v114 = v119;
            memcpy(v128, v102, n);
            v62 = v118;
            v61 = v119;
            *(_QWORD *)&v129 = item_end;
          }
          v131 = nullptr;
          v132 = 0;
          v64 = (_BYTE *)v61[72];
          v65 = v61[71];
          item_end = (__int64 *)&v131;
          v114 = v64;
          if ( (unsigned __int64)&v64[v65 - 1] >= v65 )
          {
            v118 = (__int64 *)v65;
            n = (size_t)v62;
            v131 = (_BYTE *)qvector_reserve(item_end, 0, 1, 16);
            v62 = (__int64 *)n;
            *(__m128 *)&v131[16 * v132] = _mm_loadh_ps((const double *)&v114);
            *(_QWORD *)&v132 = v132 + 1;
          }
          v114 = v62;
          n = (size_t)&v128;
          sub_313F40(&v128, item_end);
          v66 = v114;
          if ( v131 )
          {
            *(_QWORD *)&v132 = 0;
            qfree(v131);
            v66 = v114;
          }
          v114 = v66;
          v119 = &v126;
          sub_313F40(&v126, n);
          v67 = (__int64 *)v114;
          if ( v128 )
          {
            *(_QWORD *)&v129 = 0;
            qfree(v128);
            v67 = (__int64 *)v114;
          }
          v114 = *(_BYTE **)(*(_QWORD *)(a1 + 56) + 16LL);
          if ( v114 )
          {
            v121 = (__int64 *)&v129 + 1;
            while ( 1 )
            {
              if ( (v114[4] & 8) != 0 || (v118 = v67, v68 = sub_11C940(v114, 0), v67 = v118, v68) )
              {
                LOBYTE(v118) = 0;
                goto LABEL_103;
              }
              sub_120C40(n, a1, (__int64)v114, 0);
              v69 = sub_3142F0(v121, v119);
              v70 = v118;
              if ( v69 )
              {
                v122 = v118;
                LOBYTE(v118) = sub_60E40((_QWORD *)n);
                v70 = v122;
                if ( (_BYTE)v118 )
                  break;
              }
              v118 = v70;
              sub_123FE0((__int64)item_end, a1, (__int64)v114, 0);
              sub_60C00(v120, item_end, v71, v72, v73, v74);
              sub_313AE0(v119, (char *)&v132 + 8);
              v75 = v118;
              if ( *((_QWORD *)&v132 + 1) )
              {
                v133 = 0;
                qfree(*((_QWORD *)&v132 + 1));
                v75 = v118;
              }
              v118 = v75;
              qfree(v131);
              v76 = v118;
              if ( *((_QWORD *)&v129 + 1) )
              {
                v130 = 0;
                qfree(*((_QWORD *)&v129 + 1));
                v76 = v118;
              }
              v118 = v76;
              qfree(v128);
              v67 = v118;
              v114 = *((_BYTE **)v114 + 2);
              if ( !v114 )
                goto LABEL_133;
            }
            if ( *((_QWORD *)&v129 + 1) )
            {
              v114 = v122;
              v130 = 0;
              qfree(*((_QWORD *)&v129 + 1));
              v70 = (__int64 *)v114;
            }
            v114 = v70;
            qfree(v128);
            v67 = (__int64 *)v114;
LABEL_103:
            v77 = v126;
            if ( !v126 )
            {
LABEL_105:
              v114 = v67;
              qfree(v125[0]);
              if ( (_BYTE)v118 )
                goto LABEL_18;
LABEL_106:
              v78 = *(_QWORD *)(a1 + 480);
              if ( sub_118B80(v78, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL), 0) )
                goto LABEL_18;
              v79 = *(_QWORD *)(a1 + 56);
              v80 = (__int64 *)v114;
              v81 = *(_BYTE **)(v79 + 24);
              v131 = v81;
              v82 = *((_BYTE **)v114 + 3);
              if ( v81 == v82 && *(int *)(v15 + 376) > 0 )
              {
                v106 = *(_QWORD *)(a1 + 64);
                v107 = **(unsigned int **)(v15 + 368);
                if ( (unsigned int)v107 >= *(_DWORD *)(v106 + 64) )
                  sub_1640B0(v78);
                v108 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v106 + 528) + 8 * v107) + 48LL);
                if ( !v108 || *(_DWORD *)v108 != 55 )
                {
                  if ( v7 )
                    goto LABEL_18;
LABEL_118:
                  v114 = v80;
                  v87 = j__qalloc_or_throw(80);
                  *(_OWORD *)(v87 + 8) = 0;
                  *(_QWORD *)(v87 + 40) = 0;
                  v88 = v114;
                  *(_QWORD *)(v87 + 56) = 0;
                  *(_QWORD *)(v87 + 32) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v87 + 48) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v87 + 64) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v87 + 72) = 0;
                  sub_121960(v87, (__int64)v88);
                  v114 = sub_11C940((_BYTE *)v87, 1);
                  if ( !v114 )
                  {
                    if ( !under_debugger )
                      sub_37EEE0(51263);
                    BUG();
                  }
                  v91 = v131;
                  v92 = v114;
                  *(_QWORD *)(v87 + 24) = v131;
                  *((_QWORD *)v92 + 3) = v91;
                  if ( v7 )
                    sub_16B580(a2, (unsigned __int64 *)item_end, v89, (__int64)v92, v90);
                  sub_9F720(a1, (_QWORD *)v87, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
                  v93 = *(_QWORD *)(a1 + 56);
                  if ( *(int *)(v15 + 376) <= 0 )
                  {
                    sub_9FA40(a1, v93);
                    v103 = *(_QWORD *)(a1 + 368);
                    if ( v103 )
                    {
                      *(_QWORD *)(a1 + 376) = 0;
                      qfree(v103);
                      *(_QWORD *)(a1 + 368) = 0;
                      *(_QWORD *)(a1 + 384) = 0;
                    }
                    *(_DWORD *)(a1 + 76) = 2;
                  }
                  else
                  {
                    v94 = **(_DWORD **)(v15 + 368);
                    *(_DWORD *)(v93 + 40) = v94;
                    v95 = sub_164430(*(_QWORD *)(a1 + 64), v94);
                    sub_164300((__int64 *)(v95 + 344), *(_DWORD *)(a1 + 72));
                    **(_DWORD **)(a1 + 368) = v94;
                  }
                  v96 = *(char **)(v15 + 344);
                  v97 = *(_QWORD *)(v15 + 352);
                  v98 = &v96[4 * v97];
                  while ( v98 != v96 )
                  {
                    if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)v96 )
                    {
                      memmove(v96, v96 + 4, v98 - v96 - 4);
                      v97 = *(_QWORD *)(v15 + 352) - 1LL;
                      *(_QWORD *)(v15 + 352) = v97;
                      break;
                    }
                    v96 += 4;
                  }
                  if ( !v97 )
                    **(_DWORD **)(v15 + 64) |= 0x400u;
                  v99 = *(_DWORD *)(v15 + 24);
                  BYTE1(v99) &= ~2u;
                  LOBYTE(v99) = v99 | 0x80;
                  *(_DWORD *)(v15 + 24) = v99;
                  v100 = *(_DWORD *)(a1 + 24);
                  BYTE1(v100) &= ~2u;
                  LOBYTE(v100) = v100 | 0x80;
                  *(_DWORD *)(a1 + 24) = v100;
                  sub_EAD60(a1, v87, v15, *(_QWORD *)(v15 + 56));
                  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL) |= 0x100000u;
                  *((_DWORD *)v114 + 1) |= 0x100000u;
                  sub_63560(*(_QWORD *)(a1 + 64), 1u, (__int64)"UNMERGE_CALLS (%d -> %d)", *(_DWORD *)(a1 + 72), v14);
                  v2 = 1;
                  goto LABEL_18;
                }
                v131 = *(_BYTE **)(v108 + 24);
              }
              else
              {
                v83 = *(_QWORD *)(v79 + 16);
                if ( v83 )
                {
                  if ( v81 == *(_BYTE **)(v83 + 24) )
                  {
                    v110 = v81 + 1;
                    if ( v82 != v110 )
                    {
                      v111 = *(_QWORD *)(a1 + 64);
                      v118 = (__int64 *)v114;
                      v114 = v110;
                      n = v111 + 8;
                      v112 = sub_32CB20(v111, v110);
                      v113 = sub_32E510(n, v112);
                      v80 = v118;
                      if ( v113 )
                        v131 = v114;
                    }
                  }
                }
              }
              if ( v7 )
              {
                v84 = (__int64 *)a2[2];
                v85 = v116;
                while ( v84 )
                {
                  v86 = (__int64 *)v84[3];
                  if ( v84[4] >= (unsigned __int64)v131 )
                  {
                    v85 = v84;
                    v86 = (__int64 *)v84[2];
                  }
                  v84 = v86;
                }
                if ( v116 != v85 && (unsigned __int64)v131 >= v85[4] )
                  goto LABEL_18;
              }
              goto LABEL_118;
            }
          }
          else
          {
LABEL_133:
            v77 = v126;
            LOBYTE(v118) = 0;
            if ( !v126 )
            {
              v114 = v67;
              qfree(v125[0]);
              goto LABEL_106;
            }
          }
          v114 = v67;
          *(_QWORD *)&v127 = 0;
          qfree(v77);
          v67 = (__int64 *)v114;
          goto LABEL_105;
        }
        LOBYTE(n) = 0;
        v42 = nullptr;
        v119 = nullptr;
        while ( 1 )
        {
          v44 = (__int64 *)(item_end[3] + 80LL * (_QWORD)v42);
          if ( *(_BYTE *)v44 == 4 )
          {
            v50 = (_BYTE *)v44[1];
            v122 = v42;
            v121 = v22;
            v120 = v44;
            v51 = sub_11C940(v50, 1);
            v44 = v120;
            v22 = v121;
            v42 = v122;
            if ( v51 )
              goto LABEL_18;
          }
          if ( (_BYTE)n )
            goto LABEL_61;
          v43 = *(_BYTE *)v44;
          if ( *(_BYTE *)v44 != 5 )
            goto LABEL_56;
          if ( *(_QWORD *)(v44[1] + 8) + *((int *)v44 + 1) <= *(__int64 *)(*(_QWORD *)v44[1] + 152LL) )
            break;
LABEL_58:
          v42 = (__int64 *)((char *)v42 + 1);
          if ( v118 == v42 )
          {
            if ( (_BYTE)n || (v114[4] & 0x40) != 0 && v118 == v119 )
              goto LABEL_83;
            if ( v114[32] != 6 )
              goto LABEL_18;
            v131 = nullptr;
            v132 = 0;
            v57 = *((_QWORD *)v114 + 5);
            item_end = v22;
            if ( !(unsigned __int8)sub_1CF070(&v131, v57, 0, 0) || (v109 = sub_32A3D0(v131), v22 = item_end, !v109) )
            {
              if ( v131 )
              {
                *(_QWORD *)&v132 = 0;
                qfree(v131);
              }
              goto LABEL_18;
            }
            if ( v131 )
            {
              *(_QWORD *)&v132 = 0;
              qfree(v131);
              v22 = item_end;
            }
            if ( !v119 )
              goto LABEL_18;
            goto LABEL_83;
          }
        }
        *((_QWORD *)&v53 + 1) = v44;
        *(_QWORD *)&v53 = a1;
        v122 = v42;
        v121 = v22;
        v120 = v44;
        v54 = sub_1652B0(v53);
        v44 = v120;
        v22 = v121;
        v42 = v122;
        if ( !v54 )
        {
          v43 = *(_BYTE *)v120;
LABEL_56:
          if ( v43 == 1 )
          {
            *((_QWORD *)&v55 + 1) = v44;
            *(_QWORD *)&v55 = a1;
            v121 = v42;
            v120 = v22;
            v56 = sub_1652B0(v55);
            v42 = v121;
            v119 = (__int64 *)((char *)v119 + v56);
            v22 = v120;
          }
          goto LABEL_58;
        }
LABEL_61:
        LOBYTE(n) = 1;
        goto LABEL_58;
      }
      v118 = (__int64 *)v32;
      n = (size_t)v22;
      item_end = v31;
      v52 = std::_Rb_tree_decrement(v31, v32, v31, v33, v34);
      v22 = (__int64 *)n;
      v33 = *(_QWORD *)(v52 + 32);
      v31 = item_end;
    }
    if ( v33 >= v32 )
      goto LABEL_47;
    goto LABEL_44;
  }
LABEL_18:
  if ( v123 )
  {
    *(_QWORD *)&v124 = 0;
    qfree(v123);
  }
  return v2;
}
