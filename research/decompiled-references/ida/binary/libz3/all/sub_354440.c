__int64 __fastcall sub_354440(__int64 a1, _QWORD **a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // r13
  void *v6; // r14
  void *v7; // rdi
  __int64 *i; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  bool (__fastcall *v11)(__int64); // rax
  void (__fastcall ***v12)(_QWORD); // r15
  bool v13; // zf
  _QWORD *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 *v18; // r15
  __int64 *v19; // rdi
  int *v20; // rsi
  int **v21; // r15
  __int64 v22; // rax
  bool (__fastcall *v23)(__int64); // rdx
  int **v24; // r14
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  size_t v28; // rsi
  unsigned int v29; // r13d
  unsigned int *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  void *v33; // r13
  __int64 v34; // rax
  char v35; // dl
  int v36; // edx
  __int64 v37; // rdx
  int **v38; // r14
  __int64 v39; // rax
  _QWORD *v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // r13
  void *v43; // r15
  void *v44; // rdi
  void *v45; // r12
  int v46; // eax
  int v47; // eax
  void (__fastcall ***v48)(_QWORD); // rbp
  __int64 v50; // rax
  unsigned int v51; // r15d
  _QWORD *v52; // rax
  __int64 v53; // rdx
  size_t v54; // rdx
  _QWORD *v55; // rsi
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  void *v59; // r13
  __int64 v60; // rdx
  __int64 v61; // rdx
  void *v62; // r13
  __int64 *v63; // rsi
  __int64 *v64; // r8
  __int64 *v65; // r15
  unsigned int v66; // r13d
  __int64 v67; // r14
  __int64 *v68; // rdx
  __int64 *v69; // rax
  unsigned __int64 v70; // r15
  __int64 *v71; // r14
  __int64 v72; // rsi
  __int64 v73; // rdi
  void *v74; // r12
  unsigned int v75; // eax
  void (__fastcall ***v76)(_QWORD); // r12
  __int64 v77; // rdi
  unsigned int v78; // edx
  __int64 v79; // rdi
  __int64 *v80; // r13
  __int64 v81; // rcx
  _QWORD *v82; // rax
  int v83; // eax
  __int64 *v84; // rcx
  __int64 v85; // rax
  int **v86; // r13
  int **v87; // r15
  unsigned __int64 v88; // r15
  unsigned int v89; // edx
  __int64 v90; // rax
  _QWORD *v91; // r13
  __int64 v92; // rdx
  __int64 v93; // rax
  _QWORD *v94; // rdx
  _QWORD *v95; // rdi
  _QWORD *j; // rax
  __int64 v97; // rcx
  char v98; // r8
  __int64 v99; // rcx
  char v100; // r8
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 *v103; // rbx
  void *v104; // rbp
  __int64 v105; // rdx
  unsigned int v106; // r15d
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rdi
  char **v110; // r12
  char **exception; // r12
  __int64 *v112; // [rsp+0h] [rbp-118h]
  __int64 *v113; // [rsp+0h] [rbp-118h]
  unsigned int v114; // [rsp+8h] [rbp-110h]
  unsigned int v116; // [rsp+20h] [rbp-F8h]
  _DWORD *v117; // [rsp+20h] [rbp-F8h]
  unsigned int v118; // [rsp+2Ch] [rbp-ECh]
  unsigned int v119; // [rsp+2Ch] [rbp-ECh]
  __int64 *v120; // [rsp+30h] [rbp-E8h]
  __int64 v121; // [rsp+38h] [rbp-E0h]
  __int64 *v122; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+58h] [rbp-C0h] BYREF
  __int64 *v124; // [rsp+60h] [rbp-B8h] BYREF
  int **v125; // [rsp+68h] [rbp-B0h] BYREF
  int v126[4]; // [rsp+70h] [rbp-A8h] BYREF
  char v127[16]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v128; // [rsp+90h] [rbp-88h] BYREF
  __int64 v129; // [rsp+98h] [rbp-80h]
  __int64 v130; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v131; // [rsp+A8h] [rbp-70h]
  int v132[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v133; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v134; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v135; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v136; // [rsp+D0h] [rbp-48h]

  v3 = *a2;
  if ( *a2 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[5 * v4];
      do
      {
        while ( 1 )
        {
          v6 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v3 + 1);
          sub_182CBA0(v6, v3 + 3);
          if ( !*v3 )
            break;
          v7 = (void *)(*v3 - 8LL);
          v3 += 5;
          sub_186B220(v7);
          if ( v5 == v3 )
          {
            v3 = *a2;
            goto LABEL_7;
          }
        }
        v3 += 5;
      }
      while ( v5 != v3 );
      v3 = *a2;
    }
