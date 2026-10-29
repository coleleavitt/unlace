__int64 __fastcall sub_56F0E0(__int64 a1, __int64 a2, double a3)
{
  char **exception; // rbp
  char *v5; // rsi
  void **p_s2; // rdi
  void *v8; // rbx
  int v9; // r14d
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // r15d
  unsigned int v13; // r13d
  int v14; // r9d
  unsigned int v15; // eax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r13
  int v21; // ebx
  __int64 v22; // r15
  int v23; // r14d
  __int64 v24; // rbp
  __int64 v25; // r12
  int v26; // eax
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r12
  const char *v30; // rbx
  __int64 (__fastcall *v31)(__int64); // rax
  __int64 v32; // rdi
  _QWORD *v33; // rbp
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  _QWORD *v38; // rcx
  int v40; // eax
  __int64 v41; // r10
  __int64 v42; // rcx
  __int64 v43; // r13
  __int64 v44; // rbp
  int v45; // r12d
  const char *v46; // r14
  int v47; // ebx
  int v48; // eax
  __int64 v49; // rax
  int v50; // edx
  unsigned int v51; // ebx
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rcx
  size_t v55; // r13
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  unsigned int v58; // r10d
  __int64 v59; // rdx
  char *v60; // r8
  _QWORD *v61; // r9
  const char *v62; // rax
  const char *v63; // rdx
  __int64 v64; // rdx
  _QWORD *v65; // rsi
  _QWORD *v66; // rdx
  __int64 v67; // rsi
  char *v68; // r13
  void *v69; // r12
  int v70; // ebx
  __int64 v71; // r15
  char *v72; // rbp
  __int64 v73; // rdi
  _QWORD *v74; // rax
  __int64 v75; // rcx
  int v76; // r9d
  __int64 v77; // rbp
  int v78; // r14d
  const char *v79; // rbx
  __int64 v80; // rax
  __int64 (__fastcall *v81)(__int64); // rax
  _QWORD *v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rcx
  __int64 v85; // [rsp+8h] [rbp-E0h]
  __int64 v86; // [rsp+10h] [rbp-D8h]
  int v87; // [rsp+10h] [rbp-D8h]
  __int64 v88; // [rsp+10h] [rbp-D8h]
  _QWORD *v89; // [rsp+10h] [rbp-D8h]
  char *v90; // [rsp+10h] [rbp-D8h]
  unsigned int v91; // [rsp+10h] [rbp-D8h]
  int v92; // [rsp+10h] [rbp-D8h]
  unsigned int v93; // [rsp+10h] [rbp-D8h]
  __int64 v94; // [rsp+20h] [rbp-C8h]
  __int64 v95; // [rsp+20h] [rbp-C8h]
  _QWORD *v96; // [rsp+20h] [rbp-C8h]
  __int64 v97; // [rsp+28h] [rbp-C0h]
  unsigned int v98; // [rsp+28h] [rbp-C0h]
  unsigned int v99; // [rsp+28h] [rbp-C0h]
  __int64 v100; // [rsp+28h] [rbp-C0h]
  char *v101; // [rsp+28h] [rbp-C0h]
  char *v102; // [rsp+30h] [rbp-B8h]
  unsigned int v103; // [rsp+30h] [rbp-B8h]
  unsigned int v104; // [rsp+30h] [rbp-B8h]
  unsigned int v105; // [rsp+38h] [rbp-B0h]
  _QWORD *v106; // [rsp+38h] [rbp-B0h]
  _QWORD *v107; // [rsp+40h] [rbp-A8h]
  _QWORD *v108; // [rsp+40h] [rbp-A8h]
  const char *v109; // [rsp+48h] [rbp-A0h]
  const char *v110; // [rsp+48h] [rbp-A0h]
  __int64 *v111; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v112[16]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v113; // [rsp+70h] [rbp-78h] BYREF
  int v114; // [rsp+78h] [rbp-70h]
  __int64 v115; // [rsp+80h] [rbp-68h]
  void *s2; // [rsp+90h] [rbp-58h] BYREF
  int v117; // [rsp+98h] [rbp-50h]
  __int64 v118; // [rsp+A0h] [rbp-48h]

  v5 = "recycle";
  sub_644D80(v112, "recycle", 2);
  p_s2 = (void **)a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  v8 = *(void **)(a2 + 16);
  if ( v8 )
  {
    v5 = (char *)(a2 + 16);
    v113 = 0;
    p_s2 = (void **)&v113;
    sub_577180(&v113, a2 + 16);
    v9 = *(_DWORD *)(a2 + 24);
    v115 = 0;
    v85 = v113;
    v114 = v9;
    if ( v113 )
    {
      p_s2 = &s2;
      v5 = (char *)&v113;
      s2 = nullptr;
      sub_577180(&s2, &v113);
      v8 = s2;
    }
    else
    {
      v8 = nullptr;
    }
  }
  else
  {
    v85 = 0;
    v9 = *(_DWORD *)(a2 + 24);
    v115 = 0;
    v114 = v9;
  }
  v10 = *(unsigned int *)(a1 + 40);
  v11 = *(_DWORD *)(a1 + 48);
  v117 = v9;
  v118 = 0;
  v12 = 2 * v10;
  if ( 3 * (int)v10 >= (unsigned int)(4 * (*(_DWORD *)(a1 + 44) + v11)) )
    goto LABEL_5;
  v98 = 2 * v10;
  v55 = 32LL * v12;
  p_s2 = (void **)v55;
  v56 = (_QWORD *)sub_186B270(v55);
  v10 = v98;
  v96 = v56;
  v57 = &v56[v55 / 8];
  if ( v12 )
  {
    do
    {
      *v56 = 0;
      v56 += 4;
      *(v56 - 3) = 0;
      *((_DWORD *)v56 - 4) = 0;
    }
    while ( v56 != v57 );
  }
  v5 = *(char **)(a1 + 32);
  v58 = v12 - 1;
  v59 = *(unsigned int *)(a1 + 40);
  v60 = &v5[32 * v59];
  v61 = &v96[v55 / 8];
  v62 = v5 + 8;
  if ( v5 != v60 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v62 - 1) != 2 )
      {
        v63 = v62 + 32;
        if ( v60 == v62 + 24 )
          goto LABEL_75;
        goto LABEL_64;
      }
      p_s2 = (void **)*((unsigned int *)v62 - 2);
      v64 = 32LL * ((unsigned int)p_s2 & v58);
      v65 = &v96[(unsigned __int64)v64 / 8];
      if ( v55 == v64 )
      {
LABEL_97:
        v66 = v96;
        if ( v96 == v65 )
        {
LABEL_112:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        while ( *((_DWORD *)v66 + 1) )
        {
          v66 += 4;
          if ( v65 == v66 )
            goto LABEL_112;
        }
        *(_DWORD *)v66 = (_DWORD)p_s2;
        *((_DWORD *)v66 + 1) = 2;
        if ( v62 != (const char *)(v66 + 1) )
        {
          v83 = v66[1];
          if ( v83 )
          {
            p_s2 = (void **)(v83 - 8);
            v110 = v62;
            v108 = v66;
            v106 = v61;
            v104 = v58;
            v101 = v60;
            v93 = v10;
            sub_186B220((void *)(v83 - 8));
            v62 = v110;
            v66 = v108;
            v61 = v106;
            v58 = v104;
            v60 = v101;
            v10 = v93;
          }
          goto LABEL_73;
        }
      }
      else
      {
        v66 = &v96[(unsigned __int64)v64 / 8];
        while ( *((_DWORD *)v66 + 1) )
        {
          v66 += 4;
          if ( v61 == v66 )
            goto LABEL_97;
        }
        *(_DWORD *)v66 = (_DWORD)p_s2;
        *((_DWORD *)v66 + 1) = 2;
        if ( v62 != (const char *)(v66 + 1) )
        {
          v67 = v66[1];
          if ( v67 )
          {
            p_s2 = (void **)(v67 - 8);
            v109 = v62;
            v107 = v61;
            v105 = v58;
            v102 = v60;
            v99 = v10;
            v89 = v66;
            sub_186B220((void *)(v67 - 8));
            v62 = v109;
            v61 = v107;
            v58 = v105;
            v60 = v102;
            v10 = v99;
            v66 = v89;
          }
LABEL_73:
          v66[1] = 0;
          v66[1] = *(_QWORD *)v62;
          *(_QWORD *)v62 = 0;
        }
      }
      *((_DWORD *)v66 + 4) = *((_DWORD *)v62 + 2);
      v5 = *((char **)v62 + 2);
      v66[3] = v5;
      v63 = v62 + 32;
      if ( v60 == v62 + 24 )
      {
LABEL_75:
        v59 = *(unsigned int *)(a1 + 40);
        v60 = *(char **)(a1 + 32);
        break;
      }
LABEL_64:
      v62 = v63;
    }
  }
  if ( v60 )
  {
    if ( (_DWORD)v59 )
    {
      v100 = a2;
      v68 = v60;
      v69 = v8;
      v103 = v12;
      v70 = v10;
      v71 = a1;
      v90 = &v60[32 * v59];
      v72 = v60;
      do
      {
        while ( 1 )
        {
          v73 = *((_QWORD *)v68 + 1);
          if ( !v73 )
            break;
          v68 += 32;
          sub_186B220((void *)(v73 - 8));
          if ( v90 == v68 )
            goto LABEL_81;
        }
        v68 += 32;
      }
      while ( v68 != v90 );
LABEL_81:
      LODWORD(v10) = v70;
      v60 = v72;
      v8 = v69;
      a1 = v71;
      a2 = v100;
      v12 = v103;
    }
    p_s2 = (void **)v60;
    v91 = v10;
    sub_186B220(v60);
    v10 = v91;
  }
  *(_DWORD *)(a1 + 40) = v12;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 32) = v96;
