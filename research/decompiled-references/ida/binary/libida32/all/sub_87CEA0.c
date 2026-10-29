unsigned __int64 __fastcall sub_87CEA0(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
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
  __int64 v28; // rcx
  __int64 v29; // r8
  size_t v30; // r15
  size_t v31; // r8
  unsigned __int64 v32; // r9
  char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  size_t v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // r10
  char *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  size_t v43; // r15
  size_t v44; // r8
  unsigned __int64 v45; // r9
  char *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // r15
  size_t v50; // r8
  unsigned __int64 v51; // r9
  char *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  size_t v55; // r15
  size_t v56; // r8
  unsigned __int64 v57; // r9
  char *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  size_t v61; // r15
  size_t v62; // r8
  unsigned __int64 v63; // r9
  char *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r15
  char *v67; // rsi
  __int64 *v68; // r8
  __int64 *v69; // r9
  __int64 v70; // rax
  char *v71; // rdx
  char *v72; // r15
  const char *v73; // r15
  size_t v74; // rax
  __int64 v75; // r8
  size_t v76; // r9
  unsigned __int64 v77; // r10
  char *v78; // rsi
  __int64 v79; // rax
  __int64 v80; // r15
  char *v81; // rsi
  __int64 *v82; // r8
  __m128i v83; // xmm0
  const char *v84; // rbp
  size_t v85; // rax
  __int64 v86; // r15
  size_t v87; // r8
  unsigned __int64 v88; // r9
  char *v89; // rsi
  __int64 v90; // rax
  size_t v91; // r15
  void *v92; // rbp
  size_t v93; // rax
  size_t v94; // r15
  const void *v95; // rbp
  size_t v96; // rax
  __int64 v97; // rbp
  size_t v98; // r13
  void *v99; // r15
  size_t v100; // rax
  char *v102; // rsi
  __int64 v103; // rax
  char *v104; // rdx
  __m128i v105; // xmm0
  char *v106; // rax
  char *v107; // rax
  __int64 *v108; // [rsp+8h] [rbp-B0h]
  __int64 v109; // [rsp+10h] [rbp-A8h]
  void **p_ptr; // [rsp+18h] [rbp-A0h]
  size_t n; // [rsp+20h] [rbp-98h]
  __int64 v112; // [rsp+28h] [rbp-90h]
  void *v113; // [rsp+30h] [rbp-88h] BYREF
  __int128 v114; // [rsp+38h] [rbp-80h]
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int128 v116; // [rsp+58h] [rbp-60h]
  _BYTE src[5]; // [rsp+6Eh] [rbp-4Ah] BYREF
  _BYTE v118[5]; // [rsp+73h] [rbp-45h] BYREF
  _QWORD v119[8]; // [rsp+78h] [rbp-40h] BYREF

  v108 = a1;
  v109 = a3;
  v119[0] = __readfsqword(0x28u);
  if ( (int)a5 <= 1 )
  {
    if ( !under_debugger )
      interr(2998);
    goto LABEL_149;
  }
  v8 = pack_dd(src, v118, a5) - (_QWORD)src;
  if ( v8 )
    sub_87C800(v108, src, v8);
  v113 = nullptr;
  v114 = 0;
  v9 = pack_dd(src, v118, a5) - (_QWORD)src;
  v10 = v9;
  if ( v9 )
  {
    v11 = v114;
    v12 = v114 + v9;
    if ( __CFADD__((_QWORD)v114, v9) )
    {
      if ( (unsigned __int64)v114 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_12;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = (char *)v113;
    v14 = v114;
    if ( *((_QWORD *)&v114 + 1) < v12 )
    {
      n = v114;
      p_ptr = (void **)v12;
      v113 = (void *)qvector_reserve(&v113, v113, v12, 1);
      v13 = (char *)v113;
      v11 = n;
      v14 = v114;
      v12 = (unsigned __int64)p_ptr;
    }
    n = v11;
    p_ptr = (void **)v12;
    memset(&v13[v14], 0, v12 - v14);
    v11 = n;
    *(_QWORD *)&v114 = p_ptr;
LABEL_12:
    memcpy((char *)v113 + v11, src, v10);
  }
  v15 = pack_dd(src, v118, *(unsigned __int16 *)(a2 + 2)) - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_22;
  v17 = v114;
  v18 = v114 + v15;
  if ( __CFADD__((_QWORD)v114, v15) )
  {
    if ( (unsigned __int64)v114 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v19 = (char *)v113;
  v20 = v114;
  if ( *((_QWORD *)&v114 + 1) < v18 )
  {
    n = v114;
    p_ptr = (void **)v18;
    v113 = (void *)qvector_reserve(&v113, v113, v18, 1);
    v19 = (char *)v113;
    v17 = n;
    v20 = v114;
    v18 = (unsigned __int64)p_ptr;
  }
  n = v17;
  p_ptr = (void **)v18;
  memset(&v19[v20], 0, v18 - v20);
  v17 = n;
  *(_QWORD *)&v114 = p_ptr;
LABEL_21:
  memcpy((char *)v113 + v17, src, v16);
LABEL_22:
  v21 = pack_dd(src, v118, *(unsigned __int16 *)(a2 + 4)) - (_QWORD)src;
  v22 = v21;
  if ( !v21 )
    goto LABEL_31;
  v23 = v114;
  v24 = v114 + v21;
  if ( __CFADD__((_QWORD)v114, v21) )
  {
    if ( (unsigned __int64)v114 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_30;
    }
    v24 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v25 = (char *)v113;
  v26 = v114;
  if ( *((_QWORD *)&v114 + 1) < v24 )
  {
    n = v114;
    p_ptr = (void **)v24;
    v113 = (void *)qvector_reserve(&v113, v113, v24, 1);
    v25 = (char *)v113;
    v23 = n;
    v26 = v114;
    v24 = (unsigned __int64)p_ptr;
  }
  n = v23;
  p_ptr = (void **)v24;
  memset(&v25[v26], 0, v24 - v26);
  v23 = n;
  *(_QWORD *)&v114 = p_ptr;
LABEL_30:
  memcpy((char *)v113 + v23, src, v22);
LABEL_31:
  v27 = pack_dd(src, v118, *(unsigned __int16 *)(a2 + 6)) - (_QWORD)src;
  v30 = v27;
  if ( !v27 )
    goto LABEL_40;
  v31 = v114;
  v32 = v114 + v27;
  if ( __CFADD__((_QWORD)v114, v27) )
  {
    if ( (unsigned __int64)v114 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_39;
    }
    v32 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v33 = (char *)v113;
  v34 = v114;
  if ( *((_QWORD *)&v114 + 1) < v32 )
  {
    n = v114;
    p_ptr = (void **)v32;
    v113 = (void *)qvector_reserve(&v113, v113, v32, 1);
    v33 = (char *)v113;
    v31 = n;
    v34 = v114;
    v32 = (unsigned __int64)p_ptr;
  }
  n = v31;
  p_ptr = (void **)v32;
  memset(&v33[v34], 0, v32 - v34);
  v31 = n;
  *(_QWORD *)&v114 = p_ptr;
LABEL_39:
  memcpy((char *)v113 + v31, src, v30);
LABEL_40:
  v35 = pack_dq(src, v119, *(_QWORD *)(a2 + 8), v28, v29) - (_QWORD)src;
  v37 = v35;
  if ( !v35 )
    goto LABEL_49;
  v38 = v114;
  v39 = v114 + v35;
  if ( __CFADD__((_QWORD)v114, v35) )
  {
    if ( (unsigned __int64)v114 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_48;
    }
    v39 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v40 = (char *)v113;
  v41 = v114;
  if ( *((_QWORD *)&v114 + 1) < v39 )
  {
    v112 = v114;
    n = v37;
    p_ptr = (void **)v39;
    v113 = (void *)qvector_reserve(&v113, v113, v39, 1);
    v40 = (char *)v113;
    v38 = v112;
    v41 = v114;
    v37 = n;
    v39 = (unsigned __int64)p_ptr;
  }
  v112 = v38;
  n = v37;
  p_ptr = (void **)v39;
  memset(&v40[v41], 0, v39 - v41);
  v37 = n;
  v38 = v112;
  *(_QWORD *)&v114 = p_ptr;
LABEL_48:
  memcpy((char *)v113 + v38, src, v37);
LABEL_49:
  v42 = pack_dq(src, v119, *(_QWORD *)(a2 + 103), v36, v37) - (_QWORD)src;
  v43 = v42;
  if ( !v42 )
    goto LABEL_58;
  v44 = v114;
  v45 = v114 + v42;
  if ( __CFADD__((_QWORD)v114, v42) )
  {
    if ( (unsigned __int64)v114 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_57;
    }
    v45 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v46 = (char *)v113;
  v47 = v114;
  if ( *((_QWORD *)&v114 + 1) < v45 )
  {
    n = v114;
    p_ptr = (void **)v45;
    v113 = (void *)qvector_reserve(&v113, v113, v45, 1);
    v46 = (char *)v113;
    v44 = n;
    v47 = v114;
    v45 = (unsigned __int64)p_ptr;
  }
  n = v44;
  p_ptr = (void **)v45;
  memset(&v46[v47], 0, v45 - v47);
  v44 = n;
  *(_QWORD *)&v114 = p_ptr;
LABEL_57:
  memcpy((char *)v113 + v44, src, v43);
LABEL_58:
  v48 = pack_dd(src, v118, *(unsigned int *)(a2 + 16)) - (_QWORD)src;
  v49 = v48;
  if ( !v48 )
    goto LABEL_67;
  v50 = v114;
  v51 = v114 + v48;
  if ( __CFADD__((_QWORD)v114, v48) )
  {
    if ( (unsigned __int64)v114 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_66;
    }
    v51 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v52 = (char *)v113;
  v53 = v114;
  if ( *((_QWORD *)&v114 + 1) < v51 )
  {
    n = v114;
    p_ptr = (void **)v51;
    v113 = (void *)qvector_reserve(&v113, v113, v51, 1);
    v52 = (char *)v113;
    v50 = n;
    v53 = v114;
    v51 = (unsigned __int64)p_ptr;
  }
  n = v50;
  p_ptr = (void **)v51;
  memset(&v52[v53], 0, v51 - v53);
  v50 = n;
  *(_QWORD *)&v114 = p_ptr;
LABEL_66:
  memcpy((char *)v113 + v50, src, v49);
LABEL_67:
  v54 = pack_dd(src, v118, *(unsigned int *)(a2 + 20)) - (_QWORD)src;
  v55 = v54;
  if ( !v54 )
    goto LABEL_76;
  v56 = v114;
  v57 = v114 + v54;
  if ( __CFADD__((_QWORD)v114, v54) )
  {
    if ( (unsigned __int64)v114 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_75;
    }
    v57 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v58 = (char *)v113;
  v59 = v114;
  if ( *((_QWORD *)&v114 + 1) < v57 )
  {
    n = v114;
    p_ptr = (void **)v57;
    v113 = (void *)qvector_reserve(&v113, v113, v57, 1);
    v58 = (char *)v113;
    v56 = n;
    v59 = v114;
    v57 = (unsigned __int64)p_ptr;
  }
  n = v56;
  p_ptr = (void **)v57;
  memset(&v58[v59], 0, v57 - v59);
  v56 = n;
  *(_QWORD *)&v114 = p_ptr;
LABEL_75:
  memcpy((char *)v113 + v56, src, v55);
LABEL_76:
  v60 = pack_dd(src, v118, *(unsigned int *)(a2 + 24)) - (_QWORD)src;
  v61 = v60;
  if ( !v60 )
    goto LABEL_85;
  v62 = v114;
  v63 = v114 + v60;
  if ( __CFADD__((_QWORD)v114, v60) )
  {
    if ( (unsigned __int64)v114 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_84;
    }
    v63 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v64 = (char *)v113;
  v65 = v114;
  if ( *((_QWORD *)&v114 + 1) < v63 )
  {
    n = v114;
    p_ptr = (void **)v63;
    v113 = (void *)qvector_reserve(&v113, v113, v63, 1);
    v64 = (char *)v113;
    v62 = n;
    v65 = v114;
    v63 = (unsigned __int64)p_ptr;
  }
  n = v62;
  p_ptr = (void **)v63;
  memset(&v64[v65], 0, v63 - v65);
  v62 = n;
  *(_QWORD *)&v114 = p_ptr;
LABEL_84:
  memcpy((char *)v113 + v62, src, v61);
LABEL_85:
  v66 = v114;
  v67 = (char *)v113;
  v68 = (__int64 *)(a2 + 28);
  v69 = (__int64 *)(v114 + 6);
  if ( (unsigned __int64)v114 >= 0xFFFFFFFFFFFFFFFALL )
  {
    v102 = (char *)v113 + v114;
    v73 = (const char *)(a2 + 34);
    *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
    *(_DWORD *)v102 = *(_DWORD *)(a2 + 28);
    *((_WORD *)v102 + 2) = *(_WORD *)(a2 + 32);
  }
  else
  {
    v70 = v114;
    v71 = &byte_6;
    if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)v69 )
    {
      n = a2 + 28;
      p_ptr = (void **)(v114 + 6);
      v107 = (char *)qvector_reserve(&v113, v113, v114 + 6, 1);
      v69 = (__int64 *)p_ptr;
      v113 = v107;
      v67 = v107;
      v70 = v114;
      v68 = (__int64 *)n;
      v71 = (char *)p_ptr - v114;
    }
    n = (size_t)v69;
    p_ptr = (void **)v68;
    memset(&v67[v70], 0, (size_t)v71);
    v72 = (char *)v113 + v66;
    *(_QWORD *)&v114 = n;
    *(_DWORD *)v72 = *(_DWORD *)(a2 + 28);
    *((_WORD *)v72 + 2) = *((_WORD *)p_ptr + 2);
    v73 = (const char *)(a2 + 34);
  }
  v74 = strlen(v73);
  v75 = v114;
  v76 = v74 + 1;
  v77 = v114 + v74 + 1;
  if ( !__CFADD__((_QWORD)v114, v74 + 1) )
    goto LABEL_90;
  if ( (unsigned __int64)v114 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v77 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_90:
    v78 = (char *)v113;
    v79 = v114;
    if ( *((_QWORD *)&v114 + 1) < v77 )
    {
      v112 = v114;
      n = v76;
      p_ptr = (void **)v77;
      v113 = (void *)qvector_reserve(&v113, v113, v77, 1);
      v78 = (char *)v113;
      v75 = v112;
      v79 = v114;
      v76 = n;
      v77 = (unsigned __int64)p_ptr;
    }
    v112 = v75;
    n = v76;
    p_ptr = (void **)v77;
    memset(&v78[v79], 0, v77 - v79);
    v76 = n;
    v75 = v112;
    *(_QWORD *)&v114 = p_ptr;
    goto LABEL_93;
  }
  if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_93:
  memcpy((char *)v113 + v75, v73, v76);
  v80 = v114;
  v81 = (char *)v113;
  v82 = (__int64 *)(v114 + 16);
  if ( (unsigned __int64)v114 < 0xFFFFFFFFFFFFFFF0LL )
  {
    v103 = v114;
    v104 = (char *)&word_10;
    if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)v82 )
    {
      p_ptr = (void **)(v114 + 16);
      v106 = (char *)qvector_reserve(&v113, v113, v114 + 16, 1);
      v82 = (__int64 *)p_ptr;
      v113 = v106;
      v81 = v106;
      v103 = v114;
      v104 = (char *)p_ptr - v114;
    }
    p_ptr = (void **)v82;
    v84 = (const char *)(a2 + 127);
    memset(&v81[v103], 0, (size_t)v104);
    v105 = _mm_loadu_si128((const __m128i *)v84 - 1);
    *(_QWORD *)&v114 = p_ptr;
    *(__m128i *)((char *)v113 + v80) = v105;
  }
  else
  {
    v83 = _mm_loadu_si128((const __m128i *)(a2 + 111));
    v84 = (const char *)(a2 + 127);
    *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
    *(__m128i *)((char *)v113 + v80) = v83;
  }
  v85 = strlen(v84);
  v86 = v114;
  v87 = v85 + 1;
  v88 = v114 + v85 + 1;
  if ( !__CFADD__((_QWORD)v114, v85 + 1) )
  {
    v89 = (char *)v113;
    v90 = v114;
    if ( *((_QWORD *)&v114 + 1) >= v88 )
    {
LABEL_97:
      n = v87;
      p_ptr = (void **)v88;
      memset(&v89[v90], 0, v88 - v90);
      v87 = n;
      *(_QWORD *)&v114 = p_ptr;
      goto LABEL_98;
    }
LABEL_132:
    n = v87;
    p_ptr = (void **)v88;
    v113 = (void *)qvector_reserve(&v113, v89, v88, 1);
    v89 = (char *)v113;
    v87 = n;
    v90 = v114;
    v88 = (unsigned __int64)p_ptr;
    goto LABEL_97;
  }
  if ( (unsigned __int64)v114 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v89 = (char *)v113;
    v90 = v114;
    v88 = 0x7FFFFFFFFFFFFFFFLL;
    if ( *((_QWORD *)&v114 + 1) >= 0x7FFFFFFFFFFFFFFFuLL )
      goto LABEL_97;
    goto LABEL_132;
  }
  if ( (_QWORD)v114 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v114 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_98:
  memcpy((char *)v113 + v86, v84, v87);
  v91 = v114;
  v92 = v113;
  if ( DWORD1(v114) )
    sub_87C7E0();
  v93 = pack_dd(src, v118, (unsigned int)v114) - (_QWORD)src;
  if ( v93 )
    sub_87C800(v108, src, v93);
  if ( v91 )
    sub_87C800(v108, v92, v91);
  if ( a5 != 2 )
  {
    v94 = *(_QWORD *)(v109 + 8);
    v95 = *(const void **)v109;
    if ( HIDWORD(v94) )
      sub_87C7E0();
    v96 = pack_dd(src, v118, (unsigned int)v94) - (_QWORD)src;
    if ( v96 )
      sub_87C800(v108, src, v96);
    if ( v94 )
      sub_87C800(v108, v95, v94);
  }
  v97 = *a4;
  p_ptr = &ptr;
  v109 = *a4 + 112 * a4[1];
  if ( *a4 != v109 )
  {
    while ( 1 )
    {
      ptr = nullptr;
      v116 = 0;
      sub_87CCD0((__int64 *)p_ptr, v97, a5);
      v98 = v116;
      v99 = ptr;
      if ( (unsigned __int64)v116 > 0xFFFFFFFF )
        break;
      v100 = pack_dd(src, v118, (unsigned int)v116) - (_QWORD)src;
      if ( v100 )
        sub_87C800(v108, src, v100);
      if ( v98 )
        sub_87C800(v108, v99, v98);
      if ( ptr )
      {
        *(_QWORD *)&v116 = 0;
        qfree(ptr);
      }
      v97 += 112;
      if ( v109 == v97 )
        goto LABEL_118;
    }
    if ( !under_debugger )
      interr(5);
LABEL_149:
    BUG();
  }
LABEL_118:
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v113);
  }
  return v119[0] - __readfsqword(0x28u);
}

