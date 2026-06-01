void __fastcall sub_18DB970(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __m128i a6, double a7)
{
  unsigned int v9; // ebx
  unsigned __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  bool v16; // r12
  __int16 v17; // ax
  void *v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  void *v21; // rcx
  __int64 v22; // r15
  unsigned __int64 v23; // rdx
  unsigned int v24; // edx
  char *v25; // rax
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // edx
  __int64 v29; // rcx
  const char *v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 *v34; // rdx
  __int64 v35; // rsi
  const char *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r15
  size_t v39; // rax
  __int64 *v40; // r15
  __int64 v41; // rdx
  char *v42; // rsi
  __int64 v43; // r15
  __int64 *v44; // r14
  char *v45; // rax
  __int64 v46; // rdx
  void *v47; // r13
  void *v48; // r14
  _BYTE *v49; // r12
  size_t v50; // rax
  size_t v51; // rax
  size_t v52; // rax
  size_t v53; // rax
  size_t v54; // rax
  size_t v55; // rax
  size_t v56; // rax
  size_t v57; // rax
  char v58; // al
  unsigned int v59; // r14d
  void *v60; // r12
  bool v61; // al
  __int64 v62; // r12
  int v63; // eax
  unsigned __int64 v64; // rax
  unsigned int v65; // r12d
  void *v66; // r14
  void *v67; // rdi
  size_t v68; // rax
  size_t v69; // rax
  __m128i *v70; // rax
  __int64 *v71; // rbp
  __int64 v72; // rax
  __int64 v73; // rax
  void *v74; // rdi
  _QWORD *v75; // r12
  size_t v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rbp
  void *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // r12
  __int64 v86; // r12
  void *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // [rsp+8h] [rbp-2C0h]
  bool v90; // [rsp+18h] [rbp-2B0h]
  void *v91; // [rsp+18h] [rbp-2B0h]
  __int64 v92; // [rsp+18h] [rbp-2B0h]
  unsigned int s1a; // [rsp+20h] [rbp-2A8h]
  const char *s1; // [rsp+20h] [rbp-2A8h]
  void *s1b; // [rsp+20h] [rbp-2A8h]
  __int64 v96; // [rsp+28h] [rbp-2A0h]
  __int64 *v97; // [rsp+30h] [rbp-298h]
  __int64 v98; // [rsp+38h] [rbp-290h]
  __int64 v99; // [rsp+38h] [rbp-290h]
  __int64 v100; // [rsp+38h] [rbp-290h]
  char v101; // [rsp+4Eh] [rbp-27Ah] BYREF
  char v102; // [rsp+4Fh] [rbp-279h] BYREF
  __int64 v103; // [rsp+50h] [rbp-278h]
  unsigned int v104; // [rsp+58h] [rbp-270h]
  unsigned __int64 v105; // [rsp+5Ch] [rbp-26Ch]
  unsigned int v106; // [rsp+64h] [rbp-264h]
  unsigned __int64 v107; // [rsp+68h] [rbp-260h]
  unsigned int v108; // [rsp+70h] [rbp-258h]
  unsigned __int64 v109; // [rsp+74h] [rbp-254h]
  unsigned int v110; // [rsp+7Ch] [rbp-24Ch]
  void *v111; // [rsp+80h] [rbp-248h] BYREF
  unsigned int v112; // [rsp+88h] [rbp-240h]
  void *v113; // [rsp+90h] [rbp-238h] BYREF
  unsigned int v114; // [rsp+98h] [rbp-230h]
  _QWORD v115[2]; // [rsp+A0h] [rbp-228h] BYREF
  _QWORD v116[2]; // [rsp+B0h] [rbp-218h] BYREF
  _QWORD v117[2]; // [rsp+C0h] [rbp-208h] BYREF
  void *v118; // [rsp+D0h] [rbp-1F8h] BYREF
  unsigned int v119; // [rsp+D8h] [rbp-1F0h]
  void *v120; // [rsp+E0h] [rbp-1E8h] BYREF
  unsigned int v121; // [rsp+E8h] [rbp-1E0h]
  void *v122; // [rsp+F0h] [rbp-1D8h] BYREF
  unsigned int v123; // [rsp+F8h] [rbp-1D0h]
  void *v124; // [rsp+100h] [rbp-1C8h] BYREF
  void *v125; // [rsp+108h] [rbp-1C0h]
  _BYTE v126[16]; // [rsp+110h] [rbp-1B8h] BYREF
  void *v127; // [rsp+120h] [rbp-1A8h] BYREF
  void *v128; // [rsp+128h] [rbp-1A0h]
  _BYTE v129[16]; // [rsp+130h] [rbp-198h] BYREF
  void *v130[2]; // [rsp+140h] [rbp-188h] BYREF
  _BYTE v131[16]; // [rsp+150h] [rbp-178h] BYREF
  _QWORD v132[2]; // [rsp+160h] [rbp-168h] BYREF
  __int64 v133; // [rsp+170h] [rbp-158h] BYREF
  void *v134; // [rsp+180h] [rbp-148h] BYREF
  signed __int64 v135; // [rsp+188h] [rbp-140h]
  __m128i v136; // [rsp+190h] [rbp-138h] BYREF
  void *v137; // [rsp+1A0h] [rbp-128h] BYREF
  signed __int64 v138; // [rsp+1A8h] [rbp-120h]
  _WORD v139[8]; // [rsp+1B0h] [rbp-118h] BYREF
  void *v140[2]; // [rsp+1C0h] [rbp-108h] BYREF
  __int64 v141; // [rsp+1D0h] [rbp-F8h] BYREF
  void *v142; // [rsp+1D8h] [rbp-F0h]
  _BYTE v143[24]; // [rsp+1E8h] [rbp-E0h] BYREF
  void *v144; // [rsp+200h] [rbp-C8h] BYREF
  _BYTE *v145; // [rsp+208h] [rbp-C0h]
  _BYTE v146[184]; // [rsp+210h] [rbp-B8h] BYREF

  if ( (int)a4 < 0 )
    return;
  v9 = a4;
  v10 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  v11 = sub_C00A40(v10, (__int64)a2, (__int64)a3, a4, a5);
  v15 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  if ( v11 < 0 )
  {
    if ( (int)sub_C00A40(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)a2, v12, v13, v14) < 0 || (*(_WORD *)v10 & 0x1FF) != 0x34 )
      return;
  }
  else if ( (*(_WORD *)v10 & 0x1FF) != 0x34 )
  {
    return;
  }
  v90 = 0;
  v16 = 0;
  v17 = *(_WORD *)v15 & 0x1FF;
  if ( v17 != 52 )
  {
    if ( v17 != 4 )
      return;
    if ( !v10 )
      return;
    v63 = *(_BYTE *)(v15 + 2) >> 3;
    if ( (unsigned int)(v63 - 6) > 1 )
      return;
    v15 = *(_QWORD *)(v15 + 16);
    if ( (*(_WORD *)v15 & 0x1FF) != 0x34 )
      return;
    v16 = v63 == 7;
    v90 = v63 != 7;
  }
  v18 = *(void **)(v10 + 16);
  v19 = *(unsigned int *)(v10 + 24);
  v20 = (unsigned __int64)(v19 + 63) >> 6;
  if ( v20 > 1 )
  {
    sub_2205610(&v111, v19, v20, v18);
  }
  else
  {
    v112 = *(_DWORD *)(v10 + 24);
    if ( (unsigned int)v19 > 0x40 )
      sub_2205470(&v111, v18, 0);
    else
      v111 = v18;
  }
  v21 = *(void **)(v15 + 16);
  v22 = *(unsigned int *)(v15 + 24);
  v23 = (unsigned __int64)(v22 + 63) >> 6;
  if ( v23 > 1 )
  {
    sub_2205610(&v113, (unsigned int)v22, v23, v21);
    LODWORD(v22) = v114;
  }
  else
  {
    v114 = *(_DWORD *)(v15 + 24);
    if ( (unsigned int)v22 > 0x40 )
    {
      sub_2205470(&v113, v21, 0);
      LODWORD(v22) = v114;
    }
    else
    {
      v113 = v21;
    }
  }
  v24 = v112;
  if ( v112 <= 0x40 )
  {
    v25 = (char *)v111;
    if ( v111 == (char *)&dword_0 + 2 )
      goto LABEL_28;
    goto LABEL_13;
  }
  s1a = v112;
  v26 = sub_2206780(&v111);
  v24 = s1a;
  if ( s1a - v26 > 0x40 )
    goto LABEL_14;
  v25 = *(char **)v111;
  if ( *(_QWORD *)v111 != 2 )
  {
LABEL_13:
    if ( v25 != &byte_9[1] )
      goto LABEL_14;
  }
