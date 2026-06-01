unsigned __int64 __fastcall sub_1AC7B50(const __m128i *a1, __int64 a2)
{
  void *v2; // r15
  __int64 v3; // rbp
  char v4; // r8
  _QWORD *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r10
  _QWORD *v8; // r12
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rbx
  __int64 *v12; // rax
  unsigned __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r15
  _QWORD *v23; // rax
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  char v29; // al
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 *v39; // r13
  __int64 v40; // r14
  __int64 *v41; // rbp
  __int64 *v42; // rdx
  __int64 *v43; // rbx
  __int64 *v44; // r12
  unsigned __int64 v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rdx
  __int64 *v52; // rax
  __int64 v53; // rdi
  unsigned __int64 v54; // rax
  unsigned int v55; // eax
  char v56; // al
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // r13
  __int64 v64; // rax
  __int64 v65; // rdi
  unsigned __int64 v66; // rax
  unsigned __int16 v67; // ax
  unsigned int v68; // eax
  _QWORD *v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // eax
  __int64 v76; // rax
  void *v77; // r10
  __int64 v78; // r14
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rax
  _DWORD *v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int64 result; // rax
  unsigned int v88; // eax
  __int64 v89; // rax
  unsigned int v90; // eax
  __int64 v91; // rax
  __int64 v92; // rdi
  unsigned __int64 v93; // rax
  unsigned int v94; // eax
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rbx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  _QWORD *v103; // rax
  unsigned int v104; // ebp
  unsigned int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rbx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  _QWORD *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rbx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  _QWORD *v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 *v124; // [rsp+8h] [rbp-170h]
  unsigned __int64 v125; // [rsp+8h] [rbp-170h]
  unsigned __int64 *v126; // [rsp+10h] [rbp-168h]
  __int64 v127; // [rsp+18h] [rbp-160h]
  unsigned __int8 v128; // [rsp+2Fh] [rbp-149h]
  __int64 **v129; // [rsp+38h] [rbp-140h]
  __int64 *v130; // [rsp+48h] [rbp-130h]
  unsigned __int64 *v131; // [rsp+50h] [rbp-128h]
  char v132; // [rsp+62h] [rbp-116h] BYREF
  char v133; // [rsp+63h] [rbp-115h] BYREF
  int v134; // [rsp+64h] [rbp-114h] BYREF
  __int64 v135; // [rsp+68h] [rbp-110h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v137[48]; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD v138[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v139; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v140[11]; // [rsp+D0h] [rbp-A8h] BYREF
  char v141; // [rsp+128h] [rbp-50h]
  unsigned int v142; // [rsp+130h] [rbp-48h]
  char v143; // [rsp+134h] [rbp-44h]

  v2 = (void *)a1;
  v3 = a2;
  v4 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 7 )
  {
    v76 = a1->m128i_i64[0];
    if ( *(_BYTE *)(a1->m128i_i64[0] + 8) == 20 )
      goto LABEL_14;
    v77 = *(void **)(v76 + 24);
    ptr[0] = *(void **)(v76 + 16);
    ptr[1] = v77;
  }
  else
  {
    if ( (unsigned __int8)(v4 - 9) > 2u )
      goto LABEL_7;
    *(__m128i *)ptr = _mm_load_si128(a1 + 1);
  }
  v5 = sub_1AC1150((__int64)ptr);
  if ( v5 != (_QWORD *)(v6 + 8 * v7) && *(_QWORD *)(*v5 + 32LL) > 1u )
  {
    v8 = sub_1AC1290((__int64)a1[1].m128i_i64);
    if ( v8 != (_QWORD *)(a1[1].m128i_i64[0] + 8 * a1[1].m128i_i64[1]) )
    {
      sub_168B9F0((__int64)v138, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(a2 + 4), 0xB53u, 0);
      v132 = 41;
      v121 = sub_1AA5620((__int64)v138, &v132);
      v133 = 29;
      v122 = sub_1AA5620(v121, &v133);
      LOBYTE(v134) = *(_BYTE *)a2;
      v123 = sub_1AC3570(v122, (char *)&v134);
      LOBYTE(v135) = (unsigned __int8)(*(_BYTE *)a2 - 9) <= 2u;
      sub_1588420(v123, (unsigned __int8 *)&v135);
      sub_15F7200(v138);
      sub_168B9F0((__int64)v138, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(*v8 + 12LL), 0x1675u, 0);
      LOBYTE(v135) = *(_BYTE *)(*v8 + 8LL);
      sub_1AA5620((__int64)v138, (char *)&v135);
      sub_15F7200(v138);
      sub_168B9F0((__int64)v138, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(*v5 + 12LL), 0x1675u, 0);
      LOBYTE(v135) = *(_BYTE *)(*v5 + 8LL);
      sub_1AA5620((__int64)v138, (char *)&v135);
      sub_15F7200(v138);
      return 0;
    }
  }
