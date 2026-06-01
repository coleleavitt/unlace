__int64 __fastcall sub_10DAC30(__int64 a1, size_t a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rax
  _BYTE *v9; // rdx
  void *v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // ebp
  __int64 v17; // r13
  int v18; // r12d
  const void *v19; // rax
  size_t v20; // rdx
  __int64 v21; // rax
  _BYTE *v22; // rdx
  __int64 v23; // rbx
  _BYTE *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  char *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // r12
  void (__fastcall *v37)(__int64, __int64); // r13
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  _BYTE *v42; // rdx
  __int64 v43; // rdi
  const char *v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r13
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  _BYTE *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // rax
  _BYTE *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rax
  size_t v69; // rdx
  __int64 *v70; // rbx
  __int64 *v71; // rbp
  size_t v72; // r14
  __int64 v73; // rax
  __int64 v74; // rax
  _BYTE *v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r13
  __int64 v78; // rdx
  __int64 v79; // rax
  const char **v80; // rax
  char *v81; // r13
  size_t v82; // r14
  __int64 v83; // r15
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  _BYTE *v87; // rdx
  char *v88; // rsi
  __m128i *v89; // rdi
  __int64 v90; // rbx
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rcx
  __int64 v97; // rdi
  __int64 v98; // r13
  __int64 v99; // r14
  char *v100; // r13
  size_t v101; // rax
  __int64 v102; // rax
  __int64 v103; // rbx
  __int64 v104; // rax
  _BYTE *v105; // rdx
  __int64 v106; // rax
  char *v107; // rbx
  size_t v108; // rax
  int v109; // r15d
  void *v110; // rax
  void *v111; // rdx
  __int64 v112; // rdi
  __int64 v113; // rbx
  size_t v114; // rax
  __int64 v115; // rax
  void *v116; // rdi
  __int64 v117; // rbp
  void (__fastcall *v118)(__m128i *, __int64, _QWORD, char *, size_t, __int64, _QWORD, size_t); // r15
  size_t v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdi
  char *v122; // rsi
  __int64 v123; // r13
  __int64 i; // rbx
  __int64 v125; // rax
  __int64 **v126; // rdi
  __int64 ***v127; // rbx
  __int64 *v128; // rsi
  __int64 *v129; // r12
  __int64 *v130; // rdx
  __int64 ***v131; // rax
  __int64 **v132; // rdx
  __m128i *j; // rbx
  __int64 *v134; // r15
  size_t v135; // r12
  __int64 v136; // rax
  __int64 v137; // rax
  _BYTE *v138; // rdx
  __int64 v139; // rdi
  char *v140; // rsi
  __int64 *v141; // rbx
  __int64 *v142; // rbp
  __int64 v143; // rax
  __int64 v144; // r12
  __int64 v145; // r13
  __int64 v146; // rax
  __int64 v147; // rdi
  __int64 v148; // rbp
  __int64 v149; // rax
  void *v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rdi
  __int64 v154; // rdx
  __int64 v155; // rax
  const void *v156; // [rsp+8h] [rbp-F0h]
  __int64 *v157[2]; // [rsp+10h] [rbp-E8h] BYREF
  void **v158[4]; // [rsp+20h] [rbp-D8h] BYREF
  void *v159; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v160; // [rsp+48h] [rbp-B0h]
  _BYTE v161[48]; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v162; // [rsp+80h] [rbp-78h] BYREF
  _QWORD *v163; // [rsp+90h] [rbp-68h] BYREF
  __int64 *v164; // [rsp+98h] [rbp-60h]
  __int64 *v165; // [rsp+A0h] [rbp-58h]
  __int64 v166; // [rsp+A8h] [rbp-50h]

  v4 = *(_QWORD *)(a2 + 80);
  if ( sub_10B8FF0(v4, 0x133u) )
  {
    v5 = sub_22598C0(v4, 307);
    v6 = *(_QWORD *)(a2 + 8);
    v7 = v5;
    v162.m128i_i64[0] = (__int64)&v163;
    sub_10B4F90(&v162, *(_BYTE **)(v6 + 16), *(_QWORD *)(v6 + 16) + *(_QWORD *)(v6 + 24));
    v8 = sub_22581D0(v7, v162.m128i_i64[0], v162.m128i_i64[1]);
    v9 = *(_BYTE **)(v8 + 32);
    if ( *(_QWORD *)(v8 + 24) > (unsigned __int64)v9 )
    {
LABEL_3:
      *(_QWORD *)(v8 + 32) = v9 + 1;
      *v9 = 10;
      goto LABEL_4;
    }
    goto LABEL_21;
  }
  v12 = *(_QWORD *)(a2 + 80);
  if ( sub_10B8FF0(v12, 0x135u) )
  {
    v13 = sub_22598C0(v12, 309);
    v14 = sub_971800(v13, "21.1.5");
    sub_971800(v14, "\n");
    return 0;
  }
  v15 = *(_QWORD *)(a2 + 80);
  if ( sub_10B8FF0(v15, 0xC4Bu) )
  {
    v16 = 1;
    v17 = sub_22598C0(v15, 3147);
    v18 = sub_FAF5A0();
    if ( v18 != 1 )
    {
      do
      {
        v23 = sub_2257BD0(v17, v16);
        v24 = *(_BYTE **)(v23 + 32);
        if ( (unsigned __int64)v24 < *(_QWORD *)(v23 + 24) )
        {
          *(_QWORD *)(v23 + 32) = v24 + 1;
          *v24 = 44;
        }
        else
        {
          v23 = sub_2257CD0(v23, 44);
        }
        v19 = (const void *)sub_FAF5B0(v16);
        v21 = sub_9717A0(v23, v19, v20);
        v22 = *(_BYTE **)(v21 + 32);
        if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 24) )
        {
          sub_2257CD0(v21, 10);
        }
        else
        {
          *(_QWORD *)(v21 + 32) = v22 + 1;
          *v22 = 10;
        }
        ++v16;
      }
      while ( v18 != v16 );
    }
    return 0;
  }
  if ( sub_10B8FF0(*(_QWORD *)(a2 + 80), 0x83Cu) || sub_10B8FF0(*(_QWORD *)(a2 + 80), 0x83Au) )
  {
    v27 = sub_10B8FF0(*(_QWORD *)(a2 + 80), 0x83Au);
    sub_10B7510(a1, v27 != 0);
    return 0;
  }
  v28 = *(_QWORD *)(a2 + 80);
  if ( sub_10B8FF0(v28, 0xD37u) )
  {
    v29 = sub_22598C0(v28, 3383);
    sub_10BA540(a1, a2, v29);
    return 0;
  }
  v30 = *(_QWORD *)(a2 + 80);
  v31 = 3397;
  if ( sub_10B8FF0(v30, 0xD45u)
    || (v30 = *(_QWORD *)(a2 + 80), v31 = 72, sub_10B8FF0(v30, 0x48u))
    || (v30 = *(_QWORD *)(a2 + 80), v31 = 3170, sub_10B8FF0(v30, 0xC62u))
    || (v30 = *(_QWORD *)(a2 + 80), v31 = 3171, sub_10B8FF0(v30, 0xC63u))
    || (v30 = *(_QWORD *)(a2 + 80), v31 = 3150, sub_10B8FF0(v30, 0xC4Eu)) )
  {
    v32 = sub_2259990(v30, v31);
    sub_10BA540(a1, a2, v32);
    *(_BYTE *)(a1 + 1168) |= 4u;
  }
  v33 = *(_QWORD *)(a2 + 80);
  v34 = (_BYTE *)(elf_gnu_hash_bucket + 669);
  if ( sub_10B8FF0(v33, 0xD45u) )
  {
    if ( *(_QWORD *)(a1 + 288) )
    {
      v55 = sub_2259990(v33, 3397);
      v56 = sub_971800(v55, "System configuration file directory: ");
      v34 = "\n";
      v33 = sub_22581D0(v56, *(_QWORD *)(a1 + 280), *(_QWORD *)(a1 + 288));
      sub_971800(v33, "\n");
    }
    if ( *(_QWORD *)(a1 + 320) )
    {
      v52 = sub_2259990(v33, v34);
      v53 = sub_971800(v52, "User configuration file directory: ");
      v54 = sub_22581D0(v53, *(_QWORD *)(a1 + 312), *(_QWORD *)(a1 + 320));
      sub_971800(v54, "\n");
    }
  }
  v35 = *(_QWORD *)(a2 + 80);
  v36 = *(_QWORD *)(a2 + 8);
  if ( sub_10B8FF0(v35, 0xD45u) )
  {
    v37 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 112LL);
    v38 = sub_2259990(v35, 3397);
    v37(v36, v38);
  }
  v39 = *(_QWORD *)(a2 + 80);
  if ( sub_10B8FF0(v39, 0xC5Du) )
  {
    v40 = sub_22598C0(v39, 3165);
    v41 = sub_22581D0(v40, *(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 256));
    v42 = *(_BYTE **)(v41 + 32);
    if ( (unsigned __int64)v42 >= *(_QWORD *)(v41 + 24) )
    {
      sub_2257CD0(v41, 10);
    }
    else
    {
      *(_QWORD *)(v41 + 32) = v42 + 1;
      *v42 = 10;
    }
    return 0;
  }
  v43 = *(_QWORD *)(a2 + 80);
  if ( sub_10B8FF0(v43, 0xC60u) )
  {
    v44 = "programs: =";
    v45 = sub_22598C0(v43, 3168);
    sub_971800(v45, "programs: =");
    v46 = *(_QWORD *)(a1 + 344);
    v47 = v46 + 32LL * *(unsigned int *)(a1 + 352);
    if ( v46 == v47 )
    {
      v57 = *(_QWORD *)(v36 + 1152);
      v58 = v57 + 32LL * *(unsigned int *)(v36 + 1160);
      if ( v57 != v58 )
        goto LABEL_55;
    }
    else
    {
      while ( 1 )
      {
        v48 = sub_22598C0(v45, v44);
        v49 = *(_QWORD *)(v46 + 8);
        v44 = *(const char **)v46;
        v46 += 32;
        v45 = v48;
        sub_22581D0(v48, v44, v49);
        if ( v46 == v47 )
          break;
        v50 = sub_22598C0(v45, v44);
        v51 = *(_BYTE **)(v50 + 32);
        if ( (unsigned __int64)v51 >= *(_QWORD *)(v50 + 24) )
        {
          v44 = (const char *)&word_3A;
          v45 = v50;
          sub_2257CD0(v50, 58);
        }
        else
        {
          *(_QWORD *)(v50 + 32) = v51 + 1;
          *v51 = 58;
        }
      }
      v57 = *(_QWORD *)(v36 + 1152);
      v58 = v57 + 32LL * *(unsigned int *)(v36 + 1160);
      while ( v57 != v58 )
      {
        v59 = sub_22598C0(v45, v44);
        v60 = *(_BYTE **)(v59 + 32);
        if ( (unsigned __int64)v60 >= *(_QWORD *)(v59 + 24) )
        {
          v44 = (const char *)&word_3A;
          v45 = v59;
          sub_2257CD0(v59, 58);
        }
        else
        {
          *(_QWORD *)(v59 + 32) = v60 + 1;
          *v60 = 58;
        }
LABEL_55:
        v61 = sub_22598C0(v45, v44);
        v62 = *(_QWORD *)(v57 + 8);
        v44 = *(const char **)v57;
        v57 += 32;
        v45 = v61;
        sub_22581D0(v61, v44, v62);
      }
    }
    v63 = sub_22598C0(v45, v44);
    sub_971800(v63, "\n");
    v64 = sub_22598C0(v63, "\n");
    v65 = sub_971800(v64, "libraries: =");
    v66 = *(_QWORD *)(a1 + 248);
    sub_22581D0(v65, v66, *(_QWORD *)(a1 + 256));
    v67 = a2;
    v68 = sub_10B0F50(a2);
    v70 = *(__int64 **)(v36 + 624);
    v71 = &v70[4 * *(unsigned int *)(v36 + 632)];
    if ( v70 != v71 )
    {
      v72 = v69;
      v156 = (const void *)v68;
      do
      {
        v74 = sub_22598C0(v67, v66);
        v75 = *(_BYTE **)(v74 + 32);
        if ( (unsigned __int64)v75 >= *(_QWORD *)(v74 + 24) )
        {
          v66 = 58;
          v67 = v74;
          sub_2257CD0(v74, 58);
        }
        else
        {
          *(_QWORD *)(v74 + 32) = v75 + 1;
          *v75 = 58;
        }
        if ( *(_BYTE *)*v70 == 61 )
        {
          v76 = sub_22598C0(v67, v66);
          v77 = sub_9717A0(v76, v156, v72);
          if ( !v70[1] )
            std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
          v162.m128i_i64[0] = (__int64)&v163;
          v78 = v70[1];
          if ( !v78 )
            std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
          sub_10B5070(&v162, (_BYTE *)(*v70 + 1), *v70 + v78);
          v66 = v162.m128i_i64[0];
          sub_22581D0(v77, v162.m128i_i64[0], v162.m128i_i64[1]);
          v67 = v162.m128i_i64[0];
          if ( (_QWORD **)v162.m128i_i64[0] != &v163 )
            operator delete((void *)v162.m128i_i64[0]);
        }
        else
        {
          v73 = sub_22598C0(v67, v66);
          v66 = *v70;
          v67 = v73;
          sub_22581D0(v73, *v70, v70[1]);
        }
        v70 += 4;
      }
      while ( v71 != v70 );
    }
    goto LABEL_73;
  }
  v25 = *(_QWORD *)(a2 + 80);
  if ( sub_10B8FF0(v25, 0xC53u) )
  {
    v26 = sub_22598C0(v25, 3155);
    sub_10C3350(&v162, (_QWORD *)a1, a2, *(_QWORD *)(a2 + 8));
    v8 = sub_22581D0(v26, v162.m128i_i64[0], v162.m128i_i64[1]);
    v9 = *(_BYTE **)(v8 + 32);
    if ( (unsigned __int64)v9 < *(_QWORD *)(v8 + 24) )
      goto LABEL_3;
LABEL_21:
    sub_2257CD0(v8, 10);
    goto LABEL_4;
  }
  if ( sub_10B8FF0(*(_QWORD *)(a2 + 80), 0xC5Fu) )
  {
    sub_110D6D0(&v162, v36);
    if ( (_BYTE)v165 )
    {
      v85 = sub_22598C0(&v162, v36);
      v86 = sub_22581D0(v85, v162.m128i_i64[0], v162.m128i_i64[1]);
      v87 = *(_BYTE **)(v86 + 32);
      if ( (unsigned __int64)v87 >= *(_QWORD *)(v86 + 24) )
      {
        sub_2257CD0(v86, 10);
      }
      else
      {
        *(_QWORD *)(v86 + 32) = v87 + 1;
        *v87 = 10;
      }
    }
    else
    {
      v103 = sub_22598C0(&v162, v36);
      (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)v36 + 296LL))(&v159, v36);
      v104 = sub_22581D0(v103, v159, v160);
      v105 = *(_BYTE **)(v104 + 32);
      if ( (unsigned __int64)v105 >= *(_QWORD *)(v104 + 24) )
      {
        sub_2257CD0(v104, 10);
      }
      else
      {
        *(_QWORD *)(v104 + 32) = v105 + 1;
        *v105 = 10;
      }
      if ( v159 != v161 )
        operator delete(v159);
    }
    if ( !(_BYTE)v165 )
      return 0;
