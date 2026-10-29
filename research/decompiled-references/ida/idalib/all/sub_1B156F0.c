__int64 __fastcall sub_1B156F0(__int64 a1, __int64 p_ptr, __int64 a3, __m128i *a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rax
  int v11; // edx
  __m128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  void **v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  void *v21; // r9
  __int64 v22; // rbx
  signed __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rdi
  void **v31; // r14
  __int64 v32; // r15
  unsigned int v33; // ecx
  __int64 v34; // rax
  size_t v35; // r13
  const void *v36; // rbp
  __int64 v37; // rbx
  _QWORD *v38; // rax
  void **v39; // rbx
  __int64 v40; // r14
  void **v41; // rbp
  __int64 v42; // rbx
  int v43; // r11d
  char ***v44; // rdi
  __int64 v45; // r14
  int v46; // r14d
  __int64 v47; // rbp
  _QWORD *v48; // rcx
  char *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r12
  void **v53; // rbx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rdi
  _QWORD *v57; // rdx
  __int64 v58; // rax
  _QWORD *v59; // r15
  _QWORD *v60; // r14
  __int64 v61; // rbx
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  char v65; // al
  unsigned int v66; // ebx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // rdx
  void **v75; // rbx
  __int64 v76; // r15
  __int64 v77; // r12
  void **v78; // rbp
  __int64 v79; // rbx
  int v80; // r10d
  __int64 v81; // rdx
  __int64 v82; // r15
  __int64 v83; // r12
  int v84; // eax
  __int64 *v85; // rsi
  __int64 v86; // r9
  __int64 v87; // r10
  __int64 *v88; // rax
  unsigned __int64 v89; // rax
  __int64 *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // [rsp+8h] [rbp-400h]
  void *v93; // [rsp+10h] [rbp-3F8h]
  __int64 v94; // [rsp+10h] [rbp-3F8h]
  void *v95; // [rsp+10h] [rbp-3F8h]
  __int64 v96; // [rsp+10h] [rbp-3F8h]
  char v97; // [rsp+10h] [rbp-3F8h]
  __int64 v98; // [rsp+10h] [rbp-3F8h]
  __int64 v99; // [rsp+20h] [rbp-3E8h]
  __int64 v100; // [rsp+20h] [rbp-3E8h]
  void *v101; // [rsp+20h] [rbp-3E8h]
  __int64 v102; // [rsp+20h] [rbp-3E8h]
  unsigned __int64 v103; // [rsp+20h] [rbp-3E8h]
  __int64 v105; // [rsp+38h] [rbp-3D0h]
  __int64 v106; // [rsp+38h] [rbp-3D0h]
  int v107; // [rsp+38h] [rbp-3D0h]
  __int64 v108; // [rsp+40h] [rbp-3C8h]
  __int64 v109; // [rsp+40h] [rbp-3C8h]
  unsigned __int64 v110; // [rsp+48h] [rbp-3C0h] BYREF
  __int64 v111; // [rsp+58h] [rbp-3B0h] BYREF
  __int64 v112; // [rsp+60h] [rbp-3A8h] BYREF
  void *src; // [rsp+68h] [rbp-3A0h]
  __int64 v114; // [rsp+70h] [rbp-398h]
  __int64 v115; // [rsp+78h] [rbp-390h] BYREF
  void *v116[2]; // [rsp+B8h] [rbp-350h]
  __int64 v117; // [rsp+C8h] [rbp-340h]
  __int64 v118; // [rsp+D0h] [rbp-338h]
  __m128 v119; // [rsp+D8h] [rbp-330h]
  __int64 v120; // [rsp+E8h] [rbp-320h]
  __int64 v121; // [rsp+F0h] [rbp-318h]
  __int64 v122; // [rsp+F8h] [rbp-310h]
  __int64 v123; // [rsp+100h] [rbp-308h]
  void **v124; // [rsp+110h] [rbp-2F8h] BYREF
  __int64 v125; // [rsp+118h] [rbp-2F0h]
  _BYTE v126[320]; // [rsp+120h] [rbp-2E8h] BYREF
  void *ptr; // [rsp+260h] [rbp-1A8h] BYREF
  unsigned __int64 v128; // [rsp+268h] [rbp-1A0h] BYREF
  _QWORD v129[3]; // [rsp+270h] [rbp-198h] BYREF
  __int64 v130; // [rsp+288h] [rbp-180h] BYREF
  _QWORD v131[2]; // [rsp+308h] [rbp-100h] BYREF
  int v132; // [rsp+318h] [rbp-F0h]
  char v133; // [rsp+31Ch] [rbp-ECh]
  _QWORD v134[7]; // [rsp+320h] [rbp-E8h] BYREF
  _DWORD v135[26]; // [rsp+358h] [rbp-B0h] BYREF
  __int64 v136; // [rsp+3C0h] [rbp-48h]
  __int16 v137; // [rsp+3C8h] [rbp-40h]
  char v138; // [rsp+3CAh] [rbp-3Eh]

  v6 = p_ptr;
  v7 = a3;
  v8 = a1;
  v9 = *(_DWORD *)a3;
  v110 = a5;
  if ( v9 && *(_DWORD *)(a3 + 4) && !*(_QWORD *)(a3 + 8) )
    return 1;
  v10 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v11 - 3) <= 2u || (v11 & 0xFB) == 2 )
  {
    p_ptr = *(unsigned __int8 *)(v10 + 16);
    if ( (unsigned __int8)(p_ptr - 2) > 4u )
    {
      v92 = a6;
      v10 = sub_F63050(
              *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL),
              p_ptr,
              (unsigned int)(p_ptr - 2),
              (unsigned int)(v11 - 3));
      a6 = v92;
    }
    v110 = *(_QWORD *)&byte_8[*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
         | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL]
          | (unsigned __int8)*(_QWORD *)(v10 + 32))
         & 7;
  }
  v124 = (void **)v126;
  v125 = 0x400000000LL;
  src = &v115;
  v99 = a6;
  v12 = (__m128)_mm_loadu_si128(a4);
  v13 = a4[1].m128i_i64[0];
  v112 = 0;
  v120 = v13;
  v114 = 0x800000000LL;
  *(_OWORD *)v116 = 0;
  v117 = 0;
  v118 = a1;
  v119 = v12;
  v121 = 0;
  v122 = 14;
  v123 = 0x101010000LL;
  sub_1A395A0((__int64)&v112);
  v14 = v99;
  *(_WORD *)((char *)&v123 + 3) = 0;
  if ( v6 )
  {
LABEL_9:
    p_ptr = (__int64)&v112;
    if ( !sub_1A5D3E0(v8, (__int64)&v112, (__int64 *)v6, v7, 0, 0, 0.0, *(double *)v12.m128_u64, 0) )
      goto LABEL_26;
    v15 = *(_QWORD *)src & 0xFFFFFFFFFFFFFFF8LL;
    while ( 1 )
    {
      if ( *(_BYTE *)(v6 + 100) )
      {
        v16 = *(_QWORD **)(v6 + 80);
        v17 = &v16[*(unsigned int *)(v6 + 92)];
        if ( v16 != v17 )
        {
          while ( v15 != *v16 )
          {
            if ( v17 == ++v16 )
              goto LABEL_36;
          }
LABEL_16:
          v6 = *(_QWORD *)v6;
LABEL_17:
          if ( HIDWORD(v125) <= (unsigned int)v125 )
          {
            p_ptr = 0x800000000LL;
            v19 = sub_2237400(&v124, v126, 0, 80, &ptr);
            v38 = (_QWORD *)(v19 + 80LL * (unsigned int)v125);
            v38[1] = 0x800000000LL;
            *v38 = v38 + 2;
            v39 = &v124[10 * (unsigned int)v125];
            if ( v124 != v39 )
            {
              v102 = v8;
              v40 = v19;
              v41 = &v124[10 * (unsigned int)v125];
              v42 = (__int64)v124;
              do
              {
                while ( 1 )
                {
                  *(_DWORD *)(v40 + 8) = 0;
                  *(_DWORD *)(v40 + 12) = 8;
                  v43 = *(_DWORD *)(v42 + 8);
                  *(_QWORD *)v40 = v40 + 16;
                  if ( v43 )
                    break;
                  v42 += 80;
                  v40 += 80;
                  if ( v41 == (void **)v42 )
                    goto LABEL_43;
                }
                p_ptr = v42;
                v44 = (char ***)v40;
                v42 += 80;
                v40 += 80;
                sub_183F920(v44, (char ***)p_ptr);
              }
              while ( v41 != (void **)v42 );
LABEL_43:
              v45 = (__int64)v124;
              v8 = v102;
              v39 = &v124[10 * (unsigned int)v125];
              if ( v124 != v39 )
              {
                do
                {
                  while ( 1 )
                  {
                    v39 -= 10;
                    if ( *v39 == v39 + 2 )
                      break;
                    free(*v39);
                    if ( v39 == (void **)v45 )
                    {
                      v39 = v124;
                      goto LABEL_47;
                    }
                  }
                }
                while ( v39 != (void **)v45 );
                v39 = v124;
              }
            }
LABEL_47:
            v46 = (int)ptr;
            if ( v39 != (void **)v126 )
              free(v39);
            v124 = (void **)v19;
            HIDWORD(v125) = v46;
            v20 = (unsigned int)(v125 + 1);
            LODWORD(v125) = v125 + 1;
          }
          else
          {
            p_ptr = 0x800000000LL;
            v18 = &v124[10 * (unsigned int)v125];
            v18[1] = (void *)0x800000000LL;
            *v18 = v18 + 2;
            v19 = (__int64)v124;
            v20 = (unsigned int)(v125 + 1);
            LODWORD(v125) = v125 + 1;
          }
          v21 = src;
          v22 = v19 + 80 * v20 - 80;
          v23 = 8LL * (unsigned int)v114;
          v24 = *(unsigned int *)(v22 + 8);
          v25 = v23 >> 3;
          if ( (v23 >> 3) + v24 > (unsigned __int64)*(unsigned int *)(v22 + 12) )
          {
            p_ptr = v22 + 16;
            v101 = src;
            sub_2237220(v22, v22 + 16, v25 + v24, 8);
            v24 = *(unsigned int *)(v22 + 8);
            v21 = v101;
          }
          if ( v23 )
          {
            p_ptr = (__int64)v21;
            memcpy((void *)(*(_QWORD *)v22 + 8 * v24), v21, v23);
            LODWORD(v24) = *(_DWORD *)(v22 + 8);
          }
          LODWORD(v112) = 0;
          *(_DWORD *)(v22 + 8) = v25 + v24;
          LODWORD(v114) = 0;
          if ( v116[0] )
            sub_1A39780((char *)v116[0]);
          BYTE6(v123) = 0;
          *(_OWORD *)v116 = 0;
          if ( !v6 )
            goto LABEL_26;
          goto LABEL_9;
        }
      }
      else if ( sub_2236570(v6 + 80, v15) )
      {
        goto LABEL_16;
      }
LABEL_36:
      v6 = *(_QWORD *)v6;
      if ( !v6 )
        goto LABEL_17;
    }
  }
  if ( !v99 )
    goto LABEL_26;
  v128 = 0x800000000LL;
  p_ptr = (__int64)&ptr;
  ptr = v129;
  v55 = (unsigned int)v125 + 1LL;
  v56 = (unsigned __int64)&v124[10 * (unsigned int)v125];
  if ( v55 > HIDWORD(v125) )
  {
    v103 = -1;
    v97 = 0;
    if ( v124 <= &ptr && v56 > (unsigned __int64)&ptr )
    {
      v97 = 1;
      v103 = 0xCCCCCCCCCCCCCCCDLL * (((char *)&ptr - (char *)v124) >> 4);
    }
    v106 = v14;
    v72 = sub_2237400(&v124, v126, v55, 80, &v111);
    v14 = v106;
    v73 = v72;
    v74 = 10LL * (unsigned int)v125;
    v75 = &v124[v74];
    if ( v124 != &v124[v74] )
    {
      v76 = v72;
      v77 = v8;
      v78 = &v124[v74];
      v79 = (__int64)v124;
      do
      {
        *(_DWORD *)(v76 + 8) = 0;
        *(_DWORD *)(v76 + 12) = 8;
        v80 = *(_DWORD *)(v79 + 8);
        *(_QWORD *)v76 = v76 + 16;
        if ( v80 )
        {
          v108 = v14;
          sub_183F920((char ***)v76, (char ***)v79);
          v14 = v108;
        }
        v79 += 80;
        v76 += 80;
      }
      while ( v78 != (void **)v79 );
      v8 = v77;
      v81 = 10LL * (unsigned int)v125;
      v75 = &v124[v81];
      if ( v124 != &v124[v81] )
      {
        v82 = (__int64)v124;
        v83 = v14;
        do
        {
          while ( 1 )
          {
            v75 -= 10;
            if ( *v75 == v75 + 2 )
              break;
            free(*v75);
            if ( v75 == (void **)v82 )
              goto LABEL_111;
          }
        }
        while ( v75 != (void **)v82 );
LABEL_111:
        v14 = v83;
        v75 = v124;
      }
    }
    v84 = v111;
    if ( v75 != (void **)v126 )
    {
      v109 = v14;
      v107 = v111;
      free(v75);
      v14 = v109;
      v84 = v107;
    }
    HIDWORD(v125) = v84;
    p_ptr = (__int64)&ptr;
    v124 = (void **)v73;
    v56 = v73 + 80LL * (unsigned int)v125;
    if ( v97 )
      p_ptr = v73 + 80 * v103;
  }
  *(_QWORD *)v56 = v56 + 16;
  *(_QWORD *)(v56 + 8) = 0x800000000LL;
  if ( *(_DWORD *)(p_ptr + 8) )
  {
    v96 = v14;
    sub_183F920((char ***)v56, (char ***)p_ptr);
    v14 = v96;
  }
  LODWORD(v125) = v125 + 1;
  if ( ptr != v129 )
  {
    v94 = v14;
    free(ptr);
    v14 = v94;
  }
  v57 = (_QWORD *)(v14 + 64);
  v58 = *(unsigned int *)(v14 + 4);
  if ( (*(_WORD *)v14 & 0x1FF) != 0x18 )
    v57 = (_QWORD *)(v14 + 80);
  if ( v57 != &v57[v58] )
  {
    v59 = v57 + 1;
    v60 = &v57[v58];
    while ( 1 )
    {
      v61 = (__int64)&v124[10 * (unsigned int)v125 - 10];
      v62 = *(unsigned int *)(v61 + 12);
      ptr = (void *)(*v57 & 0xFFFFFFFFFFFFFFF8LL | 3);
      v63 = *(unsigned int *)(v61 + 8);
      if ( v63 + 1 <= v62 )
      {
        *(_QWORD *)(*(_QWORD *)v61 + 8 * v63) = ptr;
        ++*(_DWORD *)(v61 + 8);
        if ( v60 == v59 )
          break;
      }
      else
      {
        p_ptr = v61 + 16;
        v95 = ptr;
        sub_2237220(v61, v61 + 16, v63 + 1, 8);
        *(_QWORD *)(*(_QWORD *)v61 + 8LL * (unsigned int)(*(_DWORD *)(v61 + 8))++) = v95;
        if ( v60 == v59 )
          break;
      }
      v57 = v59++;
    }
  }
