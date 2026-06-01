__int64 __fastcall sub_8912C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  char v10; // r14
  char v11; // al
  char v12; // r14
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int8 **v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r9d
  __int64 v21; // r12
  unsigned __int8 v22; // al
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r14
  unsigned __int64 v27; // rax
  char *v28; // rbp
  unsigned int v29; // r12d
  unsigned __int8 **v30; // rbp
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r13
  const void *v36; // r12
  _QWORD *v37; // r14
  __int64 v38; // rbp
  __m128i v39; // xmm0
  __int64 v40; // r8
  unsigned int v41; // r9d
  int v42; // eax
  __int16 v43; // dx
  int v44; // eax
  __int64 v45; // rdx
  _QWORD *v46; // rdx
  unsigned __int8 v47; // al
  unsigned __int8 v48; // r9
  __int64 v49; // r15
  unsigned __int64 v50; // r12
  __int64 v51; // rdx
  __int64 v52; // r14
  char v53; // al
  unsigned __int8 **v54; // rax
  unsigned __int8 **v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int8 v63; // r9
  _QWORD *v64; // rdi
  size_t v65; // rdx
  unsigned __int8 **v66; // rax
  __m128i *v67; // rax
  _QWORD *v68; // rdi
  __m128i v69; // xmm0
  __int64 (*v70)(void); // rax
  unsigned __int16 *v71; // rax
  int v72; // eax
  __m128i *v73; // rsi
  unsigned __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // rbp
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rax
  __int64 v79; // r8
  __m128i *v80; // rdx
  unsigned __int64 v81; // rax
  char *v82; // r12
  unsigned __int64 v83; // r14
  unsigned __int64 v84; // rax
  __int64 v85; // rbp
  __m128i v86; // xmm0
  __int16 v87; // dx
  int v88; // eax
  char v89; // al
  _BYTE *v90; // rdi
  const __m128i *v91; // rbp
  __int8 *v92; // rdi
  __m128i *v93; // rax
  __m128i *v94; // rbx
  __m128i v95; // rax
  __m128i v96; // xmm1
  __int64 v97; // rdx
  __int64 v98; // rbp
  unsigned __int64 v99; // r12
  __int64 v100; // rax
  __int16 v101; // cx
  __int64 v102; // rax
  char v103; // al
  unsigned int v104; // [rsp+Ch] [rbp-38Ch]
  unsigned __int8 v105; // [rsp+Ch] [rbp-38Ch]
  unsigned __int8 v106; // [rsp+Ch] [rbp-38Ch]
  unsigned __int8 v107; // [rsp+Ch] [rbp-38Ch]
  unsigned __int8 v108; // [rsp+Ch] [rbp-38Ch]
  unsigned __int8 v109; // [rsp+Ch] [rbp-38Ch]
  unsigned __int8 v110; // [rsp+Ch] [rbp-38Ch]
  unsigned int v111; // [rsp+10h] [rbp-388h]
  __int64 v112; // [rsp+10h] [rbp-388h]
  unsigned __int64 v113; // [rsp+18h] [rbp-380h]
  __int64 v114; // [rsp+18h] [rbp-380h]
  char v115; // [rsp+18h] [rbp-380h]
  char v116; // [rsp+28h] [rbp-370h]
  unsigned __int8 v117; // [rsp+28h] [rbp-370h]
  unsigned __int8 v118; // [rsp+28h] [rbp-370h]
  __int64 v119; // [rsp+28h] [rbp-370h]
  int v120; // [rsp+28h] [rbp-370h]
  unsigned int v121; // [rsp+28h] [rbp-370h]
  void *dest; // [rsp+30h] [rbp-368h]
  char *v123; // [rsp+40h] [rbp-358h]
  __int64 v124; // [rsp+58h] [rbp-340h]
  __int64 v125; // [rsp+60h] [rbp-338h]
  unsigned int v126; // [rsp+68h] [rbp-330h]
  unsigned __int8 v127; // [rsp+6Eh] [rbp-32Ah]
  unsigned __int8 v128; // [rsp+6Eh] [rbp-32Ah]
  __int64 v129; // [rsp+78h] [rbp-320h] BYREF
  __int64 v130[2]; // [rsp+80h] [rbp-318h] BYREF
  _DWORD v131[2]; // [rsp+90h] [rbp-308h] BYREF
  __int64 v132; // [rsp+98h] [rbp-300h]
  __int64 v133; // [rsp+A0h] [rbp-2F8h]
  __m128i v134; // [rsp+B0h] [rbp-2E8h]
  __m128i v135; // [rsp+C0h] [rbp-2D8h] BYREF
  const __m128i *v136; // [rsp+D0h] [rbp-2C8h]
  _OWORD v137[2]; // [rsp+D8h] [rbp-2C0h] BYREF
  char v138; // [rsp+F8h] [rbp-2A0h]
  _QWORD *v139[8]; // [rsp+100h] [rbp-298h] BYREF
  __m128i v140; // [rsp+140h] [rbp-258h] BYREF
  __m128i v141; // [rsp+150h] [rbp-248h] BYREF
  void *v142; // [rsp+170h] [rbp-228h]
  _BYTE v143[64]; // [rsp+180h] [rbp-218h] BYREF
  __int16 v144; // [rsp+1C0h] [rbp-1D8h]
  void *v145[2]; // [rsp+1D0h] [rbp-1C8h] BYREF
  __m128i v146; // [rsp+1E0h] [rbp-1B8h] BYREF
  int v147; // [rsp+1F0h] [rbp-1A8h]
  void *v148[2]; // [rsp+260h] [rbp-138h] BYREF
  __int64 v149; // [rsp+270h] [rbp-128h] BYREF
  __int64 v150; // [rsp+278h] [rbp-120h]
  _QWORD *v151; // [rsp+280h] [rbp-118h]
  __int64 v152; // [rsp+288h] [rbp-110h]
  void *ptr; // [rsp+290h] [rbp-108h] BYREF
  __int64 v154; // [rsp+298h] [rbp-100h]
  _QWORD v155[2]; // [rsp+2A0h] [rbp-F8h] BYREF
  int v156; // [rsp+2B0h] [rbp-E8h] BYREF
  __int64 v157; // [rsp+2B8h] [rbp-E0h]
  int *v158; // [rsp+2C0h] [rbp-D8h]
  int *v159; // [rsp+2C8h] [rbp-D0h]
  __int64 v160; // [rsp+2D0h] [rbp-C8h]
  int v161; // [rsp+2E0h] [rbp-B8h] BYREF
  __int64 v162; // [rsp+2E8h] [rbp-B0h]
  int *v163; // [rsp+2F0h] [rbp-A8h]
  int *v164; // [rsp+2F8h] [rbp-A0h]
  __int64 v165; // [rsp+300h] [rbp-98h]
  unsigned __int64 v166; // [rsp+308h] [rbp-90h]
  int v167; // [rsp+310h] [rbp-88h]
  _DWORD *v168; // [rsp+318h] [rbp-80h]
  __int64 v169; // [rsp+320h] [rbp-78h]
  _DWORD v170[4]; // [rsp+328h] [rbp-70h] BYREF
  __int64 v171; // [rsp+338h] [rbp-60h]
  __int64 v172; // [rsp+340h] [rbp-58h]
  int v173; // [rsp+348h] [rbp-50h]
  __int64 v174; // [rsp+350h] [rbp-48h]
  char v175; // [rsp+358h] [rbp-40h]

  v113 = a2;
  v104 = a2;
  if ( !*(_DWORD *)a4 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v9 + 16) != 13 || ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) != 0x1E7 )
    {
      v10 = *(_BYTE *)(a3 + 128);
      v11 = *(_BYTE *)(a3 + 24);
      LODWORD(v145[0]) = 0;
      BYTE4(v145[0]) &= ~1u;
      v12 = v10 & 1;
      if ( (v11 & 1) != 0 )
      {
        v13 = *(_QWORD *)(a3 + 8);
        BYTE4(v148[0]) &= ~1u;
        v14 = *(_QWORD *)a3;
        LODWORD(v148[0]) = 0;
        sub_6A37F0((__int64)v148);
        sub_6A3550((__int64)v148, v14, v13, (_QWORD *)(a3 + 16), v12);
        sub_6A01B0((__int64)v145, (__int64)v148);
        if ( LODWORD(v148[0]) <= 1 )
        {
LABEL_6:
          if ( *(_BYTE *)(a3 + 129) )
            BYTE4(v145[0]) |= 1u;
          v15 = (unsigned __int8 **)sub_A2E1A0(a1, v104, 2202, 0);
          v16 = sub_6C4DA0(*(_QWORD *)(a1 + 16), a5, 1u);
          sub_6A3290((__int64)v148, (__int64)v145, *(_QWORD *)(a1 + 16), v16, v17, v18);
          if ( v15 )
            sub_838D50(v15, (_BYTE *)v148[0], (size_t)v148[1]);
          if ( v148[0] != &v149 )
            operator delete(v148[0], v149 + 1);
          if ( LODWORD(v145[0]) > 1 )
            sub_69F740((__int64)v145);
          return 0;
        }
      }
      else
      {
        v32 = *(unsigned int *)(a3 + 56);
        v33 = *(_QWORD *)a3;
        v116 = v11;
        v34 = *(_QWORD *)(a3 + 8);
        BYTE4(v148[0]) &= ~1u;
        v35 = v32;
        v36 = *(const void **)(a3 + 48);
        v114 = v34;
        LODWORD(v148[0]) = 0;
        sub_6A37F0((__int64)v148);
        sub_6A3690((__int64)v148, v33, v114, (_QWORD *)(a3 + 16), v36, v35, (v116 & 2) != 0, v12);
        sub_6A01B0((__int64)v145, (__int64)v148);
        if ( LODWORD(v148[0]) <= 1 )
          goto LABEL_6;
      }
      sub_69F740((__int64)v148);
      goto LABEL_6;
    }
  }
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 18560LL);
  LOWORD(v131[0]) = v131[0] & 0xFE00 | 0x1B;
  if ( byte_4AD234C )
    sub_AC4570(27);
  v132 = v21;
  v131[0] &= 0xFFF001FF;
  v131[1] = a2;
  v133 = 0;
  v22 = sub_76AC90((__int64)v131, a2, a3, a4);
  BYTE1(v131[0]) = (v22 << 6) | BYTE1(v131[0]) & 0x3F;
  BYTE2(v131[0]) = BYTE2(v131[0]) & 0xF8 | (v22 >> 2) & 7;
  v23 = sub_6D9A50(*(_QWORD **)(a1 + 16), a5);
  v24 = v23;
  if ( v23 && (unsigned __int8)(*(_BYTE *)(v23 + 16) - 2) <= 1u )
  {
    v37 = *(_QWORD **)(v23 + 40);
    if ( (*(_BYTE *)(v23 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v37 + 2) <= 0x40u )
        v37 = (_QWORD *)*v37;
      else
        v37 = *(_QWORD **)*v37;
    }
    v38 = *(_QWORD *)(v23 + 32);
    v19 = sub_838500(a1, v23, a2);
    if ( !(_BYTE)v19 )
      return v19;
    v39 = _mm_loadu_si128((const __m128i *)a3);
    v40 = 0;
    v41 = *(_DWORD *)(a3 + 56);
    v149 = *(_QWORD *)(a3 + 16);
    v42 = *(_DWORD *)(a3 + 24);
    *(__m128i *)v148 = v39;
    LODWORD(v150) = v42;
    v151 = *(_QWORD **)(a3 + 32);
    v152 = *(_QWORD *)(a3 + 40);
    ptr = v155;
    v154 = 0x800000000LL;
    if ( !v41 )
    {
LABEL_39:
      v43 = *(_WORD *)(a3 + 128);
      LOBYTE(v43) = v43 & 3;
      LOWORD(v161) = v43 | v161 & 0xFC;
      if ( (v150 & 1) == 0 )
      {
        if ( (v150 & 2) != 0
          || (v41 != 1 || (v150 & 4) == 0)
          && (v150 & 8) != 0
          && *((_QWORD **)ptr + (int)(((unsigned int)v150 >> 4) - 1)) == v151 )
        {
          v66 = (unsigned __int8 **)sub_A2E240(a1, v131, 2264, 0);
          if ( v66 )
            sub_823450(v66, 3);
          LOBYTE(v150) = v150 | 1;
          LODWORD(v154) = 0;
        }
        else
        {
          if ( HIDWORD(v154) < (unsigned __int64)(v40 + 1) )
          {
            sub_25D6060(&ptr, v155, v40 + 1, 8);
            v40 = (unsigned int)v154;
          }
          *((_QWORD *)ptr + v40) = 0;
          v44 = v154 + 1;
          LODWORD(v154) = v154 + 1;
          v45 = *(_QWORD *)(v24 + 32);
          LOBYTE(v150) = v150 | 8;
          v152 = v45;
          v46 = *(_QWORD **)(v24 + 40);
          if ( (*(_BYTE *)(v24 + 19) & 2) != 0 )
          {
            if ( *((_DWORD *)v46 + 2) <= 0x40u )
              v46 = (_QWORD *)*v46;
            else
              v46 = *(_QWORD **)*v46;
          }
          v151 = v46;
          LODWORD(v150) = v150 & 0xF | (16 * v44);
        }
      }
      LODWORD(v145[1]) = 64;
      v145[0] = v37;
      BYTE4(v145[1]) = 0;
      v47 = sub_835AB0(a1, (__int64)v131, (__int64)v148, v38, (__int64)v145);
      v48 = v47;
      if ( LODWORD(v145[1]) > 0x40 && v145[0] )
      {
        v117 = v47;
        operator delete[](v145[0]);
        v48 = v117;
      }
      if ( v48 )
      {
        if ( v37 && *(unsigned int *)(a4 + 16) < (unsigned __int64)v37 )
        {
          v118 = v48;
          sub_81FAA0(a4, *(_DWORD *)(a4 + 20) - 1);
          v48 = v118;
        }
        v49 = *(unsigned int *)(a4 + 20);
        if ( *(_DWORD *)(a4 + 20) )
        {
          v127 = v48;
          v50 = a2;
          do
          {
            LODWORD(v145[1]) = 64;
            v51 = *(_QWORD *)(a4 + 8);
            v145[0] = (void *)-1LL;
            BYTE4(v145[1]) = 0;
            v52 = v51 + 56LL * (unsigned int)(v49 - 1);
            v53 = sub_835AB0(a1, (__int64)v131, (__int64)v148, v38, (__int64)v145);
            if ( LODWORD(v145[1]) > 0x40 && v145[0] )
            {
              v115 = v53;
              operator delete[](v145[0]);
              v53 = v115;
            }
            if ( !v53 )
              goto LABEL_70;
            v50 = (unsigned int)a2 | v50 & 0xFFFFFFFF00000000LL;
            if ( !(unsigned __int8)sub_8912C0(a1, v50, v148, v52, v38) )
              goto LABEL_70;
            --v49;
          }
          while ( v49 );
          v48 = v127;
        }
        v105 = v48;
        BYTE4(v145[0]) &= ~1u;
        LODWORD(v145[0]) = 0;
        sub_6A01B0(a4, (__int64)v145);
        v19 = v105;
        if ( LODWORD(v145[0]) > 1 )
        {
          sub_69F740((__int64)v145);
          v19 = v105;
        }
      }
      else
      {
LABEL_70:
        v19 = 0;
      }
      if ( ptr != v155 )
      {
        v106 = v19;
        free(ptr);
        return v106;
      }
      return v19;
    }
    v40 = v41;
    if ( v41 > 8 )
    {
      v121 = v41;
      v112 = v41;
      sub_25D6060(&ptr, v155, v41, 8);
      v40 = v112;
      v41 = v121;
      v65 = 8LL * *(unsigned int *)(a3 + 56);
      if ( !v65 )
        goto LABEL_91;
      v64 = ptr;
    }
    else
    {
      v64 = v155;
      v65 = 8LL * v41;
    }
    v119 = v40;
    v111 = v41;
    memcpy(v64, *(const void **)(a3 + 48), v65);
    v40 = v119;
    v41 = v111;
LABEL_91:
    LODWORD(v154) = v41;
    goto LABEL_39;
  }
  v25 = sub_B0E910(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL));
  v26 = v25;
  if ( !v25 )
  {
    if ( (unsigned int)sub_B19900(a5) )
    {
      v55 = (unsigned __int8 **)sub_A2E1A0(a1, (unsigned int)a2, 2293, 0);
      if ( v55 )
        sub_8356A0(v55, a5, 8u);
      return 0;
    }
    goto LABEL_67;
  }
  sub_8226C0((__int64 *)(*(_QWORD *)(v25 + 104) + 96LL), *(_QWORD *)(v25 + 104));
  if ( *(_DWORD *)(*(_QWORD *)(v26 + 128) + 20LL) )
  {
    v54 = (unsigned __int8 **)sub_A2E1A0(a1, (unsigned int)a2, 2302, 0);
    if ( v54 )
      sub_8356A0(v54, v26, 0xAu);
    return 0;
  }
  v27 = sub_7A4880(v26);
  v28 = (char *)v27;
  if ( !v27 )
  {
    sub_8226C0((__int64 *)(*(_QWORD *)(v26 + 104) + 96LL), *(_QWORD *)(v26 + 104));
    if ( ((*(_WORD *)(*(_QWORD *)(v26 + 128) + 4LL) >> 7) & 0x3Fu) <= 0x1F )
    {
      sub_A2E1A0(a1, (unsigned int)a2, 110, 0);
      return 0;
    }
LABEL_67:
    BYTE4(v148[0]) &= ~1u;
    LODWORD(v148[0]) = 0;
    sub_6A01B0(a4, (__int64)v148);
    if ( LODWORD(v148[0]) > 1 )
      sub_69F740((__int64)v148);
    return 1;
  }
  if ( *(char *)(v27 + 82) < 0 || (*(_BYTE *)(v26 + 75) & 1) != 0 && *(_BYTE *)(v26 + 73) >> 5 == 2 )
    goto LABEL_67;
  if ( *(_BYTE *)(a1 + 962) && *(_DWORD *)(a1 + 40) > 1u )
    return 0;
  if ( !*(_DWORD *)(a1 + 44) )
  {
    sub_A2E1A0(a1, (unsigned int)a2, 2191, 0);
    return 0;
  }
  v29 = *(_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(sub_A2CB40(a1) + 132) < v29 )
  {
    v30 = (unsigned __int8 **)sub_A2E1A0(a1, (unsigned int)a2, 2200, 0);
    v31 = sub_A2CB40(a1);
    if ( v30 )
      sub_8356A0(v30, *(unsigned int *)(v31 + 132), 3u);
    return 0;
  }
  v129 = 0;
  v56 = sub_78BC30(v28, (unsigned __int64 *)&v129);
  v128 = sub_837DA0(a1, a2, v28, v129, v56);
  if ( !v128 )
    return 0;
  v148[1] = (void *)a1;
  v151 = (_QWORD *)a3;
  v152 = 0;
  v148[0] = &off_47DA9F0;
  v57 = *(_QWORD *)(a1 + 32);
  v166 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(HIDWORD(a2))).m128i_u64[0];
  v58 = _mm_loadl_epi64((const __m128i *)(a1 + 40));
  v149 = v57;
  ptr = nullptr;
  v150 = v129;
  v158 = &v156;
  v159 = &v156;
  v163 = &v161;
  v164 = &v161;
  LODWORD(v57) = *(_DWORD *)(a1 + 44);
  v154 = 0;
  v167 = v57;
  v168 = v170;
  v155[0] = 0;
  v156 = 0;
  v157 = 0;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v165 = 0;
  v170[0] = 1;
  v169 = 0x200000001LL;
  *(_QWORD *)(a1 + 40) = _mm_add_epi32(v58, _mm_loadl_epi64((const __m128i *)&qword_3C86E78)).m128i_u64[0];
  v170[2] = 1;
  v173 = 0;
  v171 = 0;
  v172 = 0;
  v174 = 0;
  v175 = 0;
  *(_QWORD *)(a1 + 32) = v148;
  sub_8226C0((__int64 *)(*(_QWORD *)(v26 + 104) + 96LL), *(_QWORD *)(v26 + 104));
  v59 = _mm_loadu_si128((const __m128i *)a3);
  v60 = *(_QWORD *)(v26 + 128);
  v136 = (const __m128i *)a1;
  v134 = v59;
  LODWORD(v60) = *(_DWORD *)(v60 + 16);
  v140 = v59;
  v147 = 4;
  v126 = v60;
  v61 = *(_QWORD *)(a3 + 48);
  v137[0] = v59;
  v135.m128i_i64[0] = v61;
  v62 = *(unsigned int *)(a3 + 56);
  *(__m128i *)v145 = v59;
  v135.m128i_i64[1] = v62;
  v141 = _mm_load_si128(&v135);
  v137[1] = v141;
  v146 = v141;
  if ( (unsigned __int8)sub_84A8A0((__int64 *)(a1 + 872), (__int64 *)v145, v139) )
  {
    v138 = 0;
    sub_A2E1A0(a1, (unsigned int)a2, 2204, 0);
    v63 = 0;
    goto LABEL_86;
  }
  v67 = (__m128i *)sub_84B5E0(a1 + 872, (__int64 *)v145, v139[0]);
  v68 = (_QWORD *)v129;
  *v67 = _mm_load_si128((const __m128i *)v145);
  v69 = _mm_load_si128(&v146);
  v130[1] = 0;
  v67[1] = v69;
  v67[2].m128i_i32[0] = v147;
  BYTE4(v139[0]) &= ~1u;
  LODWORD(v139[0]) = 0;
  v138 = 1;
  v130[0] = (__int64)v139;
  v70 = *(__int64 (**)(void))(*v68 + 64LL);
  if ( (char *)v70 == (char *)sub_5F7E00 )
    v71 = (unsigned __int16 *)sub_78BC30(v68, (unsigned __int64 *)v145);
  else
    v71 = (unsigned __int16 *)v70();
  v72 = sub_88E980(v130, a1, v71, nullptr);
  v63 = 0;
  if ( !v72 )
    goto LABEL_122;
  if ( *(_BYTE *)(v26 + 73) >> 5 == 2 )
  {
    v63 = v128;
    goto LABEL_122;
  }
  v73 = (__m128i *)v26;
  dest = (void *)sub_AB4240(*(_QWORD *)(a1 + 16), v26);
  v74 = sub_7868A0(v26);
  v75 = 0;
  v76 = v74;
  v77 = v74;
  v145[0] = &v146;
  v145[1] = (void *)0x1000000000LL;
  if ( !v74 )
    goto LABEL_131;
  while ( 1 )
  {
    v78 = *(_QWORD *)(v77 + 8);
    v77 = v78 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v78 <= 7 )
      break;
    if ( (*(_BYTE *)(v77 + 28) & 0x7Fu) - 47 <= 2 )
      ++v75;
  }
  v79 = v75 + 1;
  v80 = &v146;
  if ( v75 + 1 > 16 )
  {
    v73 = &v146;
    v120 = v75 + 1;
    sub_25D6060(v145, &v146, v79, 8);
    LODWORD(v79) = v120;
    v80 = (__m128i *)((char *)v145[0] + 8 * LODWORD(v145[1]));
  }