LABEL_4:
    v10 = (void *)v162.m128i_i64[0];
    if ( (_QWORD **)v162.m128i_i64[0] == &v163 )
      return 0;
LABEL_5:
    operator delete(v10);
    return 0;
  }
  v88 = (_BYTE *)(elf_gnu_hash_bucket + 420);
  if ( sub_10B8FF0(*(_QWORD *)(a2 + 80), 0xC4Cu) )
  {
    v89 = &v162;
    sub_FB23A0((__int64)&v162);
    if ( v162.m128i_i64[0] != v162.m128i_i64[1] )
    {
      v90 = 0;
      v91 = 0;
      do
      {
        v92 = sub_22598C0(v89, v88);
        v91 += 2;
        v93 = sub_971800(v92, "  ");
        v94 = sub_22581D0(v93, *(_QWORD *)(v90 + v162.m128i_i64[0]), *(_QWORD *)(v90 + v162.m128i_i64[0] + 8));
        v95 = sub_971800(v94, "\n  ");
        v96 = (_QWORD *)(v162.m128i_i64[0] + v90 + 32);
        v90 += 64;
        v88 = "\n\n";
        v89 = (__m128i *)sub_22581D0(v95, *v96, v96[1]);
        sub_971800((__int64)v89, "\n\n");
      }
      while ( v91 != (v162.m128i_i64[1] - v162.m128i_i64[0]) >> 5 );
    }
    sub_990CF0((void ***)&v162);
    return 0;
  }
  v97 = *(_QWORD *)(a2 + 80);
  v98 = sub_10B8FF0(v97, 0xC4Fu);
  if ( v98 )
  {
    v99 = sub_22598C0(v97, 3151);
    v100 = **(char ***)(v98 + 48);
    v101 = 0;
    if ( v100 )
      v101 = j__strlen(v100);
    sub_10C27E0(&v162, (_QWORD *)a1, v100, v101, v36);
    v102 = sub_22581D0(v99, v162.m128i_i64[0], v162.m128i_i64[1]);
    sub_971800(v102, "\n");
    v10 = (void *)v162.m128i_i64[0];
    if ( (_QWORD **)v162.m128i_i64[0] == &v163 )
      return 0;
    goto LABEL_5;
  }
  v67 = *(_QWORD *)(a2 + 80);
  v66 = 3163;
  v79 = sub_10B8FF0(v67, 0xC5Bu);
  if ( v79 )
  {
    v80 = *(const char ***)(v79 + 48);
    v81 = (char *)*v80;
    if ( *v80 )
    {
      v67 = (__int64)*v80;
      v82 = j__strlen(*v80);
      if ( v82 )
      {
        v83 = sub_22598C0(v67, 3163);
        sub_10C5910(&v162, a1, v81, v82, v36);
        v66 = v162.m128i_i64[0];
        sub_22581D0(v83, v162.m128i_i64[0], v162.m128i_i64[1]);
        v67 = v162.m128i_i64[0];
        if ( (_QWORD **)v162.m128i_i64[0] != &v163 )
          operator delete((void *)v162.m128i_i64[0]);
      }
    }
LABEL_73:
    v84 = sub_22598C0(v67, v66);
    sub_971800(v84, "\n");
    return 0;
  }
  v106 = sub_10B8FF0(*(_QWORD *)(a2 + 80), 0x93u);
  if ( v106 )
  {
    v107 = **(char ***)(v106 + 48);
    v108 = 0;
    if ( v107 )
      v108 = j__strlen(v107);
    sub_10DA210(a1, v107, v108);
    return 0;
  }
  if ( sub_10B8FF0(*(_QWORD *)(a2 + 80), 0xC52u) )
  {
    v109 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 600LL))(v36, *(_QWORD *)(a2 + 80));
    (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD))(*(_QWORD *)v36 + 528LL))(
      &v162,
      v36,
      *(_QWORD *)(a2 + 80),
      0);
    sub_2296190(&v159, &v162);
    if ( (_QWORD **)v162.m128i_i64[0] != &v163 )
      operator delete((void *)v162.m128i_i64[0]);
    v110 = (void *)sub_2293740(&v159);
    sub_10B20E0(a2, (_QWORD *)v36, v110, v111, 0);
    sub_10B74D0(&v162, (__int64)&v159);
    sub_10B6C20((__m128i **)v158, (__m128i *)v36, &v162);
    v112 = v162.m128i_i64[0];
    if ( (_QWORD **)v162.m128i_i64[0] != &v163 )
      operator delete((void *)v162.m128i_i64[0]);
    if ( v109 )
    {
      if ( v109 == 1 )
      {
        v113 = sub_22598C0(v112, v36);
        v114 = j__strlen("libgcc.a");
        sub_10C27E0(&v162, (_QWORD *)a1, "libgcc.a", v114, v36);
        v115 = sub_22581D0(v113, v162.m128i_i64[0], v162.m128i_i64[1]);
        sub_971800(v115, "\n");
        v116 = (void *)v162.m128i_i64[0];
        if ( (_QWORD **)v162.m128i_i64[0] != &v163 )
          goto LABEL_114;
      }
    }
    else
    {
      v117 = sub_22598C0(v112, v36);
      v118 = *(void (__fastcall **)(__m128i *, __int64, _QWORD, char *, size_t, __int64, _QWORD, size_t))(*(_QWORD *)v36 + 304LL);
      v119 = j__strlen("builtins");
      v118(&v162, v36, *(_QWORD *)(a2 + 80), "builtins", v119, 1, 0, v119);
      v120 = sub_22581D0(v117, v162.m128i_i64[0], v162.m128i_i64[1]);
      sub_971800(v120, "\n");
      v116 = (void *)v162.m128i_i64[0];
      if ( (_QWORD **)v162.m128i_i64[0] != &v163 )
LABEL_114:
        operator delete(v116);
    }
    sub_10B6DC0((__m128i **)v158);
    v10 = v159;
    if ( v159 == v161 )
      return 0;
    goto LABEL_5;
  }
  v121 = *(_QWORD *)(a2 + 80);
  v122 = (_BYTE *)(elf_gnu_hash_bucket + 431);
  if ( sub_10B8FF0(v121, 0xC57u) )
  {
    v123 = *(_QWORD *)(v36 + 1848);
    for ( i = *(_QWORD *)(v36 + 1840); i != v123; i += 192 )
    {
      if ( !*(_BYTE *)(i + 184) )
      {
        v125 = sub_22598C0(v121, v122);
        v122 = "\n";
        v121 = sub_10E7020(v125, i);
        sub_971800(v121, "\n");
      }
    }
    return 0;
  }
  if ( sub_10B8FF0(*(_QWORD *)(a2 + 80), 0xC56u) )
  {
    sub_11121E0(v158, v36, *(_QWORD *)(a2 + 80));
    sub_10EC4A0(&v159, v36 + 1840, v158);
    v162.m128i_i32[2] = 0;
    v163 = nullptr;
    v164 = &v162.m128i_i64[1];
    v165 = &v162.m128i_i64[1];
    v166 = 0;
    sub_A21ED0(v157, (__int64 *)v159, (_DWORD)v160 == 0);
    v126 = v157;
    v127 = (__int64 ***)v157[0];
    v128 = (__int64 *)((char *)v159 + 8 * (unsigned int)v160);
    sub_A21ED0(v157, v128, 1);
    v129 = v157[0];
    while ( v127 != (__int64 ***)v129 )
    {
      v128 = (__int64 *)v157;
      v126 = (__int64 **)&v162;
      v130 = **v127;
      v157[0] = (__int64 *)(*v127 + 1);
      v157[1] = v130;
      sub_10C3770((__int64)&v162, (__int64 *)v157);
      v131 = v127 + 1;
      do
      {
        do
        {
          v132 = *v131;
          v127 = v131++;
        }
        while ( !v132 );
      }
      while ( v132 == (__int64 **)-8LL );
    }
    for ( j = (__m128i *)v164; j != (__m128i *)&v162.m128i_u64[1]; j = (__m128i *)std::_Rb_tree_increment() )
    {
      v134 = (__int64 *)j[2].m128i_i64[0];
      v135 = j[2].m128i_u64[1];
      v136 = sub_22598C0(v126, v128);
      v128 = v134;
      v137 = sub_9717A0(v136, v134, v135);
      v138 = *(_BYTE **)(v137 + 32);
      if ( (unsigned __int64)v138 < *(_QWORD *)(v137 + 24) )
      {
        *(_QWORD *)(v137 + 32) = v138 + 1;
        *v138 = 10;
      }
      else
      {
        v128 = (_QWORD *)(byte_9 + 1);
        sub_2257CD0(v137, 10);
      }
      v126 = (__int64 **)j;
    }
    sub_9C9C90((__int64)&v162, v163);
    sub_A1EA20(&v159);
    sub_990CF0(v158);
    return 0;
  }
  else
  {
    v139 = *(_QWORD *)(a2 + 80);
    v140 = (_BYTE *)(elf_gnu_hash_bucket + 429);
    if ( sub_10B8FF0(v139, 0xC55u) )
    {
      v141 = *(__int64 **)(v36 + 2176);
      v142 = &v141[24 * *(unsigned int *)(v36 + 2184)];
      while ( v142 != v141 )
      {
        v144 = v141[1];
        if ( v144 )
        {
          v145 = *v141;
          v146 = sub_22598C0(v139, v140);
          v140 = "\n";
          v139 = sub_9717A0(v146, (const void *)(v145 + 1), v144 - 1);
          sub_971800(v139, "\n");
        }
        else
        {
          v143 = sub_22598C0(v139, v140);
          v140 = ".\n";
          v139 = v143;
          sub_971800(v143, ".\n");
        }
        v141 += 24;
      }
      return 0;
    }
    v147 = *(_QWORD *)(a2 + 80);
    if ( sub_10B8FF0(v147, 0xC64u) )
    {
      v148 = sub_22598C0(v147, 3172);
      v162.m128i_i64[0] = (__int64)&v163;
      sub_10B4F90(&v162, *(_BYTE **)(v36 + 16), *(_QWORD *)(v36 + 16) + *(_QWORD *)(v36 + 24));
      v149 = sub_22581D0(v148, v162.m128i_i64[0], v162.m128i_i64[1]);
      sub_971800(v149, "\n");
      v10 = (void *)v162.m128i_i64[0];
      if ( (_QWORD **)v162.m128i_i64[0] == &v163 )
        return 0;
      goto LABEL_5;
    }
    if ( sub_10B8FF0(*(_QWORD *)(a2 + 80), 0xC4Du) )
    {
      (*(void (__fastcall **)(void **, __int64, _QWORD, _QWORD))(*(_QWORD *)v36 + 528LL))(
        &v159,
        v36,
        *(_QWORD *)(a2 + 80),
        0);
      sub_2296190(&v162, &v159);
      v150 = v159;
      if ( v159 != v161 )
        operator delete(v159);
      v151 = sub_22598C0(v150, &v159);
      v152 = sub_22581D0(v151, v162.m128i_i64[0], v162.m128i_i64[1]);
      sub_971800(v152, "\n");
      goto LABEL_4;
    }
    v153 = *(_QWORD *)(a2 + 80);
    v154 = sub_10B8FF0(v153, 0xC65u);
    result = 1;
    if ( v154 )
    {
      v155 = sub_22598C0(v153, 3173);
      sub_2100700(v155);
      return 0;
    }
  }
  return result;
}