LABEL_26:
  if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(v8 + 544)) )
  {
    v29 = (__int64)v124;
    v31 = &v124[10 * (unsigned int)v125];
LABEL_28:
    ptr = v129;
    v128 = 0x800000000LL;
    if ( (void **)v29 == v31 )
    {
      v49 = (char *)v129;
      v48 = v129;
LABEL_54:
      v93 = v48;
      v50 = sub_15AB9E0(v7, *(_QWORD **)(v8 + 248), v26, (__int64)v48, v29, v28);
      v47 = sub_C98860(*(_QWORD **)(v8 + 248), 0, v50, v51, a4, 0, v93, (__int64)v49, 0, 0);
      if ( ptr != v129 )
        free(ptr);
      goto LABEL_56;
    }
LABEL_29:
    v32 = v29;
    v33 = 0;
    v100 = v8;
    v105 = v7;
    do
    {
      v26 = *(unsigned int *)(v32 + 8);
      v34 = v33;
      if ( (_DWORD)v26 )
      {
        v35 = 8 * v26;
        v36 = *(const void **)v32;
        v37 = (8 * v26) >> 3;
        if ( v37 + (unsigned __int64)v33 > HIDWORD(v128) )
        {
          sub_2237220(&ptr, v129, v37 + v33, 8);
          v34 = (unsigned int)v128;
        }
        memcpy((char *)ptr + 8 * v34, v36, v35);
        v33 = v37 + v128;
        LODWORD(v128) = v33;
        v34 = v33;
      }
      v32 += 80;
    }
    while ( v31 != (void **)v32 );
    v48 = ptr;
    v8 = v100;
    v7 = v105;
    v49 = (char *)ptr + 8 * v34;
    goto LABEL_54;
  }
  v29 = (__int64)v124;
  v30 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL);
  v31 = &v124[10 * (unsigned int)v125];
  if ( (*(_BYTE *)(v30 + 17) & 7) != 0 )
    goto LABEL_28;
  if ( v124 != v31 )
  {
    p_ptr = (__int64)v124;
    while ( 1 )
    {
      v26 = *(_QWORD *)p_ptr;
      v27 = *(_QWORD *)p_ptr + 8LL * *(unsigned int *)(p_ptr + 8);
      if ( *(_QWORD *)p_ptr != v27 )
        break;
LABEL_92:
      p_ptr += 80;
      if ( v31 == (void **)p_ptr )
        goto LABEL_93;
    }
    while ( 1 )
    {
      v64 = *(_QWORD *)v26 & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(char *)(v64 + 28) >= 0 )
      {
        v65 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v64 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
        if ( (v65 & 4) != 0 || (v65 & 2) != 0 || (v65 & 1) != 0 )
          break;
      }
      v26 += 8;
      if ( v27 == v26 )
        goto LABEL_92;
    }
    ptr = v129;
    v128 = 0x800000000LL;
    goto LABEL_29;
  }