LABEL_108:
  v80->m128i_i64[0] = v76;
  v80 = (__m128i *)((char *)v80 + 8);
  while ( 1 )
  {
    v81 = *(_QWORD *)(v76 + 8);
    v76 = v81 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v81 <= 7 )
      break;
    if ( (*(_BYTE *)(v76 + 28) & 0x7Fu) - 47 <= 2 )
      goto LABEL_108;
  }
  LODWORD(v145[1]) += v79;
  v82 = (char *)v145[0] + 8 * LODWORD(v145[1]);
  if ( v145[0] == v82 )
  {
LABEL_131:
    if ( v126 )
    {
      v73 = (__m128i *)v137;
      *(_DWORD *)sub_84AAC0((__int64)&v136[54].m128i_i64[1], (__int64 *)v137) = 5;
    }
    v125 = sub_83DA00(v26);
    v98 = v97;
    if ( v125 == v97 )
    {
LABEL_138:
      v140.m128i_i8[4] &= ~1u;
      v140.m128i_i32[0] = 0;
      sub_6A01B0(a4, (__int64)&v140);
      if ( v140.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v140);
      v63 = v128;
    }
    else
    {
      while ( 1 )
      {
        --v126;
        v140.m128i_i64[0] = **(_QWORD **)(v98 - 8);
        v99 = sub_6B3060(&v140, (__int64)v73);
        v100 = *(_QWORD *)(a3 + 16);
        v140 = _mm_loadu_si128((const __m128i *)a3);
        v141.m128i_i64[0] = v100;
        sub_823900(&v141.m128i_i64[1], a3 + 24);
        v101 = *(_WORD *)(a3 + 128);
        LOBYTE(v101) = v101 & 3;
        v144 = v101 | v144 & 0xFC;
        v102 = sub_B0E910(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL));
        if ( !(unsigned __int8)sub_829EC0(a1, (__int64)v131, (__int64)&v140, v26, v102, (__int64)dest) )
          break;
        v113 = v104 | v113 & 0xFFFFFFFF00000000LL;
        v73 = (__m128i *)v113;
        v103 = sub_8912C0(a1, v113, &v140, *(_QWORD *)(a4 + 8) + 56LL * v126, v99);
        v90 = v142;
        if ( !v103 )
        {
          v63 = 0;
          goto LABEL_150;
        }
        if ( v142 == v143 )
        {
          v98 -= 24;
          if ( v125 == v98 )
            goto LABEL_138;
        }
        else
        {
          free(v142);
          v98 -= 24;
          if ( v98 == v125 )
            goto LABEL_138;
        }
      }
      v63 = 0;
      v90 = v142;
LABEL_150:
      if ( v90 != v143 )
        goto LABEL_147;
    }
    goto LABEL_141;
  }
  v124 = v26;
  v83 = v113;
  v123 = (char *)v145[0];
  while ( 1 )
  {
    v85 = *((_QWORD *)v82 - 1);
    if ( (*(_BYTE *)(v85 + 68) & 1) == 0 )
      break;
    v84 = *(_QWORD *)(v85 + 40);
    if ( v84 > 7 || (_DWORD)v84 )
      break;
LABEL_115:
    v82 -= 8;
    if ( v123 == v82 )
    {
      v113 = v83;
      v26 = v124;
      goto LABEL_131;
    }
  }
  v86 = _mm_loadu_si128((const __m128i *)a3);
  v141.m128i_i64[0] = *(_QWORD *)(a3 + 16);
  v140 = v86;
  sub_823900(&v141.m128i_i64[1], a3 + 24);
  v87 = *(_WORD *)(a3 + 128);
  LOBYTE(v87) = v87 & 3;
  v144 = v87 | v144 & 0xFC;
  if ( !(unsigned __int8)sub_825EA0(a1, (__int64)v131, (__int64)&v140, v85, (__int64)dest) )
  {
    v63 = 0;
    v90 = v142;
    goto LABEL_146;
  }
  v88 = sub_83D880(v85);
  v83 = v104 | v83 & 0xFFFFFFFF00000000LL;
  v73 = (__m128i *)v83;
  v89 = sub_8912C0(
          a1,
          v83,
          &v140,
          *(_QWORD *)(a4 + 8) + 56LL * (unsigned int)(*(_DWORD *)(a4 + 16) + v88),
          *(_QWORD *)(v85 + 48));
  v90 = v142;
  if ( v89 )
  {
    if ( v142 != v143 )
      free(v142);
    goto LABEL_115;
  }
  v63 = 0;
