void __fastcall sub_1873840(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 *v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  void **v15; // r8
  __int64 v16; // r13
  _DWORD *v17; // rsi
  unsigned __int8 v18; // al
  int v19; // eax
  char v20; // bp
  void *v21; // rdi
  __int64 *v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  void *v30; // rdx
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // r13
  __int64 v47; // r14
  __int64 v48; // r9
  unsigned int v49; // esi
  __int64 v50; // r9
  unsigned __int64 v51; // r15
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rax
  unsigned __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // rax
  unsigned int v61; // r9d
  unsigned __int64 v62; // rdx
  __int64 v63; // rsi
  __m128i v64; // xmm1
  __m128 v65; // xmm2
  __m128i v66; // xmm0
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned __int64 v72; // r12
  __m128i v73; // xmm3
  __m128i v74; // xmm4
  __m128i v75; // xmm5
  void **v76; // r15
  void *v77; // rax
  unsigned __int8 (__fastcall *v78)(_QWORD); // rdx
  _QWORD *v79; // rdi
  void **v80; // rbx
  __int64 (__fastcall *v81)(_QWORD); // rax
  _QWORD *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rbx
  unsigned int v85; // r15d
  __int64 v86; // rax
  void *v87; // rsi
  void **v88; // rdi
  __int64 v89; // rcx
  void *v90; // rdx
  int v91; // esi
  __int64 v92; // r13
  __int64 v93; // rdx
  __int64 v94; // rax
  char v95; // al
  unsigned __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // rax
  void *v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // r15
  void *v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // [rsp+8h] [rbp-1E0h] BYREF
  void **v109; // [rsp+10h] [rbp-1D8h]
  void **v110; // [rsp+18h] [rbp-1D0h]
  unsigned __int64 v111; // [rsp+20h] [rbp-1C8h]
  unsigned __int64 v112; // [rsp+28h] [rbp-1C0h]
  _QWORD *v113; // [rsp+30h] [rbp-1B8h]
  __int64 v114; // [rsp+38h] [rbp-1B0h]
  __int64 v115; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v116; // [rsp+48h] [rbp-1A0h]
  void *v117; // [rsp+50h] [rbp-198h] BYREF
  unsigned int v118; // [rsp+58h] [rbp-190h]
  char v119; // [rsp+5Ch] [rbp-18Ch]
  void *ptr[2]; // [rsp+60h] [rbp-188h] BYREF
  _BYTE v121[32]; // [rsp+70h] [rbp-178h] BYREF
  _QWORD v122[2]; // [rsp+90h] [rbp-158h] BYREF
  double v123[4]; // [rsp+A0h] [rbp-148h] BYREF
  __m128i v124; // [rsp+C0h] [rbp-128h] BYREF
  __m128i v125; // [rsp+D0h] [rbp-118h] BYREF
  __m128i v126; // [rsp+E0h] [rbp-108h] BYREF
  void *v127[2]; // [rsp+F0h] [rbp-F8h] BYREF
  _OWORD v128[2]; // [rsp+100h] [rbp-E8h] BYREF
  void *v129; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v130; // [rsp+128h] [rbp-C0h]
  void *v131; // [rsp+130h] [rbp-B8h]
  __int64 v132; // [rsp+138h] [rbp-B0h]
  unsigned __int8 *v133; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v134; // [rsp+148h] [rbp-A0h]
  char v135; // [rsp+198h] [rbp-50h]
  unsigned int v136; // [rsp+1A0h] [rbp-48h]
  char v137; // [rsp+1A4h] [rbp-44h]

  v4 = (__int64 *)(a2 + 104);
  v115 = *(_QWORD *)(a2 + 48);
  if ( (*(_BYTE *)(*(_QWORD *)(v115 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    v5 = *(unsigned int *)(a2 + 100);
    v6 = a2 + 104;
    v7 = &v4[v5];
    if ( v7 != v4 )
    {
      do
      {
        if ( (*(_QWORD *)(*(_QWORD *)v6 + 48LL) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          *(_QWORD *)(*(_QWORD *)v6 + 48LL) = *(_QWORD *)(a1[31] + 19072);
        v6 += 8;
      }
      while ( v7 != (__int64 *)v6 );
    }
    return;
  }
  v8 = a2;
  v10 = sub_C1BEF0((__int64)&v115, a2, a3, a4);
  v11 = *(unsigned int *)(a2 + 100);
  v12 = (_QWORD *)a1[31];
  v13 = v10;
  v115 = v10;
  v108 = v11;
  v14 = sub_A72040(v12, v10);
  v15 = (void **)v115;
  if ( v14 && (unsigned int)*(unsigned __int8 *)(v14 + 16) - 2 <= 1 )
  {
    v16 = *(_QWORD *)(v14 + 32);
    v17 = *(_DWORD **)(v14 + 40);
    v18 = *(_BYTE *)(v14 + 19);
    if ( (v18 & 2) != 0 )
    {
      v19 = v17[2];
      LODWORD(v127[1]) = v19;
      if ( (unsigned int)v19 > 0x40 )
      {
        v109 = (void **)v115;
        sub_2205510(v127);
        v19 = (int)v127[1];
        v15 = v109;
        v17 = v127[0];
      }
      else
      {
        v17 = *(_DWORD **)v17;
        v127[0] = v17;
      }
    }
    else
    {
      v19 = 8 * ((v18 >> 2) & 0x1F);
      LODWORD(v127[1]) = v19;
      if ( v19 > 64 )
      {
        v109 = (void **)v115;
        sub_2205470(v127, v17, 0);
        v19 = (int)v127[1];
        v15 = v109;
        v17 = v127[0];
      }
      else
      {
        v127[0] = v17;
      }
    }
    LODWORD(v130) = v19;
    v129 = v17;
    v124.m128i_i64[0] = (__int64)a1;
    LODWORD(v127[1]) = 0;
    BYTE4(v130) = 1;
    v20 = sub_1872480(
            (__int64)a1,
            v4,
            v108,
            v8,
            (__int64)v15,
            (unsigned __int64 **)&v129,
            v16,
            (__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, _QWORD))sub_1837ED0,
            (__int64)&v124);
    if ( (unsigned int)v130 > 0x40 && v129 )
      operator delete[](v129);
    if ( LODWORD(v127[1]) > 0x40 )
    {
      v21 = v127[0];
      if ( v127[0] )
LABEL_17:
        operator delete[](v21);
    }
LABEL_18:
    if ( !v20 )
      return;
LABEL_19:
    sub_B88650(v8, 1);
    return;
  }
  v22 = (__int64 *)(v115 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *(_QWORD *)(v115 & 0xFFFFFFFFFFFFFFF0LL);
  v24 = *(unsigned __int8 *)(v23 + 16);
  if ( (unsigned int)(v24 - 57) <= 1 )
    goto LABEL_21;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
    goto LABEL_33;
  v32 = sub_F63050(*(_QWORD *)(v115 & 0xFFFFFFFFFFFFFFF0LL), v13, v22, v24);
  v15 = (void **)v115;
  v23 = v32;
  v22 = (__int64 *)(v115 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v32 )
  {
    v23 = *v22;
    v24 = *(unsigned __int8 *)(*v22 + 16);
LABEL_33:
    if ( (_BYTE)v24 == 14 )
      goto LABEL_34;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 14 )
    {
      v23 = sub_F63050(v23, v13, v22, v24);
      if ( v23 )
      {
        v15 = (void **)v115;
        v22 = (__int64 *)(v115 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_34:
        v33 = a1[31];
        v34 = 0;
        v127[0] = a1;
        v35 = v22[1];
        if ( (v35 & 8) != 0 )
          v34 = *(__int64 *)((char *)&qword_18 + (v35 & 0xFFFFFFFFFFFFFFF0LL));
        v36 = *(_QWORD *)(v23 + 32);
        v109 = v15;
        v37 = sub_A70F20(v33, v36, v34 | ((unsigned __int8)v15 | (unsigned __int8)v35) & 7);
        LODWORD(v130) = 64;
        v129 = &dword_0 + 2;
        BYTE4(v130) = 0;
        v20 = sub_1872480(
                (__int64)a1,
                v4,
                v108,
                v8,
                (__int64)v109,
                (unsigned __int64 **)&v129,
                v37,
                (__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, _QWORD))sub_18375C0,
                (__int64)v127);
        if ( (unsigned int)v130 > 0x40 )
        {
          v21 = v129;
          if ( v129 )
            goto LABEL_17;
        }
        goto LABEL_18;
      }
    }
    v38 = *(unsigned int *)(v8 + 24);
    v118 = 32;
    v117 = nullptr;
    v119 = 1;
    v39 = sub_184B570(a1, v38, v115, (__int64)&v117);
    if ( !v39 )
    {
      if ( !(unsigned __int8)sub_1872820(a1, v4, v108, v8, v115, (unsigned __int64 **)&v117) )
        goto LABEL_89;
      goto LABEL_88;
    }
    if ( v39 != 2 )
    {
      v44 = sub_F63270(*(_QWORD *)(v115 & 0xFFFFFFFFFFFFFFF0LL), v38, v40, v41, v42, v43);
      v45 = *(unsigned int *)(v8 + 24);
      v46 = (__int64)v44;
      if ( !v44 || *((_BYTE *)v44 + 73) >> 5 == 2 )
      {
        sub_168B9F0((__int64)&v129, a1 + 1, v45, 0xE12u, 0);
        if ( v135 )
        {
          sub_AE9DF0(&v133, v8, 0xAu);
        }
        else if ( v137 )
        {
          v105 = sub_168B9E0(&v129);
          v106 = v131;
          if ( v131 )
            v106 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v131 + 32LL))(v131);
          v127[0] = v106;
          v107 = sub_1587BC0(v105, (__int64 *)v127, v101, v102, v103, v104);
          sub_AE9DF0((unsigned __int8 **)(*v107 + 32LL * v136 + 8), v8, 0xAu);
        }
        LOBYTE(v127[0]) = v46 == 0;
        v98 = sub_1588420((__int64)&v129, (unsigned __int8 *)v127);
        sub_1605D30(v98, &v115);
        sub_15F7200(&v129);
        goto LABEL_88;
      }
      v47 = v115;
      if ( !(unsigned __int8)sub_1E63CF0(a1, v45, v115, 1, 3968) )
      {
        v49 = *(_DWORD *)(v8 + 24);
        v109 = ptr;
        ptr[0] = v121;
        v110 = (void **)v121;
        ptr[1] = (void *)0x400000000LL;
        v116 = sub_184E8C0(a1, v49, v46, (__int64)ptr, (__int64)v121, v48);
        v51 = v116 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v116 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v52 = a1[31];
          v53 = 0;
          v111 = v47 & 0xFFFFFFFFFFFFFFF0LL;
          v54 = *(_QWORD *)&byte_8[v47 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v54 & 8) != 0 )
            v53 = *(__int64 *)((char *)&qword_18 + (v54 & 0xFFFFFFFFFFFFFFF0LL));
          v110 = (void **)v52;
          v112 = v53 | ((unsigned __int8)v47 | (unsigned __int8)v54) & 7;
          v55 = sub_A7A9D0(v52, v51, v112, v52, (__int64)v121, v50);
          v112 = sub_A70F20((__int64)v110, v55, v112);
          v60 = sub_B7E900(v51, v55, v56, v57, v58, v59);
          v61 = 0;
          if ( v60 )
          {
LABEL_51:
            if ( (*(_BYTE *)(v60 + 68) & 1) == 0 || *(_QWORD *)(v60 + 40) )
              ++v61;
            while ( 1 )
            {
              v62 = *(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v60 = v62;
              if ( !v62 )
                break;
              if ( (*(_BYTE *)(v62 + 28) & 0x7Fu) - 49 <= 2 )
                goto LABEL_51;
            }
          }
          if ( !(unsigned __int8)sub_1872040((__int64)a1, v8, v47, v4, v108, v61) )
          {
            sub_A5EC20(v122, v8);
            v63 = *(unsigned int *)(v8 + 24);
            v108 = *(_QWORD *)&v123[0] + 8LL * *(_QWORD *)&v123[1];
            v64 = (__m128i)_mm_loadh_ps(v123);
            v124 = v64;
            v108 = *(_QWORD *)&v123[2] + 8LL * *(_QWORD *)&v123[3];
            v65 = _mm_loadh_ps((const double *)&v108);
            v108 = v122[0] + 8LL * v122[1];
            v126 = (__m128i)v65;
            v66 = (__m128i)_mm_loadh_ps((const double *)&v108);
            v125 = v66;
            if ( !(unsigned __int8)sub_184ABB0(a1, v63, v46, v47, v116, v67) )
            {
              v72 = sub_B7E900(v51, v63, v68, v69, v70, v71);
              if ( !v72 )
              {
LABEL_96:
                if ( ptr[0] != v109 + 2 )
                  free(ptr[0]);
                goto LABEL_89;
              }
              v108 = v8;
              v110 = v127;
              v113 = v128;
LABEL_60:
              if ( (*(_BYTE *)(v72 + 68) & 1) != 0 && !*(_QWORD *)(v72 + 40) )
                goto LABEL_95;
              v73 = _mm_load_si128(&v124);
              v74 = _mm_load_si128(&v125);
              v75 = _mm_load_si128(&v126);
              v76 = &v129;
              v129 = sub_A55F80;
              v131 = sub_A55FB0;
              v133 = (unsigned __int8 *)sub_A55FE0;
              v77 = nullptr;
              *(__m128i *)v127 = v73;
              v128[0] = v74;
              v128[1] = v75;
              v130 = 0;
              v132 = 0;
              v134 = 0;
              while ( 1 )
              {
                v78 = (unsigned __int8 (__fastcall *)(_QWORD))*v76;
                v79 = (__int64 *)((char *)v124.m128i_i64 + (_QWORD)v77);
                if ( ((unsigned __int8)*v76 & 1) != 0 )
                  v78 = *(unsigned __int8 (__fastcall **)(_QWORD))((char *)v78 + *v79 - 1);
                if ( v78(v79) )
                  break;
                v76 += 2;
                v77 = v76[1];
              }
              v80 = &v129;
              v130 = 0;
              v129 = sub_A56010;
              v131 = sub_A56030;
              v132 = 0;
              v133 = (unsigned __int8 *)sub_A56050;
              v134 = 0;
              while ( 1 )
              {
                v81 = (__int64 (__fastcall *)(_QWORD))*v80;
                v82 = (void **)((char *)v110 + (_QWORD)v80[1]);
                if ( ((unsigned __int8)*v80 & 1) != 0 )
                  v81 = *(__int64 (__fastcall **)(_QWORD))((char *)v81 + *v82 - 1);
                v83 = v81(v82);
                if ( v83 )
                  break;
                v80 += 2;
              }
              v84 = *(_QWORD *)v83;
              v85 = *(_DWORD *)(*(_QWORD *)v83 + 24LL);
              v86 = sub_190BDA0(a1, v108, v47, 1, v85, 0);
              if ( v86 != 1 )
              {
                v114 = sub_160A600(
                         (__int64)a1,
                         v86 & 0xFFFFFFFFFFFFFFFELL,
                         v112,
                         8u,
                         1u,
                         (__int64)v109,
                         *(double *)v66.m128i_i64,
                         *(double *)v64.m128i_i64,
                         0);
                if ( v114 != 1 )
                {
                  v87 = *(void **)(v72 + 40);
                  LODWORD(v127[1]) = v85;
                  v127[0] = v87;
                  sub_B85890(v113, (__int64)v87);
                  v88 = &v129;
                  v89 = 12;
                  v90 = (void *)(v72 | (*(_BYTE *)(v72 + 29) >> 5) & 3);
                  v91 = v114 & 0xFFFFFFFE;
                  v129 = v90;
                  while ( v89 )
                  {
                    *(_DWORD *)v88 = 0;
                    v88 = (void **)((char *)v88 + 4);
                    --v89;
                  }
                  v92 = sub_19C4FE0((_DWORD)a1, v91, 0, v85, (unsigned int)&v129, v72, (__int64)v90, (__int64)v110);
                  if ( HIDWORD(v132) )
                    free(v131);
                  if ( v92 != 1 )
                  {
                    v93 = 0;
                    v94 = *(_QWORD *)(v111 + 8);
                    if ( (v94 & 8) != 0 )
                      v93 = *(__int64 *)((char *)&qword_18 + (v94 & 0xFFFFFFFFFFFFFFF0LL));
                    v95 = v47 | v94;
                    v96 = v93 | v95 & 7;
                    if ( (*(_BYTE *)(v72 + 68) & 2) != 0 )
                      v96 = v93 & 0xFFFFFFFFFFFFFFFELL | v95 & 6;
                    v97 = sub_1E62D40(a1, *(_QWORD *)(v72 + 48), v85, v96, 0);
                    *(_QWORD *)(v84 + 64) = v92 & 0xFFFFFFFFFFFFFFFELL;
                    *(_QWORD *)(v84 + 48) = v97;
LABEL_95:
                    while ( 1 )
                    {
                      v99 = *(_QWORD *)(v72 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                      v72 = v99;
                      if ( !v99 )
                        goto LABEL_96;
                      if ( (*(_BYTE *)(v99 + 28) & 0x7Fu) - 49 <= 2 )
                        goto LABEL_60;
                    }
                  }
                }
              }
              v8 = v108;
            }
          }
          v100 = ptr[0];
          if ( ptr[0] == v109 + 2 )
            goto LABEL_88;
        }
        else
        {
          v100 = ptr[0];
          if ( ptr[0] == v110 )
            goto LABEL_88;
        }
        free(v100);
      }
    }
LABEL_88:
    sub_B88650(v8, 1);
LABEL_89:
    if ( v118 > 0x40 && v117 )
      operator delete[](v117);
    return;
  }
LABEL_21:
  v25 = v22[1];
  v26 = a1[31];
  v27 = 0;
  if ( (v25 & 8) != 0 )
    v27 = *(__int64 *)((char *)&qword_18 + (v25 & 0xFFFFFFFFFFFFFFF0LL));
  v28 = *(_QWORD *)(v23 + 32);
  v109 = v15;
  v29 = sub_A70F20(v26, v28, v27 | ((unsigned __int8)v15 | (unsigned __int8)v25) & 7);
  v30 = (void *)*(unsigned int *)(v23 + 20);
  LODWORD(v130) = 64;
  BYTE4(v130) = 0;
  v129 = v30;
  v127[0] = a1;
  v31 = sub_1872480(
          (__int64)a1,
          v4,
          v108,
          v8,
          (__int64)v109,
          (unsigned __int64 **)&v129,
          v29,
          (__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, _QWORD))sub_1837ED0,
          (__int64)v127);
  if ( (unsigned int)v130 > 0x40 && v129 )
  {
    LOBYTE(v108) = v31;
    operator delete[](v129);
    v31 = v108;
  }
  if ( v31 )
    goto LABEL_19;
}