LABEL_7:
    *((_DWORD *)v3 - 1) = 0;
  }
  for ( i = nullptr; ; *((_DWORD *)i - 1) = 0 )
  {
    v125 = nullptr;
    v124 = *(__int64 **)(a1 + 8);
    v9 = sub_2FF8B0(a1);
    (*(void (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v9 + 24LL))(v9, &v124);
    ptr = nullptr;
    v128 = 0;
    v129 = 0;
    v130 = 1;
    v131 = 0;
    sub_182CBA0(qword_1C7F2C0, &v130);
    v10 = *(_QWORD **)(a1 + 16);
    BYTE4(v130) &= ~1u;
    LODWORD(v130) = 1;
    v11 = *(bool (__fastcall **)(__int64))(*v10 + 24LL);
    if ( v11 == sub_2FBE30 )
    {
      if ( !v10[20] )
        goto LABEL_35;
    }
    else if ( !v11((__int64)v10) )
    {
LABEL_35:
      sub_E1FE30(v132, a1 + 256, &ptr);
      v32 = v128;
      v33 = qword_1C7F2C0;
      LODWORD(v128) = v132[0];
      v132[0] = v32;
      v34 = v129;
      v129 = v133;
      v133 = v34;
      v35 = BYTE4(v128) & 0xFC | v132[1] & 2 | v132[1] & 1;
      LOBYTE(v132[1]) = BYTE4(v128) & 1 | v132[1] & 0xFC | BYTE4(v128) & 2;
      BYTE4(v128) = v35;
      v36 = v134;
      LODWORD(v134) = v130;
      LODWORD(v130) = v36;
      v37 = v135;
      v135 = v131;
      v131 = v37;
      LOBYTE(v37) = BYTE4(v130) & 0xFC | BYTE4(v134) & 2 | BYTE4(v134) & 1;
      BYTE4(v134) = BYTE4(v130) & 1 | BYTE4(v134) & 0xFC | BYTE4(v130) & 2;
      BYTE4(v130) = v37;
      sub_182CBA0(qword_1C7F2C0, v132);
      sub_182CBA0(v33, &v134);
      if ( !ptr )
        goto LABEL_22;
LABEL_17:
      v16 = a1 + 104;
      if ( (v130 & 0x100000000LL) != 0
        || (_DWORD)v130 != 1
        || (*(_BYTE *)(a1 + 124) & 1) != 0
        || *(_DWORD *)(a1 + 120) != 1 )
      {
        LOBYTE(v17) = sub_1848D40(qword_1C7F2C0, &v128, v16);
      }
      else if ( (v128 & 0x100000000LL) != 0 || (*(_BYTE *)(a1 + 108) & 1) != 0 )
      {
        v17 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v128, v16) >> 31;
      }
      else
      {
        LOBYTE(v17) = (int)v128 < *(_DWORD *)(a1 + 104);
      }
      if ( (_BYTE)v17 )
        sub_34D6E0(a1, &ptr);
      goto LABEL_22;
    }
    v12 = (void (__fastcall ***)(_QWORD))ptr;
    if ( ptr )
    {
      v13 = (*((_DWORD *)ptr + 4))-- == 1;
      if ( v13 )
      {
        (**v12)(v12);
        sub_186B220(v12);
      }
    }
    ptr = nullptr;
    v14 = (_QWORD *)sub_2FF8B0(a1);
    (*(void (__fastcall **)(_QWORD *, void **))(*v14 + 32LL))(v14, &ptr);
    if ( ptr )
    {
      v15 = v14[7];
      if ( !v15 )
        goto LABEL_17;
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v15 + 32LL))(v15, &ptr);
      if ( ptr )
        goto LABEL_17;
    }
