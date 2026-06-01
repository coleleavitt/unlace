unsigned __int64 __fastcall sub_13CAB60(
        __int64 a1,
        void *a2,
        size_t a3,
        unsigned int a4,
        char a5,
        __int64 **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11,
        _QWORD *a12,
        __int64 a13,
        __int64 *a14,
        _BYTE *a15,
        char *a16,
        int a17,
        unsigned __int8 a18,
        unsigned __int8 a19,
        unsigned __int8 a20)
{
  __int64 **v20; // rbp
  __int64 v22; // r12
  __int64 *v23; // r12
  __int64 *v25; // rbp
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  __int64 v28; // rdx
  unsigned __int8 v29; // r9
  __int64 *v30; // rax
  __int64 v31; // r13
  void *v32; // r14
  size_t v33; // r12
  unsigned int v34; // eax
  __int64 v35; // r9
  bool *v36; // r8
  __int64 v37; // r12
  __int64 v38; // rax
  bool v39; // r14
  bool v40; // r15
  __int64 **v42; // rdi
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r9
  size_t v46; // r14
  __int64 v47; // r8
  char v48; // al
  char v49; // al
  __int64 v50; // rax
  __int64 *v51; // r14
  __int64 v52; // rcx
  unsigned int v53; // esi
  __int64 v54; // r8
  __int64 v55; // rcx
  unsigned int v56; // edx
  __int64 *v57; // rdi
  __int64 v58; // rcx
  _QWORD *v59; // rdi
  _BYTE *v60; // rsi
  size_t v61; // rdx
  _BYTE *v62; // r14
  char v63; // al
  __int64 v64; // r15
  unsigned __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // rbp
  size_t v68; // r15
  size_t v69; // rdx
  __int64 *v70; // rdx
  __int64 v71; // rax
  int v72; // eax
  _BYTE *v73; // rsi
  size_t v74; // rdx
  _QWORD *v75; // rax
  bool *v76; // r8
  unsigned int v77; // r9d
  unsigned int v78; // eax
  char *v79; // rcx
  __int64 v80; // rsi
  void *v81; // r9
  char *v82; // rax
  _BYTE *v83; // rax
  void *v84; // r15
  size_t v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // r11d
  __int64 *v89; // r15
  int v90; // ecx
  bool v91; // zf
  __m128i si128; // xmm2
  void *v93; // r14
  size_t v94; // r13
  unsigned int v95; // eax
  int v96; // eax
  __int64 *v97; // r13
  __int64 *v98; // r15
  unsigned __int8 v99; // r13
  _BYTE *v100; // rax
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rsi
  __int64 v104; // rdx
  _BYTE *v105; // rsi
  size_t v106; // rdx
  __int64 *v108; // [rsp+10h] [rbp-5B8h]
  _BYTE *v109; // [rsp+20h] [rbp-5A8h]
  __int64 *v112; // [rsp+30h] [rbp-598h] BYREF
  bool *v113; // [rsp+38h] [rbp-590h]
  void **p_s1; // [rsp+40h] [rbp-588h]
  __int64 v115; // [rsp+48h] [rbp-580h]
  __int64 *v116; // [rsp+50h] [rbp-578h]
  __int64 *v117; // [rsp+58h] [rbp-570h]
  __int64 **v118; // [rsp+60h] [rbp-568h]
  void *v119; // [rsp+68h] [rbp-560h]
  __int64 **v120; // [rsp+70h] [rbp-558h]
  __int64 v121; // [rsp+78h] [rbp-550h]
  void *s1; // [rsp+80h] [rbp-548h] BYREF
  size_t v123; // [rsp+88h] [rbp-540h]
  char v124; // [rsp+9Fh] [rbp-529h] BYREF
  _QWORD v125[2]; // [rsp+A0h] [rbp-528h] BYREF
  _QWORD v126[4]; // [rsp+B0h] [rbp-518h] BYREF
  __int16 v127; // [rsp+D0h] [rbp-4F8h]
  _BYTE v128[32]; // [rsp+E0h] [rbp-4E8h] BYREF
  __int16 v129; // [rsp+100h] [rbp-4C8h]
  __int64 v130[4]; // [rsp+110h] [rbp-4B8h] BYREF
  __int16 v131; // [rsp+130h] [rbp-498h]
  __int64 *v132[4]; // [rsp+140h] [rbp-488h] BYREF
  __int16 v133; // [rsp+160h] [rbp-468h]
  void *ptr; // [rsp+170h] [rbp-458h] BYREF
  size_t n[2]; // [rsp+178h] [rbp-450h] BYREF
  _WORD v136[544]; // [rsp+188h] [rbp-440h] BYREF

  v20 = a6;
  s1 = a2;
  v123 = a3;
  v22 = a7;
  v115 = a9;
  LODWORD(p_s1) = a17;
  v125[0] = 0;
  v125[1] = 0;
  if ( !a6 )
    v20 = (__int64 **)v125;
  if ( a15 )
    *a15 = 0;
  if ( a16 )
    *a16 = 0;
  if ( a14 )
    *a14 = 0;
  v136[4] = 261;
  ptr = s1;
  n[0] = v123;
  if ( (unsigned __int8)sub_228B020(&ptr, 0) )
  {
    *v20 = nullptr;
    v20[1] = nullptr;
    if ( a7 )
      return 0;
    if ( a11 )
      a11[1] = 0;
    if ( a12 )
    {
      v73 = s1;
      v74 = v123;
      a12[1] = 0;
      sub_A1FE50(a12, v73, &v73[v74]);
    }
    return sub_13C8A80(a1, s1, v123, a4, 0, 0, a13, a14, a19, a20);
  }
  if ( !a10 )
  {
    *v20 = nullptr;
    v20[1] = nullptr;
    if ( !a5 )
    {
      v117 = nullptr;
      v31 = 0;
      v116 = nullptr;
      goto LABEL_27;
    }
LABEL_26:
    v117 = nullptr;
    v31 = *(unsigned int *)(a1 + 112);
    v116 = nullptr;
    goto LABEL_27;
  }
  if ( a5 )
  {
    *v20 = nullptr;
    v20[1] = nullptr;
    goto LABEL_26;
  }
  ptr = v136;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  v116 = (__int64 *)(v115 + 16 * a10);
  if ( (__int64 *)v115 == v116 )
  {
    v117 = nullptr;
    v116 = nullptr;
  }
  else
  {
    LOBYTE(v119) = 1;
    v118 = v132;
    v117 = v130;
    v113 = v128;
    v112 = v126;
    v120 = v20;
    v25 = (__int64 *)v115;
    v121 = a7;
    while ( 1 )
    {
      v26 = v25[1];
      v27 = *v25;
      v28 = *(_QWORD *)v26;
      n[0] = 0;
      sub_A1FE50(&ptr, (_BYTE *)(v26 + 32), (_BYTE *)(v26 + 32 + v28));
      v133 = 257;
      v131 = 257;
      v129 = 257;
      v126[0] = s1;
      v127 = 261;
      v126[1] = v123;
      sub_228A3B0(&ptr, v112, v113, v117, v118);
      v29 = a18;
      if ( v27 )
        v29 = (*(_BYTE *)sub_13C2430(a1, v27) & 0x38) != 0;
      v30 = (__int64 *)sub_13C8A80(a1, ptr, n[0], a4, *(_QWORD *)(v25[1] + 8), v29, a13, a14, 1u, 1u);
      if ( v30 )
        break;
      v25 += 2;
      LOBYTE(v119) = a5;
      if ( v116 == v25 )
      {
        v20 = v120;
        v22 = v121;
        v116 = nullptr;
        v117 = nullptr;
        goto LABEL_22;
      }
    }
    v98 = v25;
    v116 = v30;
    v20 = v120;
    v22 = v121;
    if ( !v27 )
      goto LABEL_90;
    v99 = *(_BYTE *)sub_13C2430(a1, v27);
    v100 = (_BYTE *)sub_13C2790(a1, (unsigned __int64)v116);
    *v100 = *v100 & 0xC7 | (8 * ((v99 >> 3) & 7));
    if ( a11 )
    {
      v103 = v98[1];
      v104 = *(_QWORD *)v103;
      a11[1] = 0;
      sub_A1FE50(a11, (_BYTE *)(v103 + 32), (_BYTE *)(v103 + 32 + v104));
    }
    if ( a12 )
    {
      v105 = s1;
      v106 = v123;
      a12[1] = 0;
      sub_A1FE50(a12, v105, &v105[v106]);
    }
    if ( (_BYTE)v119 )
    {
      v23 = v116;
      sub_13C53E0(*(_QWORD *)(a1 + 32), a4, v98[1] + 32, *(_QWORD *)v98[1], s1, v123, v116, 0, 0);
      goto LABEL_73;
    }
    if ( (unsigned __int8)sub_FD3830(
                            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL),
                            0x4DCu,
                            a4,
                            *(_QWORD *)(a1 + 32),
                            v101,
                            v102) == 1 )
    {
LABEL_90:
      v23 = v116;
      goto LABEL_73;
    }
    v117 = nullptr;
    if ( a14 )
    {
      v117 = (__int64 *)*a14;
      *a14 = 0;
    }
LABEL_22:
    if ( ptr != v136 )
      free(ptr);
  }
  *v20 = nullptr;
  v31 = 0;
  v20[1] = nullptr;