LABEL_7:
  if ( v4 && v4 != 9 )
    goto LABEL_14;
  v9 = (__int64 *)a1[1].m128i_i64[0];
  v10 = &v9[a1[1].m128i_i64[1]];
  if ( v9 == v10 )
    goto LABEL_14;
  v11 = *v9;
  if ( *(_BYTE *)(*v9 + 8) == 37 )
    goto LABEL_48;
  v12 = v9 + 1;
  do
  {
    v9 = v12;
    if ( v10 == v12 )
      goto LABEL_14;
    v11 = *v12++;
  }
  while ( *(_BYTE *)(v11 + 8) != 37 );
  while ( 1 )
  {
LABEL_48:
    if ( *(_DWORD *)(v11 + 32) > 1u )
    {
      sub_168B9F0((__int64)v138, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(a2 + 4), 0xB6Fu, 0);
      LODWORD(ptr[0]) = 0;
      v84 = sub_1587D10((__int64)v138, (int *)ptr);
      v133 = *(_BYTE *)(a2 + 1);
      v85 = sub_1AA5620(v84, &v133);
      LOBYTE(v134) = *(_BYTE *)a2;
      v86 = sub_1AC3570(v85, (char *)&v134);
      LOBYTE(v135) = 37;
      sub_1AA5620(v86, (char *)&v135);
      sub_15F7200(v138);
      sub_168B9F0((__int64)v138, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(v11 + 12), 0x1675u, 0);
      LOBYTE(ptr[0]) = *(_BYTE *)(v11 + 8);
      sub_1AA5620((__int64)v138, (char *)ptr);
      sub_15F7200(v138);
      return 0;
    }
    if ( v10 == v9 + 1 )
      goto LABEL_14;
    v11 = v9[1];
    if ( *(_BYTE *)(v11 + 8) != 37 )
      break;
    ++v9;
  }
  v52 = v9 + 2;
  while ( 1 )
  {
    v9 = v52;
    if ( v10 == v52 )
      break;
    v11 = *v52++;
    if ( *(_BYTE *)(v11 + 8) == 37 )
      goto LABEL_48;
  }
