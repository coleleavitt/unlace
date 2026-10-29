unsigned __int64 __fastcall sub_2021430(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rbp
  char v5; // al
  unsigned int v6; // esi
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r12
  std::_V2 **v10; // r10
  int v11; // eax
  unsigned int v12; // r14d
  void *v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // r8d
  unsigned int v16; // r14d
  __int64 v17; // r12
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r10
  std::_V2 **v21; // r11
  unsigned int v22; // edx
  unsigned int v23; // r13d
  unsigned int v24; // edx
  unsigned __int64 v25; // r12
  __int64 v26; // r8
  std::_V2 *v27; // rdi
  __int64 v28; // r13
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rax
  unsigned __int64 *v32; // r11
  unsigned __int64 v33; // rsi
  unsigned int v34; // edx
  unsigned int v35; // r12d
  unsigned __int64 v36; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  char v43; // dl
  std::_V2 *v44; // rax
  int v45; // eax
  __int64 v46; // r15
  unsigned int v47; // r12d
  unsigned __int64 v48; // rax
  void *v49; // rax
  __int64 v50; // r11
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rcx
  void ***v54; // r10
  unsigned int v55; // eax
  unsigned int v56; // ebp
  unsigned int v57; // r9d
  __int64 v58; // rax
  __m128 v59; // xmm0
  void *v60; // rbp
  std::_V2 *v61; // rdi
  unsigned int v62; // r10d
  __int64 v63; // rax
  unsigned int v64; // r10d
  __int64 v65; // rax
  unsigned int v66; // r12d
  __int64 v67; // rax
  std::_V2 *v68; // rbx
  std::_V2 *v69; // rdi
  __int64 v70; // rbx
  std::_V2 *v71; // rdi
  __int64 v72; // rbx
  std::_V2 *v73; // rdi
  __m128i v74; // xmm0
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // r12
  __m128i *v78; // rax
  __m128i si128; // xmm0
  std::_V2 *v80; // rax
  __int64 v81; // [rsp+0h] [rbp-148h]
  __int64 v82; // [rsp+0h] [rbp-148h]
  __int64 v83; // [rsp+0h] [rbp-148h]
  __int64 v84; // [rsp+0h] [rbp-148h]
  __int64 v85; // [rsp+0h] [rbp-148h]
  __int64 v86; // [rsp+0h] [rbp-148h]
  const char *v87; // [rsp+8h] [rbp-140h] BYREF
  __int64 (__fastcall **v88)(); // [rsp+10h] [rbp-138h]
  int v89; // [rsp+1Ch] [rbp-12Ch]
  unsigned __int64 v90; // [rsp+20h] [rbp-128h]
  unsigned __int64 v91; // [rsp+28h] [rbp-120h]
  std::_V2 **v92; // [rsp+30h] [rbp-118h]
  __int64 v93; // [rsp+38h] [rbp-110h]
  __m128 v94; // [rsp+40h] [rbp-108h] BYREF
  char *v95; // [rsp+50h] [rbp-F8h] BYREF
  std::_V2 *v96; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v97; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v98; // [rsp+68h] [rbp-E0h]
  std::_V2 *v99; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v100; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v101; // [rsp+80h] [rbp-C8h] BYREF
  char v102; // [rsp+88h] [rbp-C0h]
  std::_V2 *v103[2]; // [rsp+90h] [rbp-B8h] BYREF
  unsigned int v104; // [rsp+A0h] [rbp-A8h] BYREF
  int v105; // [rsp+A4h] [rbp-A4h]
  std::_V2 *v106[2]; // [rsp+B0h] [rbp-98h] BYREF
  unsigned __int64 v107; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v108; // [rsp+C8h] [rbp-80h]
  void *v109; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v110; // [rsp+D8h] [rbp-70h]
  __int128 v111; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v112; // [rsp+F0h] [rbp-58h]
  char v113; // [rsp+F8h] [rbp-50h]
  int v114; // [rsp+FCh] [rbp-4Ch]
  std::_V2 **v115; // [rsp+100h] [rbp-48h]

  v3 = a1;
  v5 = (*((_BYTE *)a3 + 8) >> 1) & 7;
  if ( v5 == 2 )
  {
LABEL_11:
    v14 = *a3;
    v15 = *(_DWORD *)(a2 + 32);
    v16 = *a3;
    if ( v16 <= v15 )
    {
      v38 = *(_QWORD *)(a2 + 24);
      v24 = v15 - v14;
      v102 &= ~1u;
      *(_DWORD *)(a2 + 32) = v15 - v14;
      v25 = v38 & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v14));
      *(_QWORD *)(a2 + 24) = v38 >> v14;
      v101 = v25;
      goto LABEL_30;
    }
    v17 = 0;
    if ( v15 )
      v17 = *(_QWORD *)(a2 + 24);
    v18 = *(_QWORD *)(a2 + 16);
    v19 = *(_QWORD *)(a2 + 8);
    if ( v18 >= v19 )
    {
      v84 = std::_V2::generic_category((std::_V2 *)a1);
      v111 = 0;
      v103[0] = (std::_V2 *)&v104;
      v109 = &off_2BEBE68;
      v88 = &off_2BEBE68;
      v103[1] = nullptr;
      LOBYTE(v104) = 0;
      LODWORD(v110) = 0;
      v113 = 0;
      v114 = 1;
      v112 = 0;
      v115 = v103;
      sub_227B8B0(&v109, 0, 0, 0);
      v107 = v19;
      v87 = "Unexpected end of file reading %u of %u bytes";
      v108 = *(_QWORD *)(a2 + 16);
      *(__m128 *)v106 = _mm_loadh_ps((const double *)&v87);
      sub_227C560(&v109, v106);
      v109 = v88;
      sub_227B7A0(&v109);
      v109 = v103;
      LOWORD(v112) = 260;
      v72 = operator new(0x40u);
      sub_2220590(v72, &v109, 5, v84);
      v73 = v103[0];
      if ( (unsigned int *)v103[0] == &v104 )
      {
LABEL_89:
        *(_BYTE *)(v3 + 8) |= 1u;
        v102 |= 1u;
        v101 = 0;
        *(_QWORD *)v3 = v72;
        goto LABEL_32;
      }
LABEL_88:
      operator delete(v73);
      goto LABEL_89;
    }
    v20 = v18 + 8;
    v21 = (std::_V2 **)(v18 + *(_QWORD *)a2);
    if ( v19 < v18 + 8 )
    {
      *(_QWORD *)(a2 + 24) = 0;
      v62 = v19 - v18;
      if ( (_DWORD)v19 == (_DWORD)v18 )
      {
        *(_DWORD *)(a2 + 32) = 0;
        v23 = v14 - v15;
        goto LABEL_95;
      }
      v63 = 0;
      a1 = 0;
      while ( 1 )
      {
        a1 |= (unsigned __int64)*((unsigned __int8 *)v21 + v63) << (8 * (unsigned __int8)v63);
        *(_QWORD *)(a2 + 24) = a1;
        if ( v62 - 1 == v63 )
          break;
        ++v63;
      }
      v22 = 8 * v62;
      v20 = v18 + v62;
    }
    else
    {
      a1 = (unsigned __int64)*v21;
      v22 = 64;
      *(_QWORD *)(a2 + 24) = *v21;
    }
    *(_QWORD *)(a2 + 16) = v20;
    v23 = v14 - v15;
    *(_DWORD *)(a2 + 32) = v22;
    if ( (unsigned int)v14 - v15 <= v22 )
    {
      v102 &= ~1u;
      v24 = v15 - v14 + v22;
      *(_QWORD *)(a2 + 24) = a1 >> v23;
      *(_DWORD *)(a2 + 32) = v24;
      v25 = (((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v15 - (unsigned __int8)v14 + 64)) & a1) << v15) | v17;
      v101 = v25;
