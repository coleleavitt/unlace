void __fastcall sub_14F8F50(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11,
        unsigned __int8 a12,
        unsigned __int8 a13)
{
  unsigned __int16 v15; // r10
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // r15
  __int16 v19; // ax
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdi
  char v25; // dl
  __int64 v26; // r14
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // r14d
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  char v33; // al
  __int64 v34; // r15
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  int v37; // eax
  __int64 *v38; // rdi
  unsigned int v39; // eax
  __int64 v40; // rbp
  bool v41; // r14
  unsigned __int16 v42; // bx
  unsigned int v43; // r13d
  __int64 v44; // r15
  __int64 v45; // rax
  char v46; // dl
  __int16 v47; // cx
  __int64 v48; // r8
  __int64 v49; // rax
  __int16 v50; // cx
  __int64 v51; // r14
  __int64 v52; // r13
  void *v53; // rdi
  __int64 *v54; // rdi
  __int64 *v55; // rdi
  __int64 v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rdi
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // r14
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rax
  __int64 v68; // r9
  unsigned __int64 v69; // r15
  __int64 v70; // r11
  unsigned __int64 v71; // r8
  __int128 *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 *v77; // rax
  __int64 v78; // rdx
  unsigned __int8 v79; // dl
  char v80; // al
  __int64 *v81; // rdi
  unsigned __int64 v82; // r11
  unsigned __int64 *v83; // rax
  __int64 v84; // rax
  unsigned __int64 v85; // [rsp+0h] [rbp-CD8h]
  __int64 v86; // [rsp+0h] [rbp-CD8h]
  __int64 v87; // [rsp+0h] [rbp-CD8h]
  __int64 v88; // [rsp+0h] [rbp-CD8h]
  unsigned __int64 v89; // [rsp+0h] [rbp-CD8h]
  char v90; // [rsp+8h] [rbp-CD0h]
  unsigned __int64 v91; // [rsp+8h] [rbp-CD0h]
  __int64 v93; // [rsp+10h] [rbp-CC8h]
  __int64 v94; // [rsp+18h] [rbp-CC0h]
  __int64 v95; // [rsp+18h] [rbp-CC0h]
  char v96; // [rsp+20h] [rbp-CB8h]
  __int64 v97; // [rsp+30h] [rbp-CA8h]
  __int64 v98; // [rsp+38h] [rbp-CA0h]
  int *v99; // [rsp+40h] [rbp-C98h]
  unsigned int v100; // [rsp+50h] [rbp-C88h]
  unsigned int v103; // [rsp+78h] [rbp-C60h]
  unsigned int v104; // [rsp+7Ch] [rbp-C5Ch]
  char v105; // [rsp+84h] [rbp-C54h] BYREF
  __int64 v106; // [rsp+88h] [rbp-C50h] BYREF
  void *v107; // [rsp+90h] [rbp-C48h] BYREF
  __int64 v108; // [rsp+98h] [rbp-C40h]
  _BYTE v109[16]; // [rsp+A0h] [rbp-C38h] BYREF
  void *v110; // [rsp+B0h] [rbp-C28h] BYREF
  __int64 v111; // [rsp+B8h] [rbp-C20h]
  _BYTE v112[16]; // [rsp+C0h] [rbp-C18h] BYREF
  void *v113; // [rsp+D0h] [rbp-C08h] BYREF
  __int64 v114; // [rsp+D8h] [rbp-C00h]
  _BYTE v115[32]; // [rsp+E0h] [rbp-BF8h] BYREF
  _DWORD v116[10]; // [rsp+100h] [rbp-BD8h] BYREF
  void *v117; // [rsp+128h] [rbp-BB0h]
  __int64 v118; // [rsp+138h] [rbp-BA0h] BYREF
  __int64 v119; // [rsp+148h] [rbp-B90h] BYREF
  void *ptr; // [rsp+150h] [rbp-B88h]
  __int64 v121; // [rsp+160h] [rbp-B78h] BYREF
  void *v122; // [rsp+180h] [rbp-B58h]
  int v123; // [rsp+18Ch] [rbp-B4Ch]
  __int64 v124; // [rsp+1A0h] [rbp-B38h]
  __int128 *v125; // [rsp+230h] [rbp-AA8h] BYREF
  __int64 v126; // [rsp+238h] [rbp-AA0h]
  __int128 v127; // [rsp+240h] [rbp-A98h] BYREF
  __int64 v128; // [rsp+250h] [rbp-A88h]
  __int64 v129; // [rsp+258h] [rbp-A80h]
  __int64 v130; // [rsp+260h] [rbp-A78h]
  int v131; // [rsp+268h] [rbp-A70h]
  __int64 v132; // [rsp+270h] [rbp-A68h]
  __int64 v133; // [rsp+280h] [rbp-A58h]
  __int64 v134; // [rsp+288h] [rbp-A50h]
  int v135; // [rsp+290h] [rbp-A48h]
  __int64 v136; // [rsp+298h] [rbp-A40h]
  __int64 v137; // [rsp+2A0h] [rbp-A38h]
  int v138; // [rsp+2A8h] [rbp-A30h]
  __int64 *v139; // [rsp+2B0h] [rbp-A28h]
  __int64 v140; // [rsp+2B8h] [rbp-A20h]
  __int64 v141; // [rsp+2C0h] [rbp-A18h] BYREF
  __int16 v142; // [rsp+500h] [rbp-7D8h]
  __int64 v143; // [rsp+508h] [rbp-7D0h]
  _QWORD *v144; // [rsp+510h] [rbp-7C8h]
  __int64 v145; // [rsp+518h] [rbp-7C0h]
  _QWORD v146[5]; // [rsp+520h] [rbp-7B8h] BYREF
  _QWORD v147[242]; // [rsp+548h] [rbp-790h] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  v99 = (int *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v15 = *(_WORD *)(a1 + 32);
  v100 = *(_DWORD *)(a1 + 40);
  v113 = v115;
  v114 = 0x400000000LL;
  if ( v15 != 5 )
  {
    if ( v15 != 3 )
    {
      v104 = 0;
      v18 = v15;
      v110 = v112;
      v103 = 0;
      v111 = 0x200000000LL;
      v107 = v109;
      v108 = 0x200000000LL;
      goto LABEL_110;
    }
    v126 = 0x400000000LL;
    v125 = &v127;
    goto LABEL_85;
  }
  do
  {
    v16 = *(_QWORD *)(a1 + 8);
    v17 = *(_QWORD *)(v16 + 2944);
    if ( *(unsigned int *)(v16 + 2912) > v17 )
    {
      v18 = 5;
      v19 = *(_WORD *)(*(_QWORD *)(v16 + 2904) + 24 * v17 + 16);
      if ( v19 == 66 )
        goto LABEL_30;
      goto LABEL_4;
    }
    if ( *(_WORD *)(sub_14180A0(v16, 1u) + 16) == 66 )
      goto LABEL_29;
    v56 = *(_QWORD *)(a1 + 8);
    v57 = *(_QWORD *)(v56 + 2944);
    if ( *(unsigned int *)(v56 + 2912) > v57 )
    {
      v18 = *(_WORD *)(a1 + 32);
      v19 = *(_WORD *)(*(_QWORD *)(v56 + 2904) + 24 * v57 + 16);
LABEL_4:
      if ( v19 == 52 )
        goto LABEL_30;
      goto LABEL_5;
    }
    if ( *(_WORD *)(sub_14180A0(v56, 1u) + 16) == 52 )
    {
LABEL_29:
      v18 = *(_WORD *)(a1 + 32);
      goto LABEL_30;
    }
    v58 = *(_QWORD *)(a1 + 8);
    v59 = *(_QWORD *)(v58 + 2944);
    if ( *(unsigned int *)(v58 + 2912) > v59 )
    {
      v18 = *(_WORD *)(a1 + 32);
      v19 = *(_WORD *)(*(_QWORD *)(v58 + 2904) + 24 * v59 + 16);
    }
    else
    {
      v60 = sub_14180A0(v58, 1u);
      v18 = *(_WORD *)(a1 + 32);
      v19 = *(_WORD *)(v60 + 16);
    }
LABEL_5:
    if ( v19 != 53 )
      break;
LABEL_30:
    v33 = sub_141A630(v18);
    if ( v18 == 1 || v33 )
      v34 = 0;
    else
      v34 = *(_QWORD *)(a1 + 24);
    v35 = (unsigned int)v114;
    v36 = (unsigned int)v114 + 1LL;
    if ( v36 > HIDWORD(v114) )
    {
      sub_2237220(&v113, v115, v36, 8);
      v35 = (unsigned int)v114;
    }
    *((_QWORD *)v113 + v35) = v34;
    v37 = *(_DWORD *)(a1 + 16);
    v38 = *(__int64 **)(a1 + 8);
    LODWORD(v114) = v114 + 1;
    *(_DWORD *)(a1 + 40) = v37;
    sub_14634E0(v38, v99);
    sub_14C6D60((__int64)a10, *(_DWORD *)(a1 + 40));
    if ( *(_WORD *)(a1 + 32) != 66 )
    {
      LODWORD(v125) = 0;
      sub_1553D50(a1, v100, &v125, a12, 1);
      sub_189D860(
        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
        a2,
        *a10,
        *((_DWORD *)a10 + 2),
        (unsigned int)v125,
        (char)a3,
        a4,
        (_DWORD)a5,
        a6,
        a9,
        a11,
        a13);
      goto LABEL_37;
    }
    v81 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v81, v99);
    v18 = *(_WORD *)(a1 + 32);
  }
  while ( v18 == 5 );
  if ( v18 != 3 )
  {
    v104 = 0;
    v110 = v112;
    v103 = 0;
    v111 = 0x200000000LL;
    v107 = v109;
    v108 = 0x200000000LL;
    if ( (_DWORD)v114 )
    {
      v20 = 0;
      v97 = 0;
      v90 = 0;
      v86 = 4LL * (unsigned int)(v114 - 1) + 4;
      v98 = 0;
      while ( 1 )
      {
        v22 = sub_18013B0(*(_QWORD *)(a1 + 96), 0, 0, 0, 0, 1, 0, 0);
        if ( v22 )
          break;
        if ( !sub_1A86640(
                *(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL),
                *(_QWORD *)((char *)v113 + 2 * v20),
                *(unsigned int *)(*a10 + v20),
                0) )
        {
          v61 = *(_QWORD *)((char *)v113 + 2 * v20);
          v62 = (unsigned int)v111;
          v63 = (unsigned int)v111 + 1LL;
          if ( v63 > HIDWORD(v111) )
          {
            sub_2237220(&v110, v112, v63, 8);
            v62 = (unsigned int)v111;
          }
          *((_QWORD *)v110 + v62) = v61;
          v64 = *a10;
          LODWORD(v111) = v111 + 1;
          sub_14C6D60((__int64)&v107, *(_DWORD *)(v64 + v20));
          v90 = 1;
          goto LABEL_20;
        }
        v90 = 1;
        if ( v98 )
        {
LABEL_20:
          v20 += 4;
          if ( v86 == v20 )
            goto LABEL_43;
        }
        else
        {
          v98 = *(_QWORD *)((char *)v113 + 2 * v20);
          v39 = *(_DWORD *)(*a10 + v20);
          v20 += 4;
          v104 = v39;
          if ( v86 == v20 )
          {
LABEL_43:
            v40 = a1;
            v41 = v98 != 0;
            v42 = *(_WORD *)(a1 + 32);
            goto LABEL_44;
          }
        }
      }
      sub_147A4A0((__int64)v116, a1 + 504);
      v23 = *a10;
      v106 = 0;
      sub_15AD370(
        (unsigned int)v116,
        28,
        *(_DWORD *)(v23 + v20),
        (unsigned int)&v106,
        (unsigned int)&v105,
        v22,
        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL) + 17464LL);
      if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
      {
        qword_2CD8AE0[0] = 0;
        qword_2CD8AE0[1] = &qword_2CD8AE0[3];
        qword_2CD8AE0[2] = 0x200000000LL;
        __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
        __cxa_guard_release(&qword_2CD8AC8);
      }
      a7 = 0;
      v125 = (__int128 *)v116;
      v126 = 0;
      v134 = v124;
      v145 = 0x200000000LL;
      v139 = &v141;
      v140 = 0x400000000LL;
      v146[4] = 0x200000000LL;
      v127 = 0;
      v128 = 0;
      v129 = 0;
      v130 = 0;
      v131 = 0;
      v132 = 0;
      LOBYTE(v142) = (((v116[0] >> 12) & 0x7F) == 69) | v142 & 0xFE;
      v144 = v146;
      v142 &= 0xFC01u;
      v146[2] = v119;
      v133 = 0;
      v135 = 5;
      v136 = 0;
      v137 = 0;
      v138 = 0;
      v143 = 0;
      v146[3] = v147;
      v147[2] = qword_2CD8AE0;
      memset(&v147[3], 0, 40);
      v24 = *(_QWORD *)(a1 + 96);
      v147[232] = 0;
      v84 = sub_1E85500(v24, &v125);
      if ( v25 || !v84 )
      {
        v26 = *(_QWORD *)((char *)v113 + 2 * v20);
        v27 = (unsigned int)v111;
        v28 = (unsigned int)v111 + 1LL;
        if ( v28 > HIDWORD(v111) )
        {
          sub_2237220(&v110, v112, v28, 8);
          v27 = (unsigned int)v111;
        }
        *((_QWORD *)v110 + v27) = v26;
        v29 = *a10;
        LODWORD(v111) = v111 + 1;
        v30 = *(_DWORD *)(v29 + v20);
        v31 = (unsigned int)v108;
        v32 = (unsigned int)v108 + 1LL;
        if ( v32 > HIDWORD(v108) )
        {
          sub_2237220(&v107, v109, v32, 4);
          v31 = (unsigned int)v108;
        }
        v90 = 1;
        *((_DWORD *)v107 + v31) = v30;
        LODWORD(v108) = v108 + 1;
      }
      else
      {
        v21 = *(unsigned int *)(a4 + 8);
        if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
        {
          v95 = v84;
          sub_2237220(a4, a4 + 16, v21 + 1, 8);
          v21 = *(unsigned int *)(a4 + 8);
          v84 = v95;
        }
        *(_QWORD *)(*(_QWORD *)a4 + 8 * v21) = v84;
        ++*(_DWORD *)(a4 + 8);
        if ( !v97 )
        {
          v97 = *(_QWORD *)((char *)v113 + 2 * v20);
          v103 = *(_DWORD *)(*a10 + v20);
        }
      }
      sub_147A7A0((char *)&v125);
      if ( v123 )
        free(v122);
      sub_15DCED0(v119, &v119);
      if ( ptr != &v121 )
        free(ptr);
      if ( v117 != &v118 )
        free(v117);
      goto LABEL_20;
    }