LABEL_14:
  ptr[0] = v137;
  ptr[1] = (void *)0x600000000LL;
  v13 = (unsigned __int64 *)sub_1741D10(a2);
  v126 = &v13[v14];
  if ( v13 != v126 )
  {
    v15 = a1->m128i_i64[0];
    v16 = *v13;
    v124 = *(__int64 **)v2;
    if ( *(_BYTE *)(v3 + 144) == 7 )
    {
      v17 = v13 + 1;
      v129 = (__int64 **)v2;
      v127 = v3;
      while ( 1 )
      {
        v128 = *(_BYTE *)(v127 + 16);
        v22 = sub_BFD550(v16);
        if ( (*(_WORD *)v22 & 0x1FF) != 0x7C )
          break;
        v57 = sub_C03930(v22, v15);
        v58 = sub_168B6C0((__int64)v124);
        v15 = v57;
        v63 = sub_A71450(v58, v57);
        v64 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v64 + 17) & 4) == 0 )
        {
          v65 = *(_QWORD *)(*(_QWORD *)(v64 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          v66 = *(unsigned __int8 *)(v65 + 16);
          if ( (_BYTE)v66 == 13 )
          {
            v67 = (*(_WORD *)(v65 + 18) >> 3) & 0x1FF;
            if ( v67 <= 0x1B3u || v67 > 0x1E8u )
              goto LABEL_66;
          }
          else if ( (_BYTE)v66 == 47 )
          {
            v96 = sub_F60F10(v65, v57, v59, v60, v61, v62);
            if ( (*((_BYTE *)v96 + 74) & 1) == 0 && (v96[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              goto LABEL_66;
          }
          else if ( (unsigned __int8)v66 > 0x2Au || (v15 = 0x40600004C00LL, !_bittest64(&v15, v66)) )
          {
LABEL_66:
            v68 = sub_C00A40(v22, v15, v59, v60, v61);
            sub_168B9F0((__int64)v138, v124, v68, 0xB70u, 0);
            if ( v141 )
            {
              sub_AE9DF0(v140, v63, 8u);
            }
            else if ( v143 )
            {
              v115 = sub_168B9E0(v138);
              v118 = v139;
              if ( v139 )
                v118 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v139 + 32LL))(v139);
              v135 = v118;
              v119 = sub_1587BC0(v115, &v135, v113, v114, v116, v117);
              sub_AE9DF0((unsigned __int8 **)(*v119 + 32LL * v142 + 8), v63, 8u);
            }
            v15 = (__int64)&v135;
            LODWORD(v135) = 1;
            sub_1587D10((__int64)v138, (int *)&v135);
            sub_15F7200(v138);
            goto LABEL_59;
          }
        }
LABEL_32:
        if ( (*(_DWORD *)v22 & 0x8000) == 0 )
        {
          v39 = (__int64 *)v124[13];
          v130 = &v39[*((unsigned int *)v124 + 28)];
          if ( v39 != v130 )
          {
            v40 = *v39;
            if ( v128 != *(_BYTE *)(*v39 + 40) )
            {
              v131 = v17;
              v41 = v39 + 1;
              while ( 1 )
              {
                v42 = *(__int64 **)(v40 + 24);
                v43 = &v42[*(_QWORD *)(v40 + 32)];
                v44 = v42;
                if ( v42 != v43 )
                  break;
LABEL_40:
                if ( v130 != v41 )
                {
                  v40 = *v41++;
                  if ( v128 != *(_BYTE *)(v40 + 40) )
                    continue;
                }
                v17 = v131;
                goto LABEL_43;
              }
              while ( 1 )
              {
                v45 = *v44;
                if ( (*(_DWORD *)*v44 & 0x8000) == 0 )
                {
                  v15 = *v44;
                  if ( sub_1AC1A90(v22, *v44) )
                    break;
                }
                if ( v43 == ++v44 )
                  goto LABEL_40;
              }
              v17 = v131;
              v70 = sub_C00A40(v22, v15, v46, v47, v48);
              v71 = (__int64)v124;
              sub_168B9F0((__int64)v138, v124, v70, 0x1330u, 0);
              if ( v141 )
              {
                v71 = v128;
                sub_1AC1EE0(v140, v128);
              }
              else
              {
                if ( !v143 )
                {
LABEL_75:
                  sub_15F7200(v138);
                  v75 = sub_C00A40(v45, v71, v72, v73, v74);
                  sub_168B9F0((__int64)v138, v124, v75, 0x1675u, 0);
                  v15 = (__int64)&v135;
                  LOBYTE(v135) = *(_BYTE *)(v40 + 8);
                  sub_1AA5620((__int64)v138, (char *)&v135);
                  sub_15F7200(v138);
                  goto LABEL_59;
                }
                v99 = sub_168B9E0(v138);
                v102 = v139;
                if ( v139 )
                  v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v139 + 32LL))(v139);
                v135 = v102;
                v103 = sub_1587BC0(v99, &v135, v97, v98, v100, v101);
                v71 = v128;
                sub_1AC1EE0((unsigned __int8 **)(*v103 + 32LL * v142 + 8), v128);
              }
              v104 = *(unsigned __int8 *)(v40 + 40);
              if ( v141 )
              {
                v71 = *(unsigned __int8 *)(v40 + 40);
                sub_1AC1EE0(v140, v71);
              }
              else if ( v143 )
              {
                v108 = sub_168B9E0(v138);
                v111 = v139;
                if ( v139 )
                  v111 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v139 + 32LL))(v139);
                v135 = v111;
                v112 = sub_1587BC0(v108, &v135, v106, v107, v109, v110);
                v71 = v104;
                sub_1AC1EE0((unsigned __int8 **)(*v112 + 32LL * v142 + 8), v104);
              }
              goto LABEL_75;
            }
          }
        }
