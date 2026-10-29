__int64 __fastcall sub_43A6A0(_QWORD *a1, __int64 a2, int a3)
{
  char **v3; // rbx
  char **v4; // rbx
  char **v5; // rbx
  char **v6; // r12
  char **v7; // rbx
  char **exception; // rbx
  char **v9; // r13
  __int16 v13; // r11
  unsigned int v14; // eax
  int v15; // r14d
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v22; // r12
  __m128 *v23; // r10
  __int64 v24; // r9
  __int32 v25; // edi
  __int64 v26; // rax
  __m128 **v27; // rcx
  unsigned int v28; // edx
  __m128 **v29; // rsi
  __int64 v30; // rdx
  __m128 **v31; // r8
  __m128 **v32; // rax
  __m128 *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r12
  unsigned __int8 v36; // r12
  __int64 v37; // rax
  int v38; // r13d
  _QWORD *v39; // rdx
  __int64 v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rax
  __int64 v47; // r13
  _QWORD *v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  __int64 *v52; // rcx
  _QWORD *v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 *v57; // rcx
  __int64 v58; // rax
  int v59; // edx
  __m128 *v60; // rax
  unsigned int v61; // r12d
  unsigned int v62; // ecx
  unsigned int *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  char v66; // dl
  unsigned __int8 v67; // r13
  int v68; // r12d
  _QWORD *v69; // rdx
  __int64 v70; // rax
  __int64 *v71; // rax
  __int64 v72; // r12
  unsigned int v73; // edx
  _QWORD *v75; // rdx
  unsigned int v76; // r15d
  unsigned int v77; // ecx
  unsigned int *v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rdx
  unsigned int v81; // r12d
  unsigned int v82; // ecx
  unsigned int *v83; // rax
  __int64 v84; // rcx
  unsigned int v85; // r15d
  unsigned int v86; // ecx
  unsigned int *v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  unsigned int v90; // edx
  __int64 v91; // rcx
  int v92; // edx
  __int64 *v93; // rcx
  _QWORD *v94; // rdx
  unsigned int v95; // r14d
  unsigned int v96; // ecx
  unsigned int *v97; // rax
  __int64 v98; // rcx
  unsigned int v99; // r13d
  unsigned int v100; // ecx
  unsigned int *v101; // rdx
  __int64 v102; // rcx
  _QWORD *v103; // rax
  unsigned int v104; // r13d
  unsigned int v105; // ecx
  unsigned int *v106; // rax
  __int64 v107; // rsi
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  int v111; // [rsp+0h] [rbp-68h]
  int v112; // [rsp+8h] [rbp-60h]
  __int64 v113; // [rsp+10h] [rbp-58h] BYREF
  int v114; // [rsp+18h] [rbp-50h]
  int v115; // [rsp+20h] [rbp-48h]
  char v116; // [rsp+28h] [rbp-40h]
  int v117; // [rsp+30h] [rbp-38h]
  int v118; // [rsp+38h] [rbp-30h]
  int v119; // [rsp+40h] [rbp-28h]
  void *v120; // [rsp+48h] [rbp-20h]

  v13 = *(_WORD *)(a2 + 4);
  if ( v13 )
  {
    v14 = *(_DWORD *)(a2 + 8);
    if ( a3 )
    {
      if ( v14 <= 1 )
        goto LABEL_4;
      goto LABEL_19;
    }
    goto LABEL_5;
  }
  v22 = a1[18];
  v23 = *(__m128 **)(a2 + 16);
  v24 = *(_QWORD *)(v22 + 8);
  v25 = v23->m128_i32[3];
  v26 = *(unsigned int *)(v24 + 40);
  v27 = *(__m128 ***)(v24 + 32);
  v28 = v26 - 1;
  v26 *= 24;
  v29 = (__m128 **)((char *)v27 + v26);
  v30 = 24LL * (v25 & v28);
  v31 = &v27[(unsigned __int64)v30 / 8];
  if ( v30 == v26 )
  {
LABEL_50:
    if ( v27 != v31 )
    {
      while ( 1 )
      {
        v60 = *v27;
        if ( (unsigned __int64)*v27 > 1 )
        {
          if ( v60->m128_i32[3] == v25 && v23 == v60 )
          {
            v32 = v27;
            goto LABEL_35;
          }
        }
        else if ( !v60 )
        {
          goto LABEL_17;
        }
        v27 += 3;
        if ( v31 == v27 )
          goto LABEL_17;
      }
    }
    goto LABEL_17;
  }
  v32 = &v27[(unsigned __int64)v30 / 8];
  while ( 1 )
  {
    v33 = *v32;
    if ( (unsigned __int64)*v32 > 1 )
      break;
    if ( !v33 )
      goto LABEL_17;
LABEL_14:
    v32 += 3;
    if ( v29 == v32 )
      goto LABEL_50;
  }
  if ( v33->m128_i32[3] != v25 || v23 != v33 )
    goto LABEL_14;
LABEL_35:
  v42 = *(unsigned int *)(v22 + 16);
  if ( (_DWORD)v42 != *((_DWORD *)v32 + 4) )
  {
LABEL_17:
    v14 = *(_DWORD *)(a2 + 8);
    if ( a3 )
    {
      v15 = 0;
      if ( v14 <= 1 )
      {
LABEL_66:
        v65 = a1[7];
        if ( *(_DWORD *)(a2 + 24) )
        {
          v66 = 3;
          if ( a3 != 3 )
            v66 = (a3 - 1) & 3;
          v67 = v66;
          if ( v65 )
            v68 = *(_DWORD *)(v65 - 4);
          else
            v68 = 0;
          v69 = (_QWORD *)a1[5];
          if ( v69 )
          {
            v70 = *((unsigned int *)v69 - 1);
            if ( (_DWORD)v70 == *((_DWORD *)v69 - 2) )
            {
              v76 = (unsigned int)(3 * v70 + 1) >> 1;
              v77 = 16 * v76 + 8;
              if ( 16 * (int)v70 + 8 >= v77 || (unsigned int)v70 >= v76 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v113, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v113);
                sub_233E40((__int64)&v113);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v78 = (unsigned int *)sub_186B300(v69 - 1, v77);
              v69 = v78 + 2;
              *v78 = v76;
              v79 = v78[1];
              a1[5] = v69;
              v71 = &v69[2 * v79];
            }
            else
            {
              v71 = &v69[2 * v70];
            }
          }
          else
          {
            v108 = (_QWORD *)sub_186B270(0x28u);
            *v108 = 2;
            v69 = v108 + 1;
            a1[5] = v108 + 1;
            v71 = v108 + 1;
          }
          *v71 = a2;
          *((_DWORD *)v71 + 3) = v68;
          *((_DWORD *)v71 + 2) = v15 | (16 * v67);
          ++*((_DWORD *)v69 - 1);
          return 0;
        }
LABEL_76:
        v72 = a1[1];
        *(_DWORD *)(a2 + 8) += 2;
        if ( v65 )
        {
          v73 = *(_DWORD *)(v65 - 4);
          if ( v73 == *(_DWORD *)(v65 - 8) )
          {
            v104 = (3 * v73 + 1) >> 1;
            v105 = 8 * v104 + 8;
            if ( 8 * v73 + 8 >= v105 || v73 >= v104 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v113, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, &v113);
              sub_233E40((__int64)&v113);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v106 = (unsigned int *)sub_186B300((void *)(v65 - 8), v105);
            v107 = v106[1];
            *v106 = v104;
            a1[7] = v106 + 2;
            *(_QWORD *)&v106[2 * v107 + 2] = a2;
            v106[1] = v107 + 1;
          }
          else
          {
            *(_QWORD *)(v65 + 8LL * v73) = a2;
            *(_DWORD *)(v65 - 4) = v73 + 1;
          }
        }
        else
        {
          v110 = (_QWORD *)sub_186B270(0x18u);
          v110[1] = a2;
          a1[7] = v110 + 1;
          *v110 = 0x100000002LL;
        }
        if ( (*(_DWORD *)(a2 + 8))-- == 1 )
          sub_15D7BC0(v72, a2);
        return 1;
      }
LABEL_19:
      if ( a2 != a1[15] )
      {
        if ( v13 )
        {
          if ( v13 != 2 )
          {
            if ( v13 != 1 )
              goto LABEL_59;
            goto LABEL_62;
          }
        }
        else if ( !*(_DWORD *)(a2 + 24) )
        {
          v65 = a1[7];
          goto LABEL_76;
        }
        v34 = sub_1680FB0(a1[4], a2, 0);
        v35 = v34;
        if ( v34 )
        {
          ++*(_DWORD *)(v34 + 8);
          v89 = (_QWORD *)a1[7];
          if ( v89 )
          {
            v90 = *((_DWORD *)v89 - 1);
            if ( v90 == *((_DWORD *)v89 - 2) )
            {
              v99 = (3 * v90 + 1) >> 1;
              v100 = 8 * v99 + 8;
              if ( 8 * v90 + 8 >= v100 || v90 >= v99 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v113, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, &v113);
                sub_233E40((__int64)&v113);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v101 = (unsigned int *)sub_186B300(v89 - 1, v100);
              v89 = v101 + 2;
              v102 = v101[1];
              *v101 = v99;
              a1[7] = v101 + 2;
              LODWORD(v101) = v102;
              v93 = &v89[v102];
              v92 = (_DWORD)v101 + 1;
            }
            else
            {
              v91 = v90;
              v92 = v90 + 1;
              v93 = &v89[v91];
            }
          }
          else
          {
            v109 = (_QWORD *)sub_186B270(0x18u);
            v92 = 1;
            *v109 = 2;
            v89 = v109 + 1;
            a1[7] = v89;
            v93 = v89;
          }
          *v93 = v35;
          *((_DWORD *)v89 - 1) = v92;
          if ( a2 != v35 )
            goto LABEL_47;
          return 1;
        }
        v13 = *(_WORD *)(a2 + 4);
        v15 = 1;
LABEL_24:
        if ( v13 != 1 )
        {
          if ( v13 == 2 )
          {
            v36 = (a3 - 1) & 3;
            if ( a3 == 3 )
              v36 = 3;
            v37 = a1[7];
            if ( v37 )
              v38 = *(_DWORD *)(v37 - 4);
            else
              v38 = 0;
            v39 = (_QWORD *)a1[5];
            if ( v39 )
            {
              v40 = *((unsigned int *)v39 - 1);
              if ( (_DWORD)v40 == *((_DWORD *)v39 - 2) )
              {
                v85 = (unsigned int)(3 * v40 + 1) >> 1;
                v86 = 16 * v85 + 8;
                if ( 16 * (int)v40 + 8 >= v86 || (unsigned int)v40 >= v85 )
                {
                  v3 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v113, "Overflow encountered when expanding vector");
                  *v3 = (char *)off_1C63128;
                  sub_2333C0(v3 + 1, &v113);
                  sub_233E40((__int64)&v113);
                  __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v87 = (unsigned int *)sub_186B300(v39 - 1, v86);
                v39 = v87 + 2;
                *v87 = v85;
                v88 = v87[1];
                a1[5] = v39;
                v41 = &v39[2 * v88];
              }
              else
              {
                v41 = &v39[2 * v40];
              }
            }
            else
            {
              v103 = (_QWORD *)sub_186B270(0x28u);
              *v103 = 2;
              v39 = v103 + 1;
              a1[5] = v103 + 1;
              v41 = v103 + 1;
            }
            *v41 = a2;
            *((_DWORD *)v41 + 3) = v38;
            *((_DWORD *)v41 + 2) = v15 | (16 * v36);
            ++*((_DWORD *)v39 - 1);
            return 0;
          }
          if ( v13 )
          {
LABEL_59:
            sub_1872CE0("");
            sub_1873130(114, 226);
          }
          goto LABEL_66;
        }
LABEL_62:
        sub_439E10(a1, a2);
        return 1;
      }
LABEL_4:
      v15 = 0;
      goto LABEL_24;
    }
LABEL_5:
    v16 = (_QWORD *)a1[7];
    *(_DWORD *)(a2 + 8) = v14 + 1;
    if ( v16 )
    {
      v17 = *((_DWORD *)v16 - 1);
      if ( v17 == *((_DWORD *)v16 - 2) )
      {
        v61 = (3 * v17 + 1) >> 1;
        v62 = 8 * v61 + 8;
        if ( 8 * v17 + 8 >= v62 || v17 >= v61 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v113, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v113);
          sub_233E40((__int64)&v113);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v63 = (unsigned int *)sub_186B300(v16 - 1, v62);
        v64 = v63[1];
        v16 = v63 + 2;
        *v63 = v61;
        a1[7] = v63 + 2;
        LODWORD(v63) = v64;
        v20 = &v16[v64];
        v19 = (_DWORD)v63 + 1;
      }
      else
      {
        v18 = v17;
        v19 = v17 + 1;
        v20 = &v16[v18];
      }
    }
    else
    {
      v75 = (_QWORD *)sub_186B270(0x18u);
      *v75 = 2;
      v19 = 1;
      v16 = v75 + 1;
      a1[7] = v16;
      v20 = v16;
    }
    *v20 = a2;
    *((_DWORD *)v16 - 1) = v19;
    return 1;
  }
  v43 = sub_439010(*(_QWORD *)(v22 + 8), v23, v42, *(_DWORD *)(v22 + 20));
  v46 = sub_15DC610(
          *(_QWORD *)v22,
          v43,
          *(_DWORD *)(v43 + 32),
          (int)a2 + 32,
          v44,
          v45,
          v111,
          v112,
          v113,
          v114,
          v115,
          v116,
          v117,
          v118,
          v119,
          v120);
  v47 = v46;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  v48 = *(_QWORD **)(v22 + 40);
  if ( v48 )
  {
    v49 = *((_DWORD *)v48 - 1);
    if ( v49 == *((_DWORD *)v48 - 2) )
    {
      v95 = (3 * v49 + 1) >> 1;
      v96 = 8 * v95 + 8;
      if ( 8 * v49 + 8 >= v96 || v49 >= v95 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v113, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, &v113);
        sub_233E40((__int64)&v113);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v97 = (unsigned int *)sub_186B300(v48 - 1, v96);
      v98 = v97[1];
      v48 = v97 + 2;
      *(_QWORD *)(v22 + 40) = v97 + 2;
      *v97 = v95;
      LODWORD(v97) = v98;
      v52 = &v48[v98];
      v51 = (_DWORD)v97 + 1;
    }
    else
    {
      v50 = v49;
      v51 = v49 + 1;
      v52 = &v48[v50];
    }
  }
  else
  {
    v80 = (_QWORD *)sub_186B270(0x18u);
    *v80 = 2;
    v51 = 1;
    v48 = v80 + 1;
    *(_QWORD *)(v22 + 40) = v48;
    v52 = v48;
  }
  *v52 = v47;
  *((_DWORD *)v48 - 1) = v51;
  if ( v47 )
    ++*(_DWORD *)(v47 + 8);
  v53 = (_QWORD *)a1[7];
  if ( v53 )
  {
    v54 = *((_DWORD *)v53 - 1);
    if ( v54 == *((_DWORD *)v53 - 2) )
    {
      v81 = (3 * v54 + 1) >> 1;
      v82 = 8 * v81 + 8;
      if ( 8 * v54 + 8 >= v82 || v54 >= v81 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v113, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, &v113);
        sub_233E40((__int64)&v113);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v83 = (unsigned int *)sub_186B300(v53 - 1, v82);
      v84 = v83[1];
      v53 = v83 + 2;
      *v83 = v81;
      a1[7] = v83 + 2;
      LODWORD(v83) = v84;
      v57 = &v53[v84];
      v56 = (_DWORD)v83 + 1;
    }
    else
    {
      v55 = v54;
      v56 = v54 + 1;
      v57 = &v53[v55];
    }
  }
  else
  {
    v94 = (_QWORD *)sub_186B270(0x18u);
    *v94 = 2;
    v56 = 1;
    v53 = v94 + 1;
    a1[7] = v53;
    v57 = v53;
  }
  *v57 = v47;
  *((_DWORD *)v53 - 1) = v56;
  if ( a2 != v47 )
  {
LABEL_47:
    v58 = a1[5];
    if ( v58 )
    {
      v59 = *(_DWORD *)(v58 - 4);
      if ( v59 )
        *(_BYTE *)(v58 + 16LL * (unsigned int)(v59 - 1) + 8) |= 2u;
    }
  }
  return 1;
}