LABEL_22:
    v18 = (__int64 *)qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v128);
    v19 = v18;
    v20 = (int *)&v130;
    sub_182CBA0(v18, &v130);
    v21 = v125;
    if ( !v125 || (v22 = *((unsigned int *)v125 - 1), !(_DWORD)v22) )
    {
LABEL_39:
      ++*(_DWORD *)(a1 + 160);
      if ( !i )
        goto LABEL_40;
      goto LABEL_60;
    }
    v19 = *(__int64 **)(a1 + 16);
    v23 = *(bool (__fastcall **)(__int64))(*v19 + 24);
    if ( v23 == sub_2FBE30 )
      break;
    if ( !((unsigned __int8 (*)(void))v23)() )
      goto LABEL_107;
LABEL_125:
    v21 = v125;
    if ( !v125 )
      goto LABEL_39;
    v22 = *((unsigned int *)v125 - 1);
    if ( !(_DWORD)v22 )
      goto LABEL_39;
    v114 = 1;
LABEL_26:
    v24 = &v21[v22];
    if ( !i )
    {
      v19 = &qword_18;
      v82 = (_QWORD *)sub_186B270(0x18u);
      i = v82 + 1;
      *v82 = 2;
      v83 = 1;
      v84 = i;
      goto LABEL_29;
    }
    do
    {
      v26 = *((_DWORD *)i - 1);
      if ( v26 == *((_DWORD *)i - 2) )
      {
        v27 = (3 * v26 + 1) >> 1;
        v28 = 8 * v27 + 8;
        v29 = v27;
        if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v132, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v132);
          sub_233E40((__int64)v132);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = i - 1;
        v30 = (unsigned int *)sub_186B300(i - 1, v28);
        v31 = v30[1];
        i = (__int64 *)(v30 + 2);
        *v30 = v29;
        LODWORD(v30) = v31;
        v84 = &i[v31];
        v83 = (_DWORD)v30 + 1;
      }
      else
      {
        v25 = v26;
        v83 = v26 + 1;
        v84 = &i[v25];
      }
LABEL_29:
      v20 = *v21++;
      *v84 = (__int64)v20;
      *((_DWORD *)i - 1) = v83;
    }
    while ( v24 != v21 );
    ++*(_DWORD *)(a1 + 160);
    if ( v114 != 1 )
      goto LABEL_115;
