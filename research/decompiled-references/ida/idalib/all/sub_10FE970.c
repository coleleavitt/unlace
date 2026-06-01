__int64 __fastcall sub_10FE970(__int64 a1, size_t a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  _BYTE *v8; // rdx
  void *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // r13
  int v15; // r12d
  const void *v16; // rax
  size_t v17; // rdx
  __int64 v18; // rax
  _BYTE *v19; // rdx
  __int64 v20; // rbx
  _BYTE *v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdi
  char *v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r12
  void (__fastcall *v32)(__int64, __int64); // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _BYTE *v36; // rdx
  __int64 v37; // rdi
  __int64 *v38; // r13
  __int64 *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rax
  _BYTE *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 *v50; // r13
  __int64 *v51; // r14
  __int64 v52; // rax
  _BYTE *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  size_t v61; // rdx
  _QWORD *v62; // rbx
  _QWORD *v63; // rbp
  size_t v64; // r14
  __int64 v65; // rax
  __int64 v66; // rax
  _BYTE *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // rdx
  __int64 v71; // rax
  const char **v72; // rax
  char *v73; // r13
  size_t v74; // r14
  __int64 v75; // r15
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _BYTE *v79; // rdx
  __int64 v80; // rbx
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rcx
  __int64 v87; // rdi
  __int64 v88; // r13
  __int64 v89; // r14
  char *v90; // r13
  size_t v91; // rax
  __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rax
  _BYTE *v95; // rdx
  __int64 v96; // rax
  char *v97; // rbx
  size_t v98; // rax
  int v99; // r15d
  void *v100; // rax
  void *v101; // rdx
  __int64 v102; // rbx
  size_t v103; // rax
  __int64 v104; // rax
  void *v105; // rdi
  __int64 v106; // rbp
  void (__fastcall *v107)(__m128i *, __int64, _QWORD, char *, size_t, __int64, _QWORD, size_t); // r15
  size_t v108; // rax
  __int64 v109; // rax
  __int64 v110; // r13
  __int64 i; // rbx
  __int64 v112; // rax
  __int64 v113; // rdi
  __int64 ***v114; // rbx
  __int64 *v115; // r12
  __int64 *v116; // rdx
  __int64 ***v117; // rax
  __int64 **v118; // rdx
  __m128i *j; // rbx
  const void *v120; // r15
  size_t v121; // r12
  __int64 v122; // rax
  __int64 v123; // rax
  _BYTE *v124; // rdx
  __int64 *v125; // rbx
  __int64 *v126; // rbp
  __int64 v127; // rdi
  __int64 v128; // r12
  __int64 v129; // r13
  __int64 v130; // rax
  __int64 v131; // rdi
  __int64 v132; // rbp
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rax
  const void *v138; // [rsp+8h] [rbp-F0h]
  __int64 *v139[2]; // [rsp+10h] [rbp-E8h] BYREF
  void **v140[4]; // [rsp+20h] [rbp-D8h] BYREF
  void *v141; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v142; // [rsp+48h] [rbp-B0h]
  _BYTE v143[48]; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v144; // [rsp+80h] [rbp-78h] BYREF
  _QWORD *v145; // [rsp+90h] [rbp-68h] BYREF
  __int64 *v146; // [rsp+98h] [rbp-60h]
  __int64 *v147; // [rsp+A0h] [rbp-58h]
  __int64 v148; // [rsp+A8h] [rbp-50h]

  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0x133u) )
  {
    v4 = sub_227D600();
    v5 = *(_QWORD *)(a2 + 8);
    v6 = v4;
    v144.m128i_i64[0] = (__int64)&v145;
    sub_10D8CD0(&v144, *(_BYTE **)(v5 + 16), *(_QWORD *)(v5 + 16) + *(_QWORD *)(v5 + 24));
    v7 = sub_227BF10(v6, v144.m128i_i64[0], v144.m128i_i64[1]);
    v8 = *(_BYTE **)(v7 + 32);
    if ( *(_QWORD *)(v7 + 24) > (unsigned __int64)v8 )
    {
LABEL_3:
      *(_QWORD *)(v7 + 32) = v8 + 1;
      *v8 = 10;
      goto LABEL_4;
    }
    goto LABEL_21;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0x135u) )
  {
    v11 = sub_227D600();
    v12 = sub_995540(v11, "21.1.5");
    sub_995540(v12, "\n");
    return 0;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC4Bu) )
  {
    v13 = 1;
    v14 = sub_227D600();
    v15 = sub_FD32E0();
    if ( v15 != 1 )
    {
      do
      {
        v20 = sub_227B910(v14, v13);
        v21 = *(_BYTE **)(v20 + 32);
        if ( (unsigned __int64)v21 < *(_QWORD *)(v20 + 24) )
        {
          *(_QWORD *)(v20 + 32) = v21 + 1;
          *v21 = 44;
        }
        else
        {
          v20 = sub_227BA10(v20, 44);
        }
        v16 = (const void *)sub_FD32F0(v13);
        v18 = sub_9954E0(v20, v16, v17);
        v19 = *(_BYTE **)(v18 + 32);
        if ( (unsigned __int64)v19 >= *(_QWORD *)(v18 + 24) )
        {
          sub_227BA10(v18, 10);
        }
        else
        {
          *(_QWORD *)(v18 + 32) = v19 + 1;
          *v19 = 10;
        }
        ++v13;
      }
      while ( v15 != v13 );
    }
    return 0;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0x83Cu) || sub_10DCD30(*(_QWORD *)(a2 + 80), 0x83Au) )
  {
    v23 = sub_10DCD30(*(_QWORD *)(a2 + 80), 0x83Au);
    sub_10DB250(a1, v23 != 0);
    return 0;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xD37u) )
  {
    v24 = sub_227D600();
    sub_10DE280(a1, a2, v24);
    return 0;
  }
  v25 = *(_QWORD *)(a2 + 80);
  v26 = 3397;
  if ( sub_10DCD30(v25, 0xD45u)
    || (v25 = *(_QWORD *)(a2 + 80), v26 = 72, sub_10DCD30(v25, 0x48u))
    || (v25 = *(_QWORD *)(a2 + 80), v26 = 3170, sub_10DCD30(v25, 0xC62u))
    || (v25 = *(_QWORD *)(a2 + 80), v26 = 3171, sub_10DCD30(v25, 0xC63u))
    || (v25 = *(_QWORD *)(a2 + 80), v26 = 3150, sub_10DCD30(v25, 0xC4Eu)) )
  {
    v27 = sub_227D6D0(v25, v26);
    sub_10DE280(a1, a2, v27);
    *(_BYTE *)(a1 + 1168) |= 4u;
  }
  v28 = *(_QWORD *)(a2 + 80);
  v29 = (_BYTE *)(elf_gnu_hash_bucket + 669);
  if ( sub_10DCD30(v28, 0xD45u) )
  {
    if ( *(_QWORD *)(a1 + 288) )
    {
      v48 = sub_227D6D0(v28, 3397);
      v49 = sub_995540(v48, "System configuration file directory: ");
      v29 = "\n";
      v28 = sub_227BF10(v49, *(_QWORD *)(a1 + 280), *(_QWORD *)(a1 + 288));
      sub_995540(v28, "\n");
    }
    if ( *(_QWORD *)(a1 + 320) )
    {
      v45 = sub_227D6D0(v28, v29);
      v46 = sub_995540(v45, "User configuration file directory: ");
      v47 = sub_227BF10(v46, *(_QWORD *)(a1 + 312), *(_QWORD *)(a1 + 320));
      sub_995540(v47, "\n");
    }
  }
  v30 = *(_QWORD *)(a2 + 80);
  v31 = *(_QWORD *)(a2 + 8);
  if ( sub_10DCD30(v30, 0xD45u) )
  {
    v32 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 112LL);
    v33 = sub_227D6D0(v30, 3397);
    v32(v31, v33);
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC5Du) )
  {
    v34 = sub_227D600();
    v35 = sub_227BF10(v34, *(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 256));
    v36 = *(_BYTE **)(v35 + 32);
    if ( (unsigned __int64)v36 >= *(_QWORD *)(v35 + 24) )
    {
      sub_227BA10(v35, 10);
    }
    else
    {
      *(_QWORD *)(v35 + 32) = v36 + 1;
      *v36 = 10;
    }
    return 0;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC60u) )
  {
    v37 = sub_227D600();
    sub_995540(v37, "programs: =");
    v38 = *(__int64 **)(a1 + 344);
    v39 = &v38[4 * *(unsigned int *)(a1 + 352)];
    if ( v38 == v39 )
    {
      v50 = *(__int64 **)(v31 + 1152);
      v51 = &v50[4 * *(unsigned int *)(v31 + 1160)];
      if ( v50 != v51 )
        goto LABEL_55;
    }
    else
    {
      while ( 1 )
      {
        v40 = sub_227D600();
        v41 = v38[1];
        v42 = *v38;
        v38 += 4;
        sub_227BF10(v40, v42, v41);
        if ( v38 == v39 )
          break;
        v43 = sub_227D600();
        v44 = *(_BYTE **)(v43 + 32);
        if ( (unsigned __int64)v44 >= *(_QWORD *)(v43 + 24) )
        {
          sub_227BA10(v43, 58);
        }
        else
        {
          *(_QWORD *)(v43 + 32) = v44 + 1;
          *v44 = 58;
        }
      }
      v50 = *(__int64 **)(v31 + 1152);
      v51 = &v50[4 * *(unsigned int *)(v31 + 1160)];
      while ( v50 != v51 )
      {
        v52 = sub_227D600();
        v53 = *(_BYTE **)(v52 + 32);
        if ( (unsigned __int64)v53 >= *(_QWORD *)(v52 + 24) )
        {
          sub_227BA10(v52, 58);
        }
        else
        {
          *(_QWORD *)(v52 + 32) = v53 + 1;
          *v53 = 58;
        }
LABEL_55:
        v54 = sub_227D600();
        v55 = v50[1];
        v56 = *v50;
        v50 += 4;
        sub_227BF10(v54, v56, v55);
      }
    }
    v57 = sub_227D600();
    sub_995540(v57, "\n");
    v58 = sub_227D600();
    v59 = sub_995540(v58, "libraries: =");
    sub_227BF10(v59, *(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 256));
    v60 = sub_10D4C90(a2);
    v62 = *(_QWORD **)(v31 + 624);
    v63 = &v62[4 * *(unsigned int *)(v31 + 632)];
    if ( v62 != v63 )
    {
      v64 = v61;
      v138 = (const void *)v60;
      do
      {
        v66 = sub_227D600();
        v67 = *(_BYTE **)(v66 + 32);
        if ( (unsigned __int64)v67 >= *(_QWORD *)(v66 + 24) )
        {
          sub_227BA10(v66, 58);
        }
        else
        {
          *(_QWORD *)(v66 + 32) = v67 + 1;
          *v67 = 58;
        }
        if ( *(_BYTE *)*v62 == 61 )
        {
          v68 = sub_227D600();
          v69 = sub_9954E0(v68, v138, v64);
          if ( !v62[1] )
            std::__throw_out_of_range_fmt(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              "basic_string::substr",
              1u,
              0);
          v144.m128i_i64[0] = (__int64)&v145;
          v70 = v62[1];
          if ( !v70 )
            std::__throw_out_of_range_fmt(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              "basic_string::basic_string",
              1u,
              0);
          sub_10D8DB0(&v144, (_BYTE *)(*v62 + 1LL), *v62 + v70);
          sub_227BF10(v69, v144.m128i_i64[0], v144.m128i_i64[1]);
          if ( (_QWORD **)v144.m128i_i64[0] != &v145 )
            operator delete((void *)v144.m128i_i64[0]);
        }
        else
        {
          v65 = sub_227D600();
          sub_227BF10(v65, *v62, v62[1]);
        }
        v62 += 4;
      }
      while ( v63 != v62 );
    }
    goto LABEL_73;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC53u) )
  {
    v22 = sub_227D600();
    sub_10E7090(&v144, (_QWORD *)a1, a2, *(_QWORD *)(a2 + 8));
    v7 = sub_227BF10(v22, v144.m128i_i64[0], v144.m128i_i64[1]);
    v8 = *(_BYTE **)(v7 + 32);
    if ( (unsigned __int64)v8 < *(_QWORD *)(v7 + 24) )
      goto LABEL_3;
LABEL_21:
    sub_227BA10(v7, 10);
    goto LABEL_4;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC5Fu) )
  {
    sub_1131410(&v144, v31);
    if ( (_BYTE)v147 )
    {
      v77 = sub_227D600();
      v78 = sub_227BF10(v77, v144.m128i_i64[0], v144.m128i_i64[1]);
      v79 = *(_BYTE **)(v78 + 32);
      if ( (unsigned __int64)v79 >= *(_QWORD *)(v78 + 24) )
      {
        sub_227BA10(v78, 10);
      }
      else
      {
        *(_QWORD *)(v78 + 32) = v79 + 1;
        *v79 = 10;
      }
    }
    else
    {
      v93 = sub_227D600();
      (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)v31 + 296LL))(&v141, v31);
      v94 = sub_227BF10(v93, v141, v142);
      v95 = *(_BYTE **)(v94 + 32);
      if ( (unsigned __int64)v95 >= *(_QWORD *)(v94 + 24) )
      {
        sub_227BA10(v94, 10);
      }
      else
      {
        *(_QWORD *)(v94 + 32) = v95 + 1;
        *v95 = 10;
      }
      if ( v141 != v143 )
        operator delete(v141);
    }
    if ( !(_BYTE)v147 )
      return 0;
