__int64 __fastcall sub_2155760(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // r15d
  _DWORD **v8; // rax
  _DWORD *v9; // r12
  __m128i v10; // xmm1
  __m128i *v11; // rax
  _WORD *v12; // rdi
  __int16 v13; // dx
  __m128i si128; // xmm0
  __int64 v15; // r14
  void **v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rsi
  char v19; // r14
  _DWORD **v20; // rax
  _DWORD *v21; // rdi
  __int64 v22; // rax
  void **v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // r14d
  _QWORD *v31; // rax
  __m128i v32; // xmm3
  __m128i *v33; // rax
  _WORD *v34; // rdi
  __int64 v35; // rdx
  __int16 v36; // cx
  __m128i v37; // xmm0
  __int64 v38; // rsi
  void **v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __m128i v43; // xmm4
  __m128i *v44; // rax
  _WORD *v45; // rdi
  bool v46; // zf
  __int16 v47; // cx
  __int64 v48; // rdx
  __m128i v49; // xmm0
  __int64 v50; // rsi
  void **v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rsi
  int **v54; // rax
  __int64 v55; // rdi
  char v56; // al
  int *v57; // rdx
  int v58; // eax
  __m128i v59; // xmm6
  __m128i *v60; // rax
  _DWORD *v61; // rdi
  __int32 v62; // ecx
  __int64 v63; // rdx
  __m128i v64; // xmm0
  size_t v65; // rsi
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdi
  unsigned __int64 v69; // rbx
  unsigned __int64 v70; // rax
  __int64 v71; // r14
  char v72; // si
  char *v73; // rcx
  __m128i *v74; // rsi
  __int64 v75; // rax
  _BYTE *v76; // rdx
  _BYTE *v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rdi
  const char *v80; // rax
  __int64 v81; // rdi
  char *v82; // r8
  __int64 v83; // rdx
  __m128i *v84; // rax
  char *v85; // rdx
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rdx
  const char *v90; // rax
  size_t nb; // [rsp+8h] [rbp-130h]
  char n; // [rsp+8h] [rbp-130h]
  size_t nc; // [rsp+8h] [rbp-130h]
  size_t nd; // [rsp+8h] [rbp-130h]
  char na; // [rsp+8h] [rbp-130h]
  char *ne; // [rsp+8h] [rbp-130h]
  size_t nf; // [rsp+8h] [rbp-130h]
  char v99; // [rsp+17h] [rbp-121h]
  char src; // [rsp+18h] [rbp-120h]
  char *srca; // [rsp+18h] [rbp-120h]
  __int64 v102; // [rsp+20h] [rbp-118h]
  __int64 v103; // [rsp+20h] [rbp-118h]
  char v104; // [rsp+20h] [rbp-118h]
  __int64 v105; // [rsp+20h] [rbp-118h]
  __int64 v106; // [rsp+20h] [rbp-118h]
  char v107; // [rsp+20h] [rbp-118h]
  int *v108; // [rsp+20h] [rbp-118h]
  __m128i *v109; // [rsp+20h] [rbp-118h]
  char *v110; // [rsp+20h] [rbp-118h]
  _DWORD *v111; // [rsp+28h] [rbp-110h]
  __m128i *v112; // [rsp+28h] [rbp-110h]
  _DWORD *v113; // [rsp+28h] [rbp-110h]
  __m128i *v114; // [rsp+28h] [rbp-110h]
  _BYTE *v115; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v116; // [rsp+38h] [rbp-100h]
  const char *v117; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v118; // [rsp+48h] [rbp-F0h]
  void *v119; // [rsp+50h] [rbp-E8h] BYREF
  char *v120; // [rsp+58h] [rbp-E0h]
  __m128i v121; // [rsp+60h] [rbp-D8h] BYREF
  void *v122; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v123[24]; // [rsp+78h] [rbp-C0h] BYREF
  __int16 v124; // [rsp+90h] [rbp-A8h]
  void *s1; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v126; // [rsp+A8h] [rbp-90h]
  __m128i v127; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v128; // [rsp+C0h] [rbp-78h]
  const char *p_s1; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v130; // [rsp+D8h] [rbp-60h]
  void **v131; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v132; // [rsp+E8h] [rbp-50h]
  __int16 v133; // [rsp+F0h] [rbp-48h]

  v3 = a1[3];
  v115 = nullptr;
  v116 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _BYTE **))(*(_QWORD *)v3 + 160LL))(v3, &v115);
  if ( (_BYTE)v4 )
  {
    v5 = a1[1];
    p_s1 = "expected identifier in directive";
    v133 = 259;
    return (unsigned int)sub_21543E0(v5, (__int64)&p_s1, 0, 0);
  }
  v6 = v4;
  v8 = (_DWORD **)a1[4];
  v9 = *v8;
  if ( **v8 == 26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 152LL))(a1[1]);
  }
  else
  {
    strcpy(v127.m128i_i8, "Expected ,");
    v10 = _mm_load_si128(&v127);
    v122 = &v123[8];
    *(__m128i *)&v123[8] = v10;
    *(_QWORD *)v123 = 10;
    s1 = &v127;
    v126 = 0;
    v127.m128i_i8[0] = 0;
    v11 = (__m128i *)operator new(0x1Fu);
    v12 = v122;
    v11->m128i_i64[0] = *(_QWORD *)v122;
    v13 = v12[4];
    qmemcpy((char *)&v11->m128i_u64[1] + 2, ", instead got: ", 15);
    v11->m128i_i16[4] = v13;
    if ( v12 != (_WORD *)&v123[8] )
    {
      nb = (size_t)v11;
      operator delete(v12);
      v11 = (__m128i *)nb;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB4F0);
    v11[1].m128i_i8[9] = 0;
    *(__m128i *)v123 = si128;
    v119 = &v121;
    if ( v11 == (__m128i *)&v123[8] )
    {
      v11 = &v121;
      v121 = _mm_load_si128((const __m128i *)&v123[8]);
    }
    else
    {
      v119 = v11;
      v121.m128i_i64[0] = *(_QWORD *)&v123[8];
    }
    v15 = a1[3];
    v122 = &v123[8];
    v120 = *(char **)v123;
    *(_QWORD *)v123 = 0;
    v123[8] = 0;
    v16 = *((void ***)v9 + 1);
    v17 = *((_QWORD *)v9 + 2);
    p_s1 = (const char *)v11;
    v130 = (__int64)v120;
    v131 = v16;
    v132 = v17;
    v133 = 1285;
    v18 = sub_2124B50((__int64)v9);
    v19 = sub_2153E90(v15, v18, (__int64)&p_s1, 0, 0);
    if ( v119 != &v121 )
      operator delete(v119);
    if ( v122 != &v123[8] )
      operator delete(v122);
    if ( s1 != &v127 )
      operator delete(s1);
    if ( v19 )
      return 1;
  }
  v20 = (_DWORD **)a1[4];
  v21 = *v20;
  if ( **v20 != 3 )
  {
    v22 = *((_QWORD *)v21 + 2);
    v23 = *((void ***)v21 + 1);
    v130 = 43;
    v24 = a1[3];
    p_s1 = "expected string in directive, instead got: ";
    v132 = v22;
    v131 = v23;
    v133 = 1285;
    v25 = sub_2124B50((__int64)v21);
    return (unsigned int)sub_2153E90(v24, v25, (__int64)&p_s1, 0, 0);
  }
  if ( v116 <= 4 )
    goto LABEL_102;
  if ( *(_DWORD *)v115 == 1952539694 && v115[4] == 97 )
    goto LABEL_89;
  if ( v116 > 5 && *(_DWORD *)v115 == 1633973294 && *((_WORD *)v115 + 2) == 24948 )
  {
    v26 = 13;
    goto LABEL_33;
  }
  if ( *(_DWORD *)v115 == 1935832110 && v115[4] == 115 )
  {
    v26 = 12;
    goto LABEL_33;
  }
  if ( v116 > 6 && *(_DWORD *)v115 == 1685025326 && *((_WORD *)v115 + 2) == 29793 && v115[6] == 97 )
  {
    v26 = 4;
    goto LABEL_33;
  }
  if ( *(_DWORD *)v115 == 2019914798 && v115[4] == 116 )
  {
    v26 = 2;
    goto LABEL_33;
  }
  if ( v116 <= 0xE )
  {
LABEL_102:
    if ( v116 <= 3 )
      goto LABEL_103;
  }
  else if ( *(_QWORD *)v115 == 0x5F6D6F747375632ELL
         && *((_DWORD *)v115 + 2) == 1952671091
         && *((_WORD *)v115 + 6) == 28521
         && v115[14] == 110 )
  {
    v26 = 0;
    goto LABEL_33;
  }
  if ( *(_DWORD *)v115 != 1936941614 )
  {
    if ( v116 > 0xA )
    {
      if ( *(_QWORD *)v115 == 0x72615F74696E692ELL && *((_WORD *)v115 + 4) == 24946 && v115[10] == 121 )
        goto LABEL_89;
      goto LABEL_104;
    }
LABEL_103:
    if ( v116 <= 6 )
    {
LABEL_89:
      v26 = 19;
      goto LABEL_33;
    }
LABEL_104:
    if ( *(_DWORD *)v115 == 1650811950 && *((_WORD *)v115 + 2) == 26485 && v115[6] == 95 )
    {
      v26 = 0;
      goto LABEL_33;
    }
    goto LABEL_89;
  }
  v26 = 15;