LABEL_43:
        if ( v22 > 1 )
        {
          v49 = LODWORD(ptr[1]);
          v50 = v22 & 0xFFFFFFFFFFFFFFFELL;
          v51 = LODWORD(ptr[1]) + 1LL;
          if ( v51 > HIDWORD(ptr[1]) )
          {
            v15 = (__int64)v137;
            sub_2237220(ptr, v137, v51, 8);
            v49 = LODWORD(ptr[1]);
            v50 = v22 & 0xFFFFFFFFFFFFFFFELL;
          }
          *((_QWORD *)ptr[0] + v49) = v50;
          ++LODWORD(ptr[1]);
        }
LABEL_59:
        v124 = *v129;
        v56 = *(_BYTE *)(v127 + 144);
        if ( v126 == v17 )
        {
          v2 = v129;
          v3 = v127;
          goto LABEL_99;
        }
        v16 = *v17++;
        if ( v56 != 7 )
          goto LABEL_138;
      }
      v23 = sub_F63240(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL), v15, v18, v19, v20, v21);
      v28 = (__int64)v23;
      if ( !v23 )
      {
        v91 = *(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v91 + 17) & 4) == 0 )
        {
          v92 = *(_QWORD *)(*(_QWORD *)(v91 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          v93 = *(unsigned __int8 *)(v92 + 16);
          if ( (_BYTE)v93 == 13 )
          {
            if ( (((*(_WORD *)(v92 + 18) >> 3) + 76) & 0x1FFu) > 0x34 )
              goto LABEL_97;
          }
          else if ( (_BYTE)v93 == 47 )
          {
            v120 = sub_F60F10(v92, v15, v24, (__int64)v25, v26, v27);
            if ( (*((_BYTE *)v120 + 74) & 1) == 0 && (v120[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              goto LABEL_97;
          }
          else if ( (unsigned __int8)v93 > 0x2Au || (v15 = 0x40600004C00LL, !_bittest64(&v15, v93)) )
          {
LABEL_97:
            v94 = sub_C00A40(v22, v15, v24, (__int64)v25, v26);
            sub_168B9F0((__int64)v138, v124, v94, 0xB70u, 0);
            v135 = *(_QWORD *)(v22 + 8);
            v95 = sub_162B6D0((__int64)v138, &v135);
            v15 = (__int64)&v134;
            v134 = 0;
            sub_1587D10(v95, &v134);
            sub_15F7200(v138);
            goto LABEL_59;
          }
        }
        goto LABEL_32;
      }
      v29 = *((_BYTE *)v23 + 73) >> 5;
      if ( v29 && v29 != 3 )
      {
        v90 = sub_C00A40(v22, v15, v24, (__int64)v25, v26);
        sub_168B9F0((__int64)v138, v124, v90, 0xB6Eu, 0);
        v134 = 0;
        goto LABEL_92;
      }
      if ( (*(_BYTE *)(v28 + 74) & 1) == 0 )
      {
        v88 = sub_C00A40(v22, v15, v24, (__int64)v25, v26);
        sub_168B9F0((__int64)v138, v124, v88, 0xB6Eu, 0);
        v134 = 1;
LABEL_92:
        v89 = sub_1587D10((__int64)v138, &v134);
        v15 = (__int64)&v135;
        v135 = *(_QWORD *)(v22 + 8);
        sub_162B6D0(v89, &v135);
        sub_15F7200(v138);
        goto LABEL_59;
      }
      if ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 59 <= 2 )
      {
        v30 = *(_QWORD *)(v28 + 104);
        v31 = *(_QWORD *)(v30 + 96);
        v24 = v31 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v31 & 1) == 0 )
        {
          v25 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v31 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            if ( (v31 & 2) == 0 )
            {
LABEL_26:
              if ( **(char **)(v28 + 128) >= 0 )
              {
                v105 = sub_C00A40(v22, v15, v24, (__int64)v25, v26);
                sub_168B9F0((__int64)v138, v124, v105, 0xB6Eu, 0);
                v134 = 2;
                goto LABEL_92;
              }
              goto LABEL_27;
            }
            v78 = v25[2295];
            v79 = v30 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v78 )
            {
              v15 = v25[294];
              v25[304] += 24LL;
              v80 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v25[295] >= v80 + 24 && v15 )
              {
                v25[294] = v80 + 24;
                v81 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v15 = 24;
                v81 = sub_986170((__int64)(v25 + 294), 24, 24, 3, v26, v27);
                v80 = v81 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v81 = v78;
              v79 = v80 | 4;
              *(_DWORD *)(v81 + 8) = 0;
              *(_QWORD *)(v81 + 16) = v30;
            }
            v24 = v79 & 0xFFFFFFFFFFFFFFFELL;
            v31 = v24 | 1;
            *(_QWORD *)(v30 + 96) = v24 | 1;
          }
        }
        if ( v24 )
        {
          v24 &= 4u;
          if ( (_DWORD)v24 )
          {
            v82 = (_DWORD *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v82 )
            {
              v83 = *(_QWORD *)v82;
              v24 = *(unsigned int *)(*(_QWORD *)v82 + 12LL);
              if ( v82[2] != (_DWORD)v24 )
              {
                v82[2] = v24;
                v15 = v30;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v83 + 152LL))(v83, v30);
              }
            }
          }
        }
        goto LABEL_26;
      }
