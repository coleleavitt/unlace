__int64 __fastcall sub_5EA820(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  char **v4; // r13
  char **v5; // r13
  char **v6; // r13
  char **v7; // r13
  char **v8; // r13
  char **exception; // r13
  char **v10; // r13
  char **v11; // r13
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  unsigned __int64 v15; // r15
  unsigned __int64 *v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  _DWORD *v19; // rbx
  unsigned int v20; // edx
  __int64 v21; // rax
  int v22; // edx
  _BYTE *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // r8d
  size_t v28; // rsi
  unsigned int *v29; // rax
  _DWORD *v30; // rcx
  __int64 v31; // rax
  int v32; // edx
  unsigned int v33; // r8d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  unsigned __int64 *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rdx
  int v45; // eax
  _BYTE *v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  _BYTE *v51; // rdx
  unsigned __int64 v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  unsigned __int64 *v56; // rcx
  unsigned __int64 v57; // r12
  _QWORD *v58; // rax
  unsigned __int64 *v59; // rax
  int v60; // edx
  unsigned int v61; // eax
  __int64 v62; // rdx
  int v63; // eax
  _BYTE *v64; // rdx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned int v67; // edx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  unsigned int v70; // edx
  size_t v71; // rsi
  unsigned int *v72; // rax
  unsigned int v73; // ecx
  size_t v74; // rsi
  unsigned int *v75; // rax
  _DWORD *v76; // rdi
  unsigned int v77; // edx
  size_t v78; // rsi
  unsigned int *v79; // rax
  unsigned int v80; // r15d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rdx
  unsigned int v84; // r15d
  size_t v85; // rsi
  unsigned int *v86; // rax
  unsigned __int64 *v87; // rdi
  __int64 v88; // rax
  int v89; // edx
  unsigned int v90; // r12d
  size_t v91; // rsi
  unsigned int *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 result; // rax
  unsigned __int64 *v96; // rbx
  unsigned __int64 v97; // r12
  unsigned __int64 v98; // rsi
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // [rsp+0h] [rbp-B0h]
  __int64 v105; // [rsp+10h] [rbp-A0h]
  __int64 v106; // [rsp+10h] [rbp-A0h]
  unsigned int v107; // [rsp+10h] [rbp-A0h]
  unsigned __int64 v108; // [rsp+10h] [rbp-A0h]
  unsigned int v109; // [rsp+10h] [rbp-A0h]
  unsigned __int64 v110; // [rsp+10h] [rbp-A0h]
  __int64 v111; // [rsp+18h] [rbp-98h]
  unsigned int v112; // [rsp+18h] [rbp-98h]
  unsigned int v113; // [rsp+18h] [rbp-98h]
  __int64 v114; // [rsp+18h] [rbp-98h]
  unsigned int v115; // [rsp+20h] [rbp-90h]
  unsigned int v116; // [rsp+24h] [rbp-8Ch]
  __int64 v117; // [rsp+28h] [rbp-88h]
  unsigned __int64 v118; // [rsp+28h] [rbp-88h]
  int v120; // [rsp+30h] [rbp-80h]
  unsigned __int64 *v121; // [rsp+38h] [rbp-78h]
  unsigned __int64 v122; // [rsp+50h] [rbp-60h] BYREF
  __int64 v123; // [rsp+58h] [rbp-58h]
  __int64 v124[10]; // [rsp+60h] [rbp-50h] BYREF

  v13 = *(_DWORD *)(a2 + 64);
  v14 = *(_DWORD *)(a2 + 68);
  v116 = *(_DWORD *)(a2 + 56);
  v103 = a1[3];
  if ( v13 )
  {
    v15 = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a2 + 80) > 7u )
      ++*(_DWORD *)(v15 + 8);
    v16 = (unsigned __int64 *)(sub_186B270(0x18u) + 8);
    v17 = a2;
    v18 = 1;
    v117 = a2 + 8LL * v13;
    *(v16 - 1) = 2;
    v19 = nullptr;
    v121 = v16;