LABEL_4:
    v9 = (void *)v144.m128i_i64[0];
    if ( (_QWORD **)v144.m128i_i64[0] == &v145 )
      return 0;
LABEL_5:
    operator delete(v9);
    return 0;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC4Cu) )
  {
    sub_FD60E0((__int64)&v144);
    if ( v144.m128i_i64[0] != v144.m128i_i64[1] )
    {
      v80 = 0;
      v81 = 0;
      do
      {
        v82 = sub_227D600();
        v81 += 2;
        v83 = sub_995540(v82, "  ");
        v84 = sub_227BF10(v83, *(_QWORD *)(v80 + v144.m128i_i64[0]), *(_QWORD *)(v80 + v144.m128i_i64[0] + 8));
        v85 = sub_995540(v84, "\n  ");
        v86 = (_QWORD *)(v144.m128i_i64[0] + v80 + 32);
        v80 += 64;
        v87 = sub_227BF10(v85, *v86, v86[1]);
        sub_995540(v87, "\n\n");
      }
      while ( v81 != (v144.m128i_i64[1] - v144.m128i_i64[0]) >> 5 );
    }
    sub_9B4A30((void ***)&v144);
    return 0;
  }
  v88 = sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC4Fu);
  if ( v88 )
  {
    v89 = sub_227D600();
    v90 = **(char ***)(v88 + 48);
    v91 = 0;
    if ( v90 )
      v91 = j__strlen(v90);
    sub_10E6520(&v144, (_QWORD *)a1, v90, v91, v31);
    v92 = sub_227BF10(v89, v144.m128i_i64[0], v144.m128i_i64[1]);
    sub_995540(v92, "\n");
    v9 = (void *)v144.m128i_i64[0];
    if ( (_QWORD **)v144.m128i_i64[0] == &v145 )
      return 0;
    goto LABEL_5;
  }
  v71 = sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC5Bu);
  if ( v71 )
  {
    v72 = *(const char ***)(v71 + 48);
    v73 = (char *)*v72;
    if ( *v72 )
    {
      v74 = j__strlen(*v72);
      if ( v74 )
      {
        v75 = sub_227D600();
        sub_10E9650(&v144, a1, v73, v74, v31);
        sub_227BF10(v75, v144.m128i_i64[0], v144.m128i_i64[1]);
        if ( (_QWORD **)v144.m128i_i64[0] != &v145 )
          operator delete((void *)v144.m128i_i64[0]);
      }
    }
LABEL_73:
    v76 = sub_227D600();
    sub_995540(v76, "\n");
    return 0;
  }
  v96 = sub_10DCD30(*(_QWORD *)(a2 + 80), 0x93u);
  if ( v96 )
  {
    v97 = **(char ***)(v96 + 48);
    v98 = 0;
    if ( v97 )
      v98 = j__strlen(v97);
    sub_10FDF50(a1, v97, v98);
    return 0;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC52u) )
  {
    v99 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 600LL))(v31, *(_QWORD *)(a2 + 80));
    (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD))(*(_QWORD *)v31 + 528LL))(
      &v144,
      v31,
      *(_QWORD *)(a2 + 80),
      0);
    sub_22B9ED0(&v141, &v144);
    if ( (_QWORD **)v144.m128i_i64[0] != &v145 )
      operator delete((void *)v144.m128i_i64[0]);
    v100 = (void *)sub_22B7480(&v141);
    sub_10D5E20(a2, (_QWORD *)v31, v100, v101, 0);
    sub_10DB210(&v144, (__int64)&v141);
    sub_10DA960((__m128i **)v140, (__m128i *)v31, &v144);
    if ( (_QWORD **)v144.m128i_i64[0] != &v145 )
      operator delete((void *)v144.m128i_i64[0]);
    if ( v99 )
    {
      if ( v99 == 1 )
      {
        v102 = sub_227D600();
        v103 = j__strlen("libgcc.a");
        sub_10E6520(&v144, (_QWORD *)a1, "libgcc.a", v103, v31);
        v104 = sub_227BF10(v102, v144.m128i_i64[0], v144.m128i_i64[1]);
        sub_995540(v104, "\n");
        v105 = (void *)v144.m128i_i64[0];
        if ( (_QWORD **)v144.m128i_i64[0] != &v145 )
          goto LABEL_114;
      }
    }
    else
    {
      v106 = sub_227D600();
      v107 = *(void (__fastcall **)(__m128i *, __int64, _QWORD, char *, size_t, __int64, _QWORD, size_t))(*(_QWORD *)v31 + 304LL);
      v108 = j__strlen("builtins");
      v107(&v144, v31, *(_QWORD *)(a2 + 80), "builtins", v108, 1, 0, v108);
      v109 = sub_227BF10(v106, v144.m128i_i64[0], v144.m128i_i64[1]);
      sub_995540(v109, "\n");
      v105 = (void *)v144.m128i_i64[0];
      if ( (_QWORD **)v144.m128i_i64[0] != &v145 )
LABEL_114:
        operator delete(v105);
    }
    sub_10DAB00((__m128i **)v140);
    v9 = v141;
    if ( v141 == v143 )
      return 0;
    goto LABEL_5;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC57u) )
  {
    v110 = *(_QWORD *)(v31 + 1848);
    for ( i = *(_QWORD *)(v31 + 1840); i != v110; i += 192 )
    {
      if ( !*(_BYTE *)(i + 184) )
      {
        v112 = sub_227D600();
        v113 = sub_110AD60(v112, i);
        sub_995540(v113, "\n");
      }
    }
    return 0;
  }
  if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC56u) )
  {
    sub_1135F20(v140, v31, *(_QWORD *)(a2 + 80));
    sub_11101E0(&v141, v31 + 1840, v140);
    v144.m128i_i32[2] = 0;
    v145 = nullptr;
    v146 = &v144.m128i_i64[1];
    v147 = &v144.m128i_i64[1];
    v148 = 0;
    sub_A45C10(v139, (__int64 *)v141, (_DWORD)v142 == 0);
    v114 = (__int64 ***)v139[0];
    sub_A45C10(v139, (__int64 *)v141 + (unsigned int)v142, 1);
    v115 = v139[0];
    while ( v114 != (__int64 ***)v115 )
    {
      v116 = **v114;
      v139[0] = (__int64 *)(*v114 + 1);
      v139[1] = v116;
      sub_10E74B0((__int64)&v144, (__int64 *)v139);
      v117 = v114 + 1;
      do
      {
        do
        {
          v118 = *v117;
          v114 = v117++;
        }
        while ( !v118 );
      }
      while ( v118 == (__int64 **)-8LL );
    }
    for ( j = (__m128i *)v146; j != (__m128i *)&v144.m128i_u64[1]; j = (__m128i *)std::_Rb_tree_increment(j) )
    {
      v120 = (const void *)j[2].m128i_i64[0];
      v121 = j[2].m128i_u64[1];
      v122 = sub_227D600();
      v123 = sub_9954E0(v122, v120, v121);
      v124 = *(_BYTE **)(v123 + 32);
      if ( (unsigned __int64)v124 < *(_QWORD *)(v123 + 24) )
      {
        *(_QWORD *)(v123 + 32) = v124 + 1;
        *v124 = 10;
      }
      else
      {
        sub_227BA10(v123, 10);
      }
    }
    sub_9ED9D0((__int64)&v144, v145);
    sub_A42760(&v141);
    sub_9B4A30(v140);
    return 0;
  }
  else
  {
    if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC55u) )
    {
      v125 = *(__int64 **)(v31 + 2176);
      v126 = &v125[24 * *(unsigned int *)(v31 + 2184)];
      while ( v126 != v125 )
      {
        v128 = v125[1];
        if ( v128 )
        {
          v129 = *v125;
          v130 = sub_227D600();
          v131 = sub_9954E0(v130, (const void *)(v129 + 1), v128 - 1);
          sub_995540(v131, "\n");
        }
        else
        {
          v127 = sub_227D600();
          sub_995540(v127, ".\n");
        }
        v125 += 24;
      }
      return 0;
    }
    if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC64u) )
    {
      v132 = sub_227D600();
      v144.m128i_i64[0] = (__int64)&v145;
      sub_10D8CD0(&v144, *(_BYTE **)(v31 + 16), *(_QWORD *)(v31 + 16) + *(_QWORD *)(v31 + 24));
      v133 = sub_227BF10(v132, v144.m128i_i64[0], v144.m128i_i64[1]);
      sub_995540(v133, "\n");
      v9 = (void *)v144.m128i_i64[0];
      if ( (_QWORD **)v144.m128i_i64[0] == &v145 )
        return 0;
      goto LABEL_5;
    }
    if ( sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC4Du) )
    {
      (*(void (__fastcall **)(void **, __int64, _QWORD, _QWORD))(*(_QWORD *)v31 + 528LL))(
        &v141,
        v31,
        *(_QWORD *)(a2 + 80),
        0);
      sub_22B9ED0(&v144, &v141);
      if ( v141 != v143 )
        operator delete(v141);
      v134 = sub_227D600();
      v135 = sub_227BF10(v134, v144.m128i_i64[0], v144.m128i_i64[1]);
      sub_995540(v135, "\n");
      goto LABEL_4;
    }
    v136 = sub_10DCD30(*(_QWORD *)(a2 + 80), 0xC65u);
    result = 1;
    if ( v136 )
    {
      v137 = sub_227D600();
      sub_2124440(v137);
      return 0;
    }
  }
  return result;
}