LABEL_30:
      v39 = (unsigned int)(v14 - 1);
      LODWORD(v87) = v14 - 1;
      v40 = 1LL << ((unsigned __int8)v14 - 1);
      LODWORD(v88) = v40;
      if ( ((unsigned int)v25 & (unsigned int)v40) == 0 )
      {
        *(_BYTE *)(v3 + 8) &= ~1u;
        *(_QWORD *)v3 = (unsigned int)v25;
LABEL_32:
        sub_A0AE70((__int64 *)&v101);
        return v3;
      }
      v45 = v40 - 1;
      v46 = v45 & (unsigned int)v25;
      v89 = v45;
      if ( (unsigned int)v87 > 0x3F )
      {
LABEL_103:
        v77 = std::_V2::generic_category((std::_V2 *)v39);
        v109 = &v111;
        v78 = (__m128i *)operator new(0x11u);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA3E0);
        v78[1].m128i_i8[0] = 0;
        v109 = v78;
        *v78 = si128;
        *(_QWORD *)&v111 = 16;
        v110 = 16;
        sub_22205D0(v106, &v109, 84, v77);
        if ( v109 != &v111 )
          operator delete(v109);
        v80 = v106[0];
        *(_BYTE *)(v3 + 8) |= 1u;
        *(_QWORD *)v3 = v80;
        goto LABEL_32;
      }
      v47 = v14 - 1;
      v98 = v3;
      v90 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v14);
      v92 = v106;
      v99 = (std::_V2 *)&v107;
      while ( 1 )
      {
        if ( v16 <= v24 )
        {
          v48 = *(_QWORD *)(a2 + 24);
          LOBYTE(v110) = v110 & 0xFE;
          *(_DWORD *)(a2 + 32) = v24 - v16;
          v109 = (void *)(v90 & v48);
          *(_QWORD *)(a2 + 24) = v48 >> v16;
          goto LABEL_42;
        }
        v50 = 0;
        if ( v24 )
          v50 = *(_QWORD *)(a2 + 24);
        v51 = *(_QWORD *)(a2 + 16);
        v52 = *(_QWORD *)(a2 + 8);
        if ( v51 < v52 )
          break;
        v97 = *(_QWORD *)(a2 + 8);
        v93 = std::_V2::generic_category((std::_V2 *)v39);
        v111 = 0;
        v103[0] = (std::_V2 *)&v104;
        v96 = (std::_V2 *)&v104;
        v109 = &off_2BEBE68;
        v94.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
        v115 = v103;
        v103[1] = nullptr;
        LOBYTE(v104) = 0;
        LODWORD(v110) = 0;
        v113 = 0;
        v114 = 1;
        v112 = 0;
        sub_227B8B0(&v109, 0, 0, 0);
        v107 = v97;
        v95 = "Unexpected end of file reading %u of %u bytes";
        v59 = _mm_loadh_ps((const double *)&v95);
        v108 = *(_QWORD *)(a2 + 16);
        *(__m128 *)v106 = v59;
        sub_227C560(&v109, v92);
        v109 = (void *)v94.m128_u64[0];
        sub_227B7A0(&v109);
        LOWORD(v112) = 260;
        v109 = v103;
        v91 = v91 & 0xFFFFFFFF00000000LL | 5;
        v60 = (void *)operator new(0x40u);
        sub_2220590(v60, &v109, (unsigned int)v91, v93);
        v61 = v103[0];
        if ( v103[0] != v96 )
          goto LABEL_62;
LABEL_63:
        LOBYTE(v110) = v110 | 1;
        v109 = v60;
LABEL_42:
        sub_A0AE70((__int64 *)&v101);
        v102 = v110 & 1 | v102 & 0xFE;
        v49 = v109;
        if ( (v110 & 1) != 0 )
          v109 = nullptr;
        v39 = (unsigned __int64)&v109;
        v101 = (unsigned __int64)v49;
        sub_A0AE70((__int64 *)&v109);
        if ( (v102 & 1) != 0 )
        {
          v3 = v98;
          v76 = v101;
          v101 = 0;
          *(_BYTE *)(v98 + 8) |= 1u;
          *(_QWORD *)v3 = v76;
          goto LABEL_32;
        }
        v46 |= (unsigned __int64)((unsigned int)v101 & v89) << v47;
        if ( ((unsigned int)v101 & (unsigned int)v88) == 0 )
        {
          v3 = v98;
          *(_BYTE *)(v98 + 8) &= ~1u;
          *(_QWORD *)v3 = v46;
          goto LABEL_32;
        }
        v47 += (unsigned int)v87;
        if ( v47 > 0x3F )
        {
          v3 = v98;
          goto LABEL_103;
        }
        v24 = *(_DWORD *)(a2 + 32);
      }
      v53 = v51 + 8;
      v54 = (void ***)(v51 + *(_QWORD *)a2);
      if ( v52 < v51 + 8 )
      {
        *(_QWORD *)(a2 + 24) = 0;
        v57 = v52 - v51;
        if ( !v57 )
        {
          *(_DWORD *)(a2 + 32) = 0;
          v56 = v16 - v24;
          goto LABEL_98;
        }
        v58 = 0;
        v39 = 0;
        while ( 1 )
        {
          v39 |= (unsigned __int64)*((unsigned __int8 *)v54 + v58) << (8 * (unsigned __int8)v58);
          *(_QWORD *)(a2 + 24) = v39;
          if ( v57 - 1 == v58 )
            break;
          ++v58;
        }
        v55 = 8 * v57;
        v53 = v57 + v51;
      }
      else
      {
        v39 = (unsigned __int64)*v54;
        v55 = 64;
        *(_QWORD *)(a2 + 24) = *v54;
      }
      *(_QWORD *)(a2 + 16) = v53;
      v56 = v16 - v24;
      *(_DWORD *)(a2 + 32) = v55;
      if ( v55 >= v16 - v24 )
      {
        LOBYTE(v110) = v110 & 0xFE;
        *(_QWORD *)(a2 + 24) = v39 >> v56;
        *(_DWORD *)(a2 + 32) = v24 - v16 + v55;
        v109 = (void *)((((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v24 - (unsigned __int8)v16 + 64)) & v39) << v24)
                      | v50);
        goto LABEL_42;
      }