LABEL_5:
    *v16 = v15;
    *((_DWORD *)v121 - 1) = v18;
    if ( v19 )
    {
LABEL_6:
      v20 = *(v19 - 1);
      if ( v20 == *(v19 - 2) )
      {
        v33 = (3 * v20 + 1) >> 1;
        v34 = v33 + 8;
        if ( v20 + 8 >= (unsigned int)v34 || v20 >= v33 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v124, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v124);
          sub_233E40((__int64)v124);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v106 = v17;
        v113 = (3 * v20 + 1) >> 1;
        v35 = (unsigned int *)sub_186B300(v19 - 2, v34);
        v19 = v35 + 2;
        v17 = v106;
        *v35 = v113;
        v36 = v35[1];
        v37 = v36;
        v23 = (char *)v19 + v36;
        v22 = v37 + 1;
      }
      else
      {
        v21 = v20;
        v22 = v20 + 1;
        v23 = (char *)v19 + v21;
      }
      goto LABEL_8;
    }
    while ( 1 )
    {
      v111 = v17;
      v23 = (_BYTE *)(sub_186B270(0xAu) + 8);
      v22 = 1;
      v17 = v111;
      *((_QWORD *)v23 - 1) = 2;
      v19 = v23;
LABEL_8:
      *v23 = 0;
      v17 += 8;
      *(v19 - 1) = v22;
      if ( v117 == v17 )
        break;
      v24 = *(_QWORD *)(v17 + 80);
      v15 = 0;
      if ( v24 > 7 )
      {
        v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        ++*(_DWORD *)(v25 + 8);
        v15 = v25;
      }
      v26 = *((_DWORD *)v121 - 1);
      if ( v26 == *((_DWORD *)v121 - 2) )
      {
        v27 = (3 * v26 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v124, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v124);
          sub_233E40((__int64)v124);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v105 = v17;
        v112 = (3 * v26 + 1) >> 1;
        v29 = (unsigned int *)sub_186B300(v121 - 1, v28);
        v30 = v29 + 2;
        v121 = (unsigned __int64 *)(v29 + 2);
        *v29 = v112;
        v31 = v29[1];
        v32 = v31;
        v16 = (unsigned __int64 *)&v30[2 * v31];
        v17 = v105;
        v18 = v32 + 1;
        goto LABEL_5;
      }
      v121[v26] = v15;
      *((_DWORD *)v121 - 1) = v26 + 1;
      if ( v19 )
        goto LABEL_6;
    }
    if ( v13 >= v14 )
    {
      v118 = 0;
      v114 = v103;
      goto LABEL_43;
    }
    sub_5EA230((__int64)a1, a2, v13);
    v118 = a1[6];
    if ( !v118 )
    {
      v114 = v103;
      goto LABEL_35;
    }
