unsigned __int64 __fastcall set_switch_info(unsigned int a1, unsigned int *a2)
{
  __int64 v2; // r15
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v6; // r14
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  size_t v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  size_t v13; // r14
  __int64 v14; // r13
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  size_t v17; // r14
  __int64 v18; // r13
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  size_t v21; // r14
  __int64 v22; // r13
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  size_t v25; // r14
  __int64 v26; // r13
  unsigned __int64 v27; // r9
  __int64 v28; // rax
  size_t v29; // r14
  __int64 v30; // r13
  unsigned __int64 v31; // r9
  __int64 v32; // rax
  size_t v33; // r14
  __int64 v34; // r13
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rax
  size_t v38; // r14
  __int64 v39; // r13
  unsigned __int64 v40; // r9
  __int64 v41; // rax
  size_t v42; // r14
  __int64 v43; // r13
  unsigned __int64 v44; // r9
  __int64 v45; // rax
  char v46; // r14
  _BYTE *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rax
  size_t v50; // r14
  __int64 v51; // r13
  unsigned __int64 v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // eax
  unsigned int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v60; // rax
  size_t v61; // r14
  __int64 v62; // r13
  unsigned __int64 v63; // r9
  char *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rax
  size_t v67; // r14
  unsigned int v68; // r14d
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // r9
  unsigned __int64 v72; // r11
  unsigned __int64 v73; // r8
  _BOOL8 v74; // rax
  char *v75; // rsi
  __int64 v76; // rax
  __int64 v77; // r13
  unsigned int v78; // eax
  __int64 v79; // rax
  __int64 v80; // r9
  size_t v81; // r8
  unsigned __int64 v82; // r11
  _BOOL8 v83; // rax
  char *v84; // rsi
  __int64 v85; // rax
  char *v86; // rsi
  __int64 v87; // rax
  char *v88; // rsi
  __int64 v89; // rax
  char *v90; // rsi
  __int64 v91; // rax
  char *v92; // rsi
  __int64 v93; // rax
  char *v94; // rsi
  __int64 v95; // rax
  char *v96; // rsi
  __int64 v97; // rax
  char *v98; // rsi
  __int64 v99; // rax
  char *v100; // rsi
  __int64 v101; // rax
  char *v102; // rsi
  __int64 v103; // rax
  char *v104; // rsi
  __int64 v105; // rax
  __int64 v106; // r13
  unsigned __int64 v107; // r9
  char *v108; // rsi
  __int64 v109; // rax
  char *v110; // rsi
  __int64 v111; // rax
  char *v112; // rax
  __int64 v113; // rax
  size_t v114; // r12
  __int64 v115; // rbx
  unsigned __int64 v116; // r13
  char *v117; // rsi
  __int64 v118; // rax
  unsigned __int64 v119; // [rsp+0h] [rbp-B8h]
  unsigned int v120; // [rsp+Ch] [rbp-ACh]
  unsigned __int64 v121; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v123; // [rsp+20h] [rbp-98h]
  size_t v124; // [rsp+28h] [rbp-90h]
  __int64 v125; // [rsp+30h] [rbp-88h]
  char *v126; // [rsp+38h] [rbp-80h]
  char v127; // [rsp+4Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int128 v129; // [rsp+58h] [rbp-60h]
  _BYTE v130[3]; // [rsp+70h] [rbp-48h] BYREF
  _BYTE src[3]; // [rsp+73h] [rbp-45h] BYREF
  char v132[2]; // [rsp+76h] [rbp-42h] BYREF
  _QWORD v133[8]; // [rsp+78h] [rbp-40h] BYREF

  v120 = a1;
  v2 = qword_2CA1698;
  v133[0] = __readfsqword(0x28u);
  sub_583850(qword_2CA1698, a1);
  ptr = nullptr;
  v129 = 0;
  v4 = pack_dd(src, v133, *a2) - (_QWORD)src;
  v5 = v4;
  if ( v4 )
  {
    v6 = v129;
    v7 = v129 + v4;
    if ( __CFADD__((_QWORD)v129, v4) )
    {
      if ( (unsigned __int64)v129 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((char *)ptr + v6, src, v5);
        goto LABEL_7;
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v104 = (char *)ptr;
    v105 = v129;
    if ( *((_QWORD *)&v129 + 1) < v7 )
    {
      v119 = v7;
      ptr = (void *)qvector_reserve(&ptr, ptr, v7, 1);
      v104 = (char *)ptr;
      v7 = v119;
      v105 = v129;
    }
    v119 = v7;
    memset(&v104[v105], 0, v7 - v105);
    *(_QWORD *)&v129 = v119;
    goto LABEL_6;
  }
LABEL_7:
  v8 = pack_dw(src, v132, *((unsigned __int16 *)a2 + 2)) - (_QWORD)src;
  v9 = v8;
  if ( !v8 )
    goto LABEL_13;
  v10 = v129;
  v11 = v129 + v8;
  if ( !__CFADD__((_QWORD)v129, v8) )
    goto LABEL_115;
  if ( (unsigned __int64)v129 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_115:
    v84 = (char *)ptr;
    v85 = v129;
    if ( *((_QWORD *)&v129 + 1) < v11 )
    {
      v119 = v11;
      ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
      v84 = (char *)ptr;
      v11 = v119;
      v85 = v129;
    }
    v119 = v11;
    memset(&v84[v85], 0, v11 - v85);
    *(_QWORD *)&v129 = v119;
    goto LABEL_12;
  }
  if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((char *)ptr + v10, src, v9);
LABEL_13:
  v12 = pack_dd(src, v133, a2[2]) - (_QWORD)src;
  v13 = v12;
  if ( !v12 )
    goto LABEL_19;
  v14 = v129;
  v15 = v129 + v12;
  if ( !__CFADD__((_QWORD)v129, v12) )
    goto LABEL_119;
  if ( (unsigned __int64)v129 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v15 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_119:
    v86 = (char *)ptr;
    v87 = v129;
    if ( *((_QWORD *)&v129 + 1) < v15 )
    {
      v119 = v15;
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v86 = (char *)ptr;
      v15 = v119;
      v87 = v129;
    }
    v119 = v15;
    memset(&v86[v87], 0, v15 - v87);
    *(_QWORD *)&v129 = v119;
    goto LABEL_18;
  }
  if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
  memcpy((char *)ptr + v14, src, v13);
LABEL_19:
  v16 = pack_dd(src, v133, a2[3]) - (_QWORD)src;
  v17 = v16;
  if ( !v16 )
    goto LABEL_25;
  v18 = v129;
  v19 = v129 + v16;
  if ( !__CFADD__((_QWORD)v129, v16) )
    goto LABEL_127;
  if ( (unsigned __int64)v129 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v19 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_127:
    v90 = (char *)ptr;
    v91 = v129;
    if ( *((_QWORD *)&v129 + 1) < v19 )
    {
      v119 = v19;
      ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
      v90 = (char *)ptr;
      v19 = v119;
      v91 = v129;
    }
    v119 = v19;
    memset(&v90[v91], 0, v19 - v91);
    *(_QWORD *)&v129 = v119;
    goto LABEL_24;
  }
  if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_24:
  memcpy((char *)ptr + v18, src, v17);
LABEL_25:
  v20 = pack_dd(src, v133, a2[4]) - (_QWORD)src;
  v21 = v20;
  if ( !v20 )
    goto LABEL_31;
  v22 = v129;
  v23 = v129 + v20;
  if ( !__CFADD__((_QWORD)v129, v20) )
    goto LABEL_123;
  if ( (unsigned __int64)v129 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_123:
    v88 = (char *)ptr;
    v89 = v129;
    if ( *((_QWORD *)&v129 + 1) < v23 )
    {
      v119 = v23;
      ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
      v88 = (char *)ptr;
      v23 = v119;
      v89 = v129;
    }
    v119 = v23;
    memset(&v88[v89], 0, v23 - v89);
    *(_QWORD *)&v129 = v119;
    goto LABEL_30;
  }
  if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_30:
  memcpy((char *)ptr + v22, src, v21);
LABEL_31:
  v24 = pack_dd(src, v133, a2[5]) - (_QWORD)src;
  v25 = v24;
  if ( !v24 )
    goto LABEL_37;
  v26 = v129;
  v27 = v129 + v24;
  if ( !__CFADD__((_QWORD)v129, v24) )
    goto LABEL_143;
  if ( (unsigned __int64)v129 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v27 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_143:
    v98 = (char *)ptr;
    v99 = v129;
    if ( *((_QWORD *)&v129 + 1) < v27 )
    {
      v119 = v27;
      ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
      v98 = (char *)ptr;
      v27 = v119;
      v99 = v129;
    }
    v119 = v27;
    memset(&v98[v99], 0, v27 - v99);
    *(_QWORD *)&v129 = v119;
    goto LABEL_36;
  }
  if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_36:
  memcpy((char *)ptr + v26, src, v25);
LABEL_37:
  v28 = pack_dd(src, v133, a2[6]) - (_QWORD)src;
  v29 = v28;
  if ( !v28 )
    goto LABEL_43;
  v30 = v129;
  v31 = v129 + v28;
  if ( !__CFADD__((_QWORD)v129, v28) )
    goto LABEL_135;
  if ( (unsigned __int64)v129 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v31 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_135:
    v94 = (char *)ptr;
    v95 = v129;
    if ( *((_QWORD *)&v129 + 1) < v31 )
    {
      v119 = v31;
      ptr = (void *)qvector_reserve(&ptr, ptr, v31, 1);
      v94 = (char *)ptr;
      v31 = v119;
      v95 = v129;
    }
    v119 = v31;
    memset(&v94[v95], 0, v31 - v95);
    *(_QWORD *)&v129 = v119;
    goto LABEL_42;
  }
  if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_42:
  memcpy((char *)ptr + v30, src, v29);
LABEL_43:
  v32 = pack_dd(src, v133, a2[7]) - (_QWORD)src;
  v33 = v32;
  if ( !v32 )
    goto LABEL_49;
  v34 = v129;
  v35 = v129 + v32;
  if ( !__CFADD__((_QWORD)v129, v32) )
    goto LABEL_151;
  if ( (unsigned __int64)v129 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v35 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_151:
    v102 = (char *)ptr;
    v103 = v129;
    if ( *((_QWORD *)&v129 + 1) < v35 )
    {
      v119 = v35;
      ptr = (void *)qvector_reserve(&ptr, ptr, v35, 1);
      v102 = (char *)ptr;
      v35 = v119;
      v103 = v129;
    }
    v119 = v35;
    memset(&v102[v103], 0, v35 - v103);
    *(_QWORD *)&v129 = v119;
    goto LABEL_48;
  }
  if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_48:
  memcpy((char *)ptr + v34, src, v33);
LABEL_49:
  v36 = *a2 & 0x200;
  if ( (*a2 & 0x200) != 0 )
    v36 = a2[8];
  v37 = pack_dd(src, v133, v36) - (_QWORD)src;
  v38 = v37;
  if ( v37 )
  {
    v39 = v129;
    v40 = v129 + v37;
    if ( __CFADD__((_QWORD)v129, v37) )
    {
      if ( (unsigned __int64)v129 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_56:
        memcpy((char *)ptr + v39, src, v38);
        goto LABEL_57;
      }
      v40 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v92 = (char *)ptr;
    v93 = v129;
    if ( *((_QWORD *)&v129 + 1) < v40 )
    {
      v119 = v40;
      ptr = (void *)qvector_reserve(&ptr, ptr, v40, 1);
      v92 = (char *)ptr;
      v40 = v119;
      v93 = v129;
    }
    v119 = v40;
    memset(&v92[v93], 0, v40 - v93);
    *(_QWORD *)&v129 = v119;
    goto LABEL_56;
  }
LABEL_57:
  v41 = pack_dd(src, v133, a2[9]) - (_QWORD)src;
  v42 = v41;
  if ( !v41 )
    goto LABEL_63;
  v43 = v129;
  v44 = v129 + v41;
  if ( !__CFADD__((_QWORD)v129, v41) )
    goto LABEL_147;
  if ( (unsigned __int64)v129 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v44 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_147:
    v100 = (char *)ptr;
    v101 = v129;
    if ( *((_QWORD *)&v129 + 1) < v44 )
    {
      v119 = v44;
      ptr = (void *)qvector_reserve(&ptr, ptr, v44, 1);
      v100 = (char *)ptr;
      v44 = v119;
      v101 = v129;
    }
    v119 = v44;
    memset(&v100[v101], 0, v44 - v101);
    *(_QWORD *)&v129 = v119;
    goto LABEL_62;
  }
  if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_62:
  memcpy((char *)ptr + v43, src, v42);
LABEL_63:
  v45 = v129;
  v46 = *((_BYTE *)a2 + 40);
  v47 = ptr;
  if ( *((_QWORD *)&v129 + 1) < (unsigned __int64)(v129 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v129 + 1, 1);
    v47 = ptr;
    v45 = v129;
  }
  v47[v45] = v46;
  v48 = a2[11];
  *(_QWORD *)&v129 = v129 + 1;
  v49 = pack_dd(src, v133, v48) - (_QWORD)src;
  v50 = v49;
  if ( v49 )
  {
    v51 = v129;
    v52 = v129 + v49;
    if ( __CFADD__((_QWORD)v129, v49) )
    {
      if ( (unsigned __int64)v129 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_70:
        memcpy((char *)ptr + v51, src, v50);
        goto LABEL_71;
      }
      v52 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v96 = (char *)ptr;
    v97 = v129;
    if ( *((_QWORD *)&v129 + 1) < v52 )
    {
      v119 = v52;
      ptr = (void *)qvector_reserve(&ptr, ptr, v52, 1);
      v96 = (char *)ptr;
      v52 = v119;
      v97 = v129;
    }
    v119 = v52;
    memset(&v96[v97], 0, v52 - v97);
    *(_QWORD *)&v129 = v119;
    goto LABEL_70;
  }
LABEL_71:
  if ( *((char *)a2 + 2) >= 0 )
    goto LABEL_73;
  v53 = a2[12];
  if ( (int)v53 <= 1 )
    goto LABEL_73;
  v60 = pack_dd(src, v133, v53) - (_QWORD)src;
  v61 = v60;
  if ( v60 )
  {
    v62 = v129;
    v63 = v129 + v60;
    if ( __CFADD__((_QWORD)v129, v60) )
    {
      if ( (unsigned __int64)v129 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_90;
      }
      v63 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v64 = (char *)ptr;
    v65 = v129;
    if ( *((_QWORD *)&v129 + 1) < v63 )
    {
      v119 = v63;
      ptr = (void *)qvector_reserve(&ptr, ptr, v63, 1);
      v64 = (char *)ptr;
      v63 = v119;
      v65 = v129;
    }
    v119 = v63;
    memset(&v64[v65], 0, v63 - v65);
    *(_QWORD *)&v129 = v119;
LABEL_90:
    memcpy((char *)ptr + v62, src, v61);
  }
  v66 = pack_dd(src, v133, a2[13] + 1) - (_QWORD)src;
  v67 = v66;
  if ( !v66 )
    goto LABEL_92;
  v106 = v129;
  v107 = v129 + v66;
  if ( __CFADD__((_QWORD)v129, v66) )
  {
    if ( (unsigned __int64)v129 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_162;
    }
    v107 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v108 = (char *)ptr;
  v109 = v129;
  if ( *((_QWORD *)&v129 + 1) < v107 )
  {
    v119 = v107;
    ptr = (void *)qvector_reserve(&ptr, ptr, v107, 1);
    v108 = (char *)ptr;
    v107 = v119;
    v109 = v129;
  }
  v119 = v107;
  memset(&v108[v109], 0, v107 - v109);
  *(_QWORD *)&v129 = v119;
LABEL_162:
  memcpy((char *)ptr + v106, src, v67);
LABEL_92:
  v68 = a2[5];
  v119 = v129;
  if ( (unsigned __int64)(v129 + 1) > 0x400 )
    goto LABEL_74;
  v69 = 0xFFFF;
  v123 = *((_QWORD *)a2 + 8);
  if ( v123 <= 0xFFFF )
    v69 = v123;
  v126 = (char *)ptr;
  v121 = v69;
  v70 = pack_dw(src, v133, (unsigned int)v69);
  v71 = v129;
  v72 = v123;
  n = v70 - (_QWORD)src;
  v73 = v129 + v70 - (_QWORD)src;
  v74 = __CFADD__((_QWORD)v129, v70 - (_QWORD)src);
  if ( (unsigned __int64)v129 + n > 0x400 )
  {
    v113 = pack_dw(v130, src, 0) - (_QWORD)v130;
    v114 = v113;
    if ( !v113 )
    {
LABEL_73:
      v119 = v129;
      goto LABEL_74;
    }
    v115 = v129;
    v116 = v129 + v113;
    if ( __CFADD__((_QWORD)v129, v113) )
    {
      if ( (unsigned __int64)v129 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_182;
      }
      v116 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v117 = (char *)ptr;
    v118 = v129;
    if ( *((_QWORD *)&v129 + 1) < v116 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v116, 1);
      v117 = (char *)ptr;
      v118 = v129;
    }
    memset(&v117[v118], 0, v116 - v118);
    *(_QWORD *)&v129 = v116;
LABEL_182:
    memcpy((char *)ptr + v115, v130, v114);
    goto LABEL_73;
  }
  if ( !n )
    goto LABEL_103;
  if ( v74 )
  {
    if ( (unsigned __int64)v129 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_102;
    }
    v73 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_99;
  }
  if ( (unsigned __int64)v129 < v73 )
  {
LABEL_99:
    v75 = (char *)ptr;
    v76 = v129;
    if ( *((_QWORD *)&v129 + 1) < v73 )
    {
      v125 = v129;
      v124 = v123;
      v123 = v73;
      ptr = (void *)qvector_reserve(&ptr, ptr, v73, 1);
      v75 = (char *)ptr;
      v71 = v125;
      v76 = v129;
      v72 = v124;
      v73 = v123;
    }
    v125 = v71;
    v124 = v72;
    v123 = v73;
    memset(&v75[v76], 0, v73 - v76);
    v72 = v124;
    v71 = v125;
    *(_QWORD *)&v129 = v123;
  }
LABEL_102:
  v123 = v72;
  memcpy((char *)ptr + v71, src, n);
  v72 = v123;
LABEL_103:
  v77 = 0;
  if ( !v72 )
    goto LABEL_73;
  while ( 1 )
  {
    v78 = v68;
    v68 = *(_DWORD *)(*((_QWORD *)a2 + 7) + 4 * v77);
    v79 = pack_dd(src, v133, v68 - v78);
    v80 = v129;
    v81 = v79 - (_QWORD)src;
    v82 = v129 + v81;
    v83 = __CFADD__((_QWORD)v129, v79 - (_QWORD)src);
    if ( (unsigned __int64)v129 + v81 > 0x400 )
      break;
    if ( !v81 )
      goto LABEL_107;
    if ( v83 )
    {
      if ( (unsigned __int64)v129 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v82 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_164:
        v110 = (char *)ptr;
        v111 = v129;
        if ( *((_QWORD *)&v129 + 1) < v82 )
        {
          v125 = v129;
          v124 = v81;
          v123 = v82;
          ptr = (void *)qvector_reserve(&ptr, ptr, v82, 1);
          v110 = (char *)ptr;
          v80 = v125;
          v111 = v129;
          v81 = v124;
          v82 = v123;
        }
        v125 = v80;
        v124 = v81;
        v123 = v82;
        memset(&v110[v111], 0, v82 - v111);
        v81 = v124;
        v80 = v125;
        *(_QWORD *)&v129 = v123;
        goto LABEL_106;
      }
      if ( (_QWORD)v129 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v129 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else if ( (unsigned __int64)v129 < v82 )
    {
      goto LABEL_164;
    }
LABEL_106:
    memcpy((char *)ptr + v80, src, v81);
LABEL_107:
    if ( ++v77 >= v121 )
      goto LABEL_73;
  }
  v112 = &v126[v119];
  if ( n == 1 )
  {
    *v112 = v77;
    v119 = v129;
  }
  else
  {
    if ( n == 2 )
    {
      v112[1] = v77;
      *v112 = BYTE1(v77) | 0x80;
    }
    else
    {
      *(_WORD *)(v112 + 1) = __ROL2__(v77, 8);
    }
    v119 = v129;
  }
LABEL_74:
  if ( v119 > 0x400 )
  {
    if ( !under_debugger )
      interr(1505);
    BUG();
  }
  v54 = ea2node(v120);
  netnode_supset(v54, 8, ptr, v129, 83);
  if ( *((char *)a2 + 2) < 0 && (int)a2[12] > 1 && *((_QWORD *)a2 + 8) )
  {
    v55 = 0;
    v56 = 0;
    do
    {
      v57 = *(unsigned int *)(*((_QWORD *)a2 + 7) + 4 * v56);
      if ( (_DWORD)v57 != -1 )
      {
        v58 = *(_QWORD *)(v2 + 544);
        v127 = 3;
        netnode_supset(*(unsigned int *)(v58 + 104), v57, &v127, 1, 256);
      }
      v56 = ++v55;
    }
    while ( (unsigned __int64)v55 < *((_QWORD *)a2 + 8) );
  }
  if ( ptr )
  {
    *(_QWORD *)&v129 = 0;
    qfree(ptr);
  }
  return v133[0] - __readfsqword(0x28u);
}