LABEL_27:
  if ( v22 )
    v31 = a8;
  else
    v22 = a1;
  v32 = s1;
  v108 = (__int64 *)v22;
  v33 = v123;
  v34 = sub_2244B30(s1, v123);
  v35 = (unsigned int)sub_2244CB0(a1 + 360, s1, v123, v34);
  v36 = (bool *)(*(_QWORD *)(a1 + 360) + 8 * v35);
  if ( !*(_QWORD *)v36 )
  {
LABEL_84:
    v113 = v36;
    LODWORD(v112) = v35;
    v75 = (_QWORD *)sub_13C4900(56, v32, v33, (__int64 *)(a1 + 384), (__int64)v36, v35);
    v76 = v113;
    v77 = (unsigned int)v112;
    *v75 = v33;
    v75[1] = 0;
    v75[6] = 0;
    v75[2] = 0;
    v75[3] = 0;
    v75[4] = 0;
    v75[5] = 0;
    *(_QWORD *)v76 = v75;
    ++*(_DWORD *)(a1 + 372);
    v78 = sub_22450D0(a1 + 360, v77);
    sub_13C6B80((__int64 **)&ptr, (__int64 *)(*(_QWORD *)(a1 + 360) + 8LL * v78), 0);
    v37 = *(_QWORD *)ptr;
    v38 = v31 + 1;
    if ( !(_BYTE)p_s1 )
      goto LABEL_33;
    goto LABEL_85;
  }
  if ( *(_QWORD *)v36 == -8 )
  {
    --*(_DWORD *)(a1 + 376);
    goto LABEL_84;
  }
  sub_13C6B80((__int64 **)&ptr, (__int64 *)v36, 0);
  v37 = *(_QWORD *)ptr;
  v38 = v31 + 1;
  if ( !(_BYTE)p_s1 )
  {
LABEL_33:
    if ( v108 == *(__int64 **)(v37 + 16) && v38 == *(_QWORD *)(v37 + 24) && *(_QWORD *)(v37 + 8) == a13 )
    {
      if ( *(_QWORD *)(v37 + 32) )
      {
        v108 = *(__int64 **)(v37 + 32);
        v31 = *(_QWORD *)(v37 + 40);
      }
      v84 = *(void **)(v37 + 48);
      v39 = a1 == (_QWORD)v108;
      if ( v84 )
      {
        v85 = j__strlen(*(const char **)(v37 + 48));
        s1 = v84;
        v123 = v85;
        if ( a15 )
          *a15 = 1;
      }
    }
    else
    {
      *(_QWORD *)(v37 + 24) = v38;
      *(_QWORD *)(v37 + 48) = 0;
      v112 = v108;
      v39 = a1 == (_QWORD)v108;
      *(__m128 *)(v37 + 8) = _mm_loadh_ps((const double *)&v112);
      v40 = a1 == (_QWORD)v108 && v31 == 0;
      if ( v40 )
      {
        v39 = a1 == (_QWORD)v108 && v31 == 0;
        v31 = 0;
        if ( *(_DWORD *)(a1 + 240) )
        {
          sub_2246450(&ptr, &s1);
          v93 = ptr;
          v94 = n[0];
          v95 = sub_2244B30(ptr, n[0]);
          v96 = sub_2244E60(a1 + 120, v93, v94, v95);
          if ( v96 == -1 )
            sub_E37610(v132, (__int64 *)(*(_QWORD *)(a1 + 120) + 8LL * *(unsigned int *)(a1 + 128)), 1);
          else
            sub_E37610(v132, (__int64 *)(*(_QWORD *)(a1 + 120) + 8LL * v96), 1);
          v97 = v132[0];
          if ( ptr != &n[1] )
            operator delete(ptr);
          sub_E37610((__int64 **)&ptr, (__int64 *)(*(_QWORD *)(a1 + 120) + 8LL * *(unsigned int *)(a1 + 128)), 1);
          if ( ptr == v97 )
          {
            v31 = *(unsigned int *)(a1 + 240);
            v39 = v40;
            v108 = (__int64 *)a1;
          }
          else
          {
            v39 = v40;
            v108 = (__int64 *)a1;
            v31 = *(unsigned int *)(*v97 + 8);
          }
        }
      }
    }
    goto LABEL_35;
  }