LABEL_22:
    if ( *(_DWORD *)(v118 - 4) )
    {
      v118 = 0;
      v114 = v103;
      while ( 1 )
      {
        v38 = *(_QWORD *)(a2 + 8LL * v13 + 80);
        v122 = v118;
        v123 = v114;
        sub_5EA3E0(a1, v38 & 0xFFFFFFFFFFFFFFF8LL, &v122, a3);
        v118 = v122;
        v114 = v123;
        if ( v122 )
          ++*(_DWORD *)(v122 + 8);
        if ( v121 )
        {
          v39 = *((_DWORD *)v121 - 1);
          if ( v39 == *((_DWORD *)v121 - 2) )
          {
            v80 = (3 * v39 + 1) >> 1;
            v81 = 8 * v80 + 8;
            if ( 8 * v39 + 8 >= (unsigned int)v81 || v39 >= v80 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v124, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v124);
              sub_233E40((__int64)v124);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v82 = (unsigned int *)sub_186B300(v121 - 1, v81);
            v83 = v82[1];
            *v82 = v80;
            v121 = (unsigned __int64 *)(v82 + 2);
            LODWORD(v82) = v83;
            v42 = &v121[v83];
            v41 = (_DWORD)v82 + 1;
          }
          else
          {
            v40 = v39;
            v41 = v39 + 1;
            v42 = &v121[v40];
          }
        }
        else
        {
          v102 = (_QWORD *)sub_186B270(0x18u);
          v42 = v102 + 1;
          *v102 = 2;
          v41 = 1;
          v121 = v42;
        }
        *v42 = v118;
        *((_DWORD *)v121 - 1) = v41;
        if ( v19 )
        {
          v43 = *(v19 - 1);
          if ( v43 == *(v19 - 2) )
          {
            v77 = (3 * v43 + 1) >> 1;
            v78 = v77 + 8;
            if ( v43 + 8 >= (unsigned int)v78 || v43 >= v77 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v124, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v124);
              sub_233E40((__int64)v124);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v109 = (3 * v43 + 1) >> 1;
            v79 = (unsigned int *)sub_186B300(v19 - 2, v78);
            v19 = v79 + 2;
            *v79 = v109;
            LODWORD(v79) = v79[1];
            v46 = (char *)v19 + (unsigned int)v79;
            v45 = (_DWORD)v79 + 1;
          }
          else
          {
            v44 = v43;
            v45 = v43 + 1;
            v46 = (char *)v19 + v44;
          }
        }
        else
        {
          v101 = (_QWORD *)sub_186B270(0xAu);
          v19 = v101 + 1;
          *v101 = 2;
          v45 = 1;
          v46 = v19;
        }
        ++v13;
        *v46 = 0;
        *(v19 - 1) = v45;
        if ( v13 >= v14 )
          break;
        while ( 1 )
        {
          sub_5EA230((__int64)a1, a2, v13);
          v47 = a1[6];
          if ( v47 )
          {
            if ( *(_DWORD *)(v47 - 4) )
              break;
          }
LABEL_35:
          v48 = *(v19 - 1);
          if ( v48 == *(v19 - 2) )
          {
            v70 = (3 * v48 + 1) >> 1;
            v71 = v70 + 8;
            if ( v48 + 8 >= (unsigned int)v71 || v48 >= v70 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v124, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v124);
              sub_233E40((__int64)v124);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v107 = (3 * v48 + 1) >> 1;
            v72 = (unsigned int *)sub_186B300(v19 - 2, v71);
            v19 = v72 + 2;
            *v72 = v107;
            LODWORD(v72) = v72[1];
            v51 = (char *)v19 + (unsigned int)v72;
            v50 = (_DWORD)v72 + 1;
          }
          else
          {
            v49 = v48;
            v50 = v48 + 1;
            v51 = (char *)v19 + v49;
          }
LABEL_37:
          *v51 = 1;
          *(v19 - 1) = v50;
          v52 = *(_QWORD *)(a2 + 8LL * v13 + 80) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(a2 + 8LL * v13 + 80) > 7u )
            ++*(_DWORD *)(v52 + 8);
          if ( v121 )
          {
            v53 = *((_DWORD *)v121 - 1);
            if ( v53 == *((_DWORD *)v121 - 2) )
            {
              v73 = (3 * v53 + 1) >> 1;
              v74 = 8 * v73 + 8;
              if ( 8 * v53 + 8 >= (unsigned int)v74 || v53 >= v73 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v124, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v124);
                sub_233E40((__int64)v124);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v115 = (3 * v53 + 1) >> 1;
              v108 = v52;
              v75 = (unsigned int *)sub_186B300(v121 - 1, v74);
              v76 = v75 + 2;
              v52 = v108;
              v121 = (unsigned __int64 *)(v75 + 2);
              *v75 = v115;
              LODWORD(v75) = v75[1];
              v56 = (unsigned __int64 *)&v76[2 * (unsigned int)v75];
              v55 = (_DWORD)v75 + 1;
            }
            else
            {
              v54 = v53;
              v55 = v53 + 1;
              v56 = &v121[v54];
            }
          }
          else
          {
            v110 = v52;
            v100 = (_QWORD *)sub_186B270(0x18u);
            *v100 = 2;
            v52 = v110;
            v121 = v100 + 1;
            v56 = v100 + 1;
            v55 = 1;
          }
          *v56 = v52;
          ++v13;
          *((_DWORD *)v121 - 1) = v55;
          if ( v13 >= v14 )
            goto LABEL_43;
        }
      }
LABEL_43:
      if ( v14 >= v116 )
      {
LABEL_77:
        v94 = sub_62C680(a1[4], *(_QWORD *)(a2 + 40), *((_DWORD *)v121 - 1), (_DWORD)v121, (_DWORD)v19, (int)a2 + 72, 1);
        goto LABEL_78;
      }
LABEL_44:
      v57 = *(_QWORD *)(a2 + 8LL * v14 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(a2 + 8LL * v14 + 80) > 7u )
        ++*(_DWORD *)(v57 + 8);
      if ( v121 )
        goto LABEL_54;
      v58 = (_QWORD *)sub_186B270(0x18u);
      *v58 = 2;
      v59 = v58 + 1;
      v60 = 1;
      v121 = v59;
