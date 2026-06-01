__int64 __fastcall sub_3BB7E0(void *a1, __int64 a2, __int64 a3, __int64 *a4, char a5)
{
  _DWORD **v7; // rbx
  void *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned int *v14; // rax
  unsigned int *v15; // r14
  unsigned int v16; // r15d
  unsigned int v17; // ebp
  __int64 v18; // rsi
  __int64 *v19; // r12
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned int *v26; // rbx
  unsigned int v27; // r13d
  __int64 v28; // rdx
  unsigned int v29; // ebx
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned int *v32; // rbp
  unsigned int v33; // r15d
  unsigned int v34; // edx
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // r13d
  __int64 v38; // rsi
  __int64 *v39; // r12
  __int64 *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // rax
  size_t v46; // r9
  __int64 v47; // r8
  size_t v48; // r10
  char *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  size_t v52; // r8
  __int64 v53; // r15
  size_t v54; // r9
  char *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  size_t v58; // r8
  __int64 v59; // r15
  unsigned __int64 v60; // r9
  char *v61; // rsi
  __int64 v62; // rax
  unsigned int v63; // eax
  __int64 v64; // rax
  __int64 v65; // r15
  _DWORD *v66; // rbx
  __int64 v67; // rax
  size_t v68; // r13
  __int64 v69; // rbx
  size_t v70; // r8
  char *v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rax
  size_t v74; // r13
  __int64 v75; // rbx
  size_t v76; // r8
  char *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  size_t v80; // r13
  __int64 v81; // rbx
  unsigned __int64 v82; // r8
  char *v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rax
  size_t v86; // r8
  size_t v87; // r10
  size_t v88; // r9
  char *v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rax
  size_t v92; // r9
  __int64 v93; // r13
  size_t v94; // r8
  char *v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rax
  size_t v98; // r9
  __int64 v99; // r13
  unsigned __int64 v100; // r8
  char *v101; // rsi
  __int64 v102; // rax
  void *v103; // rdi
  __int64 v104; // rbx
  unsigned int v105; // edx
  char v106; // cl
  __int64 v107; // rax
  _QWORD *v108; // [rsp+0h] [rbp-F8h]
  void *v109; // [rsp+8h] [rbp-F0h]
  size_t v110; // [rsp+10h] [rbp-E8h]
  _DWORD *v111; // [rsp+18h] [rbp-E0h]
  unsigned int v112; // [rsp+20h] [rbp-D8h]
  unsigned int v113; // [rsp+24h] [rbp-D4h]
  size_t v114; // [rsp+28h] [rbp-D0h]
  int v115[2]; // [rsp+30h] [rbp-C8h]
  int v116[2]; // [rsp+38h] [rbp-C0h]
  __int64 v117; // [rsp+40h] [rbp-B8h]
  int v118[2]; // [rsp+48h] [rbp-B0h]
  size_t v119; // [rsp+50h] [rbp-A8h]
  size_t n; // [rsp+58h] [rbp-A0h]
  __int64 v121; // [rsp+60h] [rbp-98h]
  char v122; // [rsp+6Bh] [rbp-8Dh]
  unsigned int v123; // [rsp+6Ch] [rbp-8Ch]
  void *v124; // [rsp+70h] [rbp-88h] BYREF
  __int128 v125; // [rsp+78h] [rbp-80h]
  void *ptr; // [rsp+90h] [rbp-68h] BYREF
  __int128 v127; // [rsp+98h] [rbp-60h]
  _BYTE src[5]; // [rsp+B3h] [rbp-45h] BYREF
  _QWORD v129[8]; // [rsp+B8h] [rbp-40h] BYREF

  *(_QWORD *)v116 = a2;
  *(_QWORD *)v118 = a3;
  v109 = a1;
  *(_QWORD *)v115 = a4;
  v122 = a5;
  v129[0] = __readfsqword(0x28u);
  v123 = sub_3BB410((__int64)a1, a4, 0, 0);
  if ( v123 )
    return v123;
  v7 = *((_DWORD ***)a1 + 126);
  v8 = v7;
  if ( !sub_8954D0(v7, *(unsigned int *)a4) || *v7[6] == -1 )
  {
    if ( !under_debugger )
      interr(50);
    BUG();
  }
  v10 = **(_DWORD **)v115;
  v11 = *(_QWORD *)(*(_QWORD *)v116 + 16LL);
  v117 = *(_QWORD *)v116 + 8LL;
  if ( !v11 )
  {
    v111 = (_DWORD *)v117;
    if ( !*(_QWORD *)v118 )
    {
      v124 = nullptr;
      ptr = nullptr;
      v125 = 0;
      v127 = 0;
      goto LABEL_126;
    }
    goto LABEL_11;
  }
  v12 = *(_QWORD *)v116 + 8LL;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 16);
      v9 = *(_QWORD *)(v11 + 24);
      if ( *(_DWORD *)(v11 + 32) < v10 )
        break;
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v13 )
        goto LABEL_10;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v9 );