LABEL_85:
  *(_QWORD *)(v37 + 24) = v38;
  *(_QWORD *)(v37 + 48) = 0;
  v112 = v108;
  v39 = a1 == (_QWORD)v108;
  *(__m128 *)(v37 + 8) = _mm_loadh_ps((const double *)&v112);
LABEL_35:
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  ptr = v136;
  if ( (__int64)(*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 48)) >> 4 == v31 && v39 )
  {
LABEL_87:
    if ( !(unsigned __int8)sub_13BF780(*(_QWORD *)(a1 + 32), (unsigned __int64)v116, 0, a4) )
    {
      v86 = *(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 48);
      *(_QWORD *)(v37 + 32) = a1;
      *(_QWORD *)(v37 + 40) = v86 >> 4;
      v23 = nullptr;
      goto LABEL_73;
    }
    goto LABEL_88;
  }
  LOBYTE(v118) = v39;
  v113 = v128;
  v112 = v126;
  p_s1 = &s1;
  while ( 1 )
  {
    v124 = 0;
    LOBYTE(v126[0]) = 0;
    v42 = (__int64 **)(v108[6] + 16 * v31);
    v128[0] = 0;
    v43 = sub_13CA710(v42, (_BYTE **)p_s1, a1, a4, a11, a12, a13, a14, &v124, v113, v112, (unsigned __int8 **)&ptr, a19);
    v46 = n[0];
    v47 = v43;
    if ( !n[0] )
    {
      if ( !a15 )
        goto LABEL_42;
      goto LABEL_40;
    }
    v79 = *(char **)(a1 + 384);
    v80 = n[0] + 1;
    v81 = ptr;
    *(_QWORD *)(a1 + 464) += n[0] + 1;
    v82 = &v79[v46 + 1];
    if ( *(_QWORD *)(a1 + 392) >= (unsigned __int64)v82 && v79 )
    {
      *(_QWORD *)(a1 + 384) = v82;
    }
    else
    {
      v120 = (__int64 **)v47;
      v119 = v81;
      v87 = sub_986170(a1 + 384, v80, v46 + 1, 0, v47, (__int64)v81);
      v47 = (__int64)v120;
      v81 = v119;
      v79 = (char *)v87;
    }
    v119 = (void *)v47;
    v83 = memmove(v79, v81, v46);
    v47 = (__int64)v119;
    v83[v46] = 0;
    *(_QWORD *)(v37 + 48) = v83;
    if ( a15 )
    {
      if ( n[0] )
      {
        v48 = 1;
        goto LABEL_41;
      }
LABEL_40:
      v48 = v126[0] & (v47 != 0);
LABEL_41:
      *a15 |= v48;
    }
LABEL_42:
    if ( a16 )
    {
      v44 = v128[0];
      v49 = *a16;
      if ( v128[0] && !*(_QWORD *)(v37 + 48) )
        v49 = v128[0];
      *a16 = v49;
    }
    if ( v47 )
      break;
    if ( (((__int64)(*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 48)) >> 4 == ++v31) & (unsigned __int8)v118) != 0 )
      goto LABEL_87;
  }
  v112 = (__int64 *)v47;
  v50 = v47;
  v20[1] = (__int64 *)v31;
  v51 = (__int64 *)(a1 + 1368);
  *v20 = v108;
  while ( 1 )
  {
    v52 = *(_QWORD *)(v50 + 8);
    if ( !v52 )
      break;
    v52 &= 0xFFFFFFFFFFFFFFF8LL;
    v44 = *(_QWORD *)(v50 + 8) & 4LL;
    v50 = v52;
    if ( !v44 || !v52 )
      goto LABEL_52;
  }
  v50 = 0;
