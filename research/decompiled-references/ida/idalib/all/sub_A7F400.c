__int64 __fastcall sub_A7F400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  char v7; // bl
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r12
  __int64 v51; // rax
  _QWORD *v52; // rdx
  _QWORD *v53; // rbp
  _QWORD *v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r14
  __int64 v64; // rax
  __int64 v65; // r9
  __int64 *v66; // rdx
  __int64 *v67; // r15
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  unsigned __int64 v80; // rax
  __int64 v81; // r8
  __int64 *v82; // rdx
  __int64 *v83; // rbp
  __int64 v84; // rcx
  void **v85; // rdx
  char *v86; // rsi
  __int64 v87; // r14
  __int64 v88; // rax
  __int64 v89; // r9
  void **v90; // r15
  __int64 v91; // rax
  __int64 *v92; // rax
  __int64 *v93; // rcx
  char v94; // al
  __int64 v95; // r15
  char v96; // al
  __int64 v97; // r9
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 *v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 *v107; // r14
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rax
  __int64 *v120; // rdx
  __int64 *v121; // r14
  char v122; // al
  __int64 v123; // r14
  char v124; // al
  __int64 v125; // r9
  char v126; // al
  __int64 v127; // r9
  char v128; // al
  __int64 v129; // r15
  __int64 v130; // rax
  __int64 *v131; // [rsp+0h] [rbp-C8h]
  __int64 *v132; // [rsp+0h] [rbp-C8h]
  __int64 v133; // [rsp+0h] [rbp-C8h]
  __int64 v134; // [rsp+0h] [rbp-C8h]
  void **v135; // [rsp+8h] [rbp-C0h]
  __int64 v136; // [rsp+8h] [rbp-C0h]
  __int64 *v137; // [rsp+8h] [rbp-C0h]
  __int64 *v138; // [rsp+8h] [rbp-C0h]
  __int64 *v139; // [rsp+10h] [rbp-B8h]
  char v140; // [rsp+10h] [rbp-B8h]
  __int64 v141; // [rsp+10h] [rbp-B8h]
  __int64 *v142; // [rsp+18h] [rbp-B0h]
  void **v143; // [rsp+18h] [rbp-B0h]
  __int64 *v144; // [rsp+18h] [rbp-B0h]
  __int64 v145; // [rsp+18h] [rbp-B0h]
  __int64 v146; // [rsp+18h] [rbp-B0h]
  __int64 v147; // [rsp+20h] [rbp-A8h]
  __int64 *v148; // [rsp+20h] [rbp-A8h]
  __int64 v149; // [rsp+20h] [rbp-A8h]
  __int64 *v150; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int64 v152; // [rsp+38h] [rbp-90h]
  int v153; // [rsp+40h] [rbp-88h]
  char v154; // [rsp+44h] [rbp-84h]
  __int64 v155; // [rsp+48h] [rbp-80h] BYREF

  v6 = a2;
  v7 = a4;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = (unsigned int)*(unsigned __int8 *)(v8 + 16) - 35;
  if ( (unsigned int)v9 > 1 )
    v8 = sub_F63050(v8, a2, v9, a4);
  if ( !(*(_BYTE *)(v8 + 19) >> 2) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1E9 )
      return 1;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = (unsigned int)*(unsigned __int8 *)(v13 + 16) - 35;
  if ( (unsigned int)v14 > 1 )
    v13 = sub_F63050(v13, a2, v14, a4);
  v15 = *(unsigned __int8 *)(v13 + 19);
  LOBYTE(v15) = (unsigned __int8)v15 >> 2;
  if ( !(_BYTE)v15 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1E9 )
      return 1;
  }
  v17 = sub_A5E7C0(a2, a2, v15, a4, a5);
  v20 = *(unsigned __int8 *)(v17 + 19);
  LOBYTE(v20) = (unsigned __int8)v20 >> 2;
  if ( !(_BYTE)v20 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v21 + 16) == 13 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 0x1EA )
      return 0;
  }
  v22 = sub_A5E7C0(a2, a2, v20, v18, v19);
  v25 = *(unsigned __int8 *)(v22 + 19);
  LOBYTE(v25) = (unsigned __int8)v25 >> 2;
  if ( (_BYTE)v25 )
  {
    v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v55 + 16) == 13 && ((*(_WORD *)(v55 + 18) >> 3) & 0x1FF) == 0x1EA )
      return 0;
  }
  v26 = sub_A5E7C0(a3, a2, v25, v23, v24);
  v29 = *(unsigned __int8 *)(v26 + 19);
  LOBYTE(v29) = (unsigned __int8)v29 >> 2;
  if ( !(_BYTE)v29 )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v30 + 16) == 13 && ((*(_WORD *)(v30 + 18) >> 3) & 0x1FF) == 0x1EA )
      return 0;
  }
  v31 = sub_A5E7C0(a3, a2, v29, v27, v28);
  v34 = *(unsigned __int8 *)(v31 + 19);
  LOBYTE(v34) = (unsigned __int8)v34 >> 2;
  if ( (_BYTE)v34 )
  {
    if ( sub_A56B80(v31) )
      return 0;
  }
  v35 = sub_A5E7C0(a2, a2, v34, v32, v33);
  v36 = *(unsigned __int8 *)(v35 + 19);
  LOBYTE(v36) = (unsigned __int8)v36 >> 2;
  if ( !(_BYTE)v36 || (LOBYTE(v37) = sub_A56B40(v35), v11 = v37, !(_BYTE)v37) )
  {
    if ( sub_F67A50(a2, a2, v36) )
    {
      v59 = sub_A5E9B0(a2, a2, v56, v57, v58);
      v142 = (__int64 *)v60;
      if ( v59 == v60 )
      {
LABEL_44:
        v68 = sub_A5E7C0(v6, a2, v60, v61, v62);
        v72 = sub_9C7D40(v68, a2, v69, v70, v71);
        if ( !v72 )
          return 1;
        v76 = v72;
        v154 = 1;
        v153 = 0;
        ptr = &v155;
        v152 = 8;
        sub_A798C0(a1, v72, (__int64)&ptr, v73, v74, v75);
        if ( HIDWORD(v152) != v153 || *(_BYTE *)(sub_A5E7C0(v6, v76, v77, v78, v79) + 19) >> 2 )
        {
          v80 = sub_A6EB90((__int64 *)&ptr, ptr);
          v132 = v82;
          v83 = (__int64 *)v80;
          if ( v154 )
          {
            v84 = HIDWORD(v152);
            v85 = (void **)ptr;
            v86 = (char *)ptr + 8 * HIDWORD(v152);
          }
          else
          {
            v84 = (unsigned int)v152;
            v85 = (void **)ptr;
            v86 = (char *)ptr + 8 * (unsigned int)v152;
          }
          v150 = (__int64 *)v86;
          if ( v86 == (char *)v80 )
          {
LABEL_64:
            if ( !v154 )
              free(ptr);
            return 1;
          }
          while ( 1 )
          {
            v87 = *v83;
            v88 = sub_A5E9B0(a3, (__int64)v86, (__int64)v85, v84, v81);
            v135 = v85;
            if ( (void **)v88 == v85 )
              break;
            if ( v7 )
            {
              v84 = v88;
              while ( 1 )
              {
                v129 = *(_QWORD *)v84;
                if ( *(_QWORD *)v84 )
                {
                  if ( v87 )
                  {
                    v146 = v84;
                    if ( v87 == v129 )
                      break;
                    v149 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 32LL))(v87);
                    v130 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v129 + 32LL))(v129);
                    v84 = v146;
                    if ( v149 == v130 )
                      break;
                  }
                }
                v86 = (char *)v87;
                v145 = v84;
                v126 = sub_A7F1A0(a1, v87, v129, v84, v81, v89);
                v84 = v145;
                if ( v126 )
                  break;
                v86 = (char *)v129;
                v128 = sub_A7F390(a1, v129, v87, v145, v81, v127);
                v84 = v145;
                if ( v128 )
                  break;
                v84 = v145 + 8;
                if ( v135 == (void **)(v145 + 8) )
                  goto LABEL_104;
              }
            }
            else
            {
              v90 = (void **)v88;
              while ( 1 )
              {
                v85 = (void **)*v90;
                if ( *v90 )
                {
                  if ( v87 )
                  {
                    v143 = (void **)*v90;
                    if ( (void **)v87 == v85 )
                      break;
                    v147 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 32LL))(v87);
                    v91 = (*((__int64 (__fastcall **)(void **))*v143 + 4))(v143);
                    v85 = v143;
                    if ( v91 == v147 )
                      break;
                  }
                }
                v86 = (char *)v87;
                if ( (unsigned __int8)sub_A7F1A0(a1, v87, (__int64)v85, v84, v81, v89) )
                  break;
                if ( v135 == ++v90 )
                  goto LABEL_104;
              }
            }
            if ( v132 == v83 + 1 )
            {
              v83 = v132;
            }
            else if ( (unsigned __int64)v83[1] < 0xFFFFFFFFFFFFFFFELL )
            {
              ++v83;
            }
            else
            {
              v92 = v83 + 2;
              do
              {
                v83 = v92;
                if ( v132 == v92 )
                  break;
                ++v92;
              }
              while ( (unsigned __int64)*v83 >= 0xFFFFFFFFFFFFFFFELL );
            }
            if ( v150 == v83 )
              goto LABEL_64;
          }
        }
