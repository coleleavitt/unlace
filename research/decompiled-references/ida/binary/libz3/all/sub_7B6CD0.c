__int64 __fastcall sub_7B6CD0(_QWORD *a1)
{
  char **v1; // rbp
  __int64 v2; // rdx
  char **v3; // rbp
  __int64 v4; // rdx
  char **v5; // rbp
  __int64 v6; // rdx
  char **exception; // rbp
  __int64 v8; // rdx
  char **v9; // rbp
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // r14
  __int64 v15; // rax
  __int64 *v16; // rbp
  void *v17; // rdi
  __int64 v18; // rbp
  __int64 result; // rax
  _QWORD *v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // r12d
  size_t v24; // rdi
  unsigned int *v25; // rax
  __int64 *v26; // rbp
  unsigned int *v27; // r13
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 *v30; // r10
  unsigned __int64 v31; // rsi
  __int64 *v32; // r9
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rsi
  __m128i v35; // xmm0
  unsigned __int64 v36; // rsi
  __int64 v37; // r9
  __int64 *v38; // r15
  void *v39; // rdi
  __int64 v40; // rbp
  __int64 i; // r12
  __int64 v42; // r12
  _DWORD *v43; // r15
  unsigned int v44; // ebp
  int v45; // ebp
  unsigned int v46; // r14d
  __int64 v47; // rsi
  _QWORD *v48; // rsi
  unsigned int v49; // eax
  _QWORD *v50; // r8
  _QWORD *v51; // rdx
  unsigned int v52; // eax
  unsigned int v53; // edi
  unsigned int v54; // r9d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rsi
  _DWORD *v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // r8
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rsi
  int v64; // eax
  _QWORD *v65; // rsi
  _QWORD *v66; // rbp
  _QWORD *v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rcx
  _QWORD *v70; // rcx
  unsigned int v71; // r14d
  int v72; // ebp
  __int64 v73; // rdi
  int v74; // eax
  _QWORD *v75; // rdi
  _QWORD *v76; // rcx
  _QWORD *v77; // rdx
  unsigned int v78; // eax
  __int64 v79; // rcx
  _QWORD *v80; // rcx
  unsigned int v81; // eax
  __int64 v82; // rsi
  unsigned int v83; // r13d
  _QWORD *v84; // r9
  _QWORD *v85; // rdx
  unsigned int v86; // eax
  unsigned int v87; // r10d
  size_t v88; // rsi
  unsigned int *v89; // rax
  __int64 v90; // rsi
  unsigned int v91; // r9d
  size_t v92; // rsi
  unsigned int v93; // r13d
  unsigned int *v94; // rax
  __int64 v95; // rcx
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  unsigned int v98; // ecx
  size_t v99; // rsi
  unsigned int v100; // r14d
  unsigned int *v101; // rax
  __int64 v102; // rcx
  unsigned int v103; // ecx
  size_t v104; // rsi
  unsigned int v105; // r14d
  unsigned int *v106; // rax
  __int64 v107; // rsi
  _QWORD *v108; // rax
  __int64 *v109; // rax
  __int64 v110; // rsi
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  unsigned int v113; // [rsp+8h] [rbp-70h]
  _QWORD *v114; // [rsp+8h] [rbp-70h]
  _QWORD *v115; // [rsp+8h] [rbp-70h]
  _QWORD *v116; // [rsp+8h] [rbp-70h]
  _QWORD *v117; // [rsp+8h] [rbp-70h]
  _QWORD *v118; // [rsp+8h] [rbp-70h]
  _QWORD *v119; // [rsp+8h] [rbp-70h]
  _QWORD *v120; // [rsp+8h] [rbp-70h]
  _QWORD *v121; // [rsp+10h] [rbp-68h]
  unsigned int v122; // [rsp+10h] [rbp-68h]
  __int64 v123; // [rsp+18h] [rbp-60h]
  __int64 v124[11]; // [rsp+20h] [rbp-58h] BYREF

  v121 = a1 + 118;
  v12 = *(_QWORD *)(a1[3] + 3296LL);
  if ( v12 )
    v13 = *(unsigned int *)(v12 - 4);
  else
    v13 = 0;
  sub_1178D10(v121, v13);
  v14 = (__int64 *)a1[117];
  if ( !v14 )
  {
    v18 = a1[3];
    result = *(_QWORD *)(v18 + 3296);
    if ( !result )
      goto LABEL_31;
    v113 = 2 * *(_DWORD *)(result - 4);
    if ( !v113 )
      goto LABEL_31;
    goto LABEL_12;
  }
  v15 = *((unsigned int *)v14 - 1);
  if ( (_DWORD)v15 )
  {
    v16 = &v14[v15];
    do
    {
      while ( *v14 )
      {
        v17 = (void *)(*v14++ - 8);
        sub_186B220(v17);
        if ( v16 == v14 )
        {
          v14 = (__int64 *)a1[117];
          goto LABEL_9;
        }
      }
      ++v14;
    }
    while ( v14 != v16 );
    v14 = (__int64 *)a1[117];
  }
LABEL_9:
  v18 = a1[3];
  *((_DWORD *)v14 - 1) = 0;
  result = *(_QWORD *)(v18 + 3296);
  if ( result )
  {
    v113 = 2 * *(_DWORD *)(result - 4);
    if ( v113 )
    {
      if ( v14 )
      {
LABEL_13:
        while ( 1 )
        {
          v21 = *((_DWORD *)v14 - 2);
          v22 = v113;
          if ( v21 >= v113 )
            break;
          while ( 1 )
          {
            v23 = (3 * v21 + 1) >> 1;
            v24 = 8 * v23 + 8;
            if ( 8 * v21 + 8 >= (unsigned int)v24 || v21 >= v23 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v124, "Overflow encountered when expanding vector", v8);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v124);
              sub_233E40((__int64)v124);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v25 = (unsigned int *)sub_186B270(v24);
            v26 = (__int64 *)a1[117];
            v27 = v25;
            v14 = (__int64 *)(v25 + 2);
            if ( !v26 )
              break;
            v28 = *((unsigned int *)v26 - 1);
            v25[1] = v28;
            v29 = 8 * v28;
            v30 = &v26[v28];
            if ( v26 != v30 )
            {
              v31 = v29 - 8;
              v32 = v26;
              if ( (unsigned __int64)(v29 - 8) <= 8 || v26 < (__int64 *)v27 + 3 && v14 < v26 + 2 )
              {
                v109 = v14;
                do
                {
                  v110 = *v32;
                  *v32++ = 0;
                  *v109++ = v110;
                }
                while ( v30 != v32 );
              }
              else
              {
                v33 = 0;
                v34 = (v31 >> 3) + 1;
                do
                {
                  v35 = _mm_loadu_si128((const __m128i *)&v26[v33 / 2]);
                  *(_OWORD *)&v26[v33 / 2] = 0;
                  *(__m128i *)&v27[v33 + 2] = v35;
                  v33 += 4LL;
                }
                while ( 4 * (v34 >> 1) != v33 );
                if ( (v34 & 1) != 0 )
                {
                  v36 = 2 * (v34 & 0xFFFFFFFFFFFFFFFELL);
                  v37 = v26[v36 / 2];
                  v26[v36 / 2] = 0;
                  *(_QWORD *)&v27[v36 + 2] = v37;
                }
              }
            }
            v38 = &v26[v28];
            if ( (_DWORD)v28 )
            {
              do
              {
                while ( *v26 )
                {
                  v39 = (void *)(*v26++ - 8);
                  sub_186B220(v39);
                  if ( v38 == v26 )
                    goto LABEL_28;
                }
                ++v26;
              }
              while ( v38 != v26 );
LABEL_28:
              v26 = (__int64 *)a1[117];
            }
            sub_186B220(v26 - 1);
            *v27 = v23;
            v22 = v113;
            v21 = *((_DWORD *)v14 - 2);
            a1[117] = v14;
            if ( v21 >= v113 )
              goto LABEL_30;
          }
          v25[1] = 0;
          a1[117] = v14;
          *v25 = v23;
        }
LABEL_30:
        v18 = a1[3];
        *((_DWORD *)v14 - 1) = v22;
        result = (__int64)memset(v14, 0, 8LL * v22);
        goto LABEL_31;
      }
LABEL_12:
      v20 = (_QWORD *)sub_186B270(0x18u);
      v14 = v20 + 1;
      *v20 = 2;
      a1[117] = v20 + 1;
      goto LABEL_13;
    }
  }