LABEL_52:
  v53 = *(_DWORD *)(a1 + 1384);
  v130[0] = v50;
  if ( !v53 )
  {
    v132[0] = nullptr;
    goto LABEL_117;
  }
  v45 = v53 - 1;
  v54 = *(_QWORD *)(a1 + 1368);
  v55 = (unsigned int)v45 & (((unsigned int)v52 >> 4) ^ ((unsigned int)v52 >> 9));
  v56 = v55;
  v57 = (__int64 *)(v54 + 96 * v55);
  v58 = *v57;
  if ( v50 == *v57 )
    goto LABEL_54;
  v88 = 1;
  v89 = nullptr;
  if ( v58 == -4096 )
  {
LABEL_111:
    v90 = *(_DWORD *)(a1 + 1376);
    v132[0] = v57;
    v44 = (unsigned int)(v90 + 1);
    v52 = 3 * v53;
    v47 = (unsigned int)(4 * v44);
    if ( (unsigned int)v47 < (unsigned int)v52 )
    {
      v52 = v53 - *(_DWORD *)(a1 + 1380) - (unsigned int)v44;
      v47 = v53 >> 3;
      if ( (unsigned int)v52 > (unsigned int)v47 )
        goto LABEL_113;
      goto LABEL_118;
    }
LABEL_117:
    v53 *= 2;
LABEL_118:
    sub_13C6BC0((__int64)v51, v53, v44, v52, v47, v45);
    sub_13C2220(v51, v130, v132);
    v50 = v130[0];
    LODWORD(v44) = *(_DWORD *)(a1 + 1376) + 1;
    v57 = v132[0];
LABEL_113:
    v91 = *v57 == -4096;
    *(_DWORD *)(a1 + 1376) = v44;
    if ( !v91 )
      --*(_DWORD *)(a1 + 1380);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
    *v57 = v50;
    v57[1] = (__int64)(v57 + 4);
    *((__m128i *)v57 + 1) = si128;
  }
  else
  {
    while ( 1 )
    {
      if ( !v89 && v58 == -8192 )
        v89 = v57;
      v56 = v45 & (v88 + v56);
      v57 = (__int64 *)(v54 + 96LL * v56);
      v58 = *v57;
      if ( *v57 == v50 )
        break;
      if ( v58 == -4096 )
      {
        if ( v89 )
          v57 = v89;
        goto LABEL_111;
      }
      ++v88;
    }
  }
