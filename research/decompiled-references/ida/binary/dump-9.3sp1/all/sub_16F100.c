__int64 __fastcall sub_16F100(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v7; // ebp
  _BYTE *v8; // r13
  char v9; // bp
  unsigned int v11; // r13d
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 *v14; // r10
  int v15; // eax
  int v16; // r9d
  __int64 *v17; // r10
  _QWORD *v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdx
  char v21; // cl
  _QWORD *v22; // rax
  __int64 *v23; // rdx
  size_t v24; // rsi
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  char v27; // di
  __int64 *v28; // rax
  bool v29; // cl
  __int64 *v30; // rcx
  char v31; // al
  __int64 *v32; // rdx
  _BYTE *v33; // rax
  __int64 first_fcref_from; // rax
  __int64 v35; // rax
  char v36; // al
  __int64 flags; // rax
  _BYTE *v38; // rdi
  _BYTE *v39; // rax
  __int64 v40; // rax
  __int128 v41; // rdi
  char v42; // al
  __int128 v43; // rdi
  unsigned __int8 v44; // al
  __int64 v45; // rsi
  __int128 v46; // rdi
  char v47; // al
  __int128 v48; // rdi
  __int64 *v49; // r9
  __int64 *v50; // r10
  __int64 v51; // rcx
  _BYTE *v52; // rax
  unsigned __int64 v53; // r8
  _BYTE *v54; // r10
  __int64 *v55; // r10
  _BYTE *v56; // rax
  char v57; // al
  int v58; // r8d
  int v59; // r9d
  __int64 *v60; // r10
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  __int64 *v65; // r10
  __int64 *v66; // r10
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 *v71; // r10
  _BYTE *v72; // rcx
  _BYTE *v73; // rax
  __int64 v74; // rdx
  _QWORD *v75; // rax
  __int64 v76; // r15
  _BYTE *v77; // rsi
  _BYTE *v78; // rax
  _BYTE *v79; // rcx
  __int64 v80; // rsi
  unsigned int v81; // ebp
  __int64 v82; // rax
  char *v83; // rdi
  __int64 v84; // rax
  char *v85; // rdx
  int v86; // eax
  int v87; // eax
  __int64 v88; // rax
  const void *v89; // rsi
  __int64 v90; // rdi
  __int128 v91; // rdi
  char v92; // al
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rax
  char v96; // al
  __int64 v97; // rdi
  char v98; // al
  _BYTE *v99; // [rsp+8h] [rbp-130h] BYREF
  __int64 *item_end; // [rsp+10h] [rbp-128h]
  __int64 *v101; // [rsp+18h] [rbp-120h]
  size_t n; // [rsp+20h] [rbp-118h]
  __int64 *v103; // [rsp+28h] [rbp-110h]
  __int64 *v104; // [rsp+30h] [rbp-108h]
  __int64 *v105; // [rsp+38h] [rbp-100h]
  __int64 *v106; // [rsp+40h] [rbp-F8h]
  __int64 *v107; // [rsp+48h] [rbp-F0h]
  _BYTE **v108; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v109; // [rsp+58h] [rbp-E0h]
  __int64 v110[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v111; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v112; // [rsp+88h] [rbp-B0h]
  void *v113; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v114; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v115; // [rsp+B8h] [rbp-80h]
  _BYTE *v116; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v117; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v118; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v119; // [rsp+F8h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 64);
  v7 = *(_DWORD *)(v5 + 4) & 0x80;
  if ( *(_DWORD *)v4 != 55 || *(_BYTE *)(v4 + 32) != 7 )
  {
    v8 = sub_120380((_BYTE *)v4, 1);
    v9 = (v8 != nullptr) & (v7 >> 7);
    if ( !v9 )
      return 0;
    v18 = (_QWORD *)a2[2];
    v19 = *((_QWORD *)v8 + 3);
    if ( !v18 )
    {
      if ( a2 + 1 != (_QWORD *)a2[3] && *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v19 )
        return 0;
      goto LABEL_28;
    }
    while ( 1 )
    {
      v20 = v18[4];
      v21 = 0;
      v22 = (_QWORD *)v18[3];
      if ( v19 < v20 )
      {
        v22 = (_QWORD *)v18[2];
        v21 = v9;
      }
      if ( !v22 )
        break;
      v18 = v22;
    }
    if ( v21 )
    {
      if ( (_QWORD *)a2[3] == v18 )
        goto LABEL_28;
      v20 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v20 >= v19 )
      return 0;
LABEL_28:
    *(_QWORD *)(operator new(0x28u) + 32) = *((_QWORD *)v8 + 3);
    std::_Rb_tree_insert_and_rebalance();
    ++a2[5];
    return 0;
  }
  if ( (*(_BYTE *)(v4 + 6) & 0x10) != 0 )
    return 0;
  v11 = *(_DWORD *)(v4 + 40);
  if ( v11 >= *(_DWORD *)(v5 + 64) )
    sub_167AF0(v4);
  v12 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * v11);
  if ( !v12 )
    return 0;
  v13 = sub_1229A0(*(_QWORD *)(v12 + 48));
  v14 = (__int64 *)v13;
  if ( !v13 )
    return 0;
  LOBYTE(v2) = v11 == 1 || *(_QWORD *)(v13 + 8) != 0;
  if ( (_BYTE)v2 || *(int *)(v12 + 352) <= 1 || *(int *)(v12 + 376) > 1 || (unsigned int)(*(_DWORD *)v13 - 42) <= 0xA )
    return 0;
  if ( v7 )
  {
    if ( (*(_BYTE *)(v13 + 4) & 0x40) != 0 )
    {
      v33 = *(_BYTE **)(a1 + 64);
      item_end = v14;
      v99 = v33;
      v116 = *(_BYTE **)(*(_QWORD *)(a1 + 56) + 24LL);
      first_fcref_from = get_first_fcref_from();
      v14 = item_end;
      if ( first_fcref_from != -1 )
      {
        if ( *(char *)(*(_QWORD *)(*((_QWORD *)v99 + 187) + 8LL) + 10LL) < 0 )
        {
          LOBYTE(v110[0]) = 1;
          LOBYTE(v113) = 1;
          sub_CFF70();
          v14 = item_end;
        }
        v101 = v14;
        item_end = (__int64 *)get_item_end();
        v35 = sub_330F80(v99);
        v36 = sub_332920(v99 + 8, v35);
        v14 = v101;
        if ( v36 )
        {
          flags = get_flags_ex();
          v14 = v101;
          if ( (flags & 0x10000) != 0 )
            return 0;
        }
      }
    }
  }
  v108 = nullptr;
  v99 = v14;
  v109 = 0;
  v15 = sub_120460(v14, (__int64 *)&v108);
  v17 = (__int64 *)v99;
  if ( v15 == 1 )
  {
    v23 = (__int64 *)a2[2];
    v99 = *v108;
    v24 = *((_QWORD *)v99 + 3);
    v101 = a2 + 1;
    if ( !v23 )
    {
      n = v24;
      if ( v101 != (__int64 *)a2[3] )
      {
        item_end = v17;
        v88 = std::_Rb_tree_decrement();
        v17 = item_end;
        if ( *(_QWORD *)(v88 + 32) >= n )
          goto LABEL_45;
      }
      v23 = v101;
      v29 = 1;
      goto LABEL_44;
    }
    while ( 1 )
    {
      v25 = v23[4];
      v26 = v23[2];
      v27 = 0;
      v28 = (__int64 *)v23[3];
      if ( v24 < v25 )
      {
        v28 = (__int64 *)v23[2];
        v27 = 1;
      }
      if ( !v28 )
        break;
      v23 = v28;
    }
    if ( v27 )
    {
      if ( (__int64 *)a2[3] == v23 )
      {
LABEL_42:
        v29 = 1;
        if ( v101 != v23 )
          v29 = v24 < v23[4];
LABEL_44:
        LOBYTE(v103) = v29;
        n = (size_t)v23;
        item_end = v17;
        *(_QWORD *)(operator new(0x28u) + 32) = *((_QWORD *)v99 + 3);
        std::_Rb_tree_insert_and_rebalance();
        ++a2[5];
        v17 = item_end;
LABEL_45:
        if ( v99[64] != 8 )
          goto LABEL_18;
        item_end = *((__int64 **)v99 + 9);
        v103 = (__int64 *)item_end[4];
        if ( !v103 )
          goto LABEL_18;
        if ( (*(_DWORD *)(a1 + 24) & 0x600) != 0x200 )
        {
          n = (size_t)v17;
          sub_A7590(a1, 0, (__int64)v23, v25, v26, v16);
          v17 = (__int64 *)n;
        }
        if ( *(_DWORD *)v99 == 57 )
        {
          *(_QWORD *)&v91 = a1;
          n = (size_t)v17;
          *((_QWORD *)&v91 + 1) = v99 + 48;
          v92 = sub_168CF0(v91);
          v17 = (__int64 *)n;
          if ( v92 )
            goto LABEL_81;
        }
        LODWORD(n) = *((_DWORD *)item_end + 5);
        if ( (n & 0xFFFFFFF0) == 0x40 || (n & 0xFFFFFFF0) == 0xD0 )
        {
          *(_QWORD *)&v46 = a1;
          v104 = v17;
          LODWORD(n) = *((_DWORD *)item_end + 2);
          *((_QWORD *)&v46 + 1) = item_end[3] + 80LL * ((int)n - 1);
          v47 = sub_168CF0(v46);
          v17 = v104;
          if ( v47 )
          {
LABEL_81:
            v110[0] = 0;
            *(_QWORD *)&v48 = a1;
            v110[1] = 0;
            v111 = 0;
            *((_QWORD *)&v48 + 1) = v110;
            item_end = v17;
            v105 = v110;
            v112 = 0;
            sub_123EA0(v48, (__int64)(v99 + 64), 0, 0xFFFF0000);
            v49 = *(__int64 **)(a1 + 64);
            v50 = item_end;
            v113 = nullptr;
            v114 = 0;
            v51 = v49[27];
            if ( v51 )
            {
              v104 = v49;
              v103 = item_end;
              v99 = (_BYTE *)v51;
              n = 16 * v51;
              v113 = (void *)qalloc_or_throw(16 * v51, (__int64)v110, 16 * v51, v51);
              *((_QWORD *)&v114 + 1) = v99;
              v89 = (const void *)v104[26];
              item_end = (__int64 *)v99;
              v99 = v104;
              memcpy(v113, v89, n);
              v50 = v103;
              v49 = v104;
              *(_QWORD *)&v114 = item_end;
            }
            v116 = nullptr;
            v117 = 0;
            v52 = (_BYTE *)v49[72];
            v53 = v49[71];
            item_end = (__int64 *)&v116;
            v99 = v52;
            if ( (unsigned __int64)&v52[v53 - 1] >= v53 )
            {
              v103 = (__int64 *)v53;
              n = (size_t)v50;
              v116 = (_BYTE *)qvector_reserve((__int64)item_end, 0, 1, 16);
              v50 = (__int64 *)n;
              *(__m128 *)&v116[16 * v117] = _mm_loadh_ps((const double *)&v99);
              *(_QWORD *)&v117 = v117 + 1;
            }
            v99 = v50;
            n = (size_t)&v113;
            sub_3180C0(&v113, item_end);
            v54 = v99;
            if ( v116 )
            {
              *(_QWORD *)&v117 = 0;
              qfree((__int64)v116);
              v54 = v99;
            }
            v99 = v54;
            v104 = &v111;
            sub_3180C0(&v111, n);
            v55 = (__int64 *)v99;
            if ( v113 )
            {
              *(_QWORD *)&v114 = 0;
              qfree((__int64)v113);
              v55 = (__int64 *)v99;
            }
            v99 = *(_BYTE **)(*(_QWORD *)(a1 + 56) + 16LL);
            if ( v99 )
            {
              v106 = (__int64 *)&v114 + 1;
              while ( 1 )
              {
                if ( (v99[4] & 8) != 0 || (v103 = v55, v56 = sub_120380(v99, 0), v55 = v103, v56) )
                {
                  LOBYTE(v103) = 0;
                  goto LABEL_101;
                }
                sub_124680(n, a1, (__int64)v99, 0);
                v57 = sub_318470(v106, v104);
                v60 = v103;
                if ( v57 )
                {
                  v107 = v103;
                  LOBYTE(v103) = sub_64880((_QWORD *)n);
                  v60 = v107;
                  if ( (_BYTE)v103 )
                    break;
                }
                v103 = v60;
                sub_127A20((__int64)item_end, a1, (__int64)v99, 0, v58, v59);
                sub_64640(v105, item_end, v61, v62, v63, v64);
                sub_317C60(v104, (char *)&v117 + 8);
                v65 = v103;
                if ( *((_QWORD *)&v117 + 1) )
                {
                  v118 = 0;
                  qfree(*((__int64 *)&v117 + 1));
                  v65 = v103;
                }
                v103 = v65;
                qfree((__int64)v116);
                v66 = v103;
                if ( *((_QWORD *)&v114 + 1) )
                {
                  v115 = 0;
                  qfree(*((__int64 *)&v114 + 1));
                  v66 = v103;
                }
                v103 = v66;
                qfree((__int64)v113);
                v55 = v103;
                v99 = *((_BYTE **)v99 + 2);
                if ( !v99 )
                  goto LABEL_131;
              }
              if ( *((_QWORD *)&v114 + 1) )
              {
                v99 = v107;
                v115 = 0;
                qfree(*((__int64 *)&v114 + 1));
                v60 = (__int64 *)v99;
              }
              v99 = v60;
              qfree((__int64)v113);
              v55 = (__int64 *)v99;
LABEL_101:
              v67 = v111;
              if ( !v111 )
              {
LABEL_103:
                v99 = v55;
                qfree(v110[0]);
                if ( (_BYTE)v103 )
                  goto LABEL_18;
LABEL_104:
                v68 = *(_QWORD *)(a1 + 480);
                v69 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
                if ( sub_11C5C0(v68, v69, 0) )
                  goto LABEL_18;
                v70 = *(_QWORD *)(a1 + 56);
                v71 = (__int64 *)v99;
                v72 = *(_BYTE **)(v70 + 24);
                v116 = v72;
                v73 = *((_BYTE **)v99 + 3);
                if ( v72 == v73 && *(int *)(v12 + 376) > 0 )
                {
                  v93 = *(_QWORD *)(a1 + 64);
                  v94 = **(unsigned int **)(v12 + 368);
                  if ( (unsigned int)v94 >= *(_DWORD *)(v93 + 64) )
                    sub_167AF0(v68);
                  v74 = *(_QWORD *)(v93 + 528);
                  v95 = *(_QWORD *)(*(_QWORD *)(v74 + 8 * v94) + 48LL);
                  if ( !v95 || *(_DWORD *)v95 != 55 )
                  {
                    if ( v7 )
                      goto LABEL_18;
LABEL_116:
                    v99 = v71;
                    v76 = j__qalloc_or_throw(80, v69, v74, (__int64)v72);
                    *(_OWORD *)(v76 + 8) = 0;
                    *(_QWORD *)(v76 + 40) = 0;
                    v77 = v99;
                    *(_QWORD *)(v76 + 56) = 0;
                    *(_QWORD *)(v76 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v76 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v76 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v76 + 72) = 0;
                    sub_1253A0(v76, (__int64)v77);
                    v99 = sub_120380((_BYTE *)v76, 1);
                    if ( !v99 )
                    {
                      if ( !under_debugger )
                        sub_383060(51263);
                      BUG();
                    }
                    v78 = v116;
                    v79 = v99;
                    *(_QWORD *)(v76 + 24) = v116;
                    *((_QWORD *)v79 + 3) = v78;
                    if ( v7 )
                      sub_16EFC0(a2, (unsigned __int64 *)item_end);
                    sub_A3160(a1, (_QWORD *)v76, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
                    v80 = *(_QWORD *)(a1 + 56);
                    if ( *(int *)(v12 + 376) <= 0 )
                    {
                      sub_A3480(a1, v80);
                      v90 = *(_QWORD *)(a1 + 368);
                      if ( v90 )
                      {
                        *(_QWORD *)(a1 + 376) = 0;
                        qfree(v90);
                        *(_QWORD *)(a1 + 368) = 0;
                        *(_QWORD *)(a1 + 384) = 0;
                      }
                      *(_DWORD *)(a1 + 76) = 2;
                    }
                    else
                    {
                      v81 = **(_DWORD **)(v12 + 368);
                      *(_DWORD *)(v80 + 40) = v81;
                      v82 = sub_167E70(*(_QWORD *)(a1 + 64), v81);
                      sub_167D40((__int64 *)(v82 + 344), *(_DWORD *)(a1 + 72));
                      **(_DWORD **)(a1 + 368) = v81;
                    }
                    v83 = *(char **)(v12 + 344);
                    v84 = *(_QWORD *)(v12 + 352);
                    v85 = &v83[4 * v84];
                    while ( v85 != v83 )
                    {
                      if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)v83 )
                      {
                        memmove(v83, v83 + 4, v85 - v83 - 4);
                        v84 = *(_QWORD *)(v12 + 352) - 1LL;
                        *(_QWORD *)(v12 + 352) = v84;
                        break;
                      }
                      v83 += 4;
                    }
                    if ( !v84 )
                      **(_DWORD **)(v12 + 64) |= 0x400u;
                    v86 = *(_DWORD *)(v12 + 24);
                    BYTE1(v86) &= ~2u;
                    LOBYTE(v86) = v86 | 0x80;
                    *(_DWORD *)(v12 + 24) = v86;
                    v87 = *(_DWORD *)(a1 + 24);
                    BYTE1(v87) &= ~2u;
                    LOBYTE(v87) = v87 | 0x80;
                    *(_DWORD *)(a1 + 24) = v87;
                    sub_EE7A0(a1, v76, v12, *(_QWORD *)(v12 + 56));
                    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL) |= 0x100000u;
                    *((_DWORD *)v99 + 1) |= 0x100000u;
                    sub_66FA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"UNMERGE_CALLS (%d -> %d)", *(_DWORD *)(a1 + 72), v11);
                    v2 = 1;
                    goto LABEL_18;
                  }
                  v116 = *(_BYTE **)(v95 + 24);
                }
                else
                {
                  v74 = *(_QWORD *)(v70 + 16);
                  if ( v74 )
                  {
                    if ( v72 == *(_BYTE **)(v74 + 24) && v73 != ++v72 )
                    {
                      v97 = *(_QWORD *)(a1 + 64);
                      v103 = (__int64 *)v99;
                      v99 = v72;
                      n = v97 + 8;
                      v69 = sub_330F80(v97);
                      v98 = sub_332920(n, v69);
                      v71 = v103;
                      if ( v98 )
                      {
                        v72 = v99;
                        v116 = v99;
                      }
                    }
                  }
                }
                if ( v7 )
                {
                  v72 = v116;
                  v75 = (_QWORD *)a2[2];
                  v74 = (__int64)v101;
                  while ( v75 )
                  {
                    v69 = v75[3];
                    if ( v75[4] >= (unsigned __int64)v116 )
                    {
                      v74 = (__int64)v75;
                      v69 = v75[2];
                    }
                    v75 = (_QWORD *)v69;
                  }
                  if ( v101 != (__int64 *)v74 && (unsigned __int64)v116 >= *(_QWORD *)(v74 + 32) )
                    goto LABEL_18;
                }
                goto LABEL_116;
              }
            }
            else
            {
LABEL_131:
              v67 = v111;
              LOBYTE(v103) = 0;
              if ( !v111 )
              {
                v99 = v55;
                qfree(v110[0]);
                goto LABEL_104;
              }
            }
            v99 = v55;
            *(_QWORD *)&v112 = 0;
            qfree(v67);
            v55 = (__int64 *)v99;
            goto LABEL_103;
          }
        }
        LOBYTE(n) = 0;
        v30 = nullptr;
        v104 = nullptr;
        while ( 1 )
        {
          v32 = (__int64 *)(item_end[3] + 80LL * (_QWORD)v30);
          if ( *(_BYTE *)v32 == 4 )
          {
            v38 = (_BYTE *)v32[1];
            v107 = v30;
            v106 = v17;
            v105 = v32;
            v39 = sub_120380(v38, 1);
            v32 = v105;
            v17 = v106;
            v30 = v107;
            if ( v39 )
              goto LABEL_18;
          }
          if ( (_BYTE)n )
            goto LABEL_59;
          v31 = *(_BYTE *)v32;
          if ( *(_BYTE *)v32 != 5 )
            goto LABEL_54;
          if ( *(_QWORD *)(v32[1] + 8) + *((int *)v32 + 1) <= *(__int64 *)(*(_QWORD *)v32[1] + 152LL) )
            break;
LABEL_56:
          v30 = (__int64 *)((char *)v30 + 1);
          if ( v103 == v30 )
          {
            if ( (_BYTE)n || (v99[4] & 0x40) != 0 && v103 == v104 )
              goto LABEL_81;
            if ( v99[32] != 6 )
              goto LABEL_18;
            v116 = nullptr;
            v117 = 0;
            v45 = *((_QWORD *)v99 + 5);
            item_end = v17;
            if ( !(unsigned __int8)sub_1D2AB0(&v116, v45, 0, 0) || (v96 = sub_32E710(v116), v17 = item_end, !v96) )
            {
              if ( v116 )
              {
                *(_QWORD *)&v117 = 0;
                qfree((__int64)v116);
              }
              goto LABEL_18;
            }
            if ( v116 )
            {
              *(_QWORD *)&v117 = 0;
              qfree((__int64)v116);
              v17 = item_end;
            }
            if ( !v104 )
              goto LABEL_18;
            goto LABEL_81;
          }
        }
        *((_QWORD *)&v41 + 1) = v32;
        *(_QWORD *)&v41 = a1;
        v107 = v30;
        v106 = v17;
        v105 = v32;
        v42 = sub_168CF0(v41);
        v32 = v105;
        v17 = v106;
        v30 = v107;
        if ( !v42 )
        {
          v31 = *(_BYTE *)v105;
LABEL_54:
          if ( v31 == 1 )
          {
            *((_QWORD *)&v43 + 1) = v32;
            *(_QWORD *)&v43 = a1;
            v106 = v30;
            v105 = v17;
            v44 = sub_168CF0(v43);
            v30 = v106;
            v104 = (__int64 *)((char *)v104 + v44);
            v17 = v105;
          }
          goto LABEL_56;
        }
LABEL_59:
        LOBYTE(n) = 1;
        goto LABEL_56;
      }
      v103 = (__int64 *)v24;
      n = (size_t)v17;
      item_end = v23;
      v40 = std::_Rb_tree_decrement();
      v17 = (__int64 *)n;
      v25 = *(_QWORD *)(v40 + 32);
      v23 = item_end;
    }
    if ( v25 >= v24 )
      goto LABEL_45;
    goto LABEL_42;
  }
LABEL_18:
  if ( v108 )
  {
    *(_QWORD *)&v109 = 0;
    qfree((__int64)v108);
  }
  return v2;
}