LABEL_98:
      v94 = _mm_loadh_ps((const double *)off_2BE5CA8);
      v93 = std::_V2::generic_category((std::_V2 *)v39);
      v106[0] = v99;
      v115 = v92;
      v111 = 0;
      v109 = &off_2BEBE68;
      v95 = (char *)&off_2BEBE68;
      v106[1] = nullptr;
      LOBYTE(v107) = 0;
      LODWORD(v110) = 0;
      v113 = 0;
      v114 = 1;
      v112 = 0;
      sub_227B8B0(&v109, 0, 0, 0);
      v74 = _mm_load_si128((const __m128i *)&v94);
      v75 = *(_DWORD *)(a2 + 32);
      v104 = v56;
      *(__m128i *)v103 = v74;
      v105 = v75;
      sub_227C560(&v109, v103);
      v109 = v95;
      sub_227B7A0(&v109);
      LOWORD(v112) = 260;
      v109 = v92;
      v100 = v100 & 0xFFFFFFFF00000000LL | 5;
      v60 = (void *)operator new(0x40u);
      sub_2220590(v60, &v109, (unsigned int)v100, v93);
      v61 = v106[0];
      if ( v106[0] == v99 )
        goto LABEL_63;
LABEL_62:
      operator delete(v61);
      goto LABEL_63;
    }
