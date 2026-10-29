unsigned __int64 __fastcall set_switch_info(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r15
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v6; // r12
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  size_t v9; // r12
  __int64 v10; // r13
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  size_t v13; // r13
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  size_t v17; // r13
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 v20; // rax
  size_t v21; // r13
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  size_t v25; // r13
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r10
  __int64 v28; // rax
  size_t v29; // r13
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  size_t v33; // r13
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rax
  size_t v38; // r13
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r10
  __int64 v41; // rax
  size_t v42; // r13
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // r10
  __int64 v45; // rax
  char v46; // r13
  _BYTE *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rax
  size_t v50; // r13
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // r10
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // r9
  unsigned int v57; // ebx
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v62; // rax
  size_t v63; // r14
  __int64 v64; // r13
  unsigned __int64 v65; // r9
  char *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  size_t v69; // r14
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // r9
  unsigned __int64 v74; // r11
  unsigned __int64 v75; // r8
  _BOOL8 v76; // rax
  char *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // r13
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // r9
  size_t v83; // r8
  unsigned __int64 v84; // r11
  _BOOL8 v85; // rax
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
  char *v106; // rsi
  __int64 v107; // rax
  __int64 v108; // r13
  unsigned __int64 v109; // r9
  char *v110; // rsi
  __int64 v111; // rax
  char *v112; // rsi
  __int64 v113; // rax
  char *v114; // rax
  __int64 v115; // rax
  size_t v116; // r12
  __int64 v117; // rbx
  unsigned __int64 v118; // r13
  char *v119; // rsi
  __int64 v120; // rax
  unsigned __int64 v121; // [rsp+0h] [rbp-B8h]
  __int64 v122; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v123; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v125; // [rsp+20h] [rbp-98h]
  size_t v126; // [rsp+28h] [rbp-90h]
  __int64 v127; // [rsp+30h] [rbp-88h]
  char *v128; // [rsp+38h] [rbp-80h]
  char v129; // [rsp+4Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int128 v131; // [rsp+58h] [rbp-60h]
  _BYTE v132[3]; // [rsp+6Bh] [rbp-4Dh] BYREF
  _BYTE src[3]; // [rsp+6Eh] [rbp-4Ah] BYREF
  char v134[2]; // [rsp+71h] [rbp-47h] BYREF
  _BYTE v135[5]; // [rsp+73h] [rbp-45h] BYREF
  _QWORD v136[8]; // [rsp+78h] [rbp-40h] BYREF

  v122 = a1;
  v2 = qword_2CCB598;
  v136[0] = __readfsqword(0x28u);
  sub_59D760(qword_2CCB598, a1);
  ptr = nullptr;
  v131 = 0;
  v4 = pack_dd(src, v135, *a2) - (_QWORD)src;
  v5 = v4;
  if ( v4 )
  {
    v6 = v131;
    v7 = v131 + v4;
    if ( __CFADD__((_QWORD)v131, v4) )
    {
      if ( (unsigned __int64)v131 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((char *)ptr + v6, src, v5);
        goto LABEL_7;
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v106 = (char *)ptr;
    v107 = v131;
    if ( *((_QWORD *)&v131 + 1) < v7 )
    {
      v121 = v7;
      ptr = (void *)qvector_reserve(&ptr, ptr, v7, 1);
      v106 = (char *)ptr;
      v7 = v121;
      v107 = v131;
    }
    v121 = v7;
    memset(&v106[v107], 0, v7 - v107);
    *(_QWORD *)&v131 = v121;
    goto LABEL_6;
  }
LABEL_7:
  v8 = pack_dw(src, v134, *((unsigned __int16 *)a2 + 2)) - (_QWORD)src;
  v9 = v8;
  if ( !v8 )
    goto LABEL_13;
  v10 = v131;
  v11 = v131 + v8;
  if ( !__CFADD__((_QWORD)v131, v8) )
    goto LABEL_115;
  if ( (unsigned __int64)v131 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_115:
    v86 = (char *)ptr;
    v87 = v131;
    if ( *((_QWORD *)&v131 + 1) < v11 )
    {
      v121 = v11;
      ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
      v86 = (char *)ptr;
      v11 = v121;
      v87 = v131;
    }
    v121 = v11;
    memset(&v86[v87], 0, v11 - v87);
    *(_QWORD *)&v131 = v121;
    goto LABEL_12;
  }
  if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((char *)ptr + v10, src, v9);
LABEL_13:
  v12 = pack_dq(src, v136, *((_QWORD *)a2 + 1)) - (_QWORD)src;
  v13 = v12;
  if ( !v12 )
    goto LABEL_19;
  v14 = v131;
  v15 = v131 + v12;
  if ( !__CFADD__((_QWORD)v131, v12) )
    goto LABEL_119;
  if ( (unsigned __int64)v131 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v15 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_119:
    v88 = (char *)ptr;
    v89 = v131;
    if ( *((_QWORD *)&v131 + 1) < v15 )
    {
      v121 = v15;
      v123 = v131;
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v88 = (char *)ptr;
      v14 = v123;
      v89 = v131;
      v15 = v121;
    }
    v123 = v14;
    v121 = v15;
    memset(&v88[v89], 0, v15 - v89);
    v14 = v123;
    *(_QWORD *)&v131 = v121;
    goto LABEL_18;
  }
  if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
  memcpy((char *)ptr + v14, src, v13);
LABEL_19:
  v16 = pack_dq(src, v136, *((_QWORD *)a2 + 2)) - (_QWORD)src;
  v17 = v16;
  if ( !v16 )
    goto LABEL_25;
  v18 = v131;
  v19 = v131 + v16;
  if ( !__CFADD__((_QWORD)v131, v16) )
    goto LABEL_127;
  if ( (unsigned __int64)v131 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v19 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_127:
    v92 = (char *)ptr;
    v93 = v131;
    if ( *((_QWORD *)&v131 + 1) < v19 )
    {
      v121 = v19;
      v123 = v131;
      ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
      v92 = (char *)ptr;
      v18 = v123;
      v93 = v131;
      v19 = v121;
    }
    v123 = v18;
    v121 = v19;
    memset(&v92[v93], 0, v19 - v93);
    v18 = v123;
    *(_QWORD *)&v131 = v121;
    goto LABEL_24;
  }
  if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_24:
  memcpy((char *)ptr + v18, src, v17);
LABEL_25:
  v20 = pack_dq(src, v136, *((_QWORD *)a2 + 3)) - (_QWORD)src;
  v21 = v20;
  if ( !v20 )
    goto LABEL_31;
  v22 = v131;
  v23 = v131 + v20;
  if ( !__CFADD__((_QWORD)v131, v20) )
    goto LABEL_123;
  if ( (unsigned __int64)v131 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_123:
    v90 = (char *)ptr;
    v91 = v131;
    if ( *((_QWORD *)&v131 + 1) < v23 )
    {
      v121 = v23;
      v123 = v131;
      ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
      v90 = (char *)ptr;
      v22 = v123;
      v91 = v131;
      v23 = v121;
    }
    v123 = v22;
    v121 = v23;
    memset(&v90[v91], 0, v23 - v91);
    v22 = v123;
    *(_QWORD *)&v131 = v121;
    goto LABEL_30;
  }
  if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_30:
  memcpy((char *)ptr + v22, src, v21);
LABEL_31:
  v24 = pack_dq(src, v136, *((_QWORD *)a2 + 4)) - (_QWORD)src;
  v25 = v24;
  if ( !v24 )
    goto LABEL_37;
  v26 = v131;
  v27 = v131 + v24;
  if ( !__CFADD__((_QWORD)v131, v24) )
    goto LABEL_143;
  if ( (unsigned __int64)v131 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v27 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_143:
    v100 = (char *)ptr;
    v101 = v131;
    if ( *((_QWORD *)&v131 + 1) < v27 )
    {
      v121 = v27;
      v123 = v131;
      ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
      v100 = (char *)ptr;
      v26 = v123;
      v101 = v131;
      v27 = v121;
    }
    v123 = v26;
    v121 = v27;
    memset(&v100[v101], 0, v27 - v101);
    v26 = v123;
    *(_QWORD *)&v131 = v121;
    goto LABEL_36;
  }
  if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_36:
  memcpy((char *)ptr + v26, src, v25);
LABEL_37:
  v28 = pack_dd(src, v135, a2[10]) - (_QWORD)src;
  v29 = v28;
  if ( !v28 )
    goto LABEL_43;
  v30 = v131;
  v31 = v131 + v28;
  if ( !__CFADD__((_QWORD)v131, v28) )
    goto LABEL_135;
  if ( (unsigned __int64)v131 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v31 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_135:
    v96 = (char *)ptr;
    v97 = v131;
    if ( *((_QWORD *)&v131 + 1) < v31 )
    {
      v121 = v31;
      v123 = v131;
      ptr = (void *)qvector_reserve(&ptr, ptr, v31, 1);
      v96 = (char *)ptr;
      v30 = v123;
      v97 = v131;
      v31 = v121;
    }
    v123 = v30;
    v121 = v31;
    memset(&v96[v97], 0, v31 - v97);
    v30 = v123;
    *(_QWORD *)&v131 = v121;
    goto LABEL_42;
  }
  if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_42:
  memcpy((char *)ptr + v30, src, v29);
LABEL_43:
  v32 = pack_dq(src, v136, *((_QWORD *)a2 + 6)) - (_QWORD)src;
  v33 = v32;
  if ( !v32 )
    goto LABEL_49;
  v34 = v131;
  v35 = v131 + v32;
  if ( !__CFADD__((_QWORD)v131, v32) )
    goto LABEL_151;
  if ( (unsigned __int64)v131 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v35 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_151:
    v104 = (char *)ptr;
    v105 = v131;
    if ( *((_QWORD *)&v131 + 1) < v35 )
    {
      v121 = v35;
      v123 = v131;
      ptr = (void *)qvector_reserve(&ptr, ptr, v35, 1);
      v104 = (char *)ptr;
      v34 = v123;
      v105 = v131;
      v35 = v121;
    }
    v123 = v34;
    v121 = v35;
    memset(&v104[v105], 0, v35 - v105);
    v34 = v123;
    *(_QWORD *)&v131 = v121;
    goto LABEL_48;
  }
  if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_48:
  memcpy((char *)ptr + v34, src, v33);
LABEL_49:
  v36 = 0;
  if ( (*((_BYTE *)a2 + 1) & 2) != 0 )
    v36 = *((_QWORD *)a2 + 7);
  v37 = pack_dq(src, v136, v36) - (_QWORD)src;
  v38 = v37;
  if ( v37 )
  {
    v39 = v131;
    v40 = v131 + v37;
    if ( __CFADD__((_QWORD)v131, v37) )
    {
      if ( (unsigned __int64)v131 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_56:
        memcpy((char *)ptr + v39, src, v38);
        goto LABEL_57;
      }
      v40 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v94 = (char *)ptr;
    v95 = v131;
    if ( *((_QWORD *)&v131 + 1) < v40 )
    {
      v121 = v40;
      v123 = v131;
      ptr = (void *)qvector_reserve(&ptr, ptr, v40, 1);
      v94 = (char *)ptr;
      v39 = v123;
      v95 = v131;
      v40 = v121;
    }
    v123 = v39;
    v121 = v40;
    memset(&v94[v95], 0, v40 - v95);
    v39 = v123;
    *(_QWORD *)&v131 = v121;
    goto LABEL_56;
  }
LABEL_57:
  v41 = pack_dd(src, v135, a2[16]) - (_QWORD)src;
  v42 = v41;
  if ( !v41 )
    goto LABEL_63;
  v43 = v131;
  v44 = v131 + v41;
  if ( !__CFADD__((_QWORD)v131, v41) )
    goto LABEL_147;
  if ( (unsigned __int64)v131 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v44 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_147:
    v102 = (char *)ptr;
    v103 = v131;
    if ( *((_QWORD *)&v131 + 1) < v44 )
    {
      v121 = v44;
      v123 = v131;
      ptr = (void *)qvector_reserve(&ptr, ptr, v44, 1);
      v102 = (char *)ptr;
      v43 = v123;
      v103 = v131;
      v44 = v121;
    }
    v123 = v43;
    v121 = v44;
    memset(&v102[v103], 0, v44 - v103);
    v43 = v123;
    *(_QWORD *)&v131 = v121;
    goto LABEL_62;
  }
  if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_62:
  memcpy((char *)ptr + v43, src, v42);
LABEL_63:
  v45 = v131;
  v46 = *((_BYTE *)a2 + 68);
  v47 = ptr;
  if ( *((_QWORD *)&v131 + 1) < (unsigned __int64)(v131 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v131 + 1, 1);
    v47 = ptr;
    v45 = v131;
  }
  v47[v45] = v46;
  v48 = *((_QWORD *)a2 + 9);
  *(_QWORD *)&v131 = v131 + 1;
  v49 = pack_dq(src, v136, v48) - (_QWORD)src;
  v50 = v49;
  if ( v49 )
  {
    v51 = v131;
    v52 = v131 + v49;
    if ( __CFADD__((_QWORD)v131, v49) )
    {
      if ( (unsigned __int64)v131 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_70:
        memcpy((char *)ptr + v51, src, v50);
        goto LABEL_71;
      }
      v52 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v98 = (char *)ptr;
    v99 = v131;
    if ( *((_QWORD *)&v131 + 1) < v52 )
    {
      v121 = v52;
      v123 = v131;
      ptr = (void *)qvector_reserve(&ptr, ptr, v52, 1);
      v98 = (char *)ptr;
      v51 = v123;
      v99 = v131;
      v52 = v121;
    }
    v123 = v51;
    v121 = v52;
    memset(&v98[v99], 0, v52 - v99);
    v51 = v123;
    *(_QWORD *)&v131 = v121;
    goto LABEL_70;
  }
LABEL_71:
  if ( *((char *)a2 + 2) >= 0 )
    goto LABEL_73;
  v53 = a2[20];
  if ( (int)v53 <= 1 )
    goto LABEL_73;
  v62 = pack_dd(src, v135, v53) - (_QWORD)src;
  v63 = v62;
  if ( v62 )
  {
    v64 = v131;
    v65 = v131 + v62;
    if ( __CFADD__((_QWORD)v131, v62) )
    {
      if ( (unsigned __int64)v131 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_90;
      }
      v65 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v66 = (char *)ptr;
    v67 = v131;
    if ( *((_QWORD *)&v131 + 1) < v65 )
    {
      v121 = v65;
      ptr = (void *)qvector_reserve(&ptr, ptr, v65, 1);
      v66 = (char *)ptr;
      v65 = v121;
      v67 = v131;
    }
    v121 = v65;
    memset(&v66[v67], 0, v65 - v67);
    *(_QWORD *)&v131 = v121;
LABEL_90:
    memcpy((char *)ptr + v64, src, v63);
  }
  v68 = pack_dq(src, v136, *((_QWORD *)a2 + 11) + 1LL) - (_QWORD)src;
  v69 = v68;
  if ( !v68 )
    goto LABEL_92;
  v108 = v131;
  v109 = v131 + v68;
  if ( __CFADD__((_QWORD)v131, v68) )
  {
    if ( (unsigned __int64)v131 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_162;
    }
    v109 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v110 = (char *)ptr;
  v111 = v131;
  if ( *((_QWORD *)&v131 + 1) < v109 )
  {
    v121 = v109;
    ptr = (void *)qvector_reserve(&ptr, ptr, v109, 1);
    v110 = (char *)ptr;
    v109 = v121;
    v111 = v131;
  }
  v121 = v109;
  memset(&v110[v111], 0, v109 - v111);
  *(_QWORD *)&v131 = v121;
LABEL_162:
  memcpy((char *)ptr + v108, src, v69);
LABEL_92:
  v70 = *((_QWORD *)a2 + 4);
  v121 = v131;
  if ( (unsigned __int64)(v131 + 1) > 0x400 )
    goto LABEL_74;
  v71 = 0xFFFF;
  v125 = *((_QWORD *)a2 + 13);
  if ( v125 <= 0xFFFF )
    v71 = v125;
  v128 = (char *)ptr;
  v123 = v71;
  v72 = pack_dw(src, v136, (unsigned int)v71);
  v73 = v131;
  v74 = v125;
  n = v72 - (_QWORD)src;
  v75 = v131 + v72 - (_QWORD)src;
  v76 = __CFADD__((_QWORD)v131, v72 - (_QWORD)src);
  if ( (unsigned __int64)v131 + n > 0x400 )
  {
    v115 = pack_dw(v132, src, 0) - (_QWORD)v132;
    v116 = v115;
    if ( !v115 )
    {
LABEL_73:
      v121 = v131;
      goto LABEL_74;
    }
    v117 = v131;
    v118 = v131 + v115;
    if ( __CFADD__((_QWORD)v131, v115) )
    {
      if ( (unsigned __int64)v131 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_182;
      }
      v118 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v119 = (char *)ptr;
    v120 = v131;
    if ( *((_QWORD *)&v131 + 1) < v118 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v118, 1);
      v119 = (char *)ptr;
      v120 = v131;
    }
    memset(&v119[v120], 0, v118 - v120);
    *(_QWORD *)&v131 = v118;
LABEL_182:
    memcpy((char *)ptr + v117, v132, v116);
    goto LABEL_73;
  }
  if ( !n )
    goto LABEL_103;
  if ( v76 )
  {
    if ( (unsigned __int64)v131 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_102;
    }
    v75 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_99;
  }
  if ( (unsigned __int64)v131 < v75 )
  {
LABEL_99:
    v77 = (char *)ptr;
    v78 = v131;
    if ( *((_QWORD *)&v131 + 1) < v75 )
    {
      v127 = v131;
      v126 = v125;
      v125 = v75;
      ptr = (void *)qvector_reserve(&ptr, ptr, v75, 1);
      v77 = (char *)ptr;
      v73 = v127;
      v78 = v131;
      v74 = v126;
      v75 = v125;
    }
    v127 = v73;
    v126 = v74;
    v125 = v75;
    memset(&v77[v78], 0, v75 - v78);
    v74 = v126;
    v73 = v127;
    *(_QWORD *)&v131 = v125;
  }
LABEL_102:
  v125 = v74;
  memcpy((char *)ptr + v73, src, n);
  v74 = v125;
LABEL_103:
  v79 = 0;
  if ( !v74 )
    goto LABEL_73;
  while ( 1 )
  {
    v80 = v70;
    v70 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 8 * v79);
    v81 = pack_dq(src, v136, v70 - v80);
    v82 = v131;
    v83 = v81 - (_QWORD)src;
    v84 = v131 + v83;
    v85 = __CFADD__((_QWORD)v131, v81 - (_QWORD)src);
    if ( (unsigned __int64)v131 + v83 > 0x400 )
      break;
    if ( !v83 )
      goto LABEL_107;
    if ( v85 )
    {
      if ( (unsigned __int64)v131 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v84 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_164:
        v112 = (char *)ptr;
        v113 = v131;
        if ( *((_QWORD *)&v131 + 1) < v84 )
        {
          v127 = v131;
          v126 = v83;
          v125 = v84;
          ptr = (void *)qvector_reserve(&ptr, ptr, v84, 1);
          v112 = (char *)ptr;
          v82 = v127;
          v113 = v131;
          v83 = v126;
          v84 = v125;
        }
        v127 = v82;
        v126 = v83;
        v125 = v84;
        memset(&v112[v113], 0, v84 - v113);
        v83 = v126;
        v82 = v127;
        *(_QWORD *)&v131 = v125;
        goto LABEL_106;
      }
      if ( (_QWORD)v131 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v131 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else if ( (unsigned __int64)v131 < v84 )
    {
      goto LABEL_164;
    }
LABEL_106:
    memcpy((char *)ptr + v82, src, v83);
LABEL_107:
    if ( ++v79 >= v123 )
      goto LABEL_73;
  }
  v114 = &v128[v121];
  if ( n == 1 )
  {
    *v114 = v79;
    v121 = v131;
  }
  else
  {
    if ( n == 2 )
    {
      v114[1] = v79;
      *v114 = BYTE1(v79) | 0x80;
    }
    else
    {
      *(_WORD *)(v114 + 1) = __ROL2__(v79, 8);
    }
    v121 = v131;
  }
LABEL_74:
  if ( v121 > 0x400 )
  {
    if ( !under_debugger )
      interr(1505);
    BUG();
  }
  v54 = ea2node(v122);
  netnode_supset(v54, 8, ptr, v131, 83, v55);
  if ( *((char *)a2 + 2) < 0 && (int)a2[20] > 1 && *((_QWORD *)a2 + 13) )
  {
    v57 = 0;
    v58 = 0;
    do
    {
      v59 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 8 * v58);
      if ( v59 != -1 )
      {
        v60 = *(_QWORD *)(v2 + 632);
        v129 = 3;
        netnode_supset(*(_QWORD *)(v60 + 104), v59, &v129, 1, 256, v56);
      }
      v58 = ++v57;
    }
    while ( (unsigned __int64)v57 < *((_QWORD *)a2 + 13) );
  }
  if ( ptr )
  {
    *(_QWORD *)&v131 = 0;
    qfree(ptr);
  }
  return v136[0] - __readfsqword(0x28u);
}