LABEL_146:
  if ( v90 != v143 )
  {
LABEL_147:
    free(v90);
    v63 = 0;
  }
LABEL_141:
  if ( v145[0] != &v146 )
  {
    v110 = v63;
    free(v145[0]);
    v63 = v110;
  }
LABEL_122:
  if ( LODWORD(v139[0]) > 1 )
  {
    v108 = v63;
    sub_69F740((__int64)v139);
    v63 = v108;
  }
LABEL_86:
  if ( v138 )
  {
    v91 = v136;
    v109 = v63;
    v92 = &v136[54].m128i_i8[8];
    v93 = (__m128i *)sub_84A740(&v136[54].m128i_i64[1], (__int64 *)v137);
    v63 = v109;
    v94 = v93;
    if ( v93 )
    {
      v95.m128i_i64[0] = sub_69F630(v92, v137);
      v63 = v109;
      v141 = 0u;
      v96 = _mm_loadl_epi64((const __m128i *)&qword_3C86F78);
      v140 = v95;
      *v94 = v95;
      v94[1] = _mm_load_si128(&v141);
      v91[55].m128i_i64[0] = _mm_add_epi32(_mm_loadl_epi64(v91 + 55), v96).m128i_u64[0];
    }
  }
  v107 = v63;
  sub_822100((__int64)v148);
  return v107;
}

