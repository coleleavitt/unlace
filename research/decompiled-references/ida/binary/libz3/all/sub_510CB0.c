char *__fastcall sub_510CB0(__int64 a1, __int64 *a2)
{
  char **exception; // r12
  char **v3; // r15
  char **v4; // r15
  char **v5; // r15
  char **v6; // r15
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  unsigned int v12; // r15d
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // edi
  __int64 v19; // rdi
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r12
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 *v26; // rdx
  int v27; // r8d
  int v28; // r9d
  unsigned int v29; // r12d
  int *v30; // rdi
  char *v31; // rcx
  char *result; // rax
  __int64 v33; // rdx
  __int64 *v34; // rbp
  unsigned __int64 v35; // r12
  __int64 v36; // rsi
  bool v37; // zf
  unsigned int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // edi
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 *v43; // rcx
  int v44; // r8d
  int v45; // r9d
  int v46; // edx
  __int64 v47; // r12
  int v48; // eax
  unsigned int v49; // r14d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rdx
  int v53; // esi
  bool v54; // dl
  _DWORD *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r14
  unsigned int v60; // eax
  __int64 v61; // rdx
  int v62; // eax
  __int64 *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rax
  unsigned int v69; // edx
  unsigned int v70; // ecx
  __int64 v71; // rax
  int v72; // esi
  _DWORD *v73; // rdx
  unsigned __int8 v74; // al
  int v75; // ecx
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rdx
  unsigned int v80; // eax
  __int64 v81; // rcx
  int v82; // eax
  unsigned int v83; // ecx
  size_t v84; // rsi
  __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rbx
  _QWORD *v88; // rbx
  __int64 v89; // [rsp+0h] [rbp-158h]
  __int64 v90; // [rsp+8h] [rbp-150h]
  __int64 *v91; // [rsp+10h] [rbp-148h]
  __int64 v92; // [rsp+18h] [rbp-140h]
  __int64 v93; // [rsp+20h] [rbp-138h]
  void *v94; // [rsp+28h] [rbp-130h]
  void *v95; // [rsp+30h] [rbp-128h]
  int v96[2]; // [rsp+38h] [rbp-120h] BYREF
  int v97[2]; // [rsp+40h] [rbp-118h] BYREF
  int v98; // [rsp+48h] [rbp-110h]
  __int16 v99; // [rsp+4Ch] [rbp-10Ch]
  int v100; // [rsp+50h] [rbp-108h]
  int v101; // [rsp+58h] [rbp-100h]
  int v102; // [rsp+5Ch] [rbp-FCh]
  int v103; // [rsp+60h] [rbp-F8h]
  int v104[4]; // [rsp+68h] [rbp-F0h]
  int v105[4]; // [rsp+78h] [rbp-E0h]
  void *ptr; // [rsp+88h] [rbp-D0h]
  int v107[2]; // [rsp+90h] [rbp-C8h]
  int v108[8]; // [rsp+98h] [rbp-C0h] BYREF
  char v109; // [rsp+B8h] [rbp-A0h]
  int v110; // [rsp+C0h] [rbp-98h]
  int v111; // [rsp+C8h] [rbp-90h]
  int v112; // [rsp+D0h] [rbp-88h]
  int v113; // [rsp+D8h] [rbp-80h]
  int v114; // [rsp+E0h] [rbp-78h]
  int v115; // [rsp+E8h] [rbp-70h]
  int v116; // [rsp+F0h] [rbp-68h]
  int v117; // [rsp+F8h] [rbp-60h]
  int v118; // [rsp+100h] [rbp-58h]
  int v119; // [rsp+108h] [rbp-50h]
  int v120; // [rsp+110h] [rbp-48h]
  int v121; // [rsp+118h] [rbp-40h]
  int v122; // [rsp+120h] [rbp-38h]
  int v123; // [rsp+128h] [rbp-30h]
  int v124; // [rsp+130h] [rbp-28h]
  int v125; // [rsp+138h] [rbp-20h]
  int v126; // [rsp+140h] [rbp-18h]
  char v127; // [rsp+148h] [rbp-10h]

  v8 = nullptr;
  v91 = a2;
  v9 = sub_4D6490(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v9;
  v89 = *(_QWORD *)(a1 + 8);
  v92 = v89 + 224;
  if ( v10 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= *(_DWORD *)(v10 - 4) )
        break;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL);
      v14 = v12;
      do
      {
        v15 = v14;
        v14 = *(_DWORD *)(v13 + 4LL * v14);
      }
      while ( v14 != v15 );
      if ( v14 != v12 )
      {
        v16 = v12;
        do
        {
          v17 = v16;
          v18 = v16;
          v16 = *(_DWORD *)(v13 + 4LL * v16);
        }
        while ( v18 != v16 );
        v19 = *(_QWORD *)(v10 + 8 * v17);
        LODWORD(v10) = v12;
        do
        {
          v20 = v10;
          v10 = *(unsigned int *)(v13 + 4LL * (unsigned int)v10);
        }
        while ( v20 != (_DWORD)v10 );
        sub_15DB5C0(v11, v10, v19);
        sub_15DB5C0(v11, v12, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v12));
        v21 = sub_15E1B70(v11);
        v22 = v21;
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        if ( v8 )
        {
          v23 = *((_DWORD *)v8 - 1);
          if ( v23 == *((_DWORD *)v8 - 2) )
          {
            v49 = (3 * v23 + 1) >> 1;
            v50 = 8 * v49 + 8;
            if ( 8 * v23 + 8 >= (unsigned int)v50 || v23 >= v49 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v97, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v97);
              sub_233E40((__int64)v97);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v51 = (unsigned int *)sub_186B300(v8 - 1, v50);
            v52 = v51[1];
            v8 = v51 + 2;
            *v51 = v49;
            LODWORD(v51) = v52;
            v26 = &v8[v52];
            v25 = (_DWORD)v51 + 1;
          }
          else
          {
            v24 = v23;
            v25 = v23 + 1;
            v26 = &v8[v24];
          }
        }
        else
        {
          v86 = (_QWORD *)sub_186B270(0x18u);
          v8 = v86 + 1;
          *v86 = 2;
          v25 = 1;
          v26 = v8;
        }
        *v26 = v22;
        *((_DWORD *)v8 - 1) = v25;
        goto LABEL_17;
      }
      v38 = v12;
      do
      {
        v39 = v38;
        v40 = v38;
        v38 = *(_DWORD *)(v13 + 4LL * v38);
      }
      while ( v40 != v38 );
      v90 = *(_QWORD *)(v10 + 8LL * v12);
      v41 = **(_QWORD **)(a1 + 144) + 112 * v39;
      v42 = sub_15DB5C0(v11, v12, v90);
      v46 = *(_DWORD *)(v41 + 8);
      v47 = v42;
      if ( v42 )
      {
        v48 = *(_DWORD *)(v42 + 8);
        LODWORD(v43) = v48 + 1;
        *(_DWORD *)(v47 + 8) = v48 + 1;
        if ( v46 != 1 )
        {
          if ( *(_DWORD *)(v41 + 48) != 1 )
            goto LABEL_50;
          goto LABEL_57;
        }
      }
      else if ( v46 != 1 )
      {
        if ( *(_DWORD *)(v41 + 48) != 1 )
          goto LABEL_17;
LABEL_57:
        v53 = v41 + 56;
        v54 = 0;
        v55 = *(_DWORD **)(v90 + 24);
        if ( v55 && *v55 == 5 )
        {
          v54 = v55[1] == 1;
          v56 = *(_QWORD *)(v89 + 232);
          if ( !v56 )
            goto LABEL_105;
        }
        else
        {
          v56 = *(_QWORD *)(v89 + 232);
          if ( v56 )
            goto LABEL_60;
LABEL_105:
          LOBYTE(v93) = v54;
          LODWORD(v90) = v41 + 56;
          sub_16669E0(v92);
          v54 = v93;
          v53 = v41 + 56;
          v56 = *(_QWORD *)(v89 + 232);
        }
LABEL_60:
        sub_166A700(v56, v53, v54, (_DWORD)v43, v44, v45);
        v57 = *(_QWORD *)(v89 + 224);
        if ( *(_BYTE *)(v41 + 89) )
        {
          v58 = sub_15E1B70(v57);
          v59 = v58;
          if ( v58 )
            ++*(_DWORD *)(v58 + 8);
          if ( v8 )
          {
            v60 = *((_DWORD *)v8 - 1);
            if ( v60 != *((_DWORD *)v8 - 2) )
              goto LABEL_65;
            v69 = (3 * v60 + 1) >> 1;
            v70 = 8 * v69 + 8;
            if ( 8 * v60 + 8 >= v70 || v60 >= v69 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v97, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v97);
              sub_233E40((__int64)v97);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
LABEL_82:
            LODWORD(v90) = v69;
            v71 = sub_186B300(v8 - 1, v70);
            v8 = (_QWORD *)(v71 + 8);
            *(_DWORD *)v71 = v90;
            LODWORD(v71) = *(_DWORD *)(v71 + 4);
            v63 = &v8[(unsigned int)v71];
            v62 = v71 + 1;
            goto LABEL_66;
          }
        }
        else
        {
          v68 = sub_15E1B70(v57);
          v59 = v68;
          if ( v68 )
            ++*(_DWORD *)(v68 + 8);
          if ( v8 )
          {
            v60 = *((_DWORD *)v8 - 1);
            if ( v60 == *((_DWORD *)v8 - 2) )
            {
              v69 = (3 * v60 + 1) >> 1;
              v70 = 8 * v69 + 8;
              if ( 8 * v60 + 8 >= v70 || v60 >= v69 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v97, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, v97);
                sub_233E40((__int64)v97);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              goto LABEL_82;
            }
LABEL_65:
            v61 = v60;
            v62 = v60 + 1;
            v63 = &v8[v61];
LABEL_66:
            *v63 = v59;
            *((_DWORD *)v8 - 1) = v62;
            goto LABEL_67;
          }
        }
        v87 = (_QWORD *)sub_186B270(0x18u);
        *v87 = 2;
        v62 = 1;
        v8 = v87 + 1;
        v63 = v8;
        goto LABEL_66;
      }
      v72 = v41 + 16;
      v73 = *(_DWORD **)(v90 + 24);
      v74 = 0;
      if ( v73 && *v73 == 5 )
        v74 = v73[1] == 1;
      v75 = v89;
      v76 = *(_QWORD *)(v89 + 232);
      if ( !v76 )
      {
        BYTE4(v94) = v74;
        v93 = v41 + 16;
        sub_16669E0(v92);
        v72 = v41 + 16;
        v76 = *(_QWORD *)(v89 + 232);
        v74 = BYTE4(v94);
      }
      sub_166A700(v76, v72, v74, v75, v44, v45);
      v77 = *(_QWORD *)(v89 + 224);
      if ( *(_BYTE *)(v41 + 88) )
      {
        v78 = sub_15E1B70(v77);
        v79 = v78;
        if ( v78 )
          ++*(_DWORD *)(v78 + 8);
        if ( v8 )
        {
          v80 = *((_DWORD *)v8 - 1);
          if ( v80 != *((_DWORD *)v8 - 2) )
          {
LABEL_95:
            v81 = v80;
            v82 = v80 + 1;
            v43 = &v8[v81];
            goto LABEL_96;
          }
          v83 = (3 * v80 + 1) >> 1;
          v84 = 8 * v83 + 8;
          if ( 8 * v80 + 8 >= (unsigned int)v84 || v80 >= v83 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v97, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v97);
            sub_233E40((__int64)v97);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_104;
        }
      }
      else
      {
        v78 = sub_15E1B70(v77);
        v79 = v78;
        if ( v78 )
          ++*(_DWORD *)(v78 + 8);
        if ( v8 )
        {
          v80 = *((_DWORD *)v8 - 1);
          if ( v80 != *((_DWORD *)v8 - 2) )
            goto LABEL_95;
          v83 = (3 * v80 + 1) >> 1;
          v84 = 8 * v83 + 8;
          if ( 8 * v80 + 8 >= (unsigned int)v84 || v80 >= v83 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v97, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v97);
            sub_233E40((__int64)v97);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_104:
          HIDWORD(v94) = v83;
          v93 = v79;
          v85 = sub_186B300(v8 - 1, v84);
          v8 = (_QWORD *)(v85 + 8);
          v79 = v93;
          *(_DWORD *)v85 = HIDWORD(v94);
          LODWORD(v85) = *(_DWORD *)(v85 + 4);
          v43 = &v8[(unsigned int)v85];
          v82 = v85 + 1;
          goto LABEL_96;
        }
      }
      v93 = v78;
      v88 = (_QWORD *)sub_186B270(0x18u);
      *v88 = 2;
      v79 = v93;
      v82 = 1;
      v8 = v88 + 1;
      v43 = v8;