LABEL_10:
  v111 = (_DWORD *)v12;
  if ( *(_QWORD *)v118 )
  {
LABEL_11:
    v12 = v10;
    v8 = *(void **)v118;
    v14 = (unsigned int *)rangeset_t_lower_bound(*(_QWORD *)v118, v10, v9);
    v9 = *(_QWORD *)(*(_QWORD *)v118 + 8LL);
    v15 = v14;
    if ( v14 != (unsigned int *)(**(_QWORD **)v118 + 8 * v9) && *v14 < *(_DWORD *)(*(_QWORD *)v115 + 4LL) )
    {
      v124 = nullptr;
      ptr = nullptr;
      v125 = 0;
      v127 = 0;
      if ( (_DWORD *)v117 == v111 )
      {
LABEL_124:
        if ( v15 )
          sub_3B8660((__int64)v109, v10, *(_DWORD *)(*(_QWORD *)v115 + 4LL), *(_QWORD **)v118, v15);
        goto LABEL_126;
      }
      goto LABEL_17;
    }
  }
  v124 = nullptr;
  ptr = nullptr;
  v125 = 0;
  v127 = 0;
  if ( (_DWORD *)v117 != v111 )
  {
    v15 = nullptr;
LABEL_17:
    v113 = v10;
    while ( 1 )
    {
      v16 = v111[8];
      if ( v16 >= *(_DWORD *)(*(_QWORD *)v115 + 4LL) )
      {
LABEL_120:
        if ( (_QWORD)v125 )
          add_undo_record(161, v124, v125);
        if ( (_QWORD)v127 )
          add_undo_record(6, ptr, v127);
        goto LABEL_124;
      }
      if ( v15 && v16 >= v113 )
      {
        v8 = v109;
        v12 = v113;
        v15 = sub_3B8660((__int64)v109, v113, v16, *(_QWORD **)v118, v15);
        v16 = v111[8];
      }
      v17 = v111[10];
      v112 = v111[9];
      if ( (unsigned __int8)must_journal(v8, v12, v9) )
        break;
LABEL_23:
      v18 = v16;
      v19 = *((__int64 **)v109 + 126);
      v20 = v19;
      v21 = sub_8954D0(v19, v16);
      v22 = v21;
      if ( v21 )
      {
        v20 = (__int64 *)*v19;
        v23 = v21 >> *(_DWORD *)(*v19 + 8);
        v18 = (unsigned int)v23;
        if ( (_DWORD)v23 == *((_DWORD *)v19 + 16) )
        {
          v24 = v19[9];
        }
        else
        {
          *((_DWORD *)v19 + 16) = v23;
          v24 = sub_898D20(v20, (unsigned int)v23, 1);
          v19[9] = v24;
        }
        *(_BYTE *)(v24 - 2) = 1;
        v25 = (_QWORD *)*v19;
        *((_BYTE *)v19 + 92) = 1;
        v26 = (unsigned int *)(v19[9] + (v22 & (*v25 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
      }
      else
      {
        v26 = nullptr;
      }
      v27 = *v26;
      v28 = v17 & 0x600;
      if ( (_DWORD)v28 == 512 )
        v17 |= *v26 & 0xFFF00000;
      if ( (unsigned __int8)must_journal(v20, v18, v28) )
      {
        v108 = v129;
        v85 = pack_dd(src, v129, v16) - (_QWORD)src;
        v86 = v85;
        if ( v85 )
        {
          v87 = v127;
          v88 = v127 + v85;
          if ( !__CFADD__((_QWORD)v127, v85) )
            goto LABEL_103;
          if ( (unsigned __int64)v127 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v88 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_103:
            v89 = (char *)ptr;
            v90 = v127;
            if ( *((_QWORD *)&v127 + 1) < v88 )
            {
              v119 = v127;
              v114 = v86;
              v110 = v88;
              ptr = (void *)qvector_reserve(&ptr, ptr, v88, 1);
              v89 = (char *)ptr;
              v87 = v119;
              v90 = v127;
              v86 = v114;
              v88 = v110;
            }
            v119 = v87;
            v114 = v86;
            v110 = v88;
            memset(&v89[v90], 0, v88 - v90);
            v86 = v114;
            v87 = v119;
            *(_QWORD *)&v127 = v110;
          }
          else if ( (_QWORD)v127 != 0x7FFFFFFFFFFFFFFFLL )
          {
            *(_QWORD *)&v127 = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((char *)ptr + v87, src, v86);
        }
        v91 = pack_dd(src, v108, v27) - (_QWORD)src;
        v92 = v91;
        if ( v91 )
        {
          v93 = v127;
          v94 = v127 + v91;
          if ( !__CFADD__((_QWORD)v127, v91) )
            goto LABEL_109;
          if ( (unsigned __int64)v127 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v94 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_109:
            v95 = (char *)ptr;
            v96 = v127;
            if ( *((_QWORD *)&v127 + 1) < v94 )
            {
              v114 = v92;
              v110 = v94;
              ptr = (void *)qvector_reserve(&ptr, ptr, v94, 1);
              v95 = (char *)ptr;
              v92 = v114;
              v96 = v127;
              v94 = v110;
            }
            v114 = v92;
            v110 = v94;
            memset(&v95[v96], 0, v94 - v96);
            v92 = v114;
            *(_QWORD *)&v127 = v110;
          }
          else if ( (_QWORD)v127 != 0x7FFFFFFFFFFFFFFFLL )
          {
            *(_QWORD *)&v127 = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((char *)ptr + v93, src, v92);
        }
        v97 = pack_dd(src, v108, v17) - (_QWORD)src;
        v98 = v97;
        if ( !v97 )
          goto LABEL_30;
        v99 = v127;
        v100 = v127 + v97;
        if ( __CFADD__((_QWORD)v127, v97) )
        {
          if ( (unsigned __int64)v127 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v100 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_115;
          }
          if ( (_QWORD)v127 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v127 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
LABEL_115:
          v101 = (char *)ptr;
          v102 = v127;
          if ( *((_QWORD *)&v127 + 1) < v100 )
          {
            v108 = (_QWORD *)v100;
            v110 = v98;
            ptr = (void *)qvector_reserve(&ptr, ptr, v100, 1);
            v101 = (char *)ptr;
            v98 = v110;
            v102 = v127;
            v100 = (unsigned __int64)v108;
          }
          v110 = v98;
          v108 = (_QWORD *)v100;
          memset(&v101[v102], 0, v100 - v102);
          v98 = v110;
          *(_QWORD *)&v127 = v108;
        }
        memcpy((char *)ptr + v99, src, v98);
      }
LABEL_30:
      *v26 = v17;
      if ( v112 > 1 )
      {
        if ( !v122 || (v17 & 0x600) != 0x400 )
        {
LABEL_33:
          v29 = v16;
          LODWORD(v110) = v16 + v112;
          v112 = v16 + v112 - 1;
          LODWORD(v114) = 1 - v16;
          while ( 1 )
          {
            v34 = v29++;
            v35 = v110 - v29;
            if ( (v29 & 1) != 0 )
              v35 = v34 + v114;
            if ( v35 > 0xFFF )
              v35 = 4095;
            v36 = v35 << 20;
            v37 = v36 | 0x200;
            if ( v15 && v29 >= *v15 && v29 < v15[1] )
            {
              BYTE1(v36) |= 3u;
              v37 = v36;
            }
            v38 = v29;
            v39 = *((__int64 **)v109 + 126);
            v40 = v39;
            v41 = sub_8954D0(v39, v29);
            v43 = v41;
            if ( v41 )
            {
              v40 = (__int64 *)*v39;
              v44 = v41 >> *(_DWORD *)(*v39 + 8);
              v38 = (unsigned int)v44;
              if ( (_DWORD)v44 == *((_DWORD *)v39 + 16) )
              {
                v30 = v39[9];
              }
              else
              {
                *((_DWORD *)v39 + 16) = v44;
                v30 = sub_898D20(v40, (unsigned int)v44, 1);
                v39[9] = v30;
              }
              *(_BYTE *)(v30 - 2) = 1;
              v31 = (_QWORD *)*v39;
              *((_BYTE *)v39 + 92) = 1;
              v32 = (unsigned int *)(v39[9] + (v43 & (*v31 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
            }
            else
            {
              v32 = nullptr;
            }
            v33 = *v32;
            if ( !(unsigned __int8)must_journal(v40, v38, v42) )
              goto LABEL_37;
            v108 = v129;
            v45 = pack_dd(src, v129, v29) - (_QWORD)src;
            v46 = v45;
            if ( v45 )
              break;
LABEL_55:
            v51 = pack_dd(src, v108, v33) - (_QWORD)src;
            v52 = v51;
            if ( v51 )
            {
              v53 = v127;
              v54 = v127 + v51;
              if ( !__CFADD__((_QWORD)v127, v51) )
                goto LABEL_57;
              if ( (unsigned __int64)v127 <= 0x7FFFFFFFFFFFFFFELL )
              {
                v54 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_57:
                v55 = (char *)ptr;
                v56 = v127;
                if ( *((_QWORD *)&v127 + 1) < v54 )
                {
                  n = v52;
                  v119 = v54;
                  ptr = (void *)qvector_reserve(&ptr, ptr, v54, 1);
                  v55 = (char *)ptr;
                  v52 = n;
                  v56 = v127;
                  v54 = v119;
                }
                n = v52;
                v119 = v54;
                memset(&v55[v56], 0, v54 - v56);
                v52 = n;
                *(_QWORD *)&v127 = v119;
              }
              else if ( (_QWORD)v127 != 0x7FFFFFFFFFFFFFFFLL )
              {
                *(_QWORD *)&v127 = 0x7FFFFFFFFFFFFFFFLL;
              }
              memcpy((char *)ptr + v53, src, v52);
            }
            v57 = pack_dd(src, v108, v37) - (_QWORD)src;
            v58 = v57;
            if ( v57 )
            {
              v59 = v127;
              v60 = v127 + v57;
              if ( __CFADD__((_QWORD)v127, v57) )
              {
                if ( (unsigned __int64)v127 > 0x7FFFFFFFFFFFFFFELL )
                {
                  if ( (_QWORD)v127 != 0x7FFFFFFFFFFFFFFFLL )
                    *(_QWORD *)&v127 = 0x7FFFFFFFFFFFFFFFLL;
                  goto LABEL_66;
                }
                v60 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v61 = (char *)ptr;
              v62 = v127;
              if ( *((_QWORD *)&v127 + 1) < v60 )
              {
                v108 = (_QWORD *)v60;
                v119 = v58;
                ptr = (void *)qvector_reserve(&ptr, ptr, v60, 1);
                v61 = (char *)ptr;
                v58 = v119;
                v62 = v127;
                v60 = (unsigned __int64)v108;
              }
              v119 = v58;
              v108 = (_QWORD *)v60;
              memset(&v61[v62], 0, v60 - v62);
              v58 = v119;
              *(_QWORD *)&v127 = v108;
LABEL_66:
              memcpy((char *)ptr + v59, src, v58);
              *v32 = v37;
              if ( v29 == v112 )
                goto LABEL_67;
            }
            else
            {
LABEL_37:
              *v32 = v37;
              if ( v29 == v112 )
                goto LABEL_67;
            }
          }
          v47 = v127;
          v48 = v127 + v45;
          if ( __CFADD__((_QWORD)v127, v45) )
          {
            if ( (unsigned __int64)v127 <= 0x7FFFFFFFFFFFFFFELL )
            {
              v48 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_51;
            }
            if ( (_QWORD)v127 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v127 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else
          {
LABEL_51:
            v49 = (char *)ptr;
            v50 = v127;
            if ( *((_QWORD *)&v127 + 1) < v48 )
            {
              v121 = v127;
              n = v46;
              v119 = v48;
              ptr = (void *)qvector_reserve(&ptr, ptr, v48, 1);
              v49 = (char *)ptr;
              v47 = v121;
              v50 = v127;
              v46 = n;
              v48 = v119;
            }
            v121 = v47;
            n = v46;
            v119 = v48;
            memset(&v49[v50], 0, v48 - v50);
            v46 = n;
            v47 = v121;
            *(_QWORD *)&v127 = v119;
          }
          memcpy((char *)ptr + v47, src, v46);
          goto LABEL_55;
        }
        v104 = *((_QWORD *)v109 + 92);
        if ( !v104 )
        {
          if ( (char *)v109 + 728 != *((void **)v109 + 93) && *(_DWORD *)(std::_Rb_tree_decrement() + 32) >= v16 )
            goto LABEL_33;
LABEL_138:
          *(_DWORD *)(operator new(0x28u) + 32) = v16;
          std::_Rb_tree_insert_and_rebalance();
          ++*((_QWORD *)v109 + 95);
          goto LABEL_33;
        }
        while ( 1 )
        {
          v105 = *(_DWORD *)(v104 + 32);
          v106 = 0;
          v107 = *(_QWORD *)(v104 + 24);
          if ( v16 < v105 )
          {
            v107 = *(_QWORD *)(v104 + 16);
            v106 = v122;
          }
          if ( !v107 )
            break;
          v104 = v107;
        }
        if ( v106 )
        {
          if ( v104 == *((_QWORD *)v109 + 93) )
            goto LABEL_138;
          v105 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
        }
        if ( v105 >= v16 )
          goto LABEL_33;
        goto LABEL_138;
      }
      v112 = v16;
LABEL_67:
      v63 = v113;
      v10 = v112 + 1;
      if ( v113 < v112 )
        v63 = v112 + 1;
      v113 = v63;
      v64 = std::_Rb_tree_increment();
      v65 = v117;
      v66 = (_DWORD *)v64;
      v12 = 48;
      v8 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v8, 0x30u);
      --*(_QWORD *)(*(_QWORD *)v116 + 40LL);
      if ( (_DWORD *)v65 == v66 )
        goto LABEL_120;
      v111 = v66;
    }
    v108 = v129;
    v67 = pack_dd(src, v129, v16) - (_QWORD)src;
    v68 = v67;
    if ( !v67 )
    {
LABEL_89:
      v73 = pack_dd(src, v108, v112) - (_QWORD)src;
      v74 = v73;
      if ( !v73 )
        goto LABEL_95;
      v75 = v125;
      v76 = v125 + v73;
      if ( __CFADD__((_QWORD)v125, v73) )
      {
        if ( (unsigned __int64)v125 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v125 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v125 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_94;
        }
        v76 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v77 = (char *)v124;
      v78 = v125;
      if ( *((_QWORD *)&v125 + 1) < v76 )
      {
        v110 = v76;
        v124 = (void *)qvector_reserve(&v124, v124, v76, 1);
        v77 = (char *)v124;
        v76 = v110;
        v78 = v125;
      }
      v110 = v76;
      memset(&v77[v78], 0, v76 - v78);
      *(_QWORD *)&v125 = v110;
LABEL_94:
      memcpy((char *)v124 + v75, src, v74);
LABEL_95:
      v79 = pack_dd(src, v108, v17) - (_QWORD)src;
      v80 = v79;
      if ( !v79 )
        goto LABEL_23;
      v81 = v125;
      v82 = v125 + v79;
      if ( __CFADD__((_QWORD)v125, v79) )
      {
        if ( (unsigned __int64)v125 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v125 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v125 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_100;
        }
        v82 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v83 = (char *)v124;
      v84 = v125;
      if ( *((_QWORD *)&v125 + 1) < v82 )
      {
        v108 = (_QWORD *)v82;
        v124 = (void *)qvector_reserve(&v124, v124, v82, 1);
        v83 = (char *)v124;
        v82 = (unsigned __int64)v108;
        v84 = v125;
      }
      v108 = (_QWORD *)v82;
      memset(&v83[v84], 0, v82 - v84);
      *(_QWORD *)&v125 = v108;
LABEL_100:
      memcpy((char *)v124 + v81, src, v80);
      goto LABEL_23;
    }
    v69 = v125;
    v70 = v125 + v67;
    if ( __CFADD__((_QWORD)v125, v67) )
    {
      if ( (unsigned __int64)v125 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v125 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v125 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_88;
      }
      v70 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v71 = (char *)v124;
    v72 = v125;
    if ( *((_QWORD *)&v125 + 1) < v70 )
    {
      v110 = v70;
      v124 = (void *)qvector_reserve(&v124, v124, v70, 1);
      v71 = (char *)v124;
      v70 = v110;
      v72 = v125;
    }
    v110 = v70;
    memset(&v71[v72], 0, v70 - v72);
    *(_QWORD *)&v125 = v110;
LABEL_88:
    memcpy((char *)v124 + v69, src, v68);
    goto LABEL_89;
  }
LABEL_126:
  v103 = ptr;
  *((_DWORD *)v109 + 254) = -1;
  if ( v103 )
  {
    *(_QWORD *)&v127 = 0;
    qfree(v103);
  }
  if ( v124 )
  {
    *(_QWORD *)&v125 = 0;
    qfree(v124);
  }
  return v123;
}

