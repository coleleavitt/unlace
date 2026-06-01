__int64 __fastcall sub_1490E60(const __m128i *a1, int a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v8; // rdi
  __int64 *m128i_i64; // rsi
  _BYTE *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int8 v13; // al
  __int16 v14; // ax
  unsigned __int8 **v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  char *v24; // r15
  char *v25; // r12
  char *v26; // rdi
  _BYTE *v27; // rbp
  _BYTE *v28; // rbx
  char *v29; // rdi
  char *v30; // r13
  char *v31; // r12
  char *v32; // rdi
  __int64 result; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 *v36; // rdi
  __int32 v37; // r13d
  __int16 v38; // ax
  char v39; // al
  _BYTE *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbp
  unsigned __int64 v44; // r15
  __int32 v45; // ebx
  __int64 v46; // r13
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int16 v49; // ax
  __int64 v50; // rdx
  __int64 *v51; // rdi
  __int64 *v52; // rdi
  __int64 v53; // rax
  __int64 *v54; // rdi
  size_t v55; // rax
  __int64 v56; // rbx
  const __m128i *v57; // r12
  __int64 v58; // rdx
  __int64 v59; // rdi
  unsigned __int64 v60; // rcx
  __int64 v61; // r13
  __int64 v62; // rax
  __m128i *v63; // rbp
  __m128i *v64; // r8
  unsigned __int64 v65; // rdx
  __int64 v66; // rdi
  unsigned int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 *v70; // rdi
  unsigned __int32 v71; // ebx
  _BYTE *v72; // rcx
  char v73; // dl
  __int64 v74; // rcx
  __int64 v75; // rax
  __m128i v76; // xmm0
  unsigned int v77; // ebx
  size_t v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r15
  __int64 v82; // rax
  __int64 v83; // rcx
  _BYTE *v84; // rbx
  _BYTE *v85; // rbp
  _BYTE *v86; // r12
  __int64 v87; // rax
  __int64 v88; // rax
  void *v89; // rax
  unsigned int v90; // ebp
  _BYTE *v91; // rdx
  const void *v92; // rsi
  int v93; // eax
  char *v94; // rdi
  char *v95; // rbx
  char *v96; // r15
  char *v97; // rdi
  int v98; // ebx
  size_t v99; // rdx
  __int64 v100; // rsi
  __int8 *v101; // r12
  __int64 v102; // [rsp+8h] [rbp-3220h]
  __int64 v103; // [rsp+8h] [rbp-3220h]
  __int8 *v104; // [rsp+10h] [rbp-3218h]
  int v106; // [rsp+28h] [rbp-3200h]
  int *m128i_i32; // [rsp+38h] [rbp-31F0h]
  unsigned __int8 **v110; // [rsp+60h] [rbp-31C8h]
  _BYTE *v111; // [rsp+60h] [rbp-31C8h]
  _BYTE *v112; // [rsp+78h] [rbp-31B0h]
  __int64 v113; // [rsp+88h] [rbp-31A0h] BYREF
  __m128i *v114; // [rsp+90h] [rbp-3198h] BYREF
  __int8 v115; // [rsp+98h] [rbp-3190h]
  const __m128i *v116; // [rsp+A0h] [rbp-3188h]
  int v117; // [rsp+A8h] [rbp-3180h]
  __int16 v118; // [rsp+ACh] [rbp-317Ch]
  __int64 (__fastcall *v119)(__int64); // [rsp+B0h] [rbp-3178h]
  __int64 v120; // [rsp+B8h] [rbp-3170h]
  __int64 v121; // [rsp+C0h] [rbp-3168h]
  unsigned __int32 v122; // [rsp+D0h] [rbp-3158h] BYREF
  unsigned __int32 v123; // [rsp+D4h] [rbp-3154h]
  char v124; // [rsp+D8h] [rbp-3150h]
  __int64 v125; // [rsp+DCh] [rbp-314Ch]
  char v126; // [rsp+E4h] [rbp-3144h]
  void *v127; // [rsp+E8h] [rbp-3140h]
  __int64 v128; // [rsp+F0h] [rbp-3138h]
  _BYTE v129[24]; // [rsp+F8h] [rbp-3130h] BYREF
  unsigned __int8 *v130[3]; // [rsp+110h] [rbp-3118h] BYREF
  _QWORD v131[5]; // [rsp+128h] [rbp-3100h] BYREF
  __int64 v132; // [rsp+150h] [rbp-30D8h] BYREF
  void *ptr; // [rsp+160h] [rbp-30C8h] BYREF
  __int64 v134; // [rsp+168h] [rbp-30C0h]
  _BYTE v135[256]; // [rsp+170h] [rbp-30B8h] BYREF
  __int64 v136; // [rsp+270h] [rbp-2FB8h] BYREF
  unsigned __int8 **v137; // [rsp+278h] [rbp-2FB0h] BYREF
  __int64 v138; // [rsp+280h] [rbp-2FA8h]
  __int64 v139; // [rsp+288h] [rbp-2FA0h]
  char v140; // [rsp+290h] [rbp-2F98h] BYREF
  __int8 *v141; // [rsp+298h] [rbp-2F90h]
  unsigned __int8 **v142; // [rsp+2A0h] [rbp-2F88h]
  __int64 v143; // [rsp+2A8h] [rbp-2F80h]
  __int64 v144; // [rsp+3D0h] [rbp-2E58h]
  char v145; // [rsp+3D8h] [rbp-2E50h]
  _BYTE *v146; // [rsp+3E0h] [rbp-2E48h] BYREF
  __int64 v147; // [rsp+3E8h] [rbp-2E40h]
  _BYTE v148[11832]; // [rsp+3F0h] [rbp-2E38h] BYREF

  sub_146B5E0(&v113, (__int64)a1, 0x40008u, 1, 0);
  v8 = a1[6].m128i_i64[0];
  m128i_i64 = *(__int64 **)(v8 + 608);
  sub_17A6350(v8, m128i_i64, a3);
  v114 = (__m128i *)&a1[122];
  v13 = a1[122].m128i_i8[0];
  v116 = a1;
  v115 = v13;
  v119 = sub_1478A90;
  v14 = a1[2].m128i_i16[0];
  a1[122].m128i_i8[0] = 1;
  v117 = 1638424;
  v118 = 63;
  v120 = 0;
  v121 = 0;
  if ( v14 == 24 )
  {
    if ( (unsigned int)a1[5].m128i_u16[6] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
    {
      sub_1568800(&v114);
      v14 = a1[2].m128i_i16[0];
      if ( v14 != 25 )
        goto LABEL_5;
      goto LABEL_71;
    }
    LODWORD(v121) = sub_1478A90((__int64)a1);
    v14 = a1[2].m128i_i16[0];
  }
  if ( v14 != 25 )
  {
LABEL_5:
    ptr = v135;
    v134 = 0x2000000000LL;
    v147 = 0x2000000000LL;
    v146 = v148;
    v104 = &a1[31].m128i_i8[8];
LABEL_6:
    LODWORD(v102) = 0;
    v15 = (unsigned __int8 **)&v136;
    while ( 1 )
    {
      v16 = a1[1].m128i_u32[0];
      if ( v14 != 5 )
      {
        sub_1564820(v15, a1, v16, 14);
        sub_AE9DF0(v15, 5, 4u);
        sub_AEA040((__int64)v15);
        m128i_i64 = (__int64 *)v15;
        LODWORD(v136) = 1638466;
        if ( !(unsigned __int8)sub_15680D0(a1, v15, 2, 2) || a1[2].m128i_i16[0] != 66 )
          goto LABEL_10;
        v54 = (__int64 *)a1->m128i_i64[1];
        m128i_i64 = a1[1].m128i_i64;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v54, a1[1].m128i_i32);
        goto LABEL_67;
      }
      v35 = a1[1].m128i_i64[1];
      v36 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = v16;
      v106 = v35;
      m128i_i32 = a1[1].m128i_i32;
      sub_14634E0(v36, a1[1].m128i_i32);
      v37 = a1[2].m128i_i32[2];
      v137 = v15 + 3;
      v136 = 0;
      v141 = v104;
      v142 = v15 + 8;
      v38 = a1[2].m128i_i16[0];
      v138 = 0x200000000LL;
      v143 = 0x200000000LL;
      if ( v38 == 189 )
      {
        sub_1490230(a1, (__int64)v15, 0, 0, a5, a6);
        v38 = a1[2].m128i_i16[0];
      }
      if ( (unsigned __int16)(v38 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      {
        v39 = *(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL);
        if ( (v39 & 8) != 0 )
        {
          sub_1564820(v130, a1, a1[1].m128i_u32[0], (v39 & 0x40) == 0 ? 2011 : 2086);
          sub_14780E0(v130, 1);
          sub_AEA040((__int64)v130);
        }
        sub_14AB020(a1, v15);
      }
      if ( HIDWORD(v147) > (unsigned int)v147 )
      {
        v40 = &v146[368 * (unsigned int)v147];
        v41 = a1[6].m128i_i64[0];
        *((_QWORD *)v40 + 1) = 0;
        *((_QWORD *)v40 + 2) = v40 + 32;
        *((_QWORD *)v40 + 44) = 0;
        *(_QWORD *)v40 = v41;
        *((_QWORD *)v40 + 3) = 0x400000000LL;
        v42 = *(_QWORD *)(v41 + 512);
        *(_QWORD *)(v41 + 512) = v40 + 8;
        *((_QWORD *)v40 + 44) = v42;
        v40[360] = 1;
        LODWORD(v147) = v147 + 1;
        goto LABEL_55;
      }
      v79 = sub_2237400(&v146, v148, 0, 368, v130);
      v80 = a1[6].m128i_i64[0];
      v81 = v79;
      v112 = (_BYTE *)v79;
      v82 = v79 + 368LL * (unsigned int)v147;
      *(_QWORD *)v82 = v80;
      *(_QWORD *)(v82 + 8) = 0;
      *(_QWORD *)(v82 + 352) = 0;
      *(_QWORD *)(v82 + 16) = v82 + 32;
      v83 = *(_QWORD *)(v80 + 512);
      *(_QWORD *)(v82 + 24) = 0x400000000LL;
      *(_QWORD *)(v80 + 512) = v82 + 8;
      *(_QWORD *)(v82 + 352) = v83;
      *(_BYTE *)(v82 + 360) = 1;
      v84 = v146;
      v85 = &v146[368 * (unsigned int)v147];
      if ( v146 == v85 )
        goto LABEL_121;
      v110 = v15;
      v86 = &v146[368 * (unsigned int)v147];
      do
      {
        *(_QWORD *)v81 = *(_QWORD *)v84;
        v88 = *((_QWORD *)v84 + 1);
        *(_DWORD *)(v81 + 24) = 0;
        *(_QWORD *)(v81 + 8) = v88;
        v89 = (void *)(v81 + 32);
        *(_DWORD *)(v81 + 28) = 4;
        v90 = *((_DWORD *)v84 + 6);
        *(_QWORD *)(v81 + 16) = v81 + 32;
        if ( v90 && (_BYTE *)(v81 + 16) != v84 + 16 )
        {
          v91 = *((_BYTE **)v84 + 2);
          v92 = v84 + 32;
          if ( v91 != v84 + 32 )
          {
            *(_DWORD *)(v81 + 24) = v90;
            v93 = *((_DWORD *)v84 + 7);
            *(_QWORD *)(v81 + 16) = v91;
            *(_DWORD *)(v81 + 28) = v93;
            *((_QWORD *)v84 + 2) = v92;
            *((_DWORD *)v84 + 7) = 0;
            goto LABEL_108;
          }
          if ( v90 <= 4uLL )
          {
            v99 = 80LL * v90;
            goto LABEL_126;
          }
          sub_2237220(v81 + 16, v81 + 32, v90, 80);
          v89 = *(void **)(v81 + 16);
          v92 = *((const void **)v84 + 2);
          v99 = 80LL * *((unsigned int *)v84 + 6);
          if ( v99 )
LABEL_126:
            memcpy(v89, v92, v99);
          *(_DWORD *)(v81 + 24) = v90;
        }
LABEL_108:
        v87 = *((_QWORD *)v84 + 44);
        *((_DWORD *)v84 + 6) = 0;
        v84 += 368;
        v81 += 368;
        *(_QWORD *)(v81 - 16) = v87;
        *(_BYTE *)(v81 - 8) = *(v84 - 8);
        *(v84 - 8) = 0;
      }
      while ( v86 != v84 );
      v15 = v110;
      v111 = v146;
      v85 = &v146[368 * (unsigned int)v147];
      if ( v146 == v85 )
        goto LABEL_121;
LABEL_114:
      v85 -= 368;
      if ( !v85[360] )
        goto LABEL_115;
LABEL_130:
      sub_1818070(*(_QWORD *)v85, *((_QWORD *)v85 + 44), 0);
      v85[360] = 0;
      while ( 1 )
      {
LABEL_115:
        v94 = *((char **)v85 + 2);
        v95 = v94;
        v96 = &v94[80 * *((unsigned int *)v85 + 6)];
        if ( v94 != v96 )
        {
          do
          {
            v97 = v95;
            v95 += 80;
            sub_15B6850(v97);
          }
          while ( v96 != v95 );
          v94 = *((char **)v85 + 2);
        }
        if ( v94 != v85 + 32 )
        {
          free(v94);
          if ( v111 == v85 )
            break;
          goto LABEL_114;
        }
        if ( v111 == v85 )
          break;
        v85 -= 368;
        if ( v85[360] )
          goto LABEL_130;
      }
      v85 = v146;
LABEL_121:
      v98 = (int)v130[0];
      if ( v85 != v148 )
        free(v85);
      HIDWORD(v147) = v98;
      LODWORD(v147) = v147 + 1;
      v146 = v112;
LABEL_55:
      v43 = a1[6].m128i_i64[0];
      v44 = 0;
      v45 = 0;
      sub_18C74E0(v43, 4, 0, 4);
      if ( a1[2].m128i_i16[0] == 64 )
      {
        v52 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v52, m128i_i32);
        v45 = a1[2].m128i_i32[2];
        v53 = sub_14C4B50(a1, 0);
        if ( v53 == 1 )
        {
          LODWORD(v130[0]) = 1638466;
          sub_15680D0(a1, v130, 2, 2);
        }
        else
        {
          v44 = v53 & 0xFFFFFFFFFFFFFFFELL;
        }
      }
      v102 = sub_17DE270(
               a1[6].m128i_i64[0],
               *(_QWORD *)(a1[6].m128i_i64[0] + 608),
               a3,
               v102,
               v37,
               v106,
               (__int64)v15,
               v45,
               v44,
               a4);
      v46 = (__int64)&v146[368 * (unsigned int)v147 - 368];
      m128i_i64 = *(__int64 **)(v46 + 352);
      sub_1818070(*(_QWORD *)v46, m128i_i64, 0);
      v47 = (unsigned int)v134;
      v48 = HIDWORD(v134);
      *(_BYTE *)(v46 + 360) = 0;
      if ( v47 + 1 > v48 )
      {
        m128i_i64 = (__int64 *)v135;
        sub_2237220(&ptr, v135, v47 + 1, 8);
        v47 = (unsigned int)v134;
      }
      *((_QWORD *)ptr + v47) = v102;
      v49 = a1[2].m128i_i16[0];
      LODWORD(v134) = v134 + 1;
      if ( v49 == 5 )
      {
        v77 = sub_15658F0(a1);
        sub_1564820(v130, a1, v77, 1598);
        v78 = j__strlen(", ");
        m128i_i64 = (__int64 *)v77;
        sub_9EC740((__int64)&v122, v77, ", ", v78, 0);
        if ( v122 && v123 )
        {
          m128i_i64 = (__int64 *)&v122;
          sub_1480470((__int64 *)v130, (unsigned __int64)&v122);
        }
        if ( v127 != v129 )
          operator delete(v127);
        sub_AEA040((__int64)v130);
      }
      else if ( v49 != 25 )
      {
        v50 = a1[1].m128i_u32[0];
        if ( v49 == 66 )
        {
          v70 = (__int64 *)a1->m128i_i64[1];
          m128i_i64 = a1[1].m128i_i64;
          a1[2].m128i_i32[2] = v50;
          sub_14634E0(v70, m128i_i32);
          if ( a1[2].m128i_i16[0] == 25 )
          {
            v71 = a1[2].m128i_u32[2];
            if ( v71 )
            {
              v72 = *(_BYTE **)(a1->m128i_i64[1] + 56);
              v73 = v72[1] & 0x10;
              if ( (*v72 & 1) != 0 )
              {
                if ( v73 )
                  goto LABEL_141;
              }
              else
              {
                if ( !v73 )
                {
                  v74 = (unsigned int)((v72[1] & 8) != 0) + 1975;
                  goto LABEL_95;
                }
LABEL_141:
                v74 = 2115;
LABEL_95:
                sub_1564820(v130, a1, v71, v74);
                m128i_i64 = (__int64 *)&v122;
                v125 = 0;
                v126 = 0;
                v127 = v129;
                v128 = 0;
                v129[0] = 0;
                v129[16] = 0;
                v122 = v71;
                v123 = v71;
                v124 = 1;
                sub_1480470((__int64 *)v130, (unsigned __int64)&v122);
                if ( v127 != v129 )
                  operator delete(v127);
                sub_AEA040((__int64)v130);
              }
LABEL_98:
              sub_190D5E0(v43);
              sub_147A450(v15);
              goto LABEL_10;
            }
          }
        }
        else
        {
          if ( v45 )
          {
            sub_1564820(v130, a1, v50, 17);
            sub_AE9DF0(v130, 25, 4u);
            sub_AE9DF0(v130, 66, 4u);
          }
          else
          {
            sub_1564820(v130, a1, v50, 1612);
          }
          sub_AEA040((__int64)v130);
          m128i_i64 = (__int64 *)v130;
          LODWORD(v130[0]) = 1638466;
          if ( !(unsigned __int8)sub_15680D0(a1, v130, 2, 2) )
            goto LABEL_98;
          if ( a1[2].m128i_i16[0] == 66 )
          {
            v51 = (__int64 *)a1->m128i_i64[1];
            m128i_i64 = a1[1].m128i_i64;
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v51, m128i_i32);
          }
        }
      }
      sub_190D5E0(v43);
      sub_147A450(v15);
LABEL_67:
      v14 = a1[2].m128i_i16[0];
      if ( v14 == 25 )
        goto LABEL_10;
    }
  }
LABEL_71:
  if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0 )
  {
    ptr = v135;
    v134 = 0x2000000000LL;
    v17 = (__int64)v148;
    v147 = 0x2000000000LL;
    v146 = v148;
    v104 = &a1[31].m128i_i8[8];
    goto LABEL_10;
  }
  sub_1564840(&v146, a1, &a1[1], 1596);
  sub_AEA040((__int64)&v146);
  v14 = a1[2].m128i_i16[0];
  m128i_i64 = &a1[31].m128i_i64[1];
  v10 = v148;
  ptr = v135;
  v17 = 0x2000000000LL;
  v134 = 0x2000000000LL;
  v146 = v148;
  v147 = 0x2000000000LL;
  v104 = &a1[31].m128i_i8[8];
  if ( v14 != 25 )
    goto LABEL_6;