LABEL_96:
      v37 = *(_DWORD *)(v41 + 48) == 1;
      *v43 = v79;
      *((_DWORD *)v8 - 1) = v82;
      if ( v37 )
        goto LABEL_57;
LABEL_67:
      if ( v47 )
      {
        v48 = *(_DWORD *)(v47 + 8) - 1;
LABEL_50:
        *(_DWORD *)(v47 + 8) = v48;
        if ( !v48 )
          sub_15D7BC0(v11, v47);
      }
LABEL_17:
      v10 = *(_QWORD *)(a1 + 16);
      ++v12;
    }
    while ( v10 );
  }
  *(_QWORD *)v97 = v11;
  v98 = 256;
  *(_QWORD *)v96 = 0;
  v99 = 0;
  v102 = 0;
  ptr = v108;
  *(_QWORD *)v107 = 0x1000000000LL;
  *(_OWORD *)v104 = 0;
  *(_OWORD *)v105 = 0;
  sub_14DC230(v97, v96);
  sub_18572D0(v96);
  if ( v8 )
    v29 = *((_DWORD *)v8 - 1);
  else
    v29 = 0;
  if ( HIBYTE(v98) )
  {
    sub_14E1930((int)v97, v89, v90, (int)v91, v92, v93, (__int64)v94, v95, v96[0]);
  }
  else
  {
    if ( (_BYTE)v98 )
    {
      if ( (unsigned int)sub_14DD000(v97, v29, v8, v91) != 5 )
        goto LABEL_23;
    }
    else if ( (unsigned int)sub_14DC740(
                              (int)v97,
                              v29,
                              (int)v8,
                              (int)v91,
                              v27,
                              v28,
                              v89,
                              v90,
                              (int)v91,
                              v92,
                              v93,
                              v94,
                              (int)v95,
                              v96[0],
                              v97[0],
                              v98,
                              v100,
                              v101,
                              v103,
                              v104[0],
                              v104[2],
                              v105[0],
                              v105[2],
                              (int)ptr,
                              v107[0],
                              v108[0],
                              v108[2],
                              v108[4],
                              v108[6],
                              v109,
                              v110,
                              v111,
                              v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              v117,
                              v118,
                              v119,
                              v120,
                              v121,
                              v122,
                              v123,
                              v124,
                              v125,
                              v126,
                              v127) != 5 )
    {
      goto LABEL_23;
    }
    v64 = sub_15E1AF0(v97[0]);
    v65 = v64;
    if ( v64 )
      ++*(_DWORD *)(v64 + 8);
    v66 = *v91;
    if ( *v91 )
    {
      v67 = v91[1];
      v37 = (*(_DWORD *)(v66 + 8))-- == 1;
      if ( v37 )
        sub_15D7BC0(v67, v66);
    }
    *v91 = v65;
  }
