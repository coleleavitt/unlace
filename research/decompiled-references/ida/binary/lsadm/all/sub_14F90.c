unsigned __int64 __fastcall sub_14F90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, signed int a5)
{
  size_t v8; // rax
  __int64 v9; // rax
  size_t v10; // r15
  size_t v11; // r8
  unsigned __int64 v12; // r9
  char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // r15
  size_t v17; // r8
  unsigned __int64 v18; // r9
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // r15
  size_t v23; // r8
  unsigned __int64 v24; // r9
  char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // r15
  size_t v29; // r8
  unsigned __int64 v30; // r9
  char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  size_t v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // r10
  char *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  size_t v40; // r15
  size_t v41; // r8
  unsigned __int64 v42; // r9
  char *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  size_t v46; // r15
  size_t v47; // r8
  unsigned __int64 v48; // r9
  char *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  size_t v52; // r15
  size_t v53; // r8
  unsigned __int64 v54; // r9
  char *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  size_t v58; // r15
  size_t v59; // r8
  unsigned __int64 v60; // r9
  char *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // r15
  char *v64; // rsi
  __int64 *v65; // r8
  __int64 *v66; // r9
  __int64 v67; // rax
  char *v68; // rdx
  char *v69; // r15
  const char *v70; // r15
  size_t v71; // rax
  __int64 v72; // r8
  size_t v73; // r9
  unsigned __int64 v74; // r10
  char *v75; // rsi
  __int64 v76; // rax
  __int64 v77; // r15
  char *v78; // rsi
  __int64 *v79; // r8
  __m128i v80; // xmm0
  const char *v81; // rbp
  size_t v82; // rax
  __int64 v83; // r15
  size_t v84; // r8
  unsigned __int64 v85; // r9
  char *v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rsi
  char *v89; // rdi
  size_t v90; // r15
  _BYTE *v91; // rbp
  _BYTE *v92; // rsi
  __int64 *v93; // rdi
  size_t v94; // rax
  size_t v95; // r15
  const void *v96; // rbp
  size_t v97; // rax
  _QWORD *v98; // rbp
  size_t v99; // r13
  void *v100; // r15
  size_t v101; // rax
  char *v103; // rsi
  __int64 v104; // rax
  char *v105; // rdx
  __m128i v106; // xmm0
  char *v107; // rax
  char *v108; // rax
  __int64 *v109; // [rsp+8h] [rbp-B0h]
  __int64 v110; // [rsp+10h] [rbp-A8h]
  void **p_ptr; // [rsp+18h] [rbp-A0h]
  size_t n; // [rsp+20h] [rbp-98h]
  __int64 v113; // [rsp+28h] [rbp-90h]
  void *v114; // [rsp+30h] [rbp-88h] BYREF
  __int128 v115; // [rsp+38h] [rbp-80h]
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int128 v117; // [rsp+58h] [rbp-60h]
  _BYTE src[5]; // [rsp+6Eh] [rbp-4Ah] BYREF
  _BYTE v119[5]; // [rsp+73h] [rbp-45h] BYREF
  _QWORD v120[8]; // [rsp+78h] [rbp-40h] BYREF

  v109 = a1;
  v110 = a3;
  v120[0] = __readfsqword(0x28u);
  if ( a5 <= 1 )
  {
    if ( !byte_7BCA0 )
      sub_2A3D0(2998, a2);
    goto LABEL_149;
  }
  v8 = sub_28E10(src, v119) - (_QWORD)src;
  if ( v8 )
    sub_148F0(v109, src, v8);
  v114 = nullptr;
  v115 = 0;
  v9 = sub_28E10(src, v119) - (_QWORD)src;
  v10 = v9;
  if ( v9 )
  {
    v11 = v115;
    v12 = v115 + v9;
    if ( __CFADD__((_QWORD)v115, v9) )
    {
      if ( (unsigned __int64)v115 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_12;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = (char *)v114;
    v14 = v115;
    if ( *((_QWORD *)&v115 + 1) < v12 )
    {
      n = v115;
      p_ptr = (void **)v12;
      v114 = (void *)sub_29E60(&v114, v114, v12, 1);
      v13 = (char *)v114;
      v11 = n;
      v14 = v115;
      v12 = (unsigned __int64)p_ptr;
    }
    n = v11;
    p_ptr = (void **)v12;
    memset(&v13[v14], 0, v12 - v14);
    v11 = n;
    *(_QWORD *)&v115 = p_ptr;
LABEL_12:
    memcpy((char *)v114 + v11, src, v10);
  }
  v15 = sub_28E10(src, v119) - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_22;
  v17 = v115;
  v18 = v115 + v15;
  if ( __CFADD__((_QWORD)v115, v15) )
  {
    if ( (unsigned __int64)v115 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v19 = (char *)v114;
  v20 = v115;
  if ( *((_QWORD *)&v115 + 1) < v18 )
  {
    n = v115;
    p_ptr = (void **)v18;
    v114 = (void *)sub_29E60(&v114, v114, v18, 1);
    v19 = (char *)v114;
    v17 = n;
    v20 = v115;
    v18 = (unsigned __int64)p_ptr;
  }
  n = v17;
  p_ptr = (void **)v18;
  memset(&v19[v20], 0, v18 - v20);
  v17 = n;
  *(_QWORD *)&v115 = p_ptr;
LABEL_21:
  memcpy((char *)v114 + v17, src, v16);
LABEL_22:
  v21 = sub_28E10(src, v119) - (_QWORD)src;
  v22 = v21;
  if ( !v21 )
    goto LABEL_31;
  v23 = v115;
  v24 = v115 + v21;
  if ( __CFADD__((_QWORD)v115, v21) )
  {
    if ( (unsigned __int64)v115 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_30;
    }
    v24 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v25 = (char *)v114;
  v26 = v115;
  if ( *((_QWORD *)&v115 + 1) < v24 )
  {
    n = v115;
    p_ptr = (void **)v24;
    v114 = (void *)sub_29E60(&v114, v114, v24, 1);
    v25 = (char *)v114;
    v23 = n;
    v26 = v115;
    v24 = (unsigned __int64)p_ptr;
  }
  n = v23;
  p_ptr = (void **)v24;
  memset(&v25[v26], 0, v24 - v26);
  v23 = n;
  *(_QWORD *)&v115 = p_ptr;
LABEL_30:
  memcpy((char *)v114 + v23, src, v22);
LABEL_31:
  v27 = sub_28E10(src, v119) - (_QWORD)src;
  v28 = v27;
  if ( !v27 )
    goto LABEL_40;
  v29 = v115;
  v30 = v115 + v27;
  if ( __CFADD__((_QWORD)v115, v27) )
  {
    if ( (unsigned __int64)v115 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_39;
    }
    v30 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v31 = (char *)v114;
  v32 = v115;
  if ( *((_QWORD *)&v115 + 1) < v30 )
  {
    n = v115;
    p_ptr = (void **)v30;
    v114 = (void *)sub_29E60(&v114, v114, v30, 1);
    v31 = (char *)v114;
    v29 = n;
    v32 = v115;
    v30 = (unsigned __int64)p_ptr;
  }
  n = v29;
  p_ptr = (void **)v30;
  memset(&v31[v32], 0, v30 - v32);
  v29 = n;
  *(_QWORD *)&v115 = p_ptr;
LABEL_39:
  memcpy((char *)v114 + v29, src, v28);
LABEL_40:
  v33 = sub_28F50(src, v120, *(_QWORD *)(a2 + 8)) - (_QWORD)src;
  v34 = v33;
  if ( !v33 )
    goto LABEL_49;
  v35 = v115;
  v36 = v115 + v33;
  if ( __CFADD__((_QWORD)v115, v33) )
  {
    if ( (unsigned __int64)v115 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_48;
    }
    v36 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v37 = (char *)v114;
  v38 = v115;
  if ( *((_QWORD *)&v115 + 1) < v36 )
  {
    v113 = v115;
    n = v34;
    p_ptr = (void **)v36;
    v114 = (void *)sub_29E60(&v114, v114, v36, 1);
    v37 = (char *)v114;
    v35 = v113;
    v38 = v115;
    v34 = n;
    v36 = (unsigned __int64)p_ptr;
  }
  v113 = v35;
  n = v34;
  p_ptr = (void **)v36;
  memset(&v37[v38], 0, v36 - v38);
  v34 = n;
  v35 = v113;
  *(_QWORD *)&v115 = p_ptr;
LABEL_48:
  memcpy((char *)v114 + v35, src, v34);
LABEL_49:
  v39 = sub_28F50(src, v120, *(_QWORD *)(a2 + 103)) - (_QWORD)src;
  v40 = v39;
  if ( !v39 )
    goto LABEL_58;
  v41 = v115;
  v42 = v115 + v39;
  if ( __CFADD__((_QWORD)v115, v39) )
  {
    if ( (unsigned __int64)v115 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_57;
    }
    v42 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v43 = (char *)v114;
  v44 = v115;
  if ( *((_QWORD *)&v115 + 1) < v42 )
  {
    n = v115;
    p_ptr = (void **)v42;
    v114 = (void *)sub_29E60(&v114, v114, v42, 1);
    v43 = (char *)v114;
    v41 = n;
    v44 = v115;
    v42 = (unsigned __int64)p_ptr;
  }
  n = v41;
  p_ptr = (void **)v42;
  memset(&v43[v44], 0, v42 - v44);
  v41 = n;
  *(_QWORD *)&v115 = p_ptr;
LABEL_57:
  memcpy((char *)v114 + v41, src, v40);
LABEL_58:
  v45 = sub_28E10(src, v119) - (_QWORD)src;
  v46 = v45;
  if ( !v45 )
    goto LABEL_67;
  v47 = v115;
  v48 = v115 + v45;
  if ( __CFADD__((_QWORD)v115, v45) )
  {
    if ( (unsigned __int64)v115 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_66;
    }
    v48 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v49 = (char *)v114;
  v50 = v115;
  if ( *((_QWORD *)&v115 + 1) < v48 )
  {
    n = v115;
    p_ptr = (void **)v48;
    v114 = (void *)sub_29E60(&v114, v114, v48, 1);
    v49 = (char *)v114;
    v47 = n;
    v50 = v115;
    v48 = (unsigned __int64)p_ptr;
  }
  n = v47;
  p_ptr = (void **)v48;
  memset(&v49[v50], 0, v48 - v50);
  v47 = n;
  *(_QWORD *)&v115 = p_ptr;
LABEL_66:
  memcpy((char *)v114 + v47, src, v46);
LABEL_67:
  v51 = sub_28E10(src, v119) - (_QWORD)src;
  v52 = v51;
  if ( !v51 )
    goto LABEL_76;
  v53 = v115;
  v54 = v115 + v51;
  if ( __CFADD__((_QWORD)v115, v51) )
  {
    if ( (unsigned __int64)v115 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_75;
    }
    v54 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v55 = (char *)v114;
  v56 = v115;
  if ( *((_QWORD *)&v115 + 1) < v54 )
  {
    n = v115;
    p_ptr = (void **)v54;
    v114 = (void *)sub_29E60(&v114, v114, v54, 1);
    v55 = (char *)v114;
    v53 = n;
    v56 = v115;
    v54 = (unsigned __int64)p_ptr;
  }
  n = v53;
  p_ptr = (void **)v54;
  memset(&v55[v56], 0, v54 - v56);
  v53 = n;
  *(_QWORD *)&v115 = p_ptr;
LABEL_75:
  memcpy((char *)v114 + v53, src, v52);
LABEL_76:
  v57 = sub_28E10(src, v119) - (_QWORD)src;
  v58 = v57;
  if ( !v57 )
    goto LABEL_85;
  v59 = v115;
  v60 = v115 + v57;
  if ( __CFADD__((_QWORD)v115, v57) )
  {
    if ( (unsigned __int64)v115 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_84;
    }
    v60 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v61 = (char *)v114;
  v62 = v115;
  if ( *((_QWORD *)&v115 + 1) < v60 )
  {
    n = v115;
    p_ptr = (void **)v60;
    v114 = (void *)sub_29E60(&v114, v114, v60, 1);
    v61 = (char *)v114;
    v59 = n;
    v62 = v115;
    v60 = (unsigned __int64)p_ptr;
  }
  n = v59;
  p_ptr = (void **)v60;
  memset(&v61[v62], 0, v60 - v62);
  v59 = n;
  *(_QWORD *)&v115 = p_ptr;
LABEL_84:
  memcpy((char *)v114 + v59, src, v58);
LABEL_85:
  v63 = v115;
  v64 = (char *)v114;
  v65 = (__int64 *)(a2 + 28);
  v66 = (__int64 *)(v115 + 6);
  if ( (unsigned __int64)v115 >= 0xFFFFFFFFFFFFFFFALL )
  {
    v103 = (char *)v114 + v115;
    v70 = (const char *)(a2 + 34);
    *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
    *(_DWORD *)v103 = *(_DWORD *)(a2 + 28);
    *((_WORD *)v103 + 2) = *(_WORD *)(a2 + 32);
  }
  else
  {
    v67 = v115;
    v68 = &byte_6;
    if ( *((_QWORD *)&v115 + 1) < (unsigned __int64)v66 )
    {
      n = a2 + 28;
      p_ptr = (void **)(v115 + 6);
      v108 = (char *)sub_29E60(&v114, v114, v115 + 6, 1);
      v66 = (__int64 *)p_ptr;
      v114 = v108;
      v64 = v108;
      v67 = v115;
      v65 = (__int64 *)n;
      v68 = (char *)p_ptr - v115;
    }
    n = (size_t)v66;
    p_ptr = (void **)v65;
    memset(&v64[v67], 0, (size_t)v68);
    v69 = (char *)v114 + v63;
    *(_QWORD *)&v115 = n;
    *(_DWORD *)v69 = *(_DWORD *)(a2 + 28);
    *((_WORD *)v69 + 2) = *((_WORD *)p_ptr + 2);
    v70 = (const char *)(a2 + 34);
  }
  v71 = strlen(v70);
  v72 = v115;
  v73 = v71 + 1;
  v74 = v115 + v71 + 1;
  if ( !__CFADD__((_QWORD)v115, v71 + 1) )
    goto LABEL_90;
  if ( (unsigned __int64)v115 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v74 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_90:
    v75 = (char *)v114;
    v76 = v115;
    if ( *((_QWORD *)&v115 + 1) < v74 )
    {
      v113 = v115;
      n = v73;
      p_ptr = (void **)v74;
      v114 = (void *)sub_29E60(&v114, v114, v74, 1);
      v75 = (char *)v114;
      v72 = v113;
      v76 = v115;
      v73 = n;
      v74 = (unsigned __int64)p_ptr;
    }
    v113 = v72;
    n = v73;
    p_ptr = (void **)v74;
    memset(&v75[v76], 0, v74 - v76);
    v73 = n;
    v72 = v113;
    *(_QWORD *)&v115 = p_ptr;
    goto LABEL_93;
  }
  if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_93:
  memcpy((char *)v114 + v72, v70, v73);
  v77 = v115;
  v78 = (char *)v114;
  v79 = (__int64 *)(v115 + 16);
  if ( (unsigned __int64)v115 < 0xFFFFFFFFFFFFFFF0LL )
  {
    v104 = v115;
    v105 = (char *)&word_10;
    if ( *((_QWORD *)&v115 + 1) < (unsigned __int64)v79 )
    {
      p_ptr = (void **)(v115 + 16);
      v107 = (char *)sub_29E60(&v114, v114, v115 + 16, 1);
      v79 = (__int64 *)p_ptr;
      v114 = v107;
      v78 = v107;
      v104 = v115;
      v105 = (char *)p_ptr - v115;
    }
    p_ptr = (void **)v79;
    v81 = (const char *)(a2 + 127);
    memset(&v78[v104], 0, (size_t)v105);
    v106 = _mm_loadu_si128((const __m128i *)v81 - 1);
    *(_QWORD *)&v115 = p_ptr;
    *(__m128i *)((char *)v114 + v77) = v106;
  }
  else
  {
    v80 = _mm_loadu_si128((const __m128i *)(a2 + 111));
    v81 = (const char *)(a2 + 127);
    *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
    *(__m128i *)((char *)v114 + v77) = v80;
  }
  v82 = strlen(v81);
  v83 = v115;
  v84 = v82 + 1;
  v85 = v115 + v82 + 1;
  if ( !__CFADD__((_QWORD)v115, v82 + 1) )
  {
    v86 = (char *)v114;
    v87 = v115;
    if ( *((_QWORD *)&v115 + 1) >= v85 )
    {
LABEL_97:
      n = v84;
      p_ptr = (void **)v85;
      memset(&v86[v87], 0, v85 - v87);
      v84 = n;
      *(_QWORD *)&v115 = p_ptr;
      goto LABEL_98;
    }
LABEL_132:
    n = v84;
    p_ptr = (void **)v85;
    v114 = (void *)sub_29E60(&v114, v86, v85, 1);
    v86 = (char *)v114;
    v84 = n;
    v87 = v115;
    v85 = (unsigned __int64)p_ptr;
    goto LABEL_97;
  }
  if ( (unsigned __int64)v115 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v86 = (char *)v114;
    v87 = v115;
    v85 = 0x7FFFFFFFFFFFFFFFLL;
    if ( *((_QWORD *)&v115 + 1) >= 0x7FFFFFFFFFFFFFFFuLL )
      goto LABEL_97;
    goto LABEL_132;
  }
  if ( (_QWORD)v115 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v115 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_98:
  v88 = (__int64)v81;
  v89 = (char *)v114 + v83;
  memcpy((char *)v114 + v83, v81, v84);
  v90 = v115;
  v91 = v114;
  if ( DWORD1(v115) )
    sub_148D0((__int64)v89, v88);
  v92 = v119;
  v93 = (__int64 *)src;
  v94 = sub_28E10(src, v119) - (_QWORD)src;
  if ( v94 )
  {
    v93 = v109;
    v92 = src;
    sub_148F0(v109, src, v94);
  }
  if ( v90 )
  {
    v93 = v109;
    v92 = v91;
    sub_148F0(v109, v91, v90);
  }
  if ( a5 != 2 )
  {
    v95 = *(_QWORD *)(v110 + 8);
    v96 = *(const void **)v110;
    if ( HIDWORD(v95) )
      sub_148D0((__int64)v93, (__int64)v92);
    v97 = sub_28E10(src, v119) - (_QWORD)src;
    if ( v97 )
      sub_148F0(v109, src, v97);
    if ( v95 )
      sub_148F0(v109, v96, v95);
  }
  v98 = *(_QWORD **)a4;
  p_ptr = &ptr;
  v110 = *(_QWORD *)a4 + 112LL * *(_QWORD *)(a4 + 8);
  if ( *(_QWORD *)a4 != v110 )
  {
    while ( 1 )
    {
      ptr = nullptr;
      v117 = 0;
      sub_14DC0((__int64 *)p_ptr, v98, a5);
      v99 = v117;
      v100 = ptr;
      if ( (unsigned __int64)v117 > 0xFFFFFFFF )
        break;
      v101 = sub_28E10(src, v119) - (_QWORD)src;
      if ( v101 )
        sub_148F0(v109, src, v101);
      if ( v99 )
        sub_148F0(v109, v100, v99);
      if ( ptr )
      {
        *(_QWORD *)&v117 = 0;
        j__free(ptr);
      }
      v98 += 14;
      if ( (_QWORD *)v110 == v98 )
        goto LABEL_118;
    }
    if ( !byte_7BCA0 )
      sub_2A3D0(5, v98);
LABEL_149:
    BUG();
  }
LABEL_118:
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    j__free(v114);
  }
  return v120[0] - __readfsqword(0x28u);
}

