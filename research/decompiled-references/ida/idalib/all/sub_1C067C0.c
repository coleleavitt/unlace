__int64 __fastcall sub_1C067C0(
        __m128 *a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r10
  _DWORD **v11; // rbp
  unsigned __int64 *v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // r13
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  const __m128i *v20; // rcx
  __int64 *v21; // r14
  __int64 *v22; // r13
  __int64 v23; // rbx
  unsigned __int64 v25; // rbp
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // r14d
  int v29; // eax
  __int64 v30; // r9
  unsigned int *v31; // rax
  __int64 v32; // r12
  _BOOL8 v33; // r14
  size_t v34; // rax
  void *v35; // r15
  signed __int64 v36; // rdx
  void *v37; // rax
  __int64 v38; // r8
  int v39; // ecx
  __m128 *v40; // rdx
  unsigned __int64 v41; // r9
  _QWORD **v42; // rax
  __int64 *v43; // rcx
  __int64 v44; // rsi
  void *v45; // rax
  __int64 *v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int8 v51; // dl
  __int64 v52; // rsi
  _BYTE *v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rsi
  void *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r12
  char v61; // r14
  unsigned __int64 v62; // rax
  __int64 v63; // r10
  __int64 v64; // rax
  unsigned __int16 *v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  __int64 v74; // r8
  unsigned __int16 *v75; // rax
  size_t v76; // [rsp-28h] [rbp-2040h]
  unsigned int v77; // [rsp-20h] [rbp-2038h]
  __int64 v78; // [rsp-10h] [rbp-2028h]
  __int64 v79; // [rsp-8h] [rbp-2020h]
  unsigned int v80; // [rsp+8h] [rbp-2010h]
  __int64 v81; // [rsp+8h] [rbp-2010h]
  _BYTE *v82; // [rsp+10h] [rbp-2008h]
  unsigned __int64 v83; // [rsp+10h] [rbp-2008h]
  size_t v84; // [rsp+18h] [rbp-2000h]
  size_t v85; // [rsp+18h] [rbp-2000h]
  unsigned int v86; // [rsp+20h] [rbp-1FF8h]
  unsigned __int64 *v87; // [rsp+20h] [rbp-1FF8h]
  _QWORD *v88; // [rsp+20h] [rbp-1FF8h]
  size_t v89; // [rsp+28h] [rbp-1FF0h]
  unsigned int v90; // [rsp+30h] [rbp-1FE8h]
  __int64 v91; // [rsp+30h] [rbp-1FE8h]
  void *v93; // [rsp+40h] [rbp-1FD8h]
  size_t v94; // [rsp+48h] [rbp-1FD0h]
  void *v95; // [rsp+50h] [rbp-1FC8h]
  __int64 v96; // [rsp+60h] [rbp-1FB8h]
  unsigned __int64 v97; // [rsp+60h] [rbp-1FB8h]
  unsigned __int64 v98; // [rsp+60h] [rbp-1FB8h]
  unsigned int v100; // [rsp+74h] [rbp-1FA4h]
  __int64 *v101; // [rsp+80h] [rbp-1F98h] BYREF
  __int64 v102; // [rsp+88h] [rbp-1F90h] BYREF
  _BYTE *v103; // [rsp+90h] [rbp-1F88h] BYREF
  unsigned __int64 v104; // [rsp+98h] [rbp-1F80h]
  _QWORD v105[2]; // [rsp+A0h] [rbp-1F78h] BYREF
  void *v106; // [rsp+B0h] [rbp-1F68h] BYREF
  __int64 v107; // [rsp+B8h] [rbp-1F60h]
  _QWORD v108[2]; // [rsp+C0h] [rbp-1F58h] BYREF
  void *v109; // [rsp+D0h] [rbp-1F48h] BYREF
  unsigned __int64 v110; // [rsp+D8h] [rbp-1F40h] BYREF
  unsigned __int64 v111[2]; // [rsp+E0h] [rbp-1F38h] BYREF
  void *ptr; // [rsp+F0h] [rbp-1F28h] BYREF
  __int64 v113; // [rsp+F8h] [rbp-1F20h]
  _BYTE v114[32]; // [rsp+100h] [rbp-1F18h] BYREF
  _QWORD *v115; // [rsp+120h] [rbp-1EF8h] BYREF
  __int64 v116; // [rsp+128h] [rbp-1EF0h]
  _QWORD v117[338]; // [rsp+130h] [rbp-1EE8h] BYREF
  int v118; // [rsp+BC0h] [rbp-1458h]
  char v119; // [rsp+BC4h] [rbp-1454h]
  _QWORD v120[17]; // [rsp+BC8h] [rbp-1450h] BYREF
  int v121; // [rsp+C50h] [rbp-13C8h]
  __int64 v122; // [rsp+C58h] [rbp-13C0h]
  __int64 v123; // [rsp+C60h] [rbp-13B8h]
  _QWORD *v124; // [rsp+C68h] [rbp-13B0h]
  __int64 v125; // [rsp+C70h] [rbp-13A8h]
  _QWORD v126[6]; // [rsp+C78h] [rbp-13A0h] BYREF
  _QWORD v127[2]; // [rsp+CA8h] [rbp-1370h] BYREF
  unsigned int v128; // [rsp+CB8h] [rbp-1360h]
  int v129; // [rsp+CBCh] [rbp-135Ch]
  __int64 v130; // [rsp+CC0h] [rbp-1358h]
  char v131; // [rsp+CC8h] [rbp-1350h]
  int v132; // [rsp+CCCh] [rbp-134Ch]
  int v133; // [rsp+1FD0h] [rbp-48h]

  v8 = 8 * a6;
  v11 = (_DWORD **)v108;
  v96 = a6;
  v12 = &a5[a6];
  v80 = (unsigned int)a2;
  v95 = a5;
  v106 = v108;
  v108[0] = a4;
  v107 = 0x200000001LL;
  if ( v12 == a5 )
  {
    v15 = 1;
  }
  else
  {
    v13 = *a5;
    v14 = a5 + 1;
    v15 = 2;
    LODWORD(v107) = 2;
    v108[1] = v13;
    v16 = 2;
    if ( v12 == a5 + 1 )
    {
      v15 = 2;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v17 = *v14;
          if ( v15 + 1 > HIDWORD(v107) )
            break;
          ++v14;
          *((_QWORD *)v106 + v16) = v17;
          v16 = (unsigned int)(v107 + 1);
          LODWORD(v107) = v16;
          v15 = (unsigned int)v16;
          if ( v12 == v14 )
            goto LABEL_5;
        }
        a2 = v108;
        ++v14;
        v91 = v8;
        v87 = v12;
        v83 = v17;
        sub_2237220(&v106, v108, v15 + 1, 8);
        v12 = v87;
        v8 = v91;
        *((_QWORD *)v106 + (unsigned int)v107) = v83;
        v15 = (unsigned int)(v107 + 1);
        v16 = v15;
        LODWORD(v107) = v107 + 1;
      }
      while ( v87 != v14 );
    }