LABEL_93:
  v66 = a4->m128i_u32[2];
  if ( !(unsigned __int8)sub_F613D0(v30, p_ptr, v26, v27, (__int64)v124, v28)
    && !sub_F61420(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL), p_ptr, v67, v68, v69, v70) )
  {
    if ( *(_QWORD *)(v7 + 8) )
    {
LABEL_120:
      v85 = (__int64 *)(v8 + 8);
      v47 = 1;
      sub_168B9F0((__int64)&ptr, v85, v66, 0x11C7u, 0);
      sub_15F7200(&ptr);
      goto LABEL_56;
    }
    sub_B87650((__int64)&ptr, a4->m128i_i64);
    if ( sub_9B4AA0((__int64)&ptr, "default") )
    {
      if ( ptr != v129 )
        operator delete(ptr);
      goto LABEL_120;
    }
    if ( ptr != v129 )
      operator delete(ptr);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 232) + 1LL) & 8) != 0 && !*(_QWORD *)(v7 + 8) )
    sub_1AF6C20(v8, a4->m128i_i64, v66, v110, (__int64)&v124);
  ptr = (void *)v8;
  v128 = v110;
  v71 = sub_1AE6A20((__int64 *)&v124, (__int64 (__fastcall *)(__int64, unsigned __int64))sub_1AE6740, (__int64)&ptr);
  if ( v71 )
  {
    v47 = sub_190BDA0(v8, v71, v110, 1, v66, 0, 0.0, v12);
  }
  else
  {
    ptr = (void *)v8;
    v128 = v110;
    LODWORD(v129[0]) = v66;
    v87 = sub_1AE6A20((__int64 *)&v124, (__int64 (__fastcall *)(__int64, unsigned __int64))sub_1AECB40, (__int64)&ptr);
    if ( v87 )
    {
      ptr = nullptr;
      v129[1] = 0;
      v129[2] = 1;
      v129[0] = &v128;
      v128 = (unsigned __int64)&v128;
      v88 = &v130;
      do
      {
        *v88 = 0;
        v88 += 2;
      }
      while ( v131 != v88 );
      v98 = v87;
      v131[0] = v134;
      v134[5] = v135;
      v137 = 257;
      v131[1] = 4;
      v132 = 0;
      v133 = 1;
      v134[4] = 0;
      v134[6] = 0x400000000LL;
      v135[24] = 0;
      v136 = 0;
      v138 = 0;
      if ( (unsigned __int8)sub_183BEE0(v8, v66, v110, *(_QWORD *)(v87 + 48), (__int64)&ptr, v86) )
      {
        v111 = *(_QWORD *)(v98 + 48);
        v89 = sub_6D5440(&v111);
        if ( !sub_B65DB0(
                (__int64)&ptr,
                *(_QWORD *)&byte_8[v89 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v89 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v89) & 7)
          && (unsigned int)sub_16643B0((_QWORD *)v8, v66, *(_QWORD *)(v98 + 48), v110, v128 + 16, 0, 0, 0) != 1 )
        {
          v47 = sub_190BDA0(v8, v98, v110, 1, v66, 0, 0.0, v12);
          sub_F7C4A0((__int64)&ptr);
          goto LABEL_56;
        }
      }
      sub_F7C4A0((__int64)&ptr);
    }
    if ( !*(_QWORD *)(v7 + 8) )
    {
      sub_B87650((__int64)&ptr, a4->m128i_i64);
      if ( !sub_9B4AA0((__int64)&ptr, "default") )
      {
        if ( ptr != v129 )
          operator delete(ptr);
        v47 = 0;
        goto LABEL_56;
      }
      if ( ptr != v129 )
        operator delete(ptr);
    }
    v90 = (__int64 *)(v8 + 8);
    v47 = 1;
    sub_168B9F0((__int64)&ptr, v90, v66, 0x11A8u, 0);
    v91 = sub_1605D30((__int64)&ptr, (__int64 *)&v110);
    v111 = a4->m128i_i64[0];
    sub_15894B0(v91, &v111);
    sub_15F7200(&ptr);
  }
LABEL_56:
  sub_169D230((__int64)&v112);
  v52 = (__int64)v124;
  v53 = &v124[10 * (unsigned int)v125];
  if ( v124 != v53 )
  {
    do
    {
      while ( 1 )
      {
        v53 -= 10;
        if ( *v53 == v53 + 2 )
          break;
        free(*v53);
        if ( (void **)v52 == v53 )
          goto LABEL_59;
      }
    }
    while ( (void **)v52 != v53 );
LABEL_59:
    v53 = v124;
  }
  if ( v53 != (void **)v126 )
    free(v53);
  return v47;
}