LABEL_33:
  src = v26;
  v27 = sub_2153C00(a1[1]);
  v28 = *(_QWORD *)(v27 + 16);
  if ( v28 && (v29 = v28 - 1) != 0 )
  {
    v75 = *(_QWORD *)(v27 + 8);
    n = 0;
    v30 = 0;
    v99 = 0;
    v76 = (_BYTE *)(v75 + 1);
    v77 = (_BYTE *)(v75 + v29);
    if ( v77 != (_BYTE *)(v75 + 1) )
    {
      while ( 2 )
      {
        switch ( *v76 )
        {
          case 'G':
            n = 1;
            goto LABEL_93;
          case 'R':
            v30 |= 4u;
            goto LABEL_93;
          case 'S':
            v30 |= 1u;
            goto LABEL_93;
          case 'T':
            v30 |= 2u;
            goto LABEL_93;
          case 'p':
            v99 = 1;
LABEL_93:
            if ( v77 == ++v76 )
              break;
            continue;
          default:
            v78 = a1[1];
            p_s1 = "unknown flag";
            v133 = 259;
            return (unsigned int)sub_21543E0(v78, (__int64)&p_s1, 0, 0);
        }
        break;
      }
    }
  }
  else
  {
    n = 0;
    v30 = 0;
    v99 = 0;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 152LL))(a1[1]);
  v31 = (_QWORD *)a1[4];
  if ( *(_DWORD *)*v31 == 26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 152LL))(a1[1]);
  }
  else
  {
    v111 = (_DWORD *)*v31;
    *(_QWORD *)v123 = 10;
    strcpy(v127.m128i_i8, "Expected ,");
    v32 = _mm_load_si128(&v127);
    v122 = &v123[8];
    *(__m128i *)&v123[8] = v32;
    s1 = &v127;
    v126 = 0;
    v127.m128i_i8[0] = 0;
    v33 = (__m128i *)operator new(0x1Fu);
    v34 = v122;
    v35 = (__int64)v111;
    v33->m128i_i64[0] = *(_QWORD *)v122;
    v36 = v34[4];
    qmemcpy((char *)&v33->m128i_u64[1] + 2, ", instead got: ", 15);
    v33->m128i_i16[4] = v36;
    if ( v34 != (_WORD *)&v123[8] )
    {
      v112 = v33;
      v102 = v35;
      operator delete(v34);
      v33 = v112;
      v35 = v102;
    }
    v37 = _mm_load_si128((const __m128i *)&xmmword_23AB4F0);
    v33[1].m128i_i8[9] = 0;
    *(__m128i *)v123 = v37;
    v119 = &v121;
    if ( v33 == (__m128i *)&v123[8] )
    {
      v33 = &v121;
      v121 = _mm_load_si128((const __m128i *)&v123[8]);
    }
    else
    {
      v119 = v33;
      v121.m128i_i64[0] = *(_QWORD *)&v123[8];
    }
    v122 = &v123[8];
    v38 = a1[3];
    v120 = *(char **)v123;
    *(_QWORD *)v123 = 0;
    v123[8] = 0;
    v39 = *(void ***)(v35 + 8);
    v103 = v38;
    v40 = *(_QWORD *)(v35 + 16);
    p_s1 = (const char *)v33;
    v131 = v39;
    v130 = (__int64)v120;
    v132 = v40;
    v133 = 1285;
    v41 = sub_2124B50(v35);
    v104 = sub_2153E90(v103, v41, (__int64)&p_s1, 0, 0);
    if ( v119 != &v121 )
      operator delete(v119);
    if ( v122 != &v123[8] )
      operator delete(v122);
    if ( s1 != &v127 )
      operator delete(s1);
    if ( v104 )
      return 1;
  }
  v42 = (_QWORD *)a1[4];
  if ( *(_DWORD *)*v42 == 46 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 152LL))(a1[1]);
  }
  else
  {
    v113 = (_DWORD *)*v42;
    *(_QWORD *)v123 = 10;
    strcpy(v127.m128i_i8, "Expected @");
    v43 = _mm_load_si128(&v127);
    v122 = &v123[8];
    *(__m128i *)&v123[8] = v43;
    s1 = &v127;
    v126 = 0;
    v127.m128i_i8[0] = 0;
    v44 = (__m128i *)operator new(0x1Fu);
    v45 = v122;
    v46 = v122 == &v123[8];
    v44->m128i_i64[0] = *(_QWORD *)v122;
    v47 = v45[4];
    qmemcpy((char *)&v44->m128i_u64[1] + 2, ", instead got: ", 15);
    v48 = (__int64)v113;
    v44->m128i_i16[4] = v47;
    if ( !v46 )
    {
      v114 = v44;
      v105 = v48;
      operator delete(v45);
      v44 = v114;
      v48 = v105;
    }
    v49 = _mm_load_si128((const __m128i *)&xmmword_23AB4F0);
    v44[1].m128i_i8[9] = 0;
    *(__m128i *)v123 = v49;
    v119 = &v121;
    if ( v44 == (__m128i *)&v123[8] )
    {
      v44 = &v121;
      v121 = _mm_load_si128((const __m128i *)&v123[8]);
    }
    else
    {
      v119 = v44;
      v121.m128i_i64[0] = *(_QWORD *)&v123[8];
    }
    v122 = &v123[8];
    v50 = a1[3];
    v120 = *(char **)v123;
    *(_QWORD *)v123 = 0;
    v123[8] = 0;
    v51 = *(void ***)(v48 + 8);
    v106 = v50;
    v52 = *(_QWORD *)(v48 + 16);
    p_s1 = (const char *)v44;
    v131 = v51;
    v130 = (__int64)v120;
    v132 = v52;
    v133 = 1285;
    v53 = sub_2124B50(v48);
    v107 = sub_2153E90(v106, v53, (__int64)&p_s1, 0, 0);
    if ( v119 != &v121 )
      operator delete(v119);
    if ( v122 != &v123[8] )
      operator delete(v122);
    if ( s1 != &v127 )
      operator delete(s1);
    if ( v107 )
      return 1;
  }
  v54 = (int **)a1[4];
  v117 = nullptr;
  v118 = 0;
  if ( !n )
  {
LABEL_65:
    v57 = *v54;
    v58 = **v54;
    goto LABEL_66;
  }
  v55 = a1[1];
  if ( **v54 != 26 )
  {
    p_s1 = "expected group name";
    v133 = 259;
    v56 = sub_21543E0(v55, (__int64)&p_s1, 0, 0);
LABEL_63:
    if ( v56 )
      return 1;
    v54 = (int **)a1[4];
    goto LABEL_65;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 152LL))(v55);
  if ( **(_DWORD **)a1[4] == 4 )
  {
    v87 = sub_2153C00(a1[1]);
    v88 = a1[1];
    v89 = *(_QWORD *)(v87 + 16);
    v90 = *(const char **)(v87 + 8);
    v118 = v89;
    v117 = v90;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 152LL))(v88);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64, const char **))(*(_QWORD *)a1[3] + 160LL))(a1[3], &v117) )
  {
    v80 = "invalid group name";
    goto LABEL_134;
  }
  v57 = *(int **)a1[4];
  v58 = *v57;
  if ( *v57 == 26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 152LL))(a1[1]);
    v79 = a1[3];
    s1 = nullptr;
    v126 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v79 + 160LL))(v79, &s1) )
    {
      v80 = "invalid linkage";
LABEL_134:
      v81 = a1[1];
      p_s1 = v80;
      v133 = 259;
      v56 = sub_21543E0(v81, (__int64)&p_s1, 0, 0);
      goto LABEL_63;
    }
    if ( v126 != 6 || memcmp(s1, "comdat", 6u) )
    {
      v80 = "Linkage must be 'comdat'";
      goto LABEL_134;
    }
    v57 = *(int **)a1[4];
    v58 = *v57;
  }