LABEL_60:
    if ( !*((_DWORD *)i - 1) )
    {
LABEL_40:
      if ( (unsigned int)sub_180B130(v19) > 0x63 )
      {
        if ( (unsigned __int8)sub_186A530() )
        {
          sub_186A4C0();
          v77 = sub_180B150(v19, v20);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v77, "(opt.maxres core is empty)\n");
          v40 = *a2;
          if ( *a2 )
            goto LABEL_42;
        }
        else
        {
          sub_180B150(v19, v20);
          std::__ostream_insert<char,std::char_traits<char>>();
          v40 = *a2;
          if ( *a2 )
            goto LABEL_42;
        }
      }
      else
      {
        v40 = *a2;
        if ( *a2 )
        {
LABEL_42:
          v41 = *((unsigned int *)v40 - 1);
          if ( (_DWORD)v41 )
          {
            v42 = &v40[5 * v41];
            do
            {
              while ( 1 )
              {
                v43 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v40 + 1);
                sub_182CBA0(v43, v40 + 3);
                if ( !*v40 )
                  break;
                v44 = (void *)(*v40 - 8LL);
                v40 += 5;
                sub_186B220(v44);
                if ( v40 == v42 )
                  goto LABEL_46;
              }
              v40 += 5;
            }
            while ( v40 != v42 );
LABEL_46:
            v40 = *a2;
          }
          *((_DWORD *)v40 - 1) = 0;
        }
      }
      v45 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, a1 + 72, a1 + 104);
      }
      else
      {
        v46 = *(_DWORD *)(a1 + 104);
        *(_BYTE *)(a1 + 76) &= ~1u;
        *(_DWORD *)(a1 + 72) = v46;
      }
      if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
      {
        sub_182C690(v45, a1 + 88, a1 + 120);
      }
      else
      {
        v47 = *(_DWORD *)(a1 + 120);
        *(_BYTE *)(a1 + 92) &= ~1u;
        *(_DWORD *)(a1 + 88) = v47;
      }
      v48 = (void (__fastcall ***)(_QWORD))ptr;
      if ( ptr )
      {
        v13 = (*((_DWORD *)ptr + 4))-- == 1;
        if ( v13 )
        {
          (**v48)(v48);
          sub_186B220(v48);
        }
      }
      sub_2334C0((__int64 *)&v124);
      v114 = 1;
      goto LABEL_56;
    }
    v122 = i;
    sub_34B090((__int64)v126, a1, &v122);
    v50 = *((unsigned int *)i - 2);
    v51 = *((_DWORD *)i - 1);
    *(_QWORD *)v132 = 0;
    v116 = v50;
    v52 = (_QWORD *)sub_186B270(8 * v50 + 8);
    v53 = *((unsigned int *)i - 1);
    *(_QWORD *)v132 = v52 + 1;
    v54 = 8 * v53;
    *v52 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v116), _mm_cvtsi32_si128(v51)).m128i_u64[0];
    if ( v54 <= 8 )
    {
      if ( v54 == 8 )
        v52[1] = *i;
    }
    else
    {
      memcpy(v52 + 1, i, v54);
    }
    v133 = 0;
    v134 = 0;
    v135 = 1;
    v136 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v133, v126);
    v55 = *a2;
    if ( *a2 )
    {
      v56 = *((unsigned int *)v55 - 1);
      if ( (_DWORD)v56 == *((_DWORD *)v55 - 2) )
      {
        v119 = (unsigned int)(3 * v56 + 1) >> 1;
        v89 = 40 * v119 + 8;
        if ( 40 * (int)v56 + 8 >= v89 || (unsigned int)v56 >= (unsigned int)(3 * v56 + 1) >> 1 )
        {
          v110 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v128, "Overflow encountered when expanding vector");
          *v110 = (char *)off_1C63128;
          sub_2333C0(v110 + 1, &v128);
          sub_233E40((__int64)&v128);
          __cxa_throw(v110, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v90 = sub_186B270(v89);
        v117 = (_DWORD *)v90;
        v55 = (_QWORD *)(v90 + 8);
        v91 = *a2;
        v92 = v90;
        if ( *a2 )
        {
          v93 = *((unsigned int *)v91 - 1);
          *(_DWORD *)(v92 + 4) = v93;
          v94 = v55;
          v95 = &v91[5 * v93];
          for ( j = v91; v95 != j; *(v94 - 1) = v101 )
          {
            v97 = *j;
            v98 = *((_BYTE *)j + 12);
            j += 5;
            v94 += 5;
            *(j - 5) = 0;
            *(v94 - 5) = v97;
            *((_DWORD *)v94 - 8) = *((_DWORD *)j - 8);
            *((_BYTE *)v94 - 28) = v98 & 3 | *((_BYTE *)v94 - 28) & 0xFC;
            v99 = *(j - 3);
            *(j - 3) = 0;
            *(v94 - 3) = v99;
            v100 = *((_BYTE *)j - 12);
            *((_DWORD *)v94 - 4) = *((_DWORD *)j - 4);
            *((_BYTE *)v94 - 12) = v100 & 3 | *((_BYTE *)v94 - 12) & 0xFC;
            v101 = *(j - 1);
            *(j - 1) = 0;
          }
          v102 = *((unsigned int *)v91 - 1);
          if ( (_DWORD)v102 )
          {
            v121 = a1;
            v120 = i;
            v103 = v91;
            v113 = &v91[5 * v102];
            do
            {
              while ( 1 )
              {
                v104 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v103 + 1);
                sub_182CBA0(v104, v103 + 3);
                v105 = *v103;
                if ( !*v103 )
                  break;
                v103 += 5;
                sub_186B220((void *)(v105 - 8));
                if ( v103 == v113 )
                  goto LABEL_144;
              }
              v103 += 5;
            }
            while ( v103 != v113 );
LABEL_144:
            i = v120;
            a1 = v121;
            v91 = *a2;
          }
          sub_186B220(v91 - 1);
          v57 = &v55[5 * (unsigned int)v117[1]];
        }
        else
        {
          *(_DWORD *)(v90 + 4) = 0;
          v57 = (_QWORD *)(v90 + 8);
        }
        *a2 = v55;
        *v117 = v119;
      }
      else
      {
        v57 = &v55[5 * v56];
      }
    }
    else
    {
      v108 = (_QWORD *)sub_186B270(0x58u);
      *v108 = 2;
      v55 = v108 + 1;
      *a2 = v108 + 1;
      v57 = v108 + 1;
    }
    v58 = *(_QWORD *)v132;
    v59 = qword_1C7F2C0;
    *(_QWORD *)v132 = 0;
    *v57 = v58;
    *((_DWORD *)v57 + 2) = v133;
    *((_BYTE *)v57 + 12) = BYTE4(v133) & 3 | *((_BYTE *)v57 + 12) & 0xFC;
    v60 = v134;
    v134 = 0;
    v57[2] = v60;
    *((_DWORD *)v57 + 6) = v135;
    *((_BYTE *)v57 + 28) = BYTE4(v135) & 3 | *((_BYTE *)v57 + 28) & 0xFC;
    v61 = v136;
    v136 = 0;
    v57[4] = v61;
    ++*((_DWORD *)v55 - 1);
    sub_182CBA0(v59, &v133);
    sub_182CBA0(v59, &v135);
    if ( *(_QWORD *)v132 )
      sub_186B220((void *)(*(_QWORD *)v132 - 8LL));
    v62 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v126);
    sub_182CBA0(v62, v127);
    v63 = *(__int64 **)(a1 + 192);
    if ( v63 )
    {
      v64 = &v63[*((unsigned int *)v63 - 1)];
      if ( v63 == v64 )
      {
        v66 = 0;
        goto LABEL_84;
      }
      v65 = *(__int64 **)(a1 + 192);
      v66 = 0;
      do
      {
        while ( 1 )
        {
          v67 = *v65;
          v68 = &i[*((unsigned int *)i - 1)];
          if ( v68 != i )
            break;
LABEL_98:
          v78 = v66 + 1;
          v79 = *(_QWORD *)(a1 + 184);
          v80 = &v63[v66];
          if ( v67 )
            ++*(_DWORD *)(v67 + 8);
          v81 = *v80;
          if ( *v80 )
          {
            v13 = (*(_DWORD *)(v81 + 8))-- == 1;
            if ( v13 )
            {
              v118 = v78;
              v112 = v64;
              sub_15D7BC0(v79, v81);
              v63 = *(__int64 **)(a1 + 192);
              v78 = v118;
              v64 = v112;
            }
          }
          ++v65;
          *v80 = v67;
          v66 = v78;
          if ( v64 == v65 )
            goto LABEL_76;
        }
        v69 = i;
        while ( v67 != *v69 )
        {
          if ( v68 == ++v69 )
            goto LABEL_98;
        }
        ++v65;
      }
      while ( v64 != v65 );
LABEL_76:
      if ( v63 )
      {
        v70 = (unsigned __int64)&v63[*((unsigned int *)v63 - 1)];
        v71 = &v63[v66];
        if ( (unsigned __int64)v71 >= v70 )
        {
          v64 = v63;
LABEL_84:
          *((_DWORD *)v64 - 1) = v66;
          goto LABEL_85;
        }
        do
        {
          while ( 1 )
          {
            v72 = *v71;
            if ( *v71 )
            {
              v73 = *(_QWORD *)(a1 + 184);
              v13 = (*(_DWORD *)(v72 + 8))-- == 1;
              if ( v13 )
                break;
            }
            if ( (unsigned __int64)++v71 >= v70 )
              goto LABEL_83;
          }
          sub_15D7BC0(v73, v72);
          ++v71;
        }
        while ( (unsigned __int64)v71 < v70 );
LABEL_83:
        v64 = *(__int64 **)(a1 + 192);
        if ( v64 )
          goto LABEL_84;
      }
    }