LABEL_23:
  v30 = (int *)ptr;
  v31 = (char *)ptr + 8 * (unsigned int)v107[0];
  result = (char *)ptr;
  if ( ptr != v31 )
  {
    do
    {
      v33 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v33 + 6) &= ~1u;
    }
    while ( result != v31 );
  }
  v107[0] = 0;
  if ( v30 != v108 && v30 )
    result = (char *)sub_186B220(v30);
  if ( *(_QWORD *)&v105[2] )
    result = (char *)sub_186B220((void *)(*(_QWORD *)&v105[2] - 8LL));
  if ( *(_QWORD *)v105 )
    result = (char *)sub_186B220((void *)(*(_QWORD *)v105 - 8LL));
  if ( *(_QWORD *)&v104[2] )
    result = (char *)sub_186B220((void *)(*(_QWORD *)&v104[2] - 8LL));
  if ( *(_QWORD *)v104 )
    result = (char *)sub_186B220((void *)(*(_QWORD *)v104 - 8LL));
  if ( v8 )
  {
    v34 = v8;
    v35 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
    if ( (unsigned __int64)v8 < v35 )
    {
      do
      {
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 )
          {
            v37 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v37 )
              break;
          }
          if ( (unsigned __int64)++v34 >= v35 )
            return (char *)sub_186B220(v8 - 1);
        }
        ++v34;
        sub_15D7BC0(v11, v36);
      }
      while ( (unsigned __int64)v34 < v35 );
    }
    return (char *)sub_186B220(v8 - 1);
  }
  return result;
}

