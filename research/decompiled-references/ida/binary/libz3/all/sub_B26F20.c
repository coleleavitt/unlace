unsigned int *__fastcall sub_B26F20(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char **exception; // rbx
  char **v7; // rax
  char **v8; // r14
  __int64 *v9; // r15
  __int64 *v10; // rsi
  char **v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int *v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rax
  unsigned int *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // r9
  char *v25; // rcx
  __int64 v26; // rax
  int v27; // edi
  unsigned int v28; // edx
  char *v29; // rsi
  __int64 v30; // rdx
  char *v31; // r8
  char *i; // rax
  __int64 v33; // rdx
  unsigned __int32 v34; // r12d
  __int64 v35; // rbx
  _QWORD *v36; // rbx
  _QWORD *v37; // r13
  _QWORD *v38; // r15
  __int64 v39; // rdx
  int v40; // eax
  __int64 *v41; // rdx
  __int64 v42; // r14
  unsigned int v43; // eax
  unsigned int v44; // edx
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // r12
  unsigned int v49; // r15d
  __int64 v50; // r14
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  _QWORD *v54; // rcx
  __int64 *v55; // r13
  __int64 *v56; // r14
  unsigned __int64 v57; // r15
  __int64 v58; // rsi
  bool v59; // zf
  __int64 v60; // rcx
  __int64 *v61; // r12
  unsigned __int64 v62; // r13
  __int64 v63; // r15
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rdi
  int v69; // esi
  int v70; // edx
  unsigned int *result; // rax
  unsigned int v72; // edx
  size_t v73; // rsi
  unsigned int v74; // r13d
  unsigned int *v75; // rax
  __int64 v76; // rdx
  __int64 *v77; // rdi
  _QWORD *v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rdx
  _QWORD *v82; // rdx
  unsigned int v83; // r12d
  size_t v84; // rsi
  unsigned int *v85; // rax
  __int64 v86; // rax
  __int64 *v87; // r12
  unsigned __int64 v88; // r13
  __int64 v89; // r15
  __int64 v90; // rsi
  __int64 v91; // rbx
  _QWORD *v92; // rax
  __int64 *v93; // rdi
  __int64 v94; // r15
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // [rsp+0h] [rbp-100h]
  __int64 v98; // [rsp+8h] [rbp-F8h]
  __int64 v99; // [rsp+10h] [rbp-F0h]
  int v100[2]; // [rsp+18h] [rbp-E8h] BYREF
  __int64 *v101; // [rsp+20h] [rbp-E0h]
  char v102; // [rsp+28h] [rbp-D8h]
  unsigned int v103; // [rsp+2Ch] [rbp-D4h]
  __int64 v104; // [rsp+30h] [rbp-D0h]
  __int64 *v105; // [rsp+38h] [rbp-C8h]
  __int64 *v106; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v107; // [rsp+48h] [rbp-B8h]
  __int64 v108; // [rsp+50h] [rbp-B0h]
  __int64 v109; // [rsp+58h] [rbp-A8h]
  unsigned int *v110; // [rsp+68h] [rbp-98h] BYREF
  __int64 v111; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v112; // [rsp+78h] [rbp-88h]
  __int64 v113; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v114[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v115; // [rsp+C0h] [rbp-40h]

  v12 = a2[2];
  v108 = a1;
  v101 = a2;
  v13 = *(_QWORD *)(v12 + 64);
  if ( v13 )
  {
    if ( *(_DWORD *)(v13 - 4) == 1 )
      return (unsigned int *)sub_B25A40(a1, a2);
    ++*(_DWORD *)(a1 + 72);
    v14 = *(unsigned int *)(v13 - 4);
    v104 = v13;
    v14 <<= 6;
    v107 = &v111;
    v110 = nullptr;
    LODWORD(v98) = v13 + v14;
    v105 = v101 + 3;
    if ( v13 != v13 + v14 )
    {
      while ( 1 )
      {
        *(_QWORD *)v100 = *(_QWORD *)(v104 + 8);
        v15 = v101[4];
        if ( v15 )
          v16 = *(_DWORD *)(v15 - 4);
        else
          v16 = 0;
        v17 = sub_15DC610(
                v100[0],
                *(_QWORD *)v104,
                v16,
                v15,
                a5,
                a6,
                v97,
                v98,
                v99,
                v100[0],
                (int)v101,
                v102,
                v104,
                (int)v105,
                (int)v106,
                v107);
        v109 = v17;
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        v18 = sub_B232F0(v108, v109);
        v19 = v110;
        v20 = v18;
        if ( v110 )
        {
          v21 = *(v110 - 1);
          if ( (_DWORD)v21 == *(v110 - 2) )
          {
            v83 = (unsigned int)(3 * v21 + 1) >> 1;
            v84 = 4 * v83 + 8;
            if ( 4 * (int)v21 + 8 >= (unsigned int)v84 || (unsigned int)v21 >= v83 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v114, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v114);
              sub_233E40((__int64)v114);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v85 = (unsigned int *)sub_186B300(v110 - 2, v84);
            v19 = v85 + 2;
            *v85 = v83;
            v86 = v85[1];
            v110 = v19;
            v22 = &v19[v86];
          }
          else
          {
            v22 = &v110[v21];
          }
        }
        else
        {
          v95 = sub_186B270(0x10u);
          v19 = (unsigned int *)(v95 + 8);
          *(_QWORD *)v95 = 2;
          v110 = (unsigned int *)(v95 + 8);
          v22 = (unsigned int *)(v95 + 8);
        }
        *v22 = v20;
        v23 = v101;
        ++*(v19 - 1);
        v24 = *v23;
        v25 = *(char **)(v108 + 144);
        v26 = *(unsigned int *)(v108 + 152);
        v27 = *(_DWORD *)(v24 + 12);
        v28 = v26 - 1;
        v26 *= 16;
        v29 = &v25[v26];
        v30 = 16LL * (v27 & v28);
        v31 = &v25[v30];
        if ( v30 != v26 )
        {
          for ( i = &v25[v30]; v29 != i; i += 16 )
          {
            v33 = *(_QWORD *)i;
            if ( *(_QWORD *)i > 1u )
            {
              if ( *(_DWORD *)(v33 + 12) == v27 && v24 == v33 )
              {
LABEL_114:
                v34 = *((_DWORD *)i + 2);
                goto LABEL_19;
              }
            }
            else if ( !v33 )
            {
              v34 = 0;
              goto LABEL_19;
            }
          }
        }
        for ( ; v31 != v25; v25 += 16 )
        {
          v79 = *(_QWORD *)v25;
          if ( *(_QWORD *)v25 > 1u )
          {
            if ( *(_DWORD *)(v79 + 12) == v27 && v24 == v79 )
            {
              i = v25;
              goto LABEL_114;
            }
          }
          else if ( !v79 )
          {
            break;
          }
        }
        v34 = 0;
LABEL_19:
        v35 = v108;
        sub_B24290(v108, v34, v109);
        v99 = *(_QWORD *)(v35 + 24);
        v111 = v99;
        v36 = *(_QWORD **)(v104 + 24);
        if ( v36 )
        {
          v37 = &v36[*((unsigned int *)v36 - 1)];
          if ( v37 != v36 )
          {
            v38 = *(_QWORD **)(v104 + 24);
            v36 = nullptr;
            v106 = &v113;
            while ( 1 )
            {
              sub_B24C20((_DWORD **)v106, v108, v34, (__int64)v105, *v38);
              v42 = v113;
              if ( !v36 )
                break;
              v43 = *((_DWORD *)v36 - 1);
              if ( v43 == *((_DWORD *)v36 - 2) )
              {
                v44 = (3 * v43 + 1) >> 1;
                v45 = 8 * v44 + 8;
                if ( 8 * v43 + 8 >= (unsigned int)v45 || v43 >= v44 )
                {
                  v11 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v114, "Overflow encountered when expanding vector");
                  *v11 = (char *)off_1C63128;
                  sub_2333C0(v11 + 1, v114);
                  sub_233E40((__int64)v114);
                  __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v103 = (3 * v43 + 1) >> 1;
                v46 = (unsigned int *)sub_186B300(v36 - 1, v45);
                v36 = v46 + 2;
                ++v38;
                *v46 = v103;
                LODWORD(v46) = v46[1];
                v36[(unsigned int)v46] = v42;
                *((_DWORD *)v36 - 1) = (_DWORD)v46 + 1;
                if ( v37 == v38 )
                  goto LABEL_29;
              }
              else
              {
                v39 = v43;
                v40 = v43 + 1;
                v41 = &v36[v39];
LABEL_23:
                ++v38;
                *v41 = v42;
                *((_DWORD *)v36 - 1) = v40;
                if ( v37 == v38 )
                  goto LABEL_29;
              }
            }
            v78 = (_QWORD *)sub_186B270(0x18u);
            v36 = v78 + 1;
            v41 = v78 + 1;
            *v78 = 2;
            v40 = 1;
            goto LABEL_23;
          }
          v36 = nullptr;
        }
LABEL_29:
        if ( *(_BYTE *)(v104 + 56) )
          break;
        v80 = *(_QWORD **)(v108 + 112);
        if ( !v80 || (v81 = *((unsigned int *)v80 - 1), !(_DWORD)v81) )
        {
LABEL_96:
          v112 = v36;
          sub_B26760(v108, v109, &v111);
          if ( v36 )
          {
            v87 = v36;
            v88 = (unsigned __int64)&v36[*((unsigned int *)v36 - 1)];
            if ( (unsigned __int64)v36 < v88 )
            {
              v89 = v109;
              do
              {
                while ( 1 )
                {
                  v90 = *v87;
                  if ( *v87 )
                  {
                    v59 = (*(_DWORD *)(v90 + 8))-- == 1;
                    if ( v59 )
                      break;
                  }
                  if ( (unsigned __int64)++v87 >= v88 )
                    goto LABEL_103;
                }
                ++v87;
                sub_15D7BC0(v99, v90);
              }
              while ( (unsigned __int64)v87 < v88 );
LABEL_103:
              v109 = v89;
            }
            sub_186B220(v36 - 1);
          }
          v91 = v109;
          if ( v109 )
          {
            LODWORD(v106) = *(_DWORD *)(v109 + 8);
            v59 = (_DWORD)v106 == 1;
            *(_DWORD *)(v109 + 8) = (_DWORD)v106 - 1;
            if ( v59 )
              sub_15D7BC0(*(_QWORD *)v100, v91);
          }
          goto LABEL_64;
        }
        v82 = &v80[v81];
        while ( *v80 != v109 )
        {
          if ( ++v80 == v82 )
            goto LABEL_96;
        }
        v112 = v36;
        sub_B23FA0(v108, v109, (__int64)v107);
        if ( v36 )
          goto LABEL_53;
LABEL_61:
        if ( v109 )
          goto LABEL_62;
LABEL_64:
        v104 += 64;
        if ( v98 == v104 )
        {
          v66 = *(_QWORD *)(v108 + 24);
          if ( *(_QWORD *)(v66 + 912) )
            goto LABEL_66;
LABEL_67:
          LODWORD(v67) = (_DWORD)v110;
          v68 = *(_QWORD *)(v108 + 16);
          v69 = *(_DWORD *)(v108 + 8);
          if ( v110 )
            v70 = *(v110 - 1);
          else
            v70 = 0;
          goto LABEL_69;
        }
      }
      if ( v109 )
        ++*(_DWORD *)(v109 + 8);
      v47 = v101[4];
      v106 = (__int64 *)v101[3];
      v114[1] = _mm_loadh_ps((const double *)&v106);
      if ( v47 )
      {
        v48 = nullptr;
        v49 = 0;
        do
        {
          if ( v49 >= *(_DWORD *)(v47 - 4) )
            break;
          v50 = *(_QWORD *)(v47 + 8LL * v49);
          if ( v50 )
            ++*(_DWORD *)(v50 + 8);
          if ( v48 )
          {
            v51 = *((_DWORD *)v48 - 1);
            if ( v51 == *((_DWORD *)v48 - 2) )
            {
              v72 = (3 * v51 + 1) >> 1;
              v73 = 8 * v72 + 8;
              v74 = v72;
              if ( 8 * v51 + 8 >= (unsigned int)v73 || v51 >= v72 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                v106 = &v113;
                v8 = v7;
                sub_24ABB0(&v113, "Overflow encountered when expanding vector");
                v9 = v106;
                v10 = v106;
                *v8 = (char *)off_1C63128;
                sub_2333C0(v8 + 1, v10);
                sub_233E40((__int64)v9);
                __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v75 = (unsigned int *)sub_186B300(v48 - 1, v73);
              v76 = v75[1];
              v77 = v101;
              v48 = v75 + 2;
              *v75 = v74;
              LODWORD(v75) = v76;
              v54 = &v48[v76];
              v47 = v77[4];
              v53 = (_DWORD)v75 + 1;
            }
            else
            {
              v52 = v51;
              v53 = v51 + 1;
              v54 = &v48[v52];
            }
          }
          else
          {
            v92 = (_QWORD *)sub_186B270(0x18u);
            v93 = v101;
            *v92 = 2;
            v54 = v92 + 1;
            v47 = v93[4];
            v53 = 1;
            v48 = v54;
          }
          *v54 = v50;
          ++v49;
          *((_DWORD *)v48 - 1) = v53;
        }
        while ( v47 );
        v115 = v48;
        v114[0] = _mm_loadh_ps((const double *)v100);
        sub_B24F10(v108, v114);
        if ( v48 )
        {
          v55 = v106;
          v56 = v48;
          v57 = (unsigned __int64)&v48[*((unsigned int *)v48 - 1)];
          if ( (unsigned __int64)v48 < v57 )
          {
            do
            {
              while ( 1 )
              {
                v58 = *v56;
                if ( *v56 )
                {
                  v59 = (*(_DWORD *)(v58 + 8))-- == 1;
                  if ( v59 )
                    break;
                }
                if ( (unsigned __int64)++v56 >= v57 )
                  goto LABEL_48;
              }
              ++v56;
              sub_15D7BC0(v55, v58);
            }
            while ( (unsigned __int64)v56 < v57 );
          }
LABEL_48:
          sub_186B220(v48 - 1);
        }
      }
      else
      {
        v115 = nullptr;
        v114[0] = _mm_loadh_ps((const double *)v100);
        sub_B24F10(v108, v114);
      }
      if ( v109 )
      {
        v60 = v109;
        LODWORD(v106) = *(_DWORD *)(v109 + 8);
        v59 = (_DWORD)v106 == 1;
        *(_DWORD *)(v109 + 8) = (_DWORD)v106 - 1;
        if ( v59 )
        {
          v94 = v60;
          sub_15D7BC0(*(_QWORD *)v100, v60);
          v112 = v36;
          sub_B23FA0(v108, v94, (__int64)v107);
        }
        else
        {
          v112 = v36;
          sub_B23FA0(v108, v60, (__int64)v107);
        }
        if ( !v36 )
        {
LABEL_62:
          v65 = v109;
          LODWORD(v106) = *(_DWORD *)(v109 + 8);
          v59 = (_DWORD)v106 == 1;
          *(_DWORD *)(v109 + 8) = (_DWORD)v106 - 1;
          if ( v59 )
            sub_15D7BC0(*(_QWORD *)v100, v65);
          goto LABEL_64;
        }
      }
      else
      {
        v112 = v36;
        sub_B23FA0(v108, 0, (__int64)v107);
        if ( !v36 )
          goto LABEL_64;
      }
LABEL_53:
      v61 = v36;
      v62 = (unsigned __int64)&v36[*((unsigned int *)v36 - 1)];
      if ( (unsigned __int64)v36 < v62 )
      {
        v63 = v109;
        do
        {
          while ( 1 )
          {
            v64 = *v61;
            if ( *v61 )
            {
              v59 = (*(_DWORD *)(v64 + 8))-- == 1;
              if ( v59 )
                break;
            }
            if ( (unsigned __int64)++v61 >= v62 )
              goto LABEL_59;
          }
          ++v61;
          sub_15D7BC0(v99, v64);
        }
        while ( (unsigned __int64)v61 < v62 );
LABEL_59:
        v109 = v63;
      }
      sub_186B220(v36 - 1);
      goto LABEL_61;
    }
    v96 = v108;
  }
  else
  {
    ++*(_DWORD *)(a1 + 72);
    v96 = a1;
    v110 = nullptr;
  }
  v66 = *(_QWORD *)(v96 + 24);
  v67 = *(_QWORD *)(v66 + 912);
  if ( v67 )
  {
LABEL_66:
    sub_966E60(v108, &v110);
    goto LABEL_67;
  }
  v68 = *(_QWORD *)(v96 + 16);
  v69 = *(_DWORD *)(v96 + 8);
  v70 = 0;
LABEL_69:
  sub_B69FE0(v68, v69, v70, v67, 0, 0, 1);
  if ( *(_QWORD *)(v66 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  result = v110;
  if ( v110 )
    return (unsigned int *)sub_186B220(v110 - 2);
  return result;
}