LABEL_66:
  if ( v58 == 9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 152LL))(a1[1]);
    goto LABEL_78;
  }
  strcpy(v127.m128i_i8, "Expected eol");
  v59 = _mm_load_si128(&v127);
  v108 = v57;
  v122 = &v123[8];
  *(__m128i *)&v123[8] = v59;
  *(_QWORD *)v123 = 12;
  s1 = &v127;
  v126 = 0;
  v127.m128i_i8[0] = 0;
  v60 = (__m128i *)operator new(0x1Fu);
  v61 = v122;
  v46 = v122 == &v123[8];
  v60->m128i_i64[0] = *(_QWORD *)v122;
  v62 = v61[2];
  qmemcpy((char *)&v60->m128i_u64[1] + 4, ", instead got: ", 15);
  v63 = (__int64)v108;
  v60->m128i_i32[2] = v62;
  if ( !v46 )
  {
    v109 = v60;
    nc = v63;
    operator delete(v61);
    v60 = v109;
    v63 = nc;
  }
  v64 = _mm_load_si128((const __m128i *)&xmmword_23AB500);
  v60[1].m128i_i8[11] = 0;
  *(__m128i *)v123 = v64;
  v119 = &v121;
  if ( v60 == (__m128i *)&v123[8] )
  {
    v60 = &v121;
    v121 = _mm_load_si128((const __m128i *)&v123[8]);
  }
  else
  {
    v119 = v60;
    v121.m128i_i64[0] = *(_QWORD *)&v123[8];
  }
  v122 = &v123[8];
  v65 = a1[3];
  v120 = *(char **)v123;
  *(_QWORD *)v123 = 0;
  v123[8] = 0;
  nd = v65;
  v66 = *(_QWORD *)(v63 + 16);
  v131 = *(void ***)(v63 + 8);
  v130 = (__int64)v120;
  v132 = v66;
  v133 = 1285;
  p_s1 = (const char *)v60;
  v67 = sub_2124B50(v63);
  na = sub_2153E90(nd, v67, (__int64)&p_s1, 0, 0);
  if ( v119 != &v121 )
    operator delete(v119);
  if ( v122 != &v123[8] )
    operator delete(v122);
  if ( s1 != &v127 )
    operator delete(s1);
  if ( na )
    return 1;