LABEL_5:
    v11 = (_DWORD **)v106;
  }
  v82 = (_BYTE *)((a1[15].m128_u64[1] + 18280) | 6);
  if ( a6 )
  {
    v90 = sub_EEC140(*(unsigned __int64 *)((char *)a5 + v8 - 8));
    v86 = sub_EEB7E0(*a5, (__int64)a2, *(double *)a7.m128_u64);
    if ( !(unsigned __int8)sub_BFE470(v11, v15) )
      goto LABEL_8;
LABEL_21:
    v115 = v82;
    LODWORD(v116) = v80;
    sub_B85890(v117, (__int64)v82);
    v117[0] = __PAIR64__(a3, v80);
    ptr = v114;
    v113 = 0;
    v25 = sub_1BD6F20((__int64)a1, 0, 0, 0, (__int64)&ptr, 1u, (const __m128i)a7);
    if ( ptr != v114 )
      free(ptr);
    if ( v25 == 1 )
    {
      v23 = 1;
    }
    else
    {
      v26 = a1[122].m128_u32[0];
      v27 = a1[122].m128_u32[1];
      if ( a1[121].m128_u64[1] == __PAIR64__(v27, v26) )
      {
        v27 = 0;
        v26 = 0;
      }
      v23 = sub_C98520(
              (_QWORD *)a1[15].m128_u64[1],
              43,
              v25 & 0xFFFFFFFFFFFFFFFELL,
              v106,
              (unsigned int)v107,
              *(_QWORD *)(a1[15].m128_u64[1] + 19072),
              0,
              a3,
              (v27 << 32) | v26,
              0);
    }
    goto LABEL_15;
  }
  v90 = 0;
  v86 = 0;
  if ( (unsigned __int8)sub_BFE470(v11, v15) )
    goto LABEL_21;