LABEL_48:
      *v59 = v57;
      *((_DWORD *)v121 - 1) = v60;
      if ( v19 )
      {
LABEL_49:
        v61 = *(v19 - 1);
        if ( v61 == *(v19 - 2) )
        {
          v90 = (3 * v61 + 1) >> 1;
          v91 = v90 + 8;
          if ( v61 + 8 >= (unsigned int)v91 || v61 >= v90 )
          {
            v11 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v124, "Overflow encountered when expanding vector");
            *v11 = (char *)off_1C63128;
            sub_2333C0(v11 + 1, v124);
            sub_233E40((__int64)v124);
            __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v92 = (unsigned int *)sub_186B300(v19 - 2, v91);
          v93 = v92[1];
          v19 = v92 + 2;
          *v92 = v90;
          LODWORD(v92) = v93;
          v64 = (char *)v19 + v93;
          v63 = (_DWORD)v92 + 1;
        }
        else
        {
          v62 = v61;
          v63 = v61 + 1;
          v64 = (char *)v19 + v62;
        }
        goto LABEL_51;
      }
      while ( 1 )
      {
        v68 = (_QWORD *)sub_186B270(0xAu);
        v19 = v68 + 1;
        *v68 = 2;
        v63 = 1;
        v64 = v19;
LABEL_51:
        *v64 = 0;
        ++v14;
        *(v19 - 1) = v63;
        if ( v14 >= v116 )
          goto LABEL_77;
        v57 = 0;
        v65 = *(_QWORD *)(a2 + 8LL * v14 + 80);
        if ( v65 > 7 )
        {
          v66 = v65 & 0xFFFFFFFFFFFFFFF8LL;
          ++*(_DWORD *)(v66 + 8);
          v57 = v66;
        }
LABEL_54:
        v67 = *((_DWORD *)v121 - 1);
        if ( v67 == *((_DWORD *)v121 - 2) )
        {
          v84 = (3 * v67 + 1) >> 1;
          v85 = 8 * v84 + 8;
          if ( 8 * v67 + 8 >= (unsigned int)v85 || v67 >= v84 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v124, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v124);
            sub_233E40((__int64)v124);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v86 = (unsigned int *)sub_186B300(v121 - 1, v85);
          v87 = (unsigned __int64 *)(v86 + 2);
          *v86 = v84;
          v88 = v86[1];
          v121 = v87;
          v89 = v88;
          v59 = &v87[v88];
          v60 = v89 + 1;
          goto LABEL_48;
        }
        v121[v67] = v57;
        *((_DWORD *)v121 - 1) = v67 + 1;
        if ( v19 )
          goto LABEL_49;
      }
    }
    if ( v19 )
    {
      v118 = 0;
      v114 = v103;
      goto LABEL_35;
    }
LABEL_58:
    v69 = (_QWORD *)sub_186B270(0xAu);
    v51 = v69 + 1;
    *v69 = 2;
    v118 = 0;
    v19 = v69 + 1;
    v114 = v103;
    v50 = 1;
    goto LABEL_37;
  }
  if ( v14 )
  {
    sub_5EA230((__int64)a1, a2, 0);
    v121 = nullptr;
    v19 = nullptr;
    v118 = a1[6];
    if ( !v118 )
      goto LABEL_58;
    goto LABEL_22;
  }
  if ( v116 )
  {
    v114 = a1[3];
    v19 = nullptr;
    v118 = 0;
    v121 = nullptr;
    goto LABEL_44;
  }
  v19 = nullptr;
  v121 = nullptr;
  v118 = 0;
  v114 = a1[3];
  v94 = sub_62C680(a1[4], *(_QWORD *)(a2 + 40), 0, 0, 0, (int)a2 + 72, 1);
LABEL_78:
  result = sub_63DAD0(a3, v94, a4);
  if ( v19 )
    result = sub_186B220(v19 - 2);
  if ( v118 )
  {
    v120 = *(_DWORD *)(v118 + 8);
    result = (unsigned int)(v120 - 1);
    *(_DWORD *)(v118 + 8) = result;
    if ( v120 == 1 )
      result = sub_15D7BC0(v114, v118);
  }
  v96 = v121;
  if ( v121 )
  {
    v97 = (unsigned __int64)&v121[*((unsigned int *)v121 - 1)];
    if ( (unsigned __int64)v121 < v97 )
    {
      do
      {
        while ( 1 )
        {
          v98 = *v96;
          if ( *v96 )
          {
            if ( (*(_DWORD *)(v98 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v96 >= v97 )
            return sub_186B220(v121 - 1);
        }
        ++v96;
        sub_15D7BC0(v103, v98);
      }
      while ( (unsigned __int64)v96 < v97 );
    }
    return sub_186B220(v121 - 1);
  }
  return result;
}

