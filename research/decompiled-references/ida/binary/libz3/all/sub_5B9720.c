__int64 __fastcall sub_5B9720(__int64 a1, __int64 a2)
{
  char **v2; // r12
  char **exception; // r12
  char **v4; // r12
  char **v5; // r12
  __int64 v6; // r10
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // rdx
  int v11; // esi
  unsigned int v12; // r8d
  _QWORD *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdi
  _QWORD *i; // rax
  _QWORD *v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // r12
  _QWORD *v20; // rbp
  __int64 v21; // r15
  unsigned int v22; // r13d
  __int64 v23; // r8
  unsigned int v24; // eax
  _QWORD *v25; // rdx
  __int64 v26; // r15
  int v27; // esi
  unsigned int v28; // r8d
  __int64 v29; // r13
  int v30; // ecx
  size_t v31; // r15
  __int64 *v32; // r14
  int v33; // edi
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 *v36; // rax
  _QWORD *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // r13d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // r8d
  __m128i *v46; // rdx
  __m128i *v47; // rax
  const __m128i *v48; // r12
  __m128i *v49; // r11
  __int64 v50; // rdx
  __m128i *v51; // rsi
  __m128i *v52; // rdx
  __m128i v53; // xmm0
  unsigned int v54; // r14d
  __int64 v55; // r15
  _QWORD *v56; // r13
  __int64 v57; // rcx
  unsigned int v58; // esi
  __int64 v59; // r11
  unsigned int v60; // esi
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // r15
  __int64 v64; // rax
  __int64 v65; // r14
  _QWORD *v66; // rcx
  unsigned int v67; // eax
  __int64 v68; // rdx
  int v69; // eax
  __int64 *v70; // rdx
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rbx
  _QWORD *v74; // rcx
  unsigned int v75; // eax
  __int64 v76; // rdx
  int v77; // eax
  __int64 *v78; // rdx
  unsigned int v80; // r12d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rdx
  unsigned int v84; // r8d
  unsigned int v85; // eax
  _DWORD *v86; // rax
  __int64 v87; // rax
  int v88; // esi
  unsigned int v89; // r15d
  unsigned int v90; // edx
  unsigned int *v91; // rax
  __int64 v92; // rdx
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rcx
  int v97; // [rsp+0h] [rbp-A8h]
  unsigned int v98; // [rsp+8h] [rbp-A0h]
  int v99[2]; // [rsp+8h] [rbp-A0h]
  int v100[2]; // [rsp+8h] [rbp-A0h]
  int v101[2]; // [rsp+8h] [rbp-A0h]
  int v102[2]; // [rsp+8h] [rbp-A0h]
  int v103[2]; // [rsp+8h] [rbp-A0h]
  int v104[2]; // [rsp+10h] [rbp-98h]
  int v105[2]; // [rsp+10h] [rbp-98h]
  int v106[2]; // [rsp+10h] [rbp-98h]
  __int64 v107; // [rsp+18h] [rbp-90h]
  __int64 v108; // [rsp+20h] [rbp-88h]
  __int64 v109; // [rsp+28h] [rbp-80h]
  int v110; // [rsp+30h] [rbp-78h]
  int v111; // [rsp+38h] [rbp-70h]
  int v112; // [rsp+40h] [rbp-68h]
  void *v113; // [rsp+48h] [rbp-60h]
  __int64 v114[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = a1;
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(unsigned int *)(a1 + 128);
  v10 = *(_QWORD **)(a1 + 120);
  v11 = *(_DWORD *)(v8 + 12);
  v12 = v9 - 1;
  v9 *= 16;
  v13 = (_QWORD *)((char *)v10 + v9);
  v14 = 16LL * (v11 & v12);
  v15 = &v10[(unsigned __int64)v14 / 8];
  if ( v14 != v9 )
  {
    for ( i = &v10[(unsigned __int64)v14 / 8]; v13 != i; i += 2 )
    {
      v17 = (_QWORD *)*i;
      if ( *i > 1u )
      {
        if ( *((_DWORD *)v17 + 3) == v11 && (_QWORD *)v8 == v17 )
        {
          v17 = i;
          goto LABEL_8;
        }
      }
      else if ( !v17 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v10 != v15 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = (_QWORD *)*v10;
        if ( *v10 > 1u )
          break;
        if ( !v17 )
          goto LABEL_8;
        v10 += 2;
        if ( v15 == v10 )
          goto LABEL_44;
      }
      if ( *((_DWORD *)v17 + 3) == v11 && (_QWORD *)v8 == v17 )
        break;
      v10 += 2;
      if ( v15 == v10 )
        goto LABEL_44;
    }
    v17 = v10;
LABEL_8:
    v18 = *(_DWORD *)(a2 + 24);
    v98 = v18;
    if ( !v18 )
      goto LABEL_45;
LABEL_9:
    v19 = 0;
    v20 = nullptr;
    v21 = 4LL * v18;
    do
    {
      while ( 1 )
      {
        v22 = *(_DWORD *)(v17[1] + v19);
        if ( v22 == 1 )
          break;
        v19 += 4;
        if ( v21 == v19 )
          goto LABEL_16;
      }
      v23 = *(_QWORD *)(a2 + 2 * v19 + 32);
      if ( v20 )
      {
        v24 = *((_DWORD *)v20 - 1);
        if ( v24 == *((_DWORD *)v20 - 2) )
        {
          v40 = (3 * v24 + 1) >> 1;
          v41 = 8 * v40 + 8;
          if ( 8 * v24 + 8 >= (unsigned int)v41 || v24 >= v40 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v114, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v114);
            sub_233E40((__int64)v114);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v108 = v6;
          v107 = v8;
          *(_QWORD *)v104 = *(_QWORD *)(a2 + 2 * v19 + 32);
          v42 = (unsigned int *)sub_186B300(v20 - 1, v41);
          *v42 = v40;
          v20 = v42 + 2;
          v43 = v42[1];
          v23 = *(_QWORD *)v104;
          v8 = v107;
          v6 = v108;
          v25 = &v20[v43];
          v22 = v43 + 1;
        }
        else
        {
          v22 = v24 + 1;
          v25 = &v20[v24];
        }
      }
      else
      {
        v108 = v6;
        v107 = v8;
        *(_QWORD *)v104 = *(_QWORD *)(a2 + 2 * v19 + 32);
        v93 = (_QWORD *)sub_186B270(0x18u);
        v23 = *(_QWORD *)v104;
        v8 = v107;
        v20 = v93 + 1;
        *v93 = 2;
        v6 = v108;
        v25 = v93 + 1;
      }
      v19 += 4;
      *v25 = v23;
      *((_DWORD *)v20 - 1) = v22;
    }
    while ( v21 != v19 );
    goto LABEL_16;
  }
LABEL_44:
  v18 = *(_DWORD *)(a2 + 24);
  v17 = nullptr;
  v98 = v18;
  if ( v18 )
    goto LABEL_9;
LABEL_45:
  v20 = nullptr;
LABEL_16:
  v26 = *(unsigned int *)(v6 + 152);
  v27 = *(_DWORD *)(v6 + 160);
  v28 = 2 * v26;
  if ( 3 * (int)v26 < (unsigned int)(4 * (v27 + *(_DWORD *)(v6 + 156))) )
  {
    v108 = v6;
    v31 = 16LL * v28;
    v107 = v8;
    v104[0] = v28;
    v44 = sub_186B270(v31);
    v45 = v104[0];
    v29 = v44;
    v46 = (__m128i *)v44;
    v8 = v107;
    v6 = v108;
    v47 = (__m128i *)(v31 + v44);
    if ( v104[0] )
    {
      if ( (((_BYTE)v47 - (_BYTE)v29) & 0x10) == 0
        || (v46 = (__m128i *)(v29 + 16), *(_OWORD *)v29 = 0, (__m128i *)(v29 + 16) != v47) )
      {
        do
        {
          *v46 = 0;
          v46 += 2;
          v46[-1] = 0;
        }
        while ( v46 != v47 );
      }
    }
    v48 = *(const __m128i **)(v108 + 144);
    v30 = v104[0] - 1;
    v32 = (__int64 *)v47;
    v49 = (__m128i *)&v48[*(unsigned int *)(v108 + 152)];
    if ( v48 != v49 )
    {
      do
      {
        while ( v48->m128i_i64[0] <= 1uLL )
        {
          if ( v49 == ++v48 )
            goto LABEL_60;
        }
        v50 = 16LL * (*(_DWORD *)(v48->m128i_i64[0] + 12) & (unsigned int)v30);
        v51 = (__m128i *)(v29 + v50);
        if ( v31 == v50 )
        {
LABEL_64:
          if ( (__m128i *)v29 == v51 )
          {
LABEL_104:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v52 = (__m128i *)v29;
          while ( v52->m128i_i64[0] )
          {
            if ( v51 == ++v52 )
              goto LABEL_104;
          }
        }
        else
        {
          v52 = (__m128i *)(v29 + v50);
          while ( v52->m128i_i64[0] )
          {
            if ( v47 == ++v52 )
              goto LABEL_64;
          }
        }
        v53 = _mm_loadu_si128(v48++);
        *v52 = v53;
      }
      while ( v49 != v48 );
LABEL_60:
      v49 = *(__m128i **)(v108 + 144);
    }
    if ( v49 )
    {
      LODWORD(v109) = v104[0];
      LODWORD(v107) = v104[0] - 1;
      *(_QWORD *)v104 = v8;
      sub_186B220(v49);
      v45 = v109;
      v6 = v108;
      v30 = v107;
      v8 = *(_QWORD *)v104;
    }
    *(_QWORD *)(v6 + 144) = v29;
    v27 = 0;
    *(_DWORD *)(v6 + 152) = v45;
    *(_DWORD *)(v6 + 160) = 0;
  }
  else
  {
    v29 = *(_QWORD *)(v6 + 144);
    v30 = v26 - 1;
    v31 = 16 * v26;
    v32 = (__int64 *)(v29 + v31);
  }
  v33 = *(_DWORD *)(v8 + 12);
  v34 = 16LL * (v33 & (unsigned int)v30);
  v35 = v29 + v34;
  if ( v34 != v31 )
  {
    v36 = (__int64 *)(v29 + v34);
    v37 = nullptr;
    while ( 1 )
    {
      v38 = *v36;
      if ( (unsigned __int64)*v36 > 1 )
      {
        if ( *(_DWORD *)(v38 + 12) == v33 && v8 == v38 )
        {
          v71 = v36[1];
          goto LABEL_112;
        }
      }
      else
      {
        if ( !v38 )
        {
          if ( v37 )
            goto LABEL_70;
          v37 = v36;
          goto LABEL_71;
        }
        v37 = v36;
      }
      v36 += 2;
      if ( v36 == v32 )
        goto LABEL_29;
    }
  }
  v37 = nullptr;
  while ( 1 )
  {
LABEL_29:
    if ( v35 == v29 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v39 = *(_QWORD *)v29;
    if ( *(_QWORD *)v29 > 1u )
      break;
    if ( !v39 )
    {
      if ( v37 )
LABEL_70:
        *(_DWORD *)(v6 + 160) = v27 - 1;
      else
        v37 = (_QWORD *)v29;
LABEL_71:
      *v37 = v8;
      v37[1] = 0;
      ++*(_DWORD *)(v6 + 156);
      goto LABEL_72;
    }
    v37 = (_QWORD *)v29;
LABEL_28:
    v29 += 16;
  }
  if ( *(_DWORD *)(v39 + 12) != v33 || v8 != v39 )
    goto LABEL_28;
  v71 = *(_QWORD *)(v29 + 8);
  v36 = (__int64 *)v29;
LABEL_112:
  if ( !v71 )
  {
    v37 = v36;
LABEL_72:
    if ( v20 )
      v54 = *((_DWORD *)v20 - 1);
    else
      v54 = 0;
    if ( v98 )
    {
      v55 = 0;
      v56 = nullptr;
      v57 = 4LL * v98;
      do
      {
        while ( 1 )
        {
          v58 = *(_DWORD *)(v17[1] + v55);
          if ( v58 == 1 )
            break;
          v55 += 4;
          if ( v55 == v57 )
            goto LABEL_82;
        }
        v59 = *(_QWORD *)(v8 + 2 * v55 + 48);
        if ( v56 )
        {
          v60 = *((_DWORD *)v56 - 1);
          if ( v60 == *((_DWORD *)v56 - 2) )
          {
            v84 = (3 * v60 + 1) >> 1;
            v85 = 8 * v84 + 8;
            if ( 8 * v60 + 8 >= v85 || v60 >= v84 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v114, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v114);
              sub_233E40((__int64)v114);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v109 = v6;
            v108 = v57;
            LODWORD(v107) = (3 * v60 + 1) >> 1;
            *(_QWORD *)v105 = *(_QWORD *)(v8 + 2 * v55 + 48);
            *(_QWORD *)v102 = v8;
            v86 = (_DWORD *)sub_186B300(v56 - 1, v85);
            v56 = v86 + 2;
            v8 = *(_QWORD *)v102;
            v59 = *(_QWORD *)v105;
            v57 = v108;
            *v86 = v107;
            v87 = (unsigned int)v86[1];
            v6 = v109;
            v88 = v87;
            v62 = &v56[v87];
            v58 = v88 + 1;
          }
          else
          {
            v61 = v60;
            v58 = v60 + 1;
            v62 = &v56[v61];
          }
        }
        else
        {
          v109 = v6;
          LODWORD(v108) = 1;
          v107 = v57;
          *(_QWORD *)v106 = *(_QWORD *)(v8 + 2 * v55 + 48);
          *(_QWORD *)v103 = v8;
          v95 = (_QWORD *)sub_186B270(0x18u);
          *v95 = 2;
          v8 = *(_QWORD *)v103;
          v56 = v95 + 1;
          v59 = *(_QWORD *)v106;
          v57 = v107;
          v6 = v109;
          v62 = v95 + 1;
        }
        v55 += 4;
        *v62 = v59;
        *((_DWORD *)v56 - 1) = v58;
      }
      while ( v55 != v57 );
    }
    else
    {
      v56 = nullptr;
    }
LABEL_82:
    *(_QWORD *)v104 = v8;
    v63 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)v99 = v6;
    sub_180C5A0(v114, "ms");
    v64 = sub_651680(v63, *(_QWORD *)v104 + 16LL, v114, v54, v56, *(_QWORD *)v104);
    v37[1] = v64;
    v6 = *(_QWORD *)v99;
    v65 = v64;
    if ( v64 )
      ++*(_DWORD *)(v64 + 8);
    v66 = *(_QWORD **)(*(_QWORD *)v99 + 56LL);
    if ( v66 )
    {
      v67 = *((_DWORD *)v66 - 1);
      if ( v67 == *((_DWORD *)v66 - 2) )
      {
        v89 = (3 * v67 + 1) >> 1;
        v90 = 8 * v89 + 8;
        if ( 8 * v67 + 8 >= v90 || v67 >= v89 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v114, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v114);
          sub_233E40((__int64)v114);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v91 = (unsigned int *)sub_186B300(v66 - 1, v90);
        v92 = v91[1];
        v6 = *(_QWORD *)v99;
        v66 = v91 + 2;
        *v91 = v89;
        LODWORD(v91) = v92;
        *(_QWORD *)(*(_QWORD *)v99 + 56LL) = v66;
        v70 = &v66[v92];
        v69 = (_DWORD)v91 + 1;
      }
      else
      {
        v68 = v67;
        v69 = v67 + 1;
        v70 = &v66[v68];
      }
    }
    else
    {
      v96 = (_QWORD *)sub_186B270(0x18u);
      v6 = *(_QWORD *)v99;
      *v96 = 2;
      v69 = 1;
      v66 = v96 + 1;
      *(_QWORD *)(*(_QWORD *)v99 + 56LL) = v66;
      v70 = v66;
    }
    *v70 = v65;
    *((_DWORD *)v66 - 1) = v69;
    if ( v56 )
    {
      *(_QWORD *)v100 = v6;
      sub_186B220(v56 - 1);
      v6 = *(_QWORD *)v100;
    }
    v71 = v37[1];
  }
  v72 = sub_15DC610(
          *(_QWORD *)(v6 + 32),
          v71,
          *(_DWORD *)(v71 + 32),
          (int)v20,
          v35,
          v8,
          v97,
          v6,
          v104[0],
          v107,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113);
  v73 = v72;
  if ( v72 )
    ++*(_DWORD *)(v72 + 8);
  v74 = *(_QWORD **)(*(_QWORD *)v101 + 56LL);
  if ( v74 )
  {
    v75 = *((_DWORD *)v74 - 1);
    if ( v75 == *((_DWORD *)v74 - 2) )
    {
      v80 = (3 * v75 + 1) >> 1;
      v81 = 8 * v80 + 8;
      if ( 8 * v75 + 8 >= (unsigned int)v81 || v75 >= v80 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v114, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v114);
        sub_233E40((__int64)v114);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v82 = (unsigned int *)sub_186B300(v74 - 1, v81);
      v83 = v82[1];
      v74 = v82 + 2;
      *v82 = v80;
      LODWORD(v82) = v83;
      *(_QWORD *)(*(_QWORD *)v101 + 56LL) = v74;
      v78 = &v74[v83];
      v77 = (_DWORD)v82 + 1;
    }
    else
    {
      v76 = v75;
      v77 = v75 + 1;
      v78 = &v74[v76];
    }
  }
  else
  {
    v94 = (_QWORD *)sub_186B270(0x18u);
    v74 = v94 + 1;
    *v94 = 2;
    v77 = 1;
    v78 = v74;
    *(_QWORD *)(*(_QWORD *)v101 + 56LL) = v74;
  }
  *v78 = v73;
  *((_DWORD *)v74 - 1) = v77;
  if ( v20 )
    sub_186B220(v20 - 1);
  return v73;
}