LABEL_95:
    v86 = std::_V2::generic_category((std::_V2 *)a1);
    v111 = 0;
    v106[0] = (std::_V2 *)&v107;
    v109 = &off_2BEBE68;
    v88 = &off_2BEBE68;
    v106[1] = nullptr;
    LOBYTE(v107) = 0;
    LODWORD(v110) = 0;
    v113 = 0;
    v114 = 1;
    v112 = 0;
    v115 = v106;
    sub_227B8B0(&v109, 0, 0, 0);
    v104 = v23;
    v87 = "Unexpected end of file reading %u of %u bits";
    v105 = *(_DWORD *)(a2 + 32);
    *(__m128 *)v103 = _mm_loadh_ps((const double *)&v87);
    sub_227C560(&v109, v103);
    v109 = v88;
    sub_227B7A0(&v109);
    v109 = v106;
    LOWORD(v112) = 260;
    v72 = operator new(0x40u);
    sub_2220590(v72, &v109, 5, v86);
    v73 = v106[0];
    if ( (unsigned __int64 *)v106[0] == &v107 )
      goto LABEL_89;
    goto LABEL_88;
  }
  if ( v5 != 4 )
  {
    if ( v5 != 1 )
      goto LABEL_11;
    v26 = *a3;
    v27 = (std::_V2 *)*(unsigned int *)(a2 + 32);
    if ( (unsigned int)*a3 <= (unsigned int)v27 )
    {
      v36 = *(_QWORD *)(a2 + 24);
      *(_DWORD *)(a2 + 32) = (_DWORD)v27 - v26;
      *(_QWORD *)(a2 + 24) = v36 >> v26;
      *(_BYTE *)(v3 + 8) &= ~1u;
      *(_QWORD *)v3 = v36 & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v26));
      return v3;
    }
    v28 = 0;
    if ( (_DWORD)v27 )
      v28 = *(_QWORD *)(a2 + 24);
    v29 = *(_QWORD *)(a2 + 16);
    v30 = *(_QWORD *)(a2 + 8);
    if ( v29 >= v30 )
    {
      v82 = std::_V2::generic_category(v27);
      v111 = 0;
      v103[0] = (std::_V2 *)&v104;
      v109 = &off_2BEBE68;
      v88 = &off_2BEBE68;
      v103[1] = nullptr;
      LOBYTE(v104) = 0;
      LODWORD(v110) = 0;
      v113 = 0;
      v114 = 1;
      v112 = 0;
      v115 = v103;
      sub_227B8B0(&v109, 0, 0, 0);
      v107 = v30;
      v87 = "Unexpected end of file reading %u of %u bytes";
      v108 = *(_QWORD *)(a2 + 16);
      *(__m128 *)v106 = _mm_loadh_ps((const double *)&v87);
      sub_227C560(&v109, v106);
      v109 = v88;
      sub_227B7A0(&v109);
      v109 = v103;
      LOWORD(v112) = 260;
      v70 = operator new(0x40u);
      sub_2220590(v70, &v109, 5, v82);
      v71 = v103[0];
      if ( (unsigned int *)v103[0] == &v104 )
      {
LABEL_84:
        *(_BYTE *)(v3 + 8) |= 1u;
        *(_QWORD *)v3 = v70;
        return v3;
      }
LABEL_83:
      operator delete(v71);
      goto LABEL_84;
    }
    v31 = v29 + 8;
    v32 = (unsigned __int64 *)(v29 + *(_QWORD *)a2);
    if ( v30 < v29 + 8 )
    {
      *(_QWORD *)(a2 + 24) = 0;
      v64 = v30 - v29;
      if ( (_DWORD)v30 == (_DWORD)v29 )
      {
        *(_DWORD *)(a2 + 32) = 0;
        v35 = v26 - (_DWORD)v27;
        goto LABEL_91;
      }
      v65 = 0;
      v33 = 0;
      while ( 1 )
      {
        v33 |= (unsigned __int64)*((unsigned __int8 *)v32 + v65) << (8 * (unsigned __int8)v65);
        *(_QWORD *)(a2 + 24) = v33;
        if ( v64 - 1 == v65 )
          break;
        ++v65;
      }
      v34 = 8 * v64;
      v31 = v64 + v29;
    }
    else
    {
      v33 = *v32;
      v34 = 64;
      *(_QWORD *)(a2 + 24) = *v32;
    }
    *(_QWORD *)(a2 + 16) = v31;
    v35 = v26 - (_DWORD)v27;
    *(_DWORD *)(a2 + 32) = v34;
    if ( (int)v26 - (int)v27 <= v34 )
    {
      *(_QWORD *)(a2 + 24) = v33 >> v35;
      *(_DWORD *)(a2 + 32) = (_DWORD)v27 - v26 + v34;
      *(_BYTE *)(v3 + 8) &= ~1u;
      *(_QWORD *)v3 = (((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v27 - (unsigned __int8)v26 + 64)) & v33) << (char)v27)
                    | v28;
      return v3;
    }
