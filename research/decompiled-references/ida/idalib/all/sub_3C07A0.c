__int64 __fastcall sub_3C07A0(void *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, bool a5)
{
  _QWORD **v7; // rbx
  void *v8; // rdi
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned int v15; // ebp
  unsigned __int64 v16; // rsi
  __int64 *v17; // r12
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int *v24; // rbx
  unsigned int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned int *v32; // rbp
  unsigned int v33; // r14d
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  unsigned int v37; // r12d
  unsigned __int64 v38; // rsi
  __int64 *v39; // r14
  __int64 *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // rax
  size_t v46; // r8
  __int64 v47; // r15
  unsigned __int64 v48; // r9
  char *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  size_t v52; // r8
  __int64 v53; // r14
  unsigned __int64 v54; // r9
  char *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  size_t v58; // r15
  __int64 v59; // r14
  unsigned __int64 v60; // r8
  char *v61; // rsi
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // r15
  __int64 v67; // rbx
  __int64 v68; // rax
  size_t v69; // r8
  __int64 v70; // r12
  unsigned __int64 v71; // r15
  char *v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rax
  size_t v75; // r12
  __int64 v76; // rbx
  unsigned __int64 v77; // r15
  char *v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rax
  size_t v81; // r12
  __int64 v82; // rbx
  unsigned __int64 v83; // r15
  char *v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rax
  size_t v87; // r15
  size_t v88; // r9
  size_t v89; // r8
  char *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rax
  size_t v93; // r9
  __int64 v94; // r12
  size_t v95; // r8
  char *v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rax
  size_t v99; // r8
  __int64 v100; // r12
  unsigned __int64 v101; // r15
  char *v102; // rsi
  __int64 v103; // rax
  void *v104; // rdi
  char *v105; // rbx
  char *v106; // rbp
  unsigned __int64 v107; // rdx
  bool v108; // cl
  char *v109; // rax
  bool v110; // r12
  __int64 v111; // rax
  unsigned __int64 v112; // [rsp+0h] [rbp-F8h]
  void *v113; // [rsp+8h] [rbp-F0h]
  unsigned __int64 *v114; // [rsp+10h] [rbp-E8h]
  size_t v115; // [rsp+18h] [rbp-E0h]
  __int64 v116; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v117; // [rsp+28h] [rbp-D0h]
  size_t v118; // [rsp+30h] [rbp-C8h]
  int v119[2]; // [rsp+38h] [rbp-C0h]
  int v120[2]; // [rsp+40h] [rbp-B8h]
  __int64 v121; // [rsp+48h] [rbp-B0h]
  int v122[2]; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v123; // [rsp+58h] [rbp-A0h]
  size_t n; // [rsp+60h] [rbp-98h]
  bool v125; // [rsp+6Bh] [rbp-8Dh]
  unsigned int v126; // [rsp+6Ch] [rbp-8Ch]
  void *v127; // [rsp+70h] [rbp-88h] BYREF
  __int128 v128; // [rsp+78h] [rbp-80h]
  void *ptr; // [rsp+90h] [rbp-68h] BYREF
  __int128 v130; // [rsp+98h] [rbp-60h]
  _BYTE src[5]; // [rsp+AEh] [rbp-4Ah] BYREF
  _BYTE v132[5]; // [rsp+B3h] [rbp-45h] BYREF
  _QWORD v133[8]; // [rsp+B8h] [rbp-40h] BYREF

  *(_QWORD *)v120 = a2;
  *(_QWORD *)v122 = a3;
  v113 = a1;
  *(_QWORD *)v119 = a4;
  v125 = a5;
  v133[0] = __readfsqword(0x28u);
  v126 = sub_3C0380((__int64)a1, a4, 0, 0);
  if ( v126 )
    return v126;
  v7 = *((_QWORD ***)a1 + 127);
  v8 = v7;
  if ( !sub_8B8E80(v7, *a4) || *v7[7] == -1 )
  {
    if ( !under_debugger )
      interr(50);
    BUG();
  }
  v10 = **(_QWORD **)v119;
  v11 = *(_QWORD *)v120 + 8LL;
  v12 = *(_QWORD **)(*(_QWORD *)v120 + 16LL);
  v121 = *(_QWORD *)v120 + 8LL;
  if ( v12 )
  {
    do
    {
      while ( 1 )
      {
        v13 = v12[2];
        v9 = (unsigned __int64 *)v12[3];
        if ( v12[4] < v10 )
          break;
        v11 = (__int64)v12;
        v12 = (_QWORD *)v12[2];
        if ( !v13 )
          goto LABEL_10;
      }
      v12 = (_QWORD *)v12[3];
    }
    while ( v9 );
LABEL_10:
    v116 = v11;
    if ( !*(_QWORD *)v122 )
      goto LABEL_15;
  }
  else
  {
    v116 = v121;
    if ( !*(_QWORD *)v122 )
    {
      v127 = nullptr;
      ptr = nullptr;
      v128 = 0;
      v130 = 0;
      goto LABEL_126;
    }
  }
  v8 = *(void **)v122;
  v114 = (unsigned __int64 *)rangeset_t_lower_bound(*(_QWORD *)v122, v10, v9);
  v9 = v114;
  v112 = *(_QWORD *)(*(_QWORD *)v122 + 8LL);
  if ( v114 != (unsigned __int64 *)(**(_QWORD **)v122 + 16 * v112) && *v114 < *(_QWORD *)(*(_QWORD *)v119 + 8LL) )
  {
    v127 = nullptr;
    ptr = nullptr;
    v128 = 0;
    v130 = 0;
    if ( v121 == v116 )
    {
LABEL_124:
      if ( v114 )
        sub_3BD220((__int64)v113, v10, *(_QWORD *)(*(_QWORD *)v119 + 8LL), *(_QWORD **)v122, v114);
      goto LABEL_126;
    }
    goto LABEL_17;
  }
LABEL_15:
  v127 = nullptr;
  ptr = nullptr;
  v128 = 0;
  v130 = 0;
  if ( v121 != v116 )
  {
    v114 = nullptr;
LABEL_17:
    v117 = v10;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v116 + 32);
      if ( v14 >= *(_QWORD *)(*(_QWORD *)v119 + 8LL) )
      {
LABEL_120:
        if ( (_QWORD)v128 )
          add_undo_record(161, v127, v128);
        if ( (_QWORD)v130 )
          add_undo_record(6, ptr, v130);
        goto LABEL_124;
      }
      if ( v114 && v14 >= v117 )
      {
        v8 = v113;
        v114 = sub_3BD220((__int64)v113, v117, *(_QWORD *)(v116 + 32), *(_QWORD **)v122, v114);
        v14 = *(_QWORD *)(v116 + 32);
      }
      v15 = *(_DWORD *)(v116 + 48);
      v112 = *(_QWORD *)(v116 + 40);
      if ( (unsigned __int8)must_journal(v8, *(_QWORD *)(v116 + 40), v9) )
        break;
LABEL_23:
      v16 = v14;
      v17 = *((__int64 **)v113 + 127);
      v18 = v17;
      v19 = sub_8B8E80(v17, v14);
      v20 = v19;
      if ( v19 )
      {
        v18 = (__int64 *)*v17;
        v21 = v19 >> *(_DWORD *)(*v17 + 8);
        v16 = (unsigned int)v21;
        if ( (_DWORD)v21 == *((_DWORD *)v17 + 18) )
        {
          v22 = v17[10];
        }
        else
        {
          *((_DWORD *)v17 + 18) = v21;
          v22 = sub_8BCA60(v18, (unsigned int)v21, 1);
          v17[10] = v22;
        }
        *(_BYTE *)(v22 - 2) = 1;
        v23 = (_QWORD *)*v17;
        *((_BYTE *)v17 + 100) = 1;
        v24 = (unsigned int *)(v17[10] + (v20 & (*v23 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
      }
      else
      {
        v24 = nullptr;
      }
      v25 = *v24;
      v26 = v15 & 0x600;
      if ( (_DWORD)v26 == 512 )
        v15 |= *v24 & 0xFFF00000;
      if ( (unsigned __int8)must_journal(v18, v16, v26) )
      {
        v86 = pack_dq(src, v133, v14) - (_QWORD)src;
        v87 = v86;
        if ( v86 )
        {
          v88 = v130;
          v89 = v130 + v86;
          if ( !__CFADD__((_QWORD)v130, v86) )
            goto LABEL_103;
          if ( (unsigned __int64)v130 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v89 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_103:
            v90 = (char *)ptr;
            v91 = v130;
            if ( *((_QWORD *)&v130 + 1) < v89 )
            {
              v118 = v130;
              v115 = v89;
              ptr = (void *)qvector_reserve(&ptr, ptr, v89, 1);
              v90 = (char *)ptr;
              v88 = v118;
              v91 = v130;
              v89 = v115;
            }
            v118 = v88;
            v115 = v89;
            memset(&v90[v91], 0, v89 - v91);
            v88 = v118;
            *(_QWORD *)&v130 = v115;
          }
          else if ( (_QWORD)v130 != 0x7FFFFFFFFFFFFFFFLL )
          {
            *(_QWORD *)&v130 = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((char *)ptr + v88, src, v87);
        }
        v92 = pack_dd(src, v132, v25) - (_QWORD)src;
        v93 = v92;
        if ( v92 )
        {
          v94 = v130;
          v95 = v130 + v92;
          if ( !__CFADD__((_QWORD)v130, v92) )
            goto LABEL_109;
          if ( (unsigned __int64)v130 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v95 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_109:
            v96 = (char *)ptr;
            v97 = v130;
            if ( *((_QWORD *)&v130 + 1) < v95 )
            {
              v118 = v93;
              v115 = v95;
              ptr = (void *)qvector_reserve(&ptr, ptr, v95, 1);
              v96 = (char *)ptr;
              v93 = v118;
              v97 = v130;
              v95 = v115;
            }
            v118 = v93;
            v115 = v95;
            memset(&v96[v97], 0, v95 - v97);
            v93 = v118;
            *(_QWORD *)&v130 = v115;
          }
          else if ( (_QWORD)v130 != 0x7FFFFFFFFFFFFFFFLL )
          {
            *(_QWORD *)&v130 = 0x7FFFFFFFFFFFFFFFLL;
          }
          memcpy((char *)ptr + v94, src, v93);
        }
        v98 = pack_dd(src, v132, v15) - (_QWORD)src;
        v99 = v98;
        if ( !v98 )
          goto LABEL_30;
        v100 = v130;
        v101 = v130 + v98;
        if ( __CFADD__((_QWORD)v130, v98) )
        {
          if ( (unsigned __int64)v130 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v101 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_115;
          }
          if ( (_QWORD)v130 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v130 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
LABEL_115:
          v102 = (char *)ptr;
          v103 = v130;
          if ( *((_QWORD *)&v130 + 1) < v101 )
          {
            v115 = v99;
            ptr = (void *)qvector_reserve(&ptr, ptr, v101, 1);
            v102 = (char *)ptr;
            v99 = v115;
            v103 = v130;
          }
          v115 = v99;
          memset(&v102[v103], 0, v101 - v103);
          *(_QWORD *)&v130 = v101;
          v99 = v115;
        }
        memcpy((char *)ptr + v100, src, v99);
      }
LABEL_30:
      *v24 = v15;
      if ( v112 > 1 )
      {
        if ( !v125 || (v15 & 0x600) != 0x400 )
        {
LABEL_33:
          v29 = v14;
          v115 = v14 + v112;
          v112 = v14 + v112 - 1;
          v118 = 1 - v14;
          while ( 1 )
          {
            v34 = v29++;
            v35 = v115 - v29;
            if ( (v29 & 1) != 0 )
              v35 = v34 + v118;
            if ( v35 > 0xFFF )
              LODWORD(v35) = 4095;
            v36 = (_DWORD)v35 << 20;
            v37 = v36 | 0x200;
            if ( v114 && v29 >= *v114 && v29 < v114[1] )
            {
              BYTE1(v36) |= 3u;
              v37 = v36;
            }
            v38 = v29;
            v39 = *((__int64 **)v113 + 127);
            v40 = v39;
            v41 = sub_8B8E80(v39, v29);
            v43 = v41;
            if ( v41 )
            {
              v40 = (__int64 *)*v39;
              v44 = v41 >> *(_DWORD *)(*v39 + 8);
              v38 = (unsigned int)v44;
              if ( (_DWORD)v44 == *((_DWORD *)v39 + 18) )
              {
                v30 = v39[10];
              }
              else
              {
                *((_DWORD *)v39 + 18) = v44;
                v30 = sub_8BCA60(v40, (unsigned int)v44, 1);
                v39[10] = v30;
              }
              *(_BYTE *)(v30 - 2) = 1;
              v31 = (_QWORD *)*v39;
              *((_BYTE *)v39 + 100) = 1;
              v32 = (unsigned int *)(v39[10] + (v43 & (*v31 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
            }
            else
            {
              v32 = nullptr;
            }
            v33 = *v32;
            if ( !(unsigned __int8)must_journal(v40, v38, v42) )
              goto LABEL_37;
            v45 = pack_dq(src, v133, v29) - (_QWORD)src;
            v46 = v45;
            if ( v45 )
              break;
LABEL_55:
            v51 = pack_dd(src, v132, v33) - (_QWORD)src;
            v52 = v51;
            if ( v51 )
            {
              v53 = v130;
              v54 = v130 + v51;
              if ( !__CFADD__((_QWORD)v130, v51) )
                goto LABEL_57;
              if ( (unsigned __int64)v130 <= 0x7FFFFFFFFFFFFFFELL )
              {
                v54 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_57:
                v55 = (char *)ptr;
                v56 = v130;
                if ( *((_QWORD *)&v130 + 1) < v54 )
                {
                  n = v52;
                  v123 = v54;
                  ptr = (void *)qvector_reserve(&ptr, ptr, v54, 1);
                  v55 = (char *)ptr;
                  v52 = n;
                  v56 = v130;
                  v54 = v123;
                }
                n = v52;
                v123 = v54;
                memset(&v55[v56], 0, v54 - v56);
                v52 = n;
                *(_QWORD *)&v130 = v123;
              }
              else if ( (_QWORD)v130 != 0x7FFFFFFFFFFFFFFFLL )
              {
                *(_QWORD *)&v130 = 0x7FFFFFFFFFFFFFFFLL;
              }
              memcpy((char *)ptr + v53, src, v52);
            }
            v57 = pack_dd(src, v132, v37) - (_QWORD)src;
            v58 = v57;
            if ( v57 )
            {
              v59 = v130;
              v60 = v130 + v57;
              if ( __CFADD__((_QWORD)v130, v57) )
              {
                if ( (unsigned __int64)v130 > 0x7FFFFFFFFFFFFFFELL )
                {
                  if ( (_QWORD)v130 != 0x7FFFFFFFFFFFFFFFLL )
                    *(_QWORD *)&v130 = 0x7FFFFFFFFFFFFFFFLL;
                  goto LABEL_66;
                }
                v60 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v61 = (char *)ptr;
              v62 = v130;
              if ( *((_QWORD *)&v130 + 1) < v60 )
              {
                v123 = v60;
                ptr = (void *)qvector_reserve(&ptr, ptr, v60, 1);
                v61 = (char *)ptr;
                v60 = v123;
                v62 = v130;
              }
              v123 = v60;
              memset(&v61[v62], 0, v60 - v62);
              *(_QWORD *)&v130 = v123;
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
          v47 = v130;
          v48 = v130 + v45;
          if ( __CFADD__((_QWORD)v130, v45) )
          {
            if ( (unsigned __int64)v130 <= 0x7FFFFFFFFFFFFFFELL )
            {
              v48 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_51;
            }
            if ( (_QWORD)v130 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v130 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else
          {
LABEL_51:
            v49 = (char *)ptr;
            v50 = v130;
            if ( *((_QWORD *)&v130 + 1) < v48 )
            {
              n = v46;
              v123 = v48;
              ptr = (void *)qvector_reserve(&ptr, ptr, v48, 1);
              v49 = (char *)ptr;
              v46 = n;
              v50 = v130;
              v48 = v123;
            }
            n = v46;
            v123 = v48;
            memset(&v49[v50], 0, v48 - v50);
            v46 = n;
            *(_QWORD *)&v130 = v123;
          }
          memcpy((char *)ptr + v47, src, v46);
          goto LABEL_55;
        }
        v105 = *((char **)v113 + 93);
        v106 = (char *)v113 + 736;
        if ( !v105 )
        {
          if ( v106 != *((char **)v113 + 94) && *(_QWORD *)(std::_Rb_tree_decrement((char *)v113 + 736) + 32) >= v14 )
            goto LABEL_33;
          v110 = v125;
          v105 = v106;
LABEL_140:
          v111 = operator new(0x28u);
          *(_QWORD *)(v111 + 32) = v14;
          std::_Rb_tree_insert_and_rebalance(v110, v111, v105, v106);
          ++*((_QWORD *)v113 + 96);
          goto LABEL_33;
        }
        while ( 1 )
        {
          v107 = *((_QWORD *)v105 + 4);
          v108 = 0;
          v109 = *((char **)v105 + 3);
          if ( v14 < v107 )
          {
            v109 = *((char **)v105 + 2);
            v108 = v125;
          }
          if ( !v109 )
            break;
          v105 = v109;
        }
        if ( v108 )
        {
          if ( v105 != *((char **)v113 + 94) )
          {
            v107 = *(_QWORD *)(std::_Rb_tree_decrement(v105) + 32);
            goto LABEL_137;
          }
        }
        else
        {
LABEL_137:
          if ( v107 >= v14 )
            goto LABEL_33;
        }
        v110 = v125;
        if ( v105 != v106 )
          v110 = v14 < *((_QWORD *)v105 + 4);
        goto LABEL_140;
      }
      v112 = v14;
LABEL_67:
      v63 = v117;
      v64 = v116;
      v10 = v112 + 1;
      if ( v117 < v112 )
        v63 = v112 + 1;
      v117 = v63;
      v65 = std::_Rb_tree_increment(v116, v112, v27, v28);
      v66 = v121;
      v67 = v65;
      v8 = (void *)std::_Rb_tree_rebalance_for_erase(v64, v121);
      operator delete(v8, 0x38u);
      --*(_QWORD *)(*(_QWORD *)v120 + 40LL);
      if ( v66 == v67 )
        goto LABEL_120;
      v116 = v67;
    }
    v68 = pack_dq(src, v133, v14) - (_QWORD)src;
    v69 = v68;
    if ( !v68 )
    {
LABEL_89:
      v74 = pack_dq(src, v133, v112) - (_QWORD)src;
      v75 = v74;
      if ( !v74 )
        goto LABEL_95;
      v76 = v128;
      v77 = v128 + v74;
      if ( __CFADD__((_QWORD)v128, v74) )
      {
        if ( (unsigned __int64)v128 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v128 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v128 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_94;
        }
        v77 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v78 = (char *)v127;
      v79 = v128;
      if ( *((_QWORD *)&v128 + 1) < v77 )
      {
        v127 = (void *)qvector_reserve(&v127, v127, v77, 1);
        v78 = (char *)v127;
        v79 = v128;
      }
      memset(&v78[v79], 0, v77 - v79);
      *(_QWORD *)&v128 = v77;
LABEL_94:
      memcpy((char *)v127 + v76, src, v75);
LABEL_95:
      v80 = pack_dd(src, v132, v15) - (_QWORD)src;
      v81 = v80;
      if ( !v80 )
        goto LABEL_23;
      v82 = v128;
      v83 = v128 + v80;
      if ( __CFADD__((_QWORD)v128, v80) )
      {
        if ( (unsigned __int64)v128 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v128 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v128 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_100;
        }
        v83 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v84 = (char *)v127;
      v85 = v128;
      if ( *((_QWORD *)&v128 + 1) < v83 )
      {
        v127 = (void *)qvector_reserve(&v127, v127, v83, 1);
        v84 = (char *)v127;
        v85 = v128;
      }
      memset(&v84[v85], 0, v83 - v85);
      *(_QWORD *)&v128 = v83;
LABEL_100:
      memcpy((char *)v127 + v82, src, v81);
      goto LABEL_23;
    }
    v70 = v128;
    v71 = v128 + v68;
    if ( __CFADD__((_QWORD)v128, v68) )
    {
      if ( (unsigned __int64)v128 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v128 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v128 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_88;
      }
      v71 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v72 = (char *)v127;
    v73 = v128;
    if ( *((_QWORD *)&v128 + 1) < v71 )
    {
      v115 = v69;
      v127 = (void *)qvector_reserve(&v127, v127, v71, 1);
      v72 = (char *)v127;
      v69 = v115;
      v73 = v128;
    }
    v115 = v69;
    memset(&v72[v73], 0, v71 - v73);
    *(_QWORD *)&v128 = v71;
    v69 = v115;
LABEL_88:
    memcpy((char *)v127 + v70, src, v69);
    goto LABEL_89;
  }
LABEL_126:
  v104 = ptr;
  *((_QWORD *)v113 + 128) = -1;
  if ( v104 )
  {
    *(_QWORD *)&v130 = 0;
    qfree(v104);
  }
  if ( v127 )
  {
    *(_QWORD *)&v128 = 0;
    qfree(v127);
  }
  return v126;
}