LABEL_85:
    sub_34FDD0((__int64)v132, a1, &v122);
    v74 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v132);
    sub_182CBA0(v74, &v134);
    if ( *((_DWORD *)i - 1) >= *(_DWORD *)(a1 + 536) )
    {
      sub_349130((void (***)(void))ptr);
      sub_2334C0((__int64 *)&v124);
      v114 = 1;
      goto LABEL_57;
    }
    v75 = sub_353400(a1, (__m128i *)(a1 + 184));
    v76 = (void (__fastcall ***)(_QWORD))ptr;
    v114 = v75;
    if ( ptr )
    {
      v13 = (*((_DWORD *)ptr + 4))-- == 1;
      if ( v13 )
      {
        (**v76)(v76);
        sub_186B220(v76);
      }
    }
    sub_2334C0((__int64 *)&v124);
    if ( v114 != -1 )
      goto LABEL_57;
  }
  v114 = 1;
  if ( v19[20] )
    goto LABEL_26;
LABEL_107:
  sub_E1FC60(a1 + 256);
  if ( v125 )
  {
    v85 = *((unsigned int *)v125 - 1);
    if ( (_DWORD)v85 )
    {
      v86 = v125;
      v87 = &v125[v85];
      do
        sub_E20700(a1 + 256, *v86++);
      while ( v86 != v87 );
    }
  }
  v20 = (int *)(a1 + 240);
  v19 = (__int64 *)(a1 + 256);
  v114 = sub_E20AD0(a1 + 256, a1 + 240);
  if ( v114 == 1 )
  {
    v38 = v125;
    if ( !v125 )
      goto LABEL_149;
    v88 = (unsigned __int64)&v125[*((unsigned int *)v125 - 1)];
    if ( (unsigned __int64)v125 >= v88 )
      goto LABEL_38;
    do
    {
      v20 = *v38;
      if ( *v38 )
      {
        v13 = v20[2]-- == 1;
        v19 = v124;
        if ( v13 )
          sub_15D7BC0(v124, v20);
      }
      ++v38;
    }
    while ( (unsigned __int64)v38 < v88 );
    v38 = v125;
    if ( v125 )
    {
LABEL_38:
      v39 = *(_QWORD *)(a1 + 248);
      *((_DWORD *)v38 - 1) = 0;
      if ( !v39 )
        goto LABEL_39;
    }
    else
    {
LABEL_149:
      v39 = *(_QWORD *)(a1 + 248);
      if ( !v39 )
        goto LABEL_39;
    }
    v106 = 0;
    do
    {
      if ( v106 >= *(_DWORD *)(v39 - 4) )
        break;
      v107 = *(_QWORD *)(v39 + 8LL * v106);
      *(_QWORD *)v132 = v107;
      if ( v107 )
        ++*(_DWORD *)(v107 + 8);
      v19 = (__int64 *)&v125;
      v20 = v132;
      sub_349180(&v125, v132);
      v39 = *(_QWORD *)(a1 + 248);
      ++v106;
    }
    while ( v39 );
    goto LABEL_125;
  }
  v21 = v125;
  if ( v125 )
  {
    v22 = *((unsigned int *)v125 - 1);
    if ( (_DWORD)v22 )
      goto LABEL_26;
  }
  ++*(_DWORD *)(a1 + 160);
LABEL_115:
  if ( (unsigned int)sub_180B130(v19) > 0x63 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v109 = sub_180B150(v19, v20);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v109, "(opt.maxres minimization failed)\n");
    }
    else
    {
      sub_180B150(v19, v20);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_349130((void (***)(void))ptr);
  sub_2334C0((__int64 *)&v124);
LABEL_56:
  if ( !i )
    return v114;
LABEL_57:
  sub_186B220(i - 1);
  return v114;
}