LABEL_10:
  sub_14808E0((__int64)&v114, m128i_i64, v17, (__int64)v10, v11, v12);
  v130[0] = nullptr;
  v18 = a1[2].m128i_i16[0] == 189;
  v131[2] = v104;
  v130[1] = (unsigned __int8 *)v131;
  v130[2] = (unsigned __int8 *)0x200000000LL;
  v131[3] = &v132;
  v131[4] = 0x200000000LL;
  if ( v18 )
    sub_1490230(a1, (__int64)v130, 0, 0, a5, a6);
  sub_17D2B30(a1[6].m128i_i64[0], a2, v121, a3, (_DWORD)ptr, v134, *(_QWORD *)(a1[6].m128i_i64[0] + 608), (__int64)v130);
  v103 = (unsigned int)v134;
  if ( (_DWORD)v134 )
  {
    v19 = 0;
    v20 = 0;
    while ( 1 )
    {
      v21 = a1[6].m128i_i64[0];
      v138 = (__int64)&v140;
      v139 = 0x400000000LL;
      v136 = v21;
      v137 = nullptr;
      v22 = *(_QWORD *)(v21 + 512);
      *(_QWORD *)(v21 + 512) = &v137;
      v144 = v22;
      v145 = 0;
      if ( *(_DWORD *)&v146[v19 + 24] )
      {
        sub_1806CB0(*(_QWORD *)&v146[v19], &v146[v19 + 8]);
        if ( v145 )
          goto LABEL_17;
        v21 = v136;
        v23 = *((_QWORD *)ptr + v20);
      }
      else
      {
        v23 = *((_QWORD *)ptr + v20);
      }
      sub_1818070(v21, v144, v23);
      v145 = 1;
LABEL_17:
      v24 = (char *)v138;
      v25 = (char *)(v138 + 80LL * (unsigned int)v139);
      if ( (char *)v138 != v25 )
      {
        do
        {
          v26 = v24;
          v24 += 80;
          sub_15B6850(v26);
        }
        while ( v25 != v24 );
        v25 = (char *)v138;
      }
      if ( v25 == &v140 )
      {
        ++v20;
        v19 += 368;
        if ( v20 == v103 )
          break;
      }
      else
      {
        ++v20;
        v19 += 368;
        free(v25);
        if ( v103 == v20 )
          break;
      }
    }
  }
  if ( v113 )
  {
    sub_1564F70(v113);
    v113 = 0;
  }
  sub_17AB6E0(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), a3, v121);
  if ( !(unsigned __int8)sub_14A0820(a1, (*(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 608) + 8LL) >> 5) & 1) )
  {
    v55 = j__strlen("enum");
    sub_1569A00(a1, 63, 15, "enum", v55);
    v56 = a1->m128i_i64[1];
    if ( *(_DWORD *)(v56 + 1012) )
    {
      v75 = operator new[](0x18u);
      v76 = _mm_loadu_si128(a1 + 1);
      *(_DWORD *)(v75 + 16) = a1[2].m128i_i32[0];
      *(__m128i *)v75 = v76;
      sub_14368B0(v56, (char *)v75, 1, 1u, 1u, 1u);
    }
    else
    {
      v57 = a1 + 1;
      sub_1417F90((_QWORD *)a1->m128i_i64[1]);
      v58 = *(unsigned int *)(v56 + 2912);
      v59 = v56 + 2904;
      v60 = *(_QWORD *)(v56 + 2904);
      v61 = 24LL * *(_QWORD *)(v56 + 2944);
      v62 = 24 * v58;
      v63 = (__m128i *)(v60 + v61);
      v64 = (__m128i *)(v60 + 24 * v58);
      if ( (__m128i *)(v60 + v61) == v64 )
      {
        sub_141B840(v59, a1 + 1);
      }
      else
      {
        v65 = v58 + 1;
        if ( v65 > *(unsigned int *)(v56 + 2916) )
        {
          v100 = v56 + 2920;
          if ( v60 > (unsigned __int64)v57 || v64 <= v57 )
          {
            sub_2237220(v59, v100, v65, 24);
            v60 = *(_QWORD *)(v56 + 2904);
          }
          else
          {
            v101 = &v57->m128i_i8[-v60];
            sub_2237220(v59, v100, v65, 24);
            v60 = *(_QWORD *)(v56 + 2904);
            v57 = (const __m128i *)&v101[v60];
          }
          v63 = (__m128i *)(v60 + v61);
          v62 = 24LL * *(unsigned int *)(v56 + 2912);
          v64 = (__m128i *)(v60 + v62);
        }
        *v64 = _mm_loadu_si128((const __m128i *)(v60 + v62 - 24));
        v64[1].m128i_i64[0] = *(_QWORD *)(v60 + v62 - 8);
        v66 = *(_QWORD *)(v56 + 2904);
        v67 = *(_DWORD *)(v56 + 2912);
        v68 = 24LL * v67;
        if ( v63 != (__m128i *)(v66 + v68 - 24) )
        {
          memmove(&v63[1].m128i_u64[1], v63, v66 + v68 - 24 - (_QWORD)v63);
          v67 = *(_DWORD *)(v56 + 2912);
          v66 = *(_QWORD *)(v56 + 2904);
        }
        v69 = v67 + 1;
        *(_DWORD *)(v56 + 2912) = v69;
        if ( v63 <= v57 && (unsigned __int64)v57 < v66 + 24 * v69 )
          v57 = (const __m128i *)((char *)v57 + 24);
        *v63 = _mm_loadu_si128(v57);
        v63[1].m128i_i32[0] = v57[1].m128i_i32[0];
      }
    }
    a1[2].m128i_i16[0] = 63;
  }
  sub_147A450(v130);
  v27 = v146;
  v28 = &v146[368 * (unsigned int)v147];
  if ( v146 != v28 )
  {
    while ( 1 )
    {
      v28 -= 368;
      if ( v28[360] )
        goto LABEL_44;
      while ( 1 )
      {
        v29 = *((char **)v28 + 2);
        v30 = v29;
        v31 = &v29[80 * *((unsigned int *)v28 + 6)];
        if ( v29 != v31 )
        {
          do
          {
            v32 = v30;
            v30 += 80;
            sub_15B6850(v32);
          }
          while ( v31 != v30 );
          v29 = *((char **)v28 + 2);
        }
        if ( v29 != v28 + 32 )
          break;
        if ( v27 == v28 )
        {
LABEL_32:
          v28 = v146;
          goto LABEL_33;
        }
        v28 -= 368;
        if ( v28[360] )
        {
LABEL_44:
          sub_1818070(*(_QWORD *)v28, *((_QWORD *)v28 + 44), 0);
          v28[360] = 0;
        }
      }
      free(v29);
      if ( v27 == v28 )
        goto LABEL_32;
    }
  }
LABEL_33:
  if ( v28 != v148 )
    free(v28);
  if ( ptr != v135 )
    free(ptr);
  result = (__int64)v114;
  v34 = v113;
  v114->m128i_i8[0] = v115;
  if ( v34 )
    return sub_1564F70(v34);
  return result;
}