LABEL_78:
  v68 = *(_QWORD *)(a1[1] + 16);
  v133 = 261;
  v128 = 261;
  p_s1 = v117;
  v130 = v118;
  s1 = v115;
  v126 = v116;
  v69 = sub_21092C0(v68, (__int64)&s1, src, v30, (__int64)&p_s1, -1);
  v70 = *(unsigned int *)(v69 + 200);
  if ( (_DWORD)v70 != v30 )
  {
    v71 = a1[3];
    if ( !*(_DWORD *)(v69 + 200) )
    {
      v72 = 48;
      v119 = &v121;
LABEL_81:
      v121.m128i_i8[0] = v72;
      v73 = (_BYTE *)(&dword_0 + 1);
      v74 = &v121;
      goto LABEL_82;
    }
    v82 = (char *)&v131 + 1;
    do
    {
      --v82;
      v83 = v70 & 0xF;
      v70 >>= 4;
      v72 = a0123456789abcd_3[v83];
      *v82 = v72;
    }
    while ( v70 );
    v84 = &v121;
    v85 = (char *)((char *)&v131 + 1 - v82);
    v119 = &v121;
    v73 = (char *)((char *)&v131 + 1 - v82);
    if ( (unsigned __int64)((char *)&v131 + 1 - v82) <= 0xF )
    {
      if ( v85 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_81;
      v74 = &v121;
      if ( !v85 )
      {
LABEL_82:
        v120 = v73;
        v73[(_QWORD)v74] = 0;
        v122 = "changed section flags for ";
        v124 = 1283;
        *(_QWORD *)&v123[8] = v115;
        v128 = 770;
        *(_QWORD *)&v123[16] = v116;
        s1 = &v122;
        v133 = 1026;
        v131 = &v119;
        v127.m128i_i64[0] = (__int64)", expected: 0x";
        p_s1 = (const char *)&s1;
        sub_2153E90(v71, a2, (__int64)&p_s1, 0, 0);
        if ( v119 != &v121 )
          operator delete(v119);
        goto LABEL_84;
      }
    }
    else
    {
      if ( (__int64)v85 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v110 = (char *)((char *)&v131 + 1 - v82);
      srca = v82;
      ne = (char *)((char *)&v131 + 1 - v82);
      v84 = (__m128i *)operator new((unsigned __int64)(v85 + 1));
      v85 = ne;
      v82 = srca;
      v73 = v110;
      v119 = v84;
      v121.m128i_i64[0] = (__int64)ne;
    }
    nf = (size_t)v73;
    memcpy(v84, v82, (size_t)v85);
    v74 = (__m128i *)v119;
    v73 = (char *)nf;
    goto LABEL_82;
  }
LABEL_84:
  if ( v99 )
  {
    if ( !*(_BYTE *)(v69 + 197) )
    {
      v86 = a1[3];
      v133 = 259;
      p_s1 = "Only data sections can be passive";
      return (unsigned int)sub_2153E90(v86, a2, (__int64)&p_s1, 0, 0);
    }
    *(_BYTE *)(v69 + 196) = 1;
  }
  (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(**(_QWORD **)(a1[1] + 24) + 176LL))(
    *(_QWORD *)(a1[1] + 24),
    v69,
    0);
  return v6;
}