LABEL_5:
  if ( v8 && (v13 = *((_DWORD *)v8 - 1)) != 0 )
  {
    v111 = nullptr;
    s2 = v8;
    sub_577180(&v111, &s2);
    v5 = (char *)v13;
    p_s2 = (void **)&v111;
    v40 = sub_568680(&v111, v13);
    v14 = v40;
    if ( v41 )
    {
      p_s2 = (void **)(v41 - 8);
      v87 = v40;
      sub_186B220((void *)(v41 - 8));
      v14 = v87;
    }
    v10 = *(unsigned int *)(a1 + 40);
  }
  else
  {
    v14 = 778;
  }
  v15 = v10 - 1;
  v16 = *(_QWORD *)(a1 + 32);
  v17 = 32 * v10;
  v18 = 32LL * (v14 & v15);
  v19 = v16 + v18;
  if ( v18 == v17 )
  {
    v42 = 0;
LABEL_42:
    if ( v16 == v19 )
    {
LABEL_104:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v95 = a1;
    v43 = v19;
    v44 = v42;
    v88 = a2;
    v45 = v9;
    v46 = (const char *)v8;
    v47 = v14;
    while ( 1 )
    {
      v48 = *(_DWORD *)(v16 + 4);
      if ( v48 == 2 )
        break;
      if ( !v48 )
      {
        v84 = v44;
        v76 = v47;
        v77 = v95;
        v79 = v46;
        v20 = v16;
        v78 = v45;
        v29 = v88;
        if ( v84 )
        {
          --*(_DWORD *)(v95 + 48);
          v20 = v84;
        }
        v80 = *(_QWORD *)(v20 + 8);
        if ( v80 )
          goto LABEL_89;
        goto LABEL_90;
      }
      v44 = v16;
LABEL_46:
      v16 += 32;
      if ( v43 == v16 )
        goto LABEL_104;
    }
    if ( *(_DWORD *)v16 != v47 )
      goto LABEL_46;
    p_s2 = *(void ***)(v16 + 8);
    if ( p_s2 )
    {
      v49 = *((unsigned int *)p_s2 - 1);
      if ( !v46 )
      {
        v50 = 0;
        goto LABEL_52;
      }
    }
    else
    {
      if ( !v46 )
      {
LABEL_54:
        if ( v45 == *(_DWORD *)(v16 + 16) )
        {
          v29 = v88;
          v30 = v46;
          v20 = v16;
          goto LABEL_22;
        }
        goto LABEL_46;
      }
      v49 = 0;
    }
    v50 = *((_DWORD *)v46 - 1);
LABEL_52:
    if ( (_DWORD)v49 != v50 )
      goto LABEL_46;
    v5 = (char *)v46;
    if ( memcmp(p_s2, v46, 8 * v49) )
      goto LABEL_46;
    goto LABEL_54;
  }
  v97 = *(_QWORD *)(a1 + 32);
  v5 = (char *)v8;
  v20 = v16 + v18;
  v94 = a1;
  v21 = v9;
  v22 = v16 + v17;
  v23 = v14;
  v86 = a2;
  v24 = 0;
  v25 = v19;
  while ( 1 )
  {
    v26 = *(_DWORD *)(v20 + 4);
    if ( v26 != 2 )
      break;
    if ( *(_DWORD *)v20 != v23 )
      goto LABEL_12;
    p_s2 = *(void ***)(v20 + 8);
    if ( p_s2 )
    {
      v27 = *((_DWORD *)p_s2 - 1);
      if ( !v5 )
      {
        v28 = 0;
        goto LABEL_18;
      }
    }
    else
    {
      if ( !v5 )
        goto LABEL_20;
      v27 = 0;
    }
    v28 = *((unsigned int *)v5 - 1);
LABEL_18:
    if ( (_DWORD)v28 == v27 && !memcmp(p_s2, v5, 8 * v28) )
    {
LABEL_20:
      if ( *(_DWORD *)(v20 + 16) == v21 )
      {
        v29 = v86;
        v30 = v5;
LABEL_22:
        if ( v30 )
        {
          p_s2 = (void **)(v30 - 8);
          sub_186B220((void *)(v30 - 8));
        }
        goto LABEL_24;
      }
    }
LABEL_12:
    v20 += 32;
    if ( v22 == v20 )
    {
      v19 = v25;
      v42 = v24;
      v16 = v97;
      a1 = v94;
      a2 = v86;
      v14 = v23;
      v9 = v21;
      v8 = v5;
      goto LABEL_42;
    }
  }
  if ( v26 )
  {
    v24 = v20;
    goto LABEL_12;
  }
  v75 = v24;
  v76 = v23;
  v77 = v94;
  v78 = v21;
  v29 = v86;
  v79 = v5;
  if ( v75 )
  {
    --*(_DWORD *)(v94 + 48);
    v20 = v75;
  }
  v80 = *(_QWORD *)(v20 + 8);
  if ( v80 )
  {
LABEL_89:
    p_s2 = (void **)(v80 - 8);
    v92 = v76;
    sub_186B220((void *)(v80 - 8));
    v76 = v92;
  }
LABEL_90:
  *(_QWORD *)(v20 + 8) = v79;
  *(_DWORD *)(v20 + 16) = v78;
  *(_QWORD *)(v20 + 24) = 0;
  *(_DWORD *)(v20 + 4) = 2;
  *(_DWORD *)v20 = v76;
  ++*(_DWORD *)(v77 + 44);
LABEL_24:
  if ( v85 )
  {
    p_s2 = (void **)(v85 - 8);
    sub_186B220((void *)(v85 - 8));
  }
  if ( !*(_QWORD *)(v20 + 24) )
  {
    p_s2 = (void **)&byte_8;
    v74 = (_QWORD *)sub_186B270(8u);
    *v74 = 0;
    *(_QWORD *)(v20 + 24) = v74;
  }
  if ( (unsigned int)sub_180B130(p_s2) <= 0xB )
  {
LABEL_33:
    v33 = *(_QWORD **)(v20 + 24);
    v34 = (_QWORD *)*v33;
    if ( !*v33 )
      goto LABEL_96;
  }
  else
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(p_s2, v5);
      std::__ostream_insert<char,std::char_traits<char>>();
      v31 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 104LL);
      if ( v31 != sub_568200 )
        ((void (__fastcall *)(__int64, const char *))v31)(v29, "Recycle: ");
      v32 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v32, "\n");
      goto LABEL_33;
    }
    sub_180B150(p_s2, v5);
    std::__ostream_insert<char,std::char_traits<char>>();
    v81 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 104LL);
    if ( v81 != sub_568200 )
      ((void (__fastcall *)(__int64, const char *))v81)(v29, "Recycle: ");
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v33 = *(_QWORD **)(v20 + 24);
    v34 = (_QWORD *)*v33;
    if ( !*v33 )
    {
LABEL_96:
      v82 = (_QWORD *)sub_186B270(0x18u);
      v34 = v82 + 1;
      *v82 = 2;
      v37 = 1;
      *v33 = v34;
      v38 = v34;
      goto LABEL_36;
    }
  }
  v35 = *((_DWORD *)v34 - 1);
  if ( v35 == *((_DWORD *)v34 - 2) )
  {
    v51 = (3 * v35 + 1) >> 1;
    v52 = 8 * v51 + 8;
    if ( 8 * v35 + 8 >= (unsigned int)v52 || v35 >= v51 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&s2, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &s2);
      sub_233E40((__int64)&s2);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v53 = (unsigned int *)sub_186B300(v34 - 1, v52);
    v54 = v53[1];
    v34 = v53 + 2;
    *v33 = v53 + 2;
    *v53 = v51;
    LODWORD(v53) = v54;
    v38 = &v34[v54];
    v37 = (_DWORD)v53 + 1;
  }
  else
  {
    v36 = v35;
    v37 = v35 + 1;
    v38 = &v34[v36];
  }
LABEL_36:
  *v38 = v29;
  *((_DWORD *)v34 - 1) = v37;
  return sub_644EE0(v112);
}