LABEL_28:
  if ( v24 != (_DWORD)v22 )
    goto LABEL_14;
  v27 = sub_15F0EF0(a1, *(_DWORD *)(v15 + 28), 0, a6, a7);
  v28 = *(_DWORD *)(v10 + 28);
  LOBYTE(v104) = 0;
  v29 = *(_QWORD *)(a1 + 232);
  v103 = __PAIR64__(v27, v28);
  v30 = sub_13DD220(__PAIR64__(v27, v28), v104, *(__int64 **)(a1 + 272), v29, nullptr, a6, a7);
  v115[1] = v31;
  v115[0] = v30;
  v32 = sub_15F0EF0(a1, v9, 0, a6, a7);
  v105 = __PAIR64__(v32, v9);
  v33 = *(_QWORD *)(a1 + 232);
  v34 = *(__int64 **)(a1 + 272);
  LOBYTE(v106) = 0;
  v35 = v106;
  v36 = sub_13DD220(__PAIR64__(v32, v9), v106, v34, v33, nullptr, a6, a7);
  v38 = v37;
  s1 = v36;
  v39 = j__strlen("xor");
  if ( v39 != v38 || v39 && (v35 = (__int64)"xor", memcmp(s1, "xor", v39)) )
  {
    v40 = *(__int64 **)(a1 + 272);
    s1b = *(void **)(a1 + 232);
    LOBYTE(v108) = 1;
    v107 = sub_EEC8C0(v10, v35, *(double *)a6.m128i_i64);
    v42 = (char *)sub_13DD220(v107, v108, v40, (__int64)s1b, nullptr, a6, a7);
    v124 = v126;
    sub_18BD0A0(&v124, v42, (__int64)&v42[v41]);
    v43 = *(_QWORD *)(a1 + 232);
    v44 = *(__int64 **)(a1 + 272);
    LOBYTE(v110) = 1;
    v109 = sub_EEC8C0(v15, (__int64)v42, *(double *)a6.m128i_i64);
    v45 = (char *)sub_13DD220(v109, v110, v44, v43, nullptr, a6, a7);
    v127 = v129;
    sub_18BD0A0(&v127, v45, (__int64)&v45[v46]);
    if ( !v16 )
    {
      if ( !v90 )
        goto LABEL_35;
      sub_C05100((__int64)&v144, "+", (__int64)&v127);
      sub_A0AAD0((__int64)&v127, &v144);
      v67 = v144;
      if ( v144 == v146 )
        goto LABEL_35;
      goto LABEL_86;
    }
    LODWORD(v145) = v114;
    if ( v114 > 0x40 )
    {
      sub_2205510(&v144);
      if ( (unsigned int)v145 > 0x40 )
      {
        sub_2205FC0(&v144, &v113);
        goto LABEL_80;
      }
      v64 = (unsigned __int64)v144;
    }
    else
    {
      v64 = (unsigned __int64)v113;
    }
    v144 = (void *)~v64;
    sub_CF8100((unsigned __int64 *)&v144);
LABEL_80:
    sub_2205900(&v144);
    v65 = (unsigned int)v145;
    LODWORD(v145) = 0;
    v66 = v144;
    if ( v114 > 0x40 && v113 )
    {
      operator delete[](v113);
      v113 = v66;
      v114 = v65;
      if ( (unsigned int)v145 > 0x40 && v144 )
        operator delete[](v144);
    }
    else
    {
      v113 = v144;
      v114 = v65;
    }
    sub_C05100((__int64)&v144, "-", (__int64)&v127);
    sub_A0AAD0((__int64)&v127, &v144);
    v67 = v144;
    if ( v144 == v146 )
    {
LABEL_35:
      v47 = v125;
      v48 = v124;
      v49 = v127;
      v116[1] = v125;
      v116[0] = v124;
      v117[0] = v127;
      v91 = v128;
      v117[1] = v128;
      v50 = j__strlen("0b");
      if ( v50 <= (unsigned __int64)v47 && (!v50 || !memcmp(v48, "0b", v50))
        || (v51 = j__strlen("0B"), sub_9C7D00((__int64)v116, "0B", v51))
        || (v52 = j__strlen("0b"), sub_9C7D00((__int64)v117, "0b", v52))
        || (v53 = j__strlen("0B"), sub_9C7D00((__int64)v117, "0B", v53))
        || (v54 = j__strlen("0x"), sub_9C7D00((__int64)v116, "0x", v54))
        || (v55 = j__strlen("0X"), sub_9C7D00((__int64)v116, "0X", v55))
        || (v56 = j__strlen("0x"), sub_9C7D00((__int64)v117, "0x", v56))
        || (v57 = j__strlen("0X"), sub_9C7D00((__int64)v117, "0X", v57))
        || (unsigned __int64)v47 > 1 && (v69 = j__strlen("0"), sub_9C7D00((__int64)v116, "0", v69))
        || (unsigned __int64)v91 > 1 && (v68 = j__strlen("0"), sub_9C7D00((__int64)v117, "0", v68))
        || (v144 = v47, v145 = v48, sub_18BEC30(&v144, 39, 0) != (char *)-1LL)
        || (v145 = v49, v144 = v91, sub_18BEC30(&v144, 39, 0) != (char *)-1LL) )
      {
LABEL_104:
        if ( v49 != v129 )
          operator delete(v49);
        if ( v124 != v126 )
          operator delete(v124);
        goto LABEL_32;
      }
      v58 = 1;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
      {
        v75 = *(_QWORD **)(a1 + 240);
        v76 = j__strlen("xor");
        v77 = sub_6F3470((__int64)(v75 + 69), "xor", v76);
        v58 = sub_18CAF60(v75, v77, v78, v79, v80, v81);
      }
      v101 = v58;
      LODWORD(v145) = v112;
      if ( v112 > 0x40 )
      {
        sub_2205510(&v144);
        if ( (unsigned int)v145 > 0x40 )
        {
          sub_2205CC0(&v144, &v113);
LABEL_54:
          v59 = v114;
          v60 = v113;
          v119 = (unsigned int)v145;
          v118 = v144;
          if ( v114 > 0x40 )
          {
            v62 = *(_QWORD *)v113;
          }
          else
          {
            v61 = sub_9954A0((__int64)&v111, (int *)((char *)&dword_0 + 2));
            if ( !v59 )
            {
              v62 = 0;
              goto LABEL_58;
            }
            v62 = (__int64)((_QWORD)v60 << (64 - (unsigned __int8)v59)) >> (64 - (unsigned __int8)v59);
          }
          v61 = sub_9954A0((__int64)&v111, (int *)((char *)&dword_0 + 2));
          if ( v62 < 0 )
          {
LABEL_59:
            if ( sub_9954A0((__int64)&v111, &byte_9[1]) )
            {
              sub_D8B070(
                &v144,
                (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
                32,
                (__int64)"%ld",
                v62);
              v70 = (__m128i *)sub_99BDC0(&v144, 0, 0, "1e", 2u);
              v134 = &v136;
              if ( (__m128i *)v70->m128i_i64[0] == &v70[1] )
              {
                v136 = _mm_loadu_si128(v70 + 1);
              }
              else
              {
                v134 = (void *)v70->m128i_i64[0];
                v136.m128i_i64[0] = v70[1].m128i_i64[0];
              }
              v135 = v70->m128i_i64[1];
              v70->m128i_i64[0] = (__int64)v70[1].m128i_i64;
              v70->m128i_i64[1] = 0;
              v70[1].m128i_i8[0] = 0;
              if ( v144 != v146 )
                operator delete(v144);
              v71 = (__int64 *)(a1 + 8);
              sub_168B9F0((__int64)&v144, v71, v9, 0x1D93u, 0);
              v89 = sub_1682BA0((__int64)&v144, (__int64)v115);
              sub_C1DEB0(&v137, (int)&v118, 10, 1u, 0, 1u, 0);
              v72 = sub_1682AF0(v89, (__int64)&v137);
              v96 = sub_1682A40(v72, (__int64)&v134);
              sub_18BE5B0((__int64)v140, v103, v104, v134, v135);
              sub_1589170(v96, v140);
              if ( v142 != v143 )
                operator delete(v142);
              if ( v137 != v139 )
                operator delete(v137);
              sub_15F7200(&v144);
              sub_168B9F0((__int64)&v144, v71, v9, 0x1948u, 0);
              sub_C05100((__int64)v140, "0xA ^ ", (__int64)&v127);
              v73 = sub_1682AF0((__int64)&v144, (__int64)v140);
              sub_15890D0(v73, (unsigned __int8 *)&v101);
              if ( v140[0] != &v141 )
                operator delete(v140[0]);
              sub_15F7200(&v144);
              v74 = v134;
              if ( v134 != &v136 )
LABEL_128:
                operator delete(v74);
            }
LABEL_60:
            if ( v119 > 0x40 && v118 )
              operator delete[](v118);
            if ( v127 != v129 )
              operator delete(v127);
            if ( v124 != v126 )
              operator delete(v124);
            if ( v114 <= 0x40 )
              goto LABEL_17;
            goto LABEL_15;
          }
LABEL_58:
          if ( !v61 )
            goto LABEL_59;
          sub_C05100((__int64)v130, "1 << ", (__int64)&v127);
          v102 = 0;
          LODWORD(v145) = v112;
          if ( v112 > 0x40 )
            sub_2205510(&v144);
          else
            v144 = v111;
          sub_2205B00(&v144, 1);
          v121 = (unsigned int)v145;
          v120 = v144;
          sub_220A8F0(&v122, &v120, &v113, &v102);
          if ( v102 )
          {
            if ( v62 > 63 )
            {
              if ( v62 != 64 )
              {
                if ( v123 > 0x40 && v122 )
                  operator delete[](v122);
                if ( v121 > 0x40 && v120 )
                  operator delete[](v120);
                if ( v130[0] != v131 )
                  operator delete(v130[0]);
                if ( v119 > 0x40 && v118 )
                  operator delete[](v118);
                v49 = v127;
                goto LABEL_104;
              }
              v97 = (__int64 *)(a1 + 8);
              sub_168B9F0((__int64)&v144, (__int64 *)(a1 + 8), v9, 0x1D92u, 0);
              v82 = sub_1682BA0((__int64)&v144, (__int64)v115);
              sub_C1DEB0(v140, (int)&v118, 10, 1u, 0, 1u, 0);
              sub_1682AF0(v82, (__int64)v140);
              v83 = v140[0];
              if ( v140[0] != &v141 )
                goto LABEL_135;
              goto LABEL_136;
            }
            v97 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)&v144, (__int64 *)(a1 + 8), v9, 0x1D93u, 0);
            v85 = sub_1682BA0((__int64)&v144, (__int64)v115);
            sub_C1DEB0(v132, (int)&v118, 10, 1u, 0, 1u, 0);
            v86 = sub_1682AF0(v85, (__int64)v132);
            sub_C05100((__int64)&v134, "1LL << ", (__int64)&v127);
            v98 = sub_1682AF0(v86, (__int64)&v134);
            sub_C05100((__int64)&v137, "1LL << ", (__int64)&v127);
            sub_18BE5B0((__int64)v140, v103, v104, v137, v138);
            sub_1589170(v98, v140);
            v87 = v142;
            if ( v142 != v143 )
              goto LABEL_147;
          }
          else
          {
            v97 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)&v144, (__int64 *)(a1 + 8), v9, 0x1D94u, 0);
            v92 = sub_1682BA0((__int64)&v144, (__int64)v115);
            sub_C1DEB0(v132, (int)&v118, 10, 1u, 0, 1u, 0);
            v88 = sub_1682AF0(v92, (__int64)v132);
            v99 = sub_1682A40(v88, (__int64)v130);
            sub_C1DEB0(&v134, (int)&v122, 10, 1u, 0, 1u, 0);
            v100 = sub_1682AF0(v99, (__int64)&v134);
            v137 = v139;
            if ( v62 )
            {
              sub_18BD160(&v137, (_BYTE *)v130[0], (__int64)v130[0] + (unsigned __int64)v130[1]);
            }
            else
            {
              v138 = 1;
              v139[0] = 49;
            }
            sub_18BE5B0((__int64)v140, v103, v104, v137, v138);
            sub_1589170(v100, v140);
            v87 = v142;
            if ( v142 != v143 )
LABEL_147:
              operator delete(v87);
          }
          if ( v137 != v139 )
            operator delete(v137);
          if ( v134 != &v136 )
            operator delete(v134);
          v83 = (void *)v132[0];
          if ( (__int64 *)v132[0] != &v133 )
LABEL_135:
            operator delete(v83);
LABEL_136:
          sub_15F7200(&v144);
          sub_168B9F0((__int64)&v144, v97, v9, 0x1948u, 0);
          sub_C05100((__int64)v140, "0x2 ^ ", (__int64)&v127);
          v84 = sub_1682AF0((__int64)&v144, (__int64)v140);
          sub_15890D0(v84, (unsigned __int8 *)&v101);
          if ( v140[0] != &v141 )
            operator delete(v140[0]);
          sub_15F7200(&v144);
          if ( v123 > 0x40 && v122 )
            operator delete[](v122);
          if ( v121 > 0x40 && v120 )
            operator delete[](v120);
          v74 = v130[0];
          if ( v130[0] != v131 )
            goto LABEL_128;
          goto LABEL_60;
        }
      }
      else
      {
        v144 = v111;
      }
      v144 = (void *)((unsigned __int64)v113 ^ (unsigned __int64)v144);
      goto LABEL_54;
    }
LABEL_86:
    operator delete(v67);
    goto LABEL_35;
  }
LABEL_32:
  LODWORD(v22) = v114;
LABEL_14:
  if ( (unsigned int)v22 > 0x40 )
  {
LABEL_15:
    if ( v113 )
      operator delete[](v113);
  }
LABEL_17:
  if ( v112 > 0x40 )
  {
    if ( v111 )
      operator delete[](v111);
  }
}