LABEL_54:
  v59 = v57 + 1;
  v60 = s1;
  v61 = v123;
  v59[1] = 0;
  sub_A1FE50(v59, v60, &v60[v61]);
  v62 = (_BYTE *)sub_13C2790(a1, (unsigned __int64)v112);
  v63 = (8 * (*(_BYTE *)((*v20)[6] + 16LL * (_QWORD)v20[1] + 8) & 7)) | *v62 & 0xC7;
  *v62 = v63;
  if ( (v63 & 0x38) == 0 && v124 )
    *v62 = v63 & 0xC7 | 8;
  v64 = *(_QWORD *)(a1 + 248);
  v65 = 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD *)(a1 + 256) - v64) >> 3);
  if ( (_DWORD)v65 )
  {
    v109 = v62;
    v66 = *(_QWORD *)(a1 + 248);
    v67 = v64 + 40LL * (unsigned int)(v65 - 1);
    v68 = v123;
    while ( 1 )
    {
      v69 = *(_QWORD *)(v67 + 8);
      if ( v68 >= v69 && (!v69 || !memcmp(s1, *(const void **)v67, v69)) )
        break;
      if ( v66 == v67 )
        goto LABEL_63;
      v67 -= 40;
    }
    *v109 = (8 * (*(_BYTE *)(v67 + 32) & 7)) | *v109 & 0xC7;
  }
LABEL_63:
  v70 = v112;
  while ( 1 )
  {
    v71 = v70[1];
    if ( !v71 )
      break;
    v70 = (__int64 *)(v71 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v71 & 4) == 0 || !v70 )
      goto LABEL_67;
  }
  v70 = nullptr;
LABEL_67:
  if ( (unsigned __int8)sub_13BF780(*(_QWORD *)(a1 + 32), (unsigned __int64)v116, (__int64)v70, a4) )
  {
LABEL_88:
    if ( a14 )
      *a14 = (__int64)v117;
    goto LABEL_90;
  }
  v72 = 0;
  if ( a15 )
    v72 = (unsigned __int8)*a15;
  if ( a10 )
    sub_13C53E0(
      *(_QWORD *)(a1 + 32),
      a4,
      *(_QWORD *)(v115 + 8) + 32LL,
      **(_QWORD **)(v115 + 8),
      s1,
      v123,
      v112,
      a5,
      v72);
  *(_QWORD *)(v37 + 40) = v31;
  *(_QWORD *)(v37 + 32) = v108;
  sub_13C4640(a1, v31, a4);
  v23 = v112;
LABEL_73:
  if ( ptr != v136 )
    free(ptr);
  return (unsigned __int64)v23;
}