LABEL_31:
  v40 = *(_QWORD *)(v18 + 3224);
  if ( v40 )
  {
    result = *(unsigned int *)(v40 - 4);
    for ( i = v40 + 8 * result; i != v40; result = sub_1178A80(v121) )
    {
      while ( (*(_BYTE *)(*(_QWORD *)v40 + 16LL) & 0x10) != 0 )
      {
        v40 += 8;
        if ( i == v40 )
          goto LABEL_37;
      }
      v40 += 8;
    }
  }
LABEL_37:
  v42 = a1[93];
  if ( v42 )
  {
    result = v42 + 8LL * *(unsigned int *)(v42 - 4);
    v123 = result;
    if ( result != v42 )
    {
      while ( 1 )
      {
        v43 = *(_DWORD **)v42;
        v44 = *(_DWORD *)(*(_QWORD *)v42 + 16LL);
        if ( v44 != -2 )
        {
          v59 = a1[117];
          v60 = (_QWORD *)(v59 + 8LL * v44);
          v61 = (_QWORD *)*v60;
          if ( *v60 )
          {
            v62 = *((_DWORD *)v61 - 1);
            if ( v62 == *((_DWORD *)v61 - 2) )
            {
              v103 = (3 * v62 + 1) >> 1;
              v104 = 8 * v103 + 8;
              v105 = v103;
              if ( 8 * v62 + 8 >= (unsigned int)v104 || v62 >= v103 )
              {
                v1 = (char **)__cxa_allocate_exception(0x28u);
                sub_113C8C(v124, "Overflow encountered when expanding vector", v2);
                *v1 = (char *)off_1C63128;
                sub_2333C0(v1 + 1, v124);
                sub_233E40((__int64)v124);
                __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v119 = v60;
              v106 = (unsigned int *)sub_186B300(v61 - 1, v104);
              v59 = a1[117];
              v107 = v106[1];
              v61 = v106 + 2;
              *v119 = v106 + 2;
              *v106 = v105;
              LODWORD(v106) = v107;
              v65 = &v61[v107];
              v64 = (_DWORD)v106 + 1;
            }
            else
            {
              v63 = v62;
              v64 = v62 + 1;
              v65 = &v61[v63];
            }
          }
          else
          {
            v120 = (_QWORD *)(v59 + 8LL * v44);
            v112 = (_QWORD *)sub_186B270(0x18u);
            v59 = a1[117];
            v61 = v112 + 1;
            *v112 = 2;
            v64 = 1;
            *v120 = v61;
            v65 = v61;
          }
          *v65 = v43;
          v66 = (_QWORD *)(v59 + 8LL * (v44 ^ 1));
          *((_DWORD *)v61 - 1) = v64;
          v67 = (_QWORD *)*v66;
          if ( *v66 )
          {
            v68 = *((_DWORD *)v67 - 1);
            if ( v68 == *((_DWORD *)v67 - 2) )
            {
              v98 = (3 * v68 + 1) >> 1;
              v99 = 8 * v98 + 8;
              v100 = v98;
              if ( 8 * v68 + 8 >= (unsigned int)v99 || v68 >= v98 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_113C8C(v124, "Overflow encountered when expanding vector", v6);
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v124);
                sub_233E40((__int64)v124);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v101 = (unsigned int *)sub_186B300(v67 - 1, v99);
              v102 = v101[1];
              v67 = v101 + 2;
              *v66 = v101 + 2;
              *v101 = v100;
              LODWORD(v101) = v102;
              v70 = &v67[v102];
              result = (unsigned int)((_DWORD)v101 + 1);
            }
            else
            {
              v69 = v68;
              result = v68 + 1;
              v70 = &v67[v69];
            }
          }
          else
          {
            v111 = (_QWORD *)sub_186B270(0x18u);
            v67 = v111 + 1;
            *v111 = 2;
            result = 1;
            *v66 = v67;
            v70 = v67;
          }
          *v70 = v43;
          v71 = 0;
          *((_DWORD *)v67 - 1) = result;
          v72 = v43[8];
          if ( v72 )
          {
            do
            {
              v81 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v43 + 88LL))(v43, v71);
              v82 = a1[117];
              v83 = v81;
              v84 = (_QWORD *)(v82 + 8LL * v81);
              v85 = (_QWORD *)*v84;
              if ( *v84 )
              {
                v86 = *((_DWORD *)v85 - 1);
                if ( v86 == *((_DWORD *)v85 - 2) )
                {
                  v87 = (3 * v86 + 1) >> 1;
                  v88 = 8 * v87 + 8;
                  if ( 8 * v86 + 8 >= (unsigned int)v88 || v86 >= v87 )
                  {
LABEL_96:
                    v3 = (char **)__cxa_allocate_exception(0x28u);
                    sub_113C8C(v124, "Overflow encountered when expanding vector", v4);
                    *v3 = (char *)off_1C63128;
                    sub_2333C0(v3 + 1, v124);
                    sub_233E40((__int64)v124);
                    __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v122 = (3 * v86 + 1) >> 1;
                  v115 = v84;
                  v89 = (unsigned int *)sub_186B300(v85 - 1, v88);
                  v90 = v89[1];
                  v85 = v89 + 2;
                  *v115 = v89 + 2;
                  *v89 = v122;
                  LODWORD(v89) = v90;
                  v75 = &v85[v90];
                  v82 = a1[117];
                  v74 = (_DWORD)v89 + 1;
                }
                else
                {
                  v73 = v86;
                  v74 = v86 + 1;
                  v75 = &v85[v73];
                }
              }
              else
              {
                v118 = (_QWORD *)(v82 + 8LL * v81);
                v97 = (_QWORD *)sub_186B270(0x18u);
                v85 = v97 + 1;
                v82 = a1[117];
                *v97 = 2;
                v75 = v85;
                v74 = 1;
                *v118 = v85;
              }
              *v75 = v43;
              *((_DWORD *)v85 - 1) = v74;
              v76 = (_QWORD *)(v82 + 8LL * (v83 ^ 1));
              v77 = (_QWORD *)*v76;
              if ( *v76 )
              {
                v78 = *((_DWORD *)v77 - 1);
                if ( v78 == *((_DWORD *)v77 - 2) )
                {
                  v91 = (3 * v78 + 1) >> 1;
                  v92 = 8 * v91 + 8;
                  v93 = v91;
                  if ( 8 * v78 + 8 >= (unsigned int)v92 || v78 >= v91 )
                  {
                    v9 = (char **)__cxa_allocate_exception(0x28u);
                    sub_113C8C(v124, "Overflow encountered when expanding vector", v10);
                    *v9 = (char *)off_1C63128;
                    sub_2333C0(v9 + 1, v124);
                    sub_233E40((__int64)v124);
                    __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v116 = v76;
                  v94 = (unsigned int *)sub_186B300(v77 - 1, v92);
                  v77 = v94 + 2;
                  *v116 = v94 + 2;
                  v95 = v94[1];
                  *v94 = v93;
                  LODWORD(v94) = v95;
                  v80 = &v77[v95];
                  result = (unsigned int)((_DWORD)v94 + 1);
                }
                else
                {
                  v79 = v78;
                  result = v78 + 1;
                  v80 = &v77[v79];
                }
              }
              else
              {
                v108 = (_QWORD *)sub_186B270(0x18u);
                v77 = v108 + 1;
                *v108 = 2;
                result = 1;
                *(_QWORD *)(v82 + 8LL * (v83 ^ 1)) = v77;
                v80 = v77;
              }
              ++v71;
              *v80 = v43;
              *((_DWORD *)v77 - 1) = result;
            }
            while ( v72 != v71 );
          }
          goto LABEL_49;
        }
        v45 = v43[8];
        v46 = 0;
        if ( v45 )
          break;
LABEL_49:
        v42 += 8;
        if ( v123 == v42 )
          return result;
      }
      while ( 1 )
      {
        v49 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v43 + 88LL))(v43, v46);
        v50 = (_QWORD *)(a1[117] + 8LL * v49);
        v51 = (_QWORD *)*v50;
        if ( !*v50 )
          break;
        v52 = *((_DWORD *)v51 - 1);
        v53 = *((_DWORD *)v51 - 2);
        if ( v53 == v52 )
        {
          v114 = v50;
          v54 = (3 * v53 + 1) >> 1;
          v55 = 8 * v54 + 8;
          if ( 8 * v53 + 8 >= (unsigned int)v55 || v53 >= v54 )
            goto LABEL_96;
          ++v46;
          v56 = (unsigned int *)sub_186B300(v51 - 1, v55);
          v57 = v56[1];
          v58 = v56 + 2;
          *v114 = v56 + 2;
          *v56 = (3 * v53 + 1) >> 1;
          result = (unsigned int)(v57 + 1);
          *(_QWORD *)&v58[2 * v57] = v43;
          *(v58 - 1) = result;
          if ( v45 == v46 )
            goto LABEL_49;
        }
        else
        {
          v47 = v52;
          result = v52 + 1;
          v48 = &v51[v47];
LABEL_43:
          ++v46;
          *v48 = v43;
          *((_DWORD *)v51 - 1) = result;
          if ( v45 == v46 )
            goto LABEL_49;
        }
      }
      v117 = (_QWORD *)(a1[117] + 8LL * v49);
      v96 = (_QWORD *)sub_186B270(0x18u);
      v51 = v96 + 1;
      *v96 = 2;
      v48 = v51;
      result = 1;
      *v117 = v51;
      goto LABEL_43;
    }
  }
  return result;
}