LABEL_27:
      v34 = sub_B7E900(v28, v15, v24, (__int64)v25, v26, v27);
      if ( v34 )
      {
LABEL_28:
        v37 = *(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v37 + 17) & 4) != 0 )
          goto LABEL_31;
        v53 = *(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v54 = *(unsigned __int8 *)(v53 + 16);
        if ( (_BYTE)v54 == 13 )
        {
          if ( (((*(_WORD *)(v53 + 18) >> 3) + 76) & 0x1FFu) <= 0x34 )
            goto LABEL_31;
LABEL_58:
          v55 = sub_C00A40(v22, v15, v32, v33, v35);
          sub_168B9F0((__int64)v138, v124, v55, 0xB6Du, 0);
          sub_15F7200(v138);
          v15 = (__int64)v124;
          sub_168B9F0((__int64)v138, v124, *(_DWORD *)(v34 + 24), 0x1678u, 0);
          sub_15F7200(v138);
          goto LABEL_59;
        }
        if ( (_BYTE)v54 == 47 )
        {
          v69 = sub_F60F10(v53, v15, v32, v33, v35, v36);
          if ( (*((_BYTE *)v69 + 74) & 1) != 0 || (v69[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            goto LABEL_31;
          goto LABEL_58;
        }
        if ( (unsigned __int8)v54 > 0x2Au )
          goto LABEL_58;
        v15 = 0x40600004C00LL;
        if ( !_bittest64(&v15, v54) )
          goto LABEL_58;
LABEL_31:
        while ( 1 )
        {
          v38 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v34 = v38;
          if ( !v38 )
            break;
          if ( (*(_BYTE *)(v38 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_28;
        }
      }
      goto LABEL_32;
    }
LABEL_138:
    abort();
  }
  v124 = (__int64 *)a1->m128i_i64[0];
  v56 = *(_BYTE *)(a2 + 144);
LABEL_99:
  if ( v56 != 7 )
    goto LABEL_138;
  result = sub_1AC7380(
             v124,
             *((__int64 **)v2 + 2),
             *((_QWORD *)v2 + 3),
             *(_BYTE *)v3,
             *(_DWORD *)(v3 + 4),
             *(_DWORD *)(v3 + 12),
             *(_BYTE *)(v3 + 16),
             ptr[0],
             LODWORD(ptr[1]),
             *(_DWORD *)(v3 + 8));
  if ( ptr[0] != v137 )
  {
    v125 = result;
    free(ptr[0]);
    return v125;
  }
  return result;
}