LABEL_110:
    v40 = a1;
    v41 = 0;
    v42 = v18;
    v97 = 0;
    v90 = 0;
    v98 = 0;
LABEL_44:
    while ( 2 )
    {
      v43 = *(_DWORD *)(v40 + 16);
      v44 = *(_QWORD *)(v40 + 24);
      v45 = sub_1496480(v40, nullptr, 5, 3u, nullptr, 0, a7, a8);
      v47 = *(_WORD *)(v40 + 32);
      v48 = v45;
      if ( v47 == 27 )
      {
        v54 = *(__int64 **)(v40 + 8);
        v96 = v46;
        v94 = v45;
        *(_DWORD *)(v40 + 40) = *(_DWORD *)(v40 + 16);
        v87 = v45;
        sub_14634E0(v54, v99);
        v48 = v87;
        if ( v96 )
        {
          v47 = *(_WORD *)(v40 + 32);
          goto LABEL_69;
        }
        if ( v94 )
        {
          v78 = *(unsigned int *)(v40 + 40);
          if ( (_DWORD)v78 && (v48 = sub_1E50AF0(*(_QWORD *)(v40 + 96), v94, v78), v79 | (v48 == 0)) )
          {
            v50 = *(_WORD *)(v40 + 32);
            v90 = v79 | (v48 == 0);
          }
          else
          {
LABEL_47:
            v49 = *(unsigned int *)(a4 + 8);
            if ( v49 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
            {
              v88 = v48;
              sub_2237220(a4, a4 + 16, v49 + 1, 8);
              v48 = v88;
              v49 = *(unsigned int *)(a4 + 8);
            }
            *(_QWORD *)(*(_QWORD *)a4 + 8 * v49) = v48;
            ++*(_DWORD *)(a4 + 8);
            if ( !v97 )
            {
              v80 = sub_141A630(v42);
              if ( v42 != 1 )
              {
                if ( v80 )
                  v44 = 0;
                v97 = v44;
              }
              v103 = v43;
            }
            v50 = *(_WORD *)(v40 + 32);
          }
        }
        else
        {
          v50 = *(_WORD *)(v40 + 32);
          v90 = 1;
        }
        if ( v50 != 66 )
          goto LABEL_52;
      }
      else
      {
        if ( !v46 && v45 )
          goto LABEL_47;
LABEL_69:
        v90 = 1;
        if ( v47 != 66 )
        {
LABEL_52:
          if ( v97 && v41 )
            sub_189D740(*(_QWORD *)(*(_QWORD *)(v40 + 96) + 736LL), v98, v104, v97, v103, 0);
          v125 = nullptr;
          if ( (_DWORD)v111 && (_DWORD)v108 )
          {
            v51 = 0;
            v52 = 4LL * (unsigned int)(v108 - 1) + 4;
            do
            {
              v51 += 4;
              sub_1802110(*(_QWORD *)(v40 + 96), 0);
            }
            while ( v51 != v52 );
          }
          v116[0] = 0;
          sub_1553D50(v40, v100, v116, a12, 1);
          if ( v90 )
          {
            *(_DWORD *)(a4 + 8) = 0;
          }
          else
          {
            *a3 = v100;
            *a5 = v116[0];
          }
          if ( v107 != v109 )
            free(v107);
          v53 = v110;
          if ( v110 != v112 )
            goto LABEL_64;
          goto LABEL_37;
        }
      }
      v55 = *(__int64 **)(v40 + 8);
      *(_DWORD *)(v40 + 40) = *(_DWORD *)(v40 + 16);
      sub_14634E0(v55, v99);
      v42 = *(_WORD *)(v40 + 32);
      continue;
    }
  }
  v125 = &v127;
  v126 = 0x400000000LL;
  if ( (_DWORD)v114 )
  {
    v65 = 0;
    v66 = 4;
    v67 = 0;
    v68 = 4LL * (unsigned int)(v114 - 1);
    v69 = v85;
    while ( 1 )
    {
      v70 = *(unsigned int *)(*a10 + v65);
      v71 = *(_QWORD *)((char *)v113 + 2 * v65);
      if ( v67 >= v66 )
      {
        v82 = v69 & 0xFFFFFFFF00000000LL | v70;
        v69 = v82;
        if ( v66 < v67 + 1 )
        {
          v89 = *(_QWORD *)((char *)v113 + 2 * v65);
          v93 = v68;
          v91 = v82;
          sub_2237220(&v125, &v127, v67 + 1, 16);
          v67 = (unsigned int)v126;
          v68 = v93;
          v82 = v91;
          v71 = v89;
        }
        v83 = (unsigned __int64 *)&v125[v67];
        *v83 = v82;
        v83[1] = v71;
        v67 = (unsigned int)(v126 + 1);
        LODWORD(v126) = v126 + 1;
      }
      else
      {
        v72 = &v125[v67];
        *(_DWORD *)v72 = v70;
        *((_QWORD *)v72 + 1) = v71;
        v67 = (unsigned int)(v126 + 1);
        LODWORD(v126) = v126 + 1;
      }
      if ( v68 == v65 )
        break;
      v66 = HIDWORD(v126);
      v65 += 4;
    }
  }
LABEL_85:
  v73 = sub_1E5F010(a2, 0);
  v76 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v76 + 760) )
  {
    *(_BYTE *)(v76 + 968) = 1;
    v76 = *(_QWORD *)(v76 + 48);
    *(_BYTE *)(v76 + 6) = 1;
  }
  *(_WORD *)(a1 + 32) = 1;
  v77 = (__int64 *)(v73 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v77 && sub_F67C60(*v77, 0, v76, v74, v75) )
    sub_172A9A0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 656LL), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), 12);
  else
    sub_1717260(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 656LL), v125, (unsigned int)v126);
  v53 = v125;
  if ( v125 != &v127 )
LABEL_64:
    free(v53);
LABEL_37:
  if ( v113 != v115 )
    free(v113);
}
