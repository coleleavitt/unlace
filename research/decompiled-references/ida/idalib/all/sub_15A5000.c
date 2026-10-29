char *__fastcall sub_15A5000(
        __int64 **a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  char *result; // rax
  unsigned __int64 v7; // rbp
  __int64 *v8; // rbx
  __int64 v9; // r14
  __int64 *v10; // r12
  unsigned int v11; // r13d
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  int v14; // r13d
  unsigned int v15; // ecx
  unsigned __int64 *v16; // rdx
  unsigned __int64 v17; // rax
  char **v18; // r14
  int v19; // edi
  unsigned __int64 v20; // rsi
  unsigned __int8 v21; // cl
  int v22; // eax
  char *v23; // rsi
  void *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // r13
  char *v29; // rbp
  __int64 v30; // r15
  char *v31; // rbp
  char v32; // al
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 (__fastcall ***v38)(); // rbx
  _BYTE *v39; // rdi
  unsigned __int64 v40; // rax
  unsigned int *v41; // rsi
  size_t v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 (__fastcall **v45)(); // rdx
  _BYTE *v46; // rdi
  unsigned __int64 v47; // rax
  unsigned int *v48; // rsi
  size_t v49; // r15
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned int *v53; // rsi
  size_t v54; // r15
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbp
  char **v58; // rdi
  const void **v59; // rdx
  const void **v60; // rax
  char *v61; // rbx
  size_t v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rsi
  int v68; // r10d
  __int64 *v69; // r8
  _QWORD *v70; // rcx
  _QWORD *v71; // rdx
  __int64 *v72; // rdx
  int i; // r13d
  __int64 v74; // rcx
  unsigned int v75; // edi
  __int64 v76; // r9
  __int64 v77; // r11
  __m128i v78; // xmm1
  int v79; // esi
  int v80; // r8d
  unsigned int v81; // edi
  unsigned __int64 v82; // r9
  int v83; // esi
  unsigned __int64 *v84; // r10
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 *v89; // rdi
  __int64 v90; // r9
  _QWORD *v91; // rcx
  _QWORD *v92; // rdx
  __int64 *v93; // rdx
  int v94; // r14d
  __int64 v95; // rcx
  unsigned int v96; // esi
  __int64 v97; // r8
  __int64 v98; // r10
  __m128i v99; // xmm2
  int v100; // esi
  int v101; // edi
  unsigned int v102; // r13d
  unsigned __int64 v103; // r8
  int v104; // esi
  unsigned __int64 *v105; // r9
  __int64 v106; // rax
  unsigned __int64 v107; // rdx
  __int64 v108; // rdx
  _QWORD *v109; // rcx
  _QWORD *v110; // rdx
  __int64 v111; // rdx
  _QWORD *v112; // rcx
  _QWORD *v113; // rdx
  int v114; // r15d
  __int64 v115; // r14
  __int64 v116; // r11
  char *v117; // [rsp+0h] [rbp-188h]
  int v118; // [rsp+0h] [rbp-188h]
  __int64 *v119; // [rsp+10h] [rbp-178h]
  void *v120; // [rsp+20h] [rbp-168h] BYREF
  __int64 v121; // [rsp+28h] [rbp-160h]
  _BYTE v122[16]; // [rsp+30h] [rbp-158h] BYREF
  const void **v123[4]; // [rsp+40h] [rbp-148h] BYREF
  __int16 v124; // [rsp+60h] [rbp-128h]
  __int64 (__fastcall **v125)(); // [rsp+70h] [rbp-118h] BYREF
  int v126; // [rsp+78h] [rbp-110h]
  __int128 v127; // [rsp+80h] [rbp-108h]
  void *dest; // [rsp+90h] [rbp-F8h]
  char v129; // [rsp+98h] [rbp-F0h]
  int v130; // [rsp+9Ch] [rbp-ECh]
  void **p_ptr; // [rsp+A0h] [rbp-E8h]
  void *ptr; // [rsp+B0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-D0h]
  _BYTE v134[192]; // [rsp+C8h] [rbp-C0h] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 0x7Fu) - 18 > 0x3F )
    return nullptr;
  v7 = a2;
  v8 = (__int64 *)a1;
  v9 = *((unsigned int *)a1 + 4);
  v10 = *a1;
  if ( !(_DWORD)v9 )
    goto LABEL_80;
  v11 = a2;
  v12 = a2;
  v13 = (unsigned int)(v9 - 1);
  v14 = (v12 >> 9) ^ (v11 >> 4);
  v15 = v13 & v14;
  v16 = (unsigned __int64 *)&v10[3 * ((unsigned int)v13 & v14)];
  v17 = *v16;
  if ( v7 != *v16 )
  {
    v19 = 1;
    a5 = nullptr;
    if ( v17 != -4096 )
    {
      while ( 1 )
      {
        if ( !a5 && v17 == -8192 )
          a5 = v16;
        a6 = (unsigned int)(v19 + 1);
        v15 = v13 & (v19 + v15);
        v16 = (unsigned __int64 *)&v10[3 * v15];
        v17 = *v16;
        if ( *v16 == v7 )
          goto LABEL_5;
        if ( v17 == -4096 )
          break;
        ++v19;
      }
      if ( a5 )
        v16 = a5;
    }
    a4 = (unsigned int)(*((_DWORD *)v8 + 2) + 1);
    if ( 4 * (int)a4 < (unsigned int)(3 * v9) )
    {
      if ( (int)v9 - *((_DWORD *)v8 + 3) - (int)a4 > (unsigned int)v9 >> 3 )
      {
        v20 = *v16;
        goto LABEL_12;
      }
      v85 = (((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4) | (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2);
      v86 = ((((v85 >> 8) | v85) >> 16) | (v85 >> 8) | v85) + 1;
      if ( (unsigned int)v86 < 0x40 )
        LODWORD(v86) = 64;
      *((_DWORD *)v8 + 4) = v86;
      v87 = sub_22300B0(24LL * (unsigned int)v86, 8, 64, a4, a5, a6);
      *v8 = v87;
      if ( v10 )
      {
        v8[1] = 0;
        v88 = 24 * v9;
        v89 = &v10[3 * v9];
        v90 = *((unsigned int *)v8 + 4);
        v91 = (_QWORD *)(v87 + 24 * v90);
        v92 = (_QWORD *)v87;
        if ( (_QWORD *)v87 != v91 )
        {
          do
          {
            *v92 = -4096;
            v92 += 3;
          }
          while ( v91 != v92 );
        }
        v93 = v10;
        v94 = v90 - 1;
        do
        {
          v95 = *v93;
          if ( *v93 != -8192 && v95 != -4096 )
          {
            if ( !(_DWORD)v90 )
            {
              *(_QWORD *)&dword_0 = *v93;
              BUG();
            }
            v96 = v94 & (((unsigned int)v95 >> 9) ^ ((unsigned int)v95 >> 4));
            v97 = v87 + 24LL * v96;
            v98 = *(_QWORD *)v97;
            if ( v95 != *(_QWORD *)v97 && v98 != -4096 )
            {
              v118 = 1;
              v116 = 0;
              while ( 1 )
              {
                if ( v98 == -8192 && !v116 )
                  v116 = v97;
                v96 = v94 & (v118 + v96);
                v97 = v87 + 24LL * v96;
                v98 = *(_QWORD *)v97;
                if ( v95 == *(_QWORD *)v97 )
                  break;
                if ( v98 == -4096 )
                {
                  if ( v116 )
                    v97 = v116;
                  break;
                }
                ++v118;
              }
            }
            v99 = _mm_loadu_si128((const __m128i *)(v93 + 1));
            ++*((_DWORD *)v8 + 2);
            *(_QWORD *)v97 = v95;
            *(__m128i *)(v97 + 8) = v99;
          }
          v93 += 3;
        }
        while ( v89 != v93 );
        operator delete(v10, v88, 8);
        v87 = *v8;
        v100 = *((_DWORD *)v8 + 4);
        LODWORD(a4) = *((_DWORD *)v8 + 2) + 1;
      }
      else
      {
        v111 = *((unsigned int *)v8 + 4);
        v8[1] = 0;
        v100 = v111;
        v112 = (_QWORD *)(v87 + 24 * v111);
        if ( (_QWORD *)v87 != v112 )
        {
          v113 = (_QWORD *)v87;
          do
          {
            *v113 = -4096;
            v113 += 3;
          }
          while ( v112 != v113 );
        }
        LODWORD(a4) = 1;
      }
      if ( v100 )
      {
        v101 = v100 - 1;
        v20 = v7;
        v102 = v101 & v14;
        v16 = (unsigned __int64 *)(v87 + 24LL * v102);
        v103 = *v16;
        if ( *v16 == v7 )
          goto LABEL_12;
        v104 = 1;
        v105 = nullptr;
        if ( v103 != -4096 )
        {
          while ( 1 )
          {
            if ( v103 == -8192 && !v105 )
              v105 = v16;
            v102 = v101 & (v104 + v102);
            v16 = (unsigned __int64 *)(v87 + 24LL * v102);
            v103 = *v16;
            if ( *v16 == v7 )
              break;
            if ( v103 == -4096 )
            {
              if ( !v105 )
                goto LABEL_96;
              v20 = *v105;
              v16 = v105;
              goto LABEL_12;
            }
            ++v104;
          }
LABEL_117:
          v20 = v7;
LABEL_12:
          *((_DWORD *)v8 + 2) = a4;
          if ( v20 != -4096 )
            --*((_DWORD *)v8 + 3);
          goto LABEL_14;
        }
        goto LABEL_96;
      }
      goto LABEL_177;
    }
LABEL_80:
    v63 = (((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v9 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v9 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1);
    v64 = ((v63 >> 16) | v63) + 1;
    if ( (unsigned int)v64 < 0x40 )
      LODWORD(v64) = 64;
    *((_DWORD *)v8 + 4) = v64;
    v65 = sub_22300B0(24LL * (unsigned int)v64, 8, 64, a4, a5, a6);
    *v8 = v65;
    if ( v10 )
    {
      v66 = *((unsigned int *)v8 + 4);
      v8[1] = 0;
      v67 = 24 * v9;
      v68 = v66;
      v69 = &v10[3 * v9];
      v70 = (_QWORD *)(v65 + 24 * v66);
      v71 = (_QWORD *)v65;
      if ( (_QWORD *)v65 != v70 )
      {
        do
        {
          *v71 = -4096;
          v71 += 3;
        }
        while ( v70 != v71 );
      }
      v72 = v10;
      for ( i = v68 - 1; v69 != v72; v72 += 3 )
      {
        v74 = *v72;
        if ( *v72 != -8192 && v74 != -4096 )
        {
          if ( !v68 )
          {
            *(_QWORD *)&dword_0 = *v72;
            BUG();
          }
          v75 = i & (((unsigned int)v74 >> 9) ^ ((unsigned int)v74 >> 4));
          v76 = v65 + 24LL * v75;
          v77 = *(_QWORD *)v76;
          if ( *(_QWORD *)v76 != v74 )
          {
            v114 = 1;
            v115 = 0;
            if ( v77 != -4096 )
            {
              while ( 1 )
              {
                if ( !v115 && v77 == -8192 )
                  v115 = v76;
                v75 = i & (v114 + v75);
                v76 = v65 + 24LL * v75;
                v77 = *(_QWORD *)v76;
                if ( v74 == *(_QWORD *)v76 )
                  break;
                if ( v77 == -4096 )
                {
                  if ( v115 )
                    v76 = v115;
                  break;
                }
                ++v114;
              }
            }
          }
          v78 = _mm_loadu_si128((const __m128i *)(v72 + 1));
          ++*((_DWORD *)v8 + 2);
          *(_QWORD *)v76 = v74;
          *(__m128i *)(v76 + 8) = v78;
        }
      }
      operator delete(v10, v67, 8);
      v65 = *v8;
      v79 = *((_DWORD *)v8 + 4);
      LODWORD(a4) = *((_DWORD *)v8 + 2) + 1;
    }
    else
    {
      v108 = *((unsigned int *)v8 + 4);
      v8[1] = 0;
      v79 = v108;
      v109 = (_QWORD *)(v65 + 24 * v108);
      if ( (_QWORD *)v65 != v109 )
      {
        v110 = (_QWORD *)v65;
        do
        {
          *v110 = -4096;
          v110 += 3;
        }
        while ( v109 != v110 );
      }
      LODWORD(a4) = 1;
    }
    if ( v79 )
    {
      v80 = v79 - 1;
      v20 = v7;
      v81 = v80 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
      v16 = (unsigned __int64 *)(v65 + 24LL * v81);
      v82 = *v16;
      if ( *v16 == v7 )
        goto LABEL_12;
      v83 = 1;
      v84 = nullptr;
      if ( v82 != -4096 )
      {
        while ( 1 )
        {
          if ( v82 == -8192 && !v84 )
            v84 = v16;
          v81 = v80 & (v83 + v81);
          v16 = (unsigned __int64 *)(v65 + 24LL * v81);
          v82 = *v16;
          if ( *v16 == v7 )
            goto LABEL_117;
          if ( v82 == -4096 )
          {
            if ( !v84 )
              break;
            v20 = *v84;
            v16 = v84;
            goto LABEL_12;
          }
          ++v83;
        }
      }
LABEL_96:
      *((_DWORD *)v8 + 2) = a4;
LABEL_14:
      *v16 = v7;
      v18 = (char **)(v16 + 1);
      v16[1] = 0;
      v16[2] = 0;
      goto LABEL_15;
    }
LABEL_177:
    ++*((_DWORD *)v8 + 2);
    BUG();
  }
LABEL_5:
  v18 = (char **)(v16 + 1);
  if ( v16[2] )
    return (char *)v16[1];
LABEL_15:
  result = nullptr;
  if ( !*v18 )
  {
    v120 = v122;
    v121 = 0x200000000LL;
    do
    {
      while ( 1 )
      {
        v21 = *(_BYTE *)(v7 + 8) & 0x7F;
        if ( v21 > 0x12u )
        {
          if ( ((v21 + 94) & 0x7Fu) <= 5 )
            goto LABEL_19;
          v22 = v21;
        }
        else
        {
          v22 = v21;
          if ( ((1LL << v21) & 0x40182) != 0 )
            goto LABEL_19;
        }
        if ( (unsigned int)(v22 - 18) <= 0x3F )
        {
          v55 = sub_B8C1B0(v7);
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 40);
            if ( (v56 & 7) == 0 && (v56 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v106 = (unsigned int)v121;
              v107 = (unsigned int)v121 + 1LL;
              if ( v107 > HIDWORD(v121) )
              {
                sub_2237220(&v120, v122, v107, 8);
                v106 = (unsigned int)v121;
              }
              *((_QWORD *)v120 + v106) = v7;
              LODWORD(v121) = v121 + 1;
            }
          }
        }
        v57 = *(_QWORD *)(sub_B8C1B0(v7) + 16);
        if ( (v57 & 4) != 0 )
          break;
        v7 = v57 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v7 )
          goto LABEL_19;
      }
      v7 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF8LL);
    }
    while ( v7 );
LABEL_19:
    v23 = nullptr;
    ptr = v134;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    p_ptr = &ptr;
    v125 = &off_2BEBEE0;
    v126 = 2;
    v129 = 0;
    v130 = 1;
    dest = nullptr;
    v127 = 0;
    sub_227B8B0(&v125, 0, 0, 0);
    v28 = (char *)v120;
    v29 = (char *)v120 + 8 * (unsigned int)v121;
    if ( v120 == v29 )
    {
LABEL_71:
      v58 = (char **)v8[3];
      v59 = (const void **)p_ptr[1];
      v60 = (const void **)*p_ptr;
      v124 = 261;
      v123[0] = v60;
      v123[1] = v59;
      v61 = sub_15A4EB0(v58, v123, (__int64)v59, 261, v26, v27);
      v62 = 0;
      if ( v61 )
        v62 = strlen(v61);
      *v18 = v61;
      v18[1] = (char *)v62;
      v125 = (__int64 (__fastcall **)())&unk_2C76288;
      sub_227B7A0(&v125);
      if ( ptr != v134 )
        free(ptr);
      result = *v18;
    }
    else
    {
      v30 = *((_QWORD *)v29 - 1);
      v119 = v8;
      v31 = v29 - 8;
      v32 = *(_BYTE *)(v30 + 8) & 0x7F;
      if ( v32 != 22 )
        goto LABEL_24;
      v33 = v30 - 48;
      if ( v30 != 48 )
        goto LABEL_22;
LABEL_44:
      v30 = 48;
LABEL_45:
      v51 = *(_QWORD *)(sub_B8C1B0(v30) + 40);
      if ( (v51 & 7) == 0 )
      {
        v52 = v51 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v52 )
        {
          v53 = *(unsigned int **)(v52 + 16);
          v54 = *v53;
          v23 = (char *)(v53 + 4);
          if ( *((_QWORD *)&v127 + 1) - (_QWORD)dest >= v54 )
          {
            if ( v54 )
            {
              memcpy(dest, v23, v54);
              dest = (char *)dest + v54;
            }
          }
          else
          {
            sub_227BF10(&v125, v23, v54);
          }
        }
      }
      while ( 1 )
      {
        if ( v28 == v31 )
        {
          v8 = v119;
          goto LABEL_71;
        }
        v24 = dest;
        v30 = *((_QWORD *)v31 - 1);
        if ( *((_QWORD *)&v127 + 1) - (_QWORD)dest > 1u )
        {
          *(_WORD *)dest = 14906;
          dest = (char *)dest + 2;
        }
        else
        {
          v23 = "::";
          sub_227BF10(&v125, "::", 2);
        }
        v31 -= 8;
        v32 = *(_BYTE *)(v30 + 8) & 0x7F;
        if ( v32 == 22 )
        {
          v33 = v30 - 48;
          if ( v30 == 48 )
            goto LABEL_44;
LABEL_22:
          v34 = sub_BADE20(v33, (__int64)v23, (__int64)v24, v25, v26, v27);
          if ( !v34 )
            BUG();
          v30 = v34 + 48;
          v32 = *(_BYTE *)(v34 + 56) & 0x7F;
        }
LABEL_24:
        if ( v32 != 23 )
          goto LABEL_45;
        if ( v30 == 48 )
        {
          v30 = 48;
          goto LABEL_45;
        }
        v35 = *(_QWORD *)(v30 + 40);
        if ( !v35 )
          break;
        v36 = *(_QWORD *)(v35 + 40);
        v37 = *((_QWORD *)&v127 + 1);
        v38 = &v125;
        v39 = dest;
        if ( (v36 & 7) == 0 )
        {
          v40 = v36 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v40 )
          {
            v41 = *(unsigned int **)(v40 + 16);
            v42 = *v41;
            v23 = (char *)(v41 + 4);
            if ( *((_QWORD *)&v127 + 1) - (_QWORD)dest >= v42 )
            {
              if ( v42 )
              {
                memcpy(dest, v23, v42);
                v37 = *((_QWORD *)&v127 + 1);
                v39 = (char *)dest + v42;
                dest = (char *)dest + v42;
              }
              v38 = &v125;
            }
            else
            {
              v43 = sub_227BF10(&v125, v23, v42);
              v39 = *(_BYTE **)(v43 + 32);
              v37 = *(_QWORD *)(v43 + 24);
              v38 = (__int64 (__fastcall ***)())v43;
            }
          }
        }
        if ( (unsigned __int64)v39 >= v37 )
        {
          v23 = (char *)&qword_28;
          v38 = (__int64 (__fastcall ***)())sub_227BA10(v38, 40);
        }
        else
        {
          v38[4] = (__int64 (__fastcall **)())(v39 + 1);
          *v39 = 40;
        }
        v44 = *(_QWORD *)(v30 - 8);
        v45 = v38[3];
        v46 = v38[4];
        if ( (v44 & 7) == 0 )
        {
          v47 = v44 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v47 )
          {
            v48 = *(unsigned int **)(v47 + 16);
            v49 = *v48;
            v23 = (char *)(v48 + 4);
            if ( (char *)v45 - v46 >= v49 )
            {
              if ( v49 )
              {
                memcpy(v46, v23, v49);
                v45 = v38[3];
                v46 = (char *)v38[4] + v49;
                v38[4] = (__int64 (__fastcall **)())v46;
              }
            }
            else
            {
              v50 = sub_227BF10(v38, v23, v49);
              v46 = *(_BYTE **)(v50 + 32);
              v45 = *(__int64 (__fastcall ***)())(v50 + 24);
              v38 = (__int64 (__fastcall ***)())v50;
            }
          }
        }
        if ( v46 >= (_BYTE *)v45 )
        {
          v23 = (_BYTE *)(&qword_28 + 1);
          sub_227BA10(v38, 41);
        }
        else
        {
          v38[4] = (__int64 (__fastcall **)())(v46 + 1);
          *v46 = 41;
        }
      }
      *v18 = (char *)0xFFFFFFFFLL;
      v18[1] = nullptr;
      v125 = (__int64 (__fastcall **)())&unk_2C76288;
      sub_227B7A0(&v125);
      result = nullptr;
      if ( ptr != v134 )
      {
        free(ptr);
        result = nullptr;
      }
    }
    if ( v120 != v122 )
    {
      v117 = result;
      free(v120);
      return v117;
    }
  }
  return result;
}