LABEL_91:
    v85 = std::_V2::generic_category(v27);
    v111 = 0;
    v106[0] = (std::_V2 *)&v107;
    v109 = &off_2BEBE68;
    v88 = &off_2BEBE68;
    v106[1] = nullptr;
    LOBYTE(v107) = 0;
    LODWORD(v110) = 0;
    v113 = 0;
    v114 = 1;
    v112 = 0;
    v115 = v106;
    sub_227B8B0(&v109, 0, 0, 0);
    v104 = v35;
    v87 = "Unexpected end of file reading %u of %u bits";
    v105 = *(_DWORD *)(a2 + 32);
    *(__m128 *)v103 = _mm_loadh_ps((const double *)&v87);
    sub_227C560(&v109, v103);
    v109 = v88;
    sub_227B7A0(&v109);
    v109 = v106;
    LOWORD(v112) = 260;
    v70 = operator new(0x40u);
    sub_2220590(v70, &v109, 5, v85);
    v71 = v106[0];
    if ( (unsigned __int64 *)v106[0] == &v107 )
      goto LABEL_84;
    goto LABEL_83;
  }
  v6 = *(_DWORD *)(a2 + 32);
  if ( v6 > 5 )
  {
    v41 = *(_QWORD *)(a2 + 24);
    LOBYTE(v110) = v110 & 0xFE;
    LOBYTE(v106[1]) &= ~1u;
    v42 = v41;
    v13 = (void *)(v41 & 0x3F);
    *(_DWORD *)(a2 + 32) = v6 - 6;
    v109 = v13;
    *(_QWORD *)(a2 + 24) = v42 >> 6;
    goto LABEL_34;
  }
  v7 = 0;
  if ( v6 )
    v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 8);
  if ( v8 >= v9 )
  {
    v83 = std::_V2::generic_category((std::_V2 *)a1);
    v111 = 0;
    v103[0] = (std::_V2 *)&v104;
    v109 = &off_2BEBE68;
    v88 = &off_2BEBE68;
    v103[1] = nullptr;
    LOBYTE(v104) = 0;
    LODWORD(v110) = 0;
    v113 = 0;
    v114 = 1;
    v112 = 0;
    v115 = v103;
    sub_227B8B0(&v109, 0, 0, 0);
    v107 = v9;
    v87 = "Unexpected end of file reading %u of %u bytes";
    v108 = *(_QWORD *)(a2 + 16);
    *(__m128 *)v106 = _mm_loadh_ps((const double *)&v87);
    sub_227C560(&v109, v106);
    v109 = v88;
    sub_227B7A0(&v109);
    v109 = v103;
    LOWORD(v112) = 260;
    v68 = (std::_V2 *)operator new(0x40u);
    sub_2220590(v68, &v109, 5, v83);
    v69 = v103[0];
    if ( (unsigned int *)v103[0] == &v104 )
      goto LABEL_81;
    goto LABEL_80;
  }
  v10 = (std::_V2 **)(v8 + *(_QWORD *)a2);
  if ( v9 < v8 + 8 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v66 = v9 - v8;
    if ( v66 )
    {
      v67 = 0;
      a1 = 0;
      while ( 1 )
      {
        a1 |= (unsigned __int64)*((unsigned __int8 *)v10 + v67) << (8 * (unsigned __int8)v67);
        *(_QWORD *)(a2 + 24) = a1;
        if ( v66 - 1 == v67 )
          break;
        ++v67;
      }
      v11 = 8 * v66;
      v12 = 6 - v6;
      *(_DWORD *)(a2 + 32) = 8 * v66;
      *(_QWORD *)(a2 + 16) = v66 + v8;
      if ( 6 - v6 <= 8 * v66 )
        goto LABEL_9;
    }
    else
    {
      *(_DWORD *)(a2 + 32) = 0;
      v12 = 6 - v6;
    }
    v81 = std::_V2::generic_category((std::_V2 *)a1);
    v111 = 0;
    v106[1] = nullptr;
    v109 = &off_2BEBE68;
    v88 = &off_2BEBE68;
    v106[0] = (std::_V2 *)&v107;
    LOBYTE(v107) = 0;
    LODWORD(v110) = 0;
    v113 = 0;
    v114 = 1;
    v112 = 0;
    v115 = v106;
    sub_227B8B0(&v109, 0, 0, 0);
    v104 = v12;
    v87 = "Unexpected end of file reading %u of %u bits";
    v105 = *(_DWORD *)(a2 + 32);
    *(__m128 *)v103 = _mm_loadh_ps((const double *)&v87);
    sub_227C560(&v109, v103);
    v109 = v88;
    sub_227B7A0(&v109);
    v109 = v106;
    LOWORD(v112) = 260;
    v68 = (std::_V2 *)operator new(0x40u);
    sub_2220590(v68, &v109, 5, v81);
    v69 = v106[0];
    if ( (unsigned __int64 *)v106[0] == &v107 )
    {
LABEL_81:
      LOBYTE(v110) = v110 | 1;
      LOBYTE(v106[1]) |= 1u;
      v109 = nullptr;
      v106[0] = v68;
      goto LABEL_35;
    }
LABEL_80:
    operator delete(v69);
    goto LABEL_81;
  }
  a1 = (unsigned __int64)*v10;
  *(_QWORD *)(a2 + 16) = v8 + 8;
  v11 = 64;
  LOBYTE(v12) = 6 - v6;
LABEL_9:
  LOBYTE(v110) = v110 & 0xFE;
  *(_DWORD *)(a2 + 32) = v11 + v6 - 6;
  *(_QWORD *)(a2 + 24) = a1 >> v12;
  LOBYTE(v106[1]) &= ~1u;
  v13 = (void *)(v7 | ((a1 & (0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v6 + 58))) << v6));
  v109 = v13;
LABEL_34:
  LODWORD(v106[0]) = (_DWORD)v13;
LABEL_35:
  sub_A0AE70((__int64 *)&v109);
  v43 = (__int64)v106[1] & 1;
  if ( ((__int64)v106[1] & 1) != 0 )
  {
    v44 = v106[0];
    v106[0] = nullptr;
  }
  else
  {
    v44 = (std::_V2 *)aAbcdefghijklmn_1[LODWORD(v106[0])];
  }
  *(_QWORD *)v3 = v44;
  *(_BYTE *)(v3 + 8) = v43 | *(_BYTE *)(v3 + 8) & 0xFE;
  sub_A0AE90((__int64 *)v106);
  return v3;
}