LABEL_8:
  v19 = (unsigned int)v107;
  v20 = (const __m128i *)v106;
  ptr = v114;
  v113 = 0x200000000LL;
  if ( (_DWORD)v107 )
  {
    v21 = (__int64 *)v106;
    v22 = (__int64 *)((char *)v106 + 8 * (unsigned int)(v107 - 1) + 8);
    do
    {
      if ( (unsigned __int8)sub_1BC6C10((__int64)a1, v21, (__int64)&ptr, (__m128i)a7, a8, (__int64)v20, v19, v18) )
      {
        v23 = 1;
        goto LABEL_13;
      }
      ++v21;
    }
    while ( v21 != v22 );
    v20 = (const __m128i *)v106;
    v19 = (unsigned int)v107;
  }
  v117[337] = 16;
  v118 = 0;
  v115 = v117;
  v116 = 0x1000000000LL;
  v117[336] = v120;
  v124 = v126;
  v125 = 0x400000000LL;
  v126[4] = v127;
  v119 = 1;
  v120[16] = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v126[5] = 0;
  v127[0] = 0;
  v127[1] = 1;
  v128 = v80;
  v129 = 1;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  sub_1BF0DE0((__int64 *)a1, 43, v80, v20, v19, (__int64)&v115, *(double *)a7.m128_u64, a8, 0);
  if ( (_DWORD)v107 == 2 )
    sub_1BFBE60((__int64)a1, 43, v80, (__int64 *)v106, 2, (__int64)&v115, *(double *)a7.m128_u64, a8);
  v28 = v116;
  v100 = v121 & 0x3FFFFFFF;
  v29 = sub_1BF27B0((__int64)&v115, a1, v80, &v101, *(double *)a7.m128_u64, a8);
  if ( v29 != 1 )
  {
    if ( v29 )
    {
      if ( v29 == 2 )
      {
        v93 = v106;
        if ( (unsigned int)v107 == 2 )
        {
          v85 = j__strlen("[]");
          sub_168B9B0((__int64)&v103, (__int64)&a1->m128_i64[1], 4747);
          sub_AE9DF0(&v103, (__int64)"[]", 1u);
          sub_AE9DF0(&v103, *(_QWORD *)(*(_QWORD *)v106 + 8LL), 8u);
          v55 = *(_QWORD *)(*((_QWORD *)v106 + 1) + 8LL);
          sub_AE9DF0(&v103, v55, 8u);
          v56 = (void *)sub_EEC8C0(*(_QWORD *)v106, v55, *(double *)a7.m128_u64);
          LOBYTE(v110) = 1;
          v109 = v56;
          sub_AEC610((__int64 *)&v103, (__int64 *)&v109);
          LOBYTE(v110) = 1;
          v109 = (void *)__PAIR64__(v90, v86);
          sub_AEC610((__int64 *)&v103, (__int64 *)&v109);
          LODWORD(v109) = v80;
          sub_1582CA0((__int64)&v110, &v103);
          v41 = 2;
          v77 = v80;
          v76 = v85;
          v38 = (__int64)v93;
        }
        else
        {
          v98 = (unsigned int)v107;
          v84 = j__strlen("[]");
          sub_168B9B0((__int64)&v103, (__int64)&a1->m128_i64[1], 4749);
          v44 = *(_QWORD *)(*(_QWORD *)v106 + 8LL);
          sub_AE9DF0(&v103, v44, 8u);
          v45 = (void *)sub_EEC8C0(*(_QWORD *)v106, v44, *(double *)a7.m128_u64);
          LOBYTE(v110) = 1;
          v109 = v45;
          sub_AEC610((__int64 *)&v103, (__int64 *)&v109);
          LOBYTE(v110) = 1;
          v109 = (void *)__PAIR64__(v90, v86);
          sub_AEC610((__int64 *)&v103, (__int64 *)&v109);
          LODWORD(v109) = v80;
          sub_1582CA0((__int64)&v110, &v103);
          v77 = v80;
          v76 = v84;
          v38 = (__int64)v93;
          v41 = v98;
        }
        v39 = 2;
        v40 = a1;
LABEL_40:
        sub_1C022A0(
          (__int64)&v115,
          (unsigned int *)&v109,
          v40,
          v39,
          v38,
          v41,
          a7,
          a8,
          "[]",
          v76,
          v77,
          (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
          (__int64)&v102);
        if ( v110 && v111[0] )
          sub_1580C40(v111[0], v110);
        if ( v103 && v104 )
          sub_1580C40(v104, (unsigned __int64)v103);
        goto LABEL_46;
      }
      if ( v29 == 3 )
      {
        if ( (*(_BYTE *)(*v101 + 83) & 8) != 0 && (v31 = *(unsigned int **)(*v101 + 128), *((_BYTE *)v31 + 4)) )
        {
          v32 = *(_QWORD *)&v31[2 * *v31 + 2];
          v33 = v32 != 0;
        }
        else
        {
          v33 = 0;
          v32 = 0;
        }
        v34 = j__strlen("[]");
        v35 = v106;
        v94 = v34;
        v97 = (unsigned int)v107;
        sub_168B9B0((__int64)&v103, (__int64)&a1->m128_i64[1], 4755);
        sub_AE9DF0(&v103, (__int64)"[]", 1u);
        sub_AE9DF0(&v103, v33, 2u);
        v36 = 0;
        if ( v32 )
        {
          v36 = *(_DWORD *)(v32 + 16) * ((*(_WORD *)(v32 + 2) >> 6) & 7u);
          v32 += 4LL * *(unsigned int *)(v32 + 4) + 20;
        }
        sub_AEC220(&v103, (_BYTE *)v32, v36);
        v37 = (void *)sub_EEC8C0(*(_QWORD *)v106, v32, *(double *)a7.m128_u64);
        LOBYTE(v110) = 1;
        v109 = v37;
        sub_AEC610((__int64 *)&v103, (__int64 *)&v109);
        LOBYTE(v110) = 1;
        v109 = (void *)__PAIR64__(v90, v86);
        sub_AEC610((__int64 *)&v103, (__int64 *)&v109);
        LODWORD(v109) = v80;
        sub_1582CA0((__int64)&v110, &v103);
        v38 = (__int64)v35;
        v39 = 0;
        v40 = a1;
        v77 = v80;
        v76 = v94;
        v41 = v97;
        goto LABEL_40;
      }
      v42 = (_QWORD **)v106;
      v43 = *((__int64 **)v106 + 1);
      goto LABEL_52;
    }
    v46 = *(__int64 **)v106;
    v88 = (_QWORD *)*v101;
    if ( !*v101 )
    {
      v57 = sub_19AFC70((__int64)a1, v46, v101[2], v101[6], 1, 4u, a7, a8);
      if ( v57 == 1
        || (*(_QWORD *)v106 = v57 & 0xFFFFFFFFFFFFFFFELL,
            v58 = sub_19AFC70((__int64)a1, *((__int64 **)v106 + 1), v101[3], v101[6] + 152, 1, 4u, a7, a8),
            v58 == 1) )
      {
LABEL_46:
        v23 = 1;
        goto LABEL_47;
      }
      v43 = (__int64 *)(v58 & 0xFFFFFFFFFFFFFFFELL);
      v42 = (_QWORD **)v106;
      *((_QWORD *)v106 + 1) = v43;
LABEL_52:
      v23 = sub_191AF90((__int64)a1, *v42, v80, v43, a3, v30, a7, a8);
      goto LABEL_47;
    }
    sub_16633B0(a1, v80, (unsigned __int64)v46, a5, a6, v101[1], *(double *)a7.m128_u64);
    v109 = v111;
    v110 = 0x200000000LL;
    if ( (unsigned __int8)sub_B981D0(v88, v80) )
    {
      v49 = sub_1BCBCC0((__int64)a1, *(_QWORD *)v106, (__int64)v88, v47, v48, a7, a8);
      if ( v49 == 1 )
        goto LABEL_61;
      *(_QWORD *)v106 = v49 & 0xFFFFFFFFFFFFFFFELL;
      v95 = v106;
      v96 = (unsigned int)v107;
    }
    else
    {
      v54 = sub_1BF87F0((__int64)a1, *(_QWORD *)v106, 0, v101[1] & 0xFFFFFFFFFFFFFFF8LL, (__int64)v88, a7, a8);
      if ( v54 == 1 )
        goto LABEL_61;
      sub_14B7B40((__int64)&v109, v54 & 0xFFFFFFFFFFFFFFFELL);
    }
    if ( !(unsigned __int8)sub_1BCB000((__int64)a1, (__int64)&v109, (__int64)v88, (__int64)v95, v96, v80, a7, a8) )
    {
      v103 = v82;
      LODWORD(v104) = v80;
      sub_B85890(v105, (__int64)v82);
      v105[0] = __PAIR64__(a3, v80);
      v60 = sub_1BC7390(
              a1,
              (__int64)v88,
              v101[1] & 0xFFFFFFFFFFFFFFF8LL,
              a4,
              v100 + (unsigned __int64)v28 > 1,
              v104,
              a7,
              a8,
              v105);
      if ( v60 != 1 )
      {
        v102 = sub_C1D490((__int64)v88, v79, v59, v78);
        v61 = sub_18C0240(v102, v79);
        v62 = sub_F67970(&v102, a1[15].m128_i64[1]);
        v63 = 0;
        v102 = v62;
        v64 = a1[122].m128_u32[0];
        if ( a1[121].m128_u64[1] == a1[122].m128_u64[0] )
          v64 = 0;
        else
          v63 = a1[122].m128_u32[1];
        v65 = (unsigned __int16 *)sub_C98520(
                                    (_QWORD *)a1[15].m128_u64[1],
                                    43,
                                    v60 & 0xFFFFFFFFFFFFFFFELL,
                                    v109,
                                    (unsigned int)v110,
                                    v102,
                                    v61,
                                    a3,
                                    v64 | (v63 << 32),
                                    0);
        v68 = sub_C1D490((__int64)v88, 43, v66, v67);
        if ( !(unsigned __int8)sub_18C4140((__int64)a1, v68, v80, (__int64)v65, (__int64)v88) )
        {
          v81 = v88[6];
          v71 = *(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v71 + 16) != 26 )
            v71 = sub_F63050(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL), v68, v69, v70);
          if ( !(unsigned __int8)sub_16F8E60(
                                   (__int64 *)a1,
                                   (__int64)v88,
                                   (unsigned __int64)v65,
                                   v71,
                                   (__m128i)a7,
                                   *(double *)a8.m128_u64) )
          {
            v75 = sub_19A3E40((__int64)a1, v65, v72, v73, v74, a7, a8);
            v23 = sub_18C3A50((__int64)a1, (unsigned __int64)v75, (__int64)v88);
LABEL_62:
            if ( v109 != v111 )
              free(v109);
            goto LABEL_47;
          }
        }
      }
    }