LABEL_104:
        if ( !v154 )
          free(ptr);
      }
      else
      {
        v139 = (__int64 *)v59;
        while ( 1 )
        {
          v63 = *v139;
          v64 = sub_A5E9B0(a3, a2, v60, v61, v62);
          v131 = v66;
          if ( (__int64 *)v64 == v66 )
            break;
          if ( v7 )
          {
            v93 = (__int64 *)v64;
            while ( 1 )
            {
              v95 = *v93;
              a2 = v63;
              v136 = (__int64)v93;
              v96 = sub_A7F390(a1, v63, *v93, (__int64)v93, v62, v65);
              v61 = v136;
              if ( v96 )
                break;
              a2 = v95;
              v94 = sub_A7F390(a1, v95, v63, v136, v62, v97);
              v61 = v136;
              if ( v94 )
                break;
              v93 = (__int64 *)(v136 + 8);
              if ( v131 == (__int64 *)(v136 + 8) )
                return 0;
            }
          }
          else
          {
            v67 = (__int64 *)v64;
            while ( 1 )
            {
              a2 = v63;
              if ( (unsigned __int8)sub_A7F390(a1, v63, *v67, v61, v62, v65) )
                break;
              if ( v131 == ++v67 )
                return 0;
            }
          }
          if ( v142 == ++v139 )
            goto LABEL_44;
        }
      }
    }
    return 0;
  }
  if ( *(_BYTE *)(sub_A5E7C0(a3, a2, v36, v38, v39) + 19) >> 2 )
  {
    v98 = sub_A5E9B0(a2, a2, v40, v41, v42);
    v148 = (__int64 *)v99;
    v144 = (__int64 *)v98;
    if ( v98 == v99 )
      return v11;
    while ( 1 )
    {
      v133 = *v144;
      v102 = sub_A5E9B0(a3, a2, v99, v100, v101);
      v137 = (__int64 *)v103;
      if ( v102 == v103 )
      {
LABEL_80:
        v112 = sub_A5E7C0(a3, a2, v103, (__int64)v104, v105);
        v134 = sub_9C7D40(v112, a2, v113, v114, v115);
        if ( !v134 )
          return 0;
        v119 = sub_A5E9B0(v6, a2, v116, v117, v118);
        v138 = v120;
        if ( v120 == (__int64 *)v119 )
          return 0;
        v140 = 0;
      }
      else
      {
        if ( v7 )
        {
          v104 = (__int64 *)v102;
          while ( 1 )
          {
            v123 = *v104;
            a2 = v133;
            v141 = (__int64)v104;
            v124 = sub_A7F390(a1, v133, *v104, (__int64)v104, v105, v106);
            v104 = (__int64 *)v141;
            if ( v124 )
              break;
            a2 = v123;
            v122 = sub_A7F390(a1, v123, v133, v141, v105, v125);
            v104 = (__int64 *)v141;
            if ( v122 )
              break;
            v104 = (__int64 *)(v141 + 8);
            if ( v137 == (__int64 *)(v141 + 8) )
              goto LABEL_80;
          }
        }
        else
        {
          v107 = (__int64 *)v102;
          while ( 1 )
          {
            a2 = v133;
            if ( (unsigned __int8)sub_A7F390(a1, v133, *v107, (__int64)v104, v105, v106) )
              break;
            if ( v137 == ++v107 )
              goto LABEL_80;
          }
        }
        v108 = sub_A5E7C0(a3, a2, v103, (__int64)v104, v105);
        v134 = sub_9C7D40(v108, a2, v109, v110, v111);
        if ( !v134 )
          goto LABEL_78;
        v119 = sub_A5E9B0(v6, a2, v99, v100, v101);
        v138 = (__int64 *)v99;
        if ( v119 == v99 )
          goto LABEL_78;
        v140 = v11;
      }
      v121 = (__int64 *)v119;
      while ( 1 )
      {
        a2 = *v121;
        if ( (unsigned __int8)sub_BAE190(v134, *v121, 1, 0) )
          break;
        if ( v138 == ++v121 )
        {
          if ( v140 )
            break;
          return 0;
        }
      }
LABEL_78:
      if ( v148 == ++v144 )
        return v11;
    }
  }
  v43 = sub_A5E7C0(a3, a2, v40, v41, v42);
  v50 = sub_9C7D40(v43, a2, v44, v45, v46);
  if ( v50 )
  {
    v51 = sub_A5E9B0(a2, a2, v47, v48, v49);
    v53 = v52;
    v54 = (_QWORD *)v51;
    if ( (_QWORD *)v51 == v52 )
      return v11;
    while ( (unsigned __int8)sub_BAE190(v50, *v54, 1, 0) )
    {
      if ( v53 == ++v54 )
        return v11;
    }
    return 0;
  }
  return 1;
}