LABEL_61:
    v23 = 1;
    goto LABEL_62;
  }
  v50 = (__int64)&a1->m128_i64[1];
  if ( (unsigned int)v116 | v121 & 0x3FFFFFFF )
  {
    sub_168B9B0((__int64)&v109, v50, 4768);
    v51 = 8;
    v52 = *(_QWORD *)(*(_QWORD *)v106 + 8LL);
  }
  else
  {
    sub_168B9B0((__int64)&v109, v50, 4760);
    sub_AE9DF0((unsigned __int8 **)&v109, *(_QWORD *)(*(_QWORD *)v106 + 8LL), 8u);
    v51 = 2;
    v52 = 0;
  }
  sub_AE9DF0((unsigned __int8 **)&v109, v52, v51);
  v53 = (_BYTE *)sub_EEC8C0(*(_QWORD *)v106, v52, *(double *)a7.m128_u64);
  LOBYTE(v104) = 1;
  v103 = v53;
  sub_AEC610((__int64 *)&v109, (__int64 *)&v103);
  LOBYTE(v104) = 1;
  v103 = (_BYTE *)__PAIR64__(v90, v86);
  sub_AEC610((__int64 *)&v109, (__int64 *)&v103);
  sub_1582CA0((__int64)&v103, (_BYTE **)&v109);
  if ( v109 && v110 )
    sub_1580C40(v110, (unsigned __int64)v109);
  v89 = j__strlen("[]");
  LODWORD(v109) = v80;
  sub_1582CA0((__int64)&v110, &v103);
  sub_1C022A0(
    (__int64)&v115,
    (unsigned int *)&v109,
    a1,
    0,
    (__int64)a5,
    a6,
    a7,
    a8,
    "[]",
    v89,
    v80,
    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
    (__int64)&v102);
  if ( v110 && v111[0] )
    sub_1580C40(v111[0], v110);
  v23 = 1;
  if ( v103 && v104 )
    sub_1580C40(v104, (unsigned __int64)v103);
LABEL_47:
  sub_17A20D0((__int64)&v115);
LABEL_13:
  if ( ptr != v114 )
    free(ptr);
LABEL_15:
  if ( v106 != v108 )
    free(v106);
  return v23;
}
