__int64 __fastcall sub_42A9E0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  char **v4; // rbx
  char **exception; // rbx
  char **v6; // r13
  char **v7; // r13
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  unsigned int i; // r14d
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  _QWORD *v18; // rsi
  __int64 *v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // r9
  unsigned int v23; // r14d
  _QWORD *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r15
  _DWORD *v33; // rsi
  _DWORD *v34; // rdi
  unsigned int v35; // eax
  __int64 v36; // r10
  __int64 v37; // r11
  __int64 v38; // rbx
  __int64 *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rdi
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 *v47; // r15
  unsigned __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 *v51; // rbx
  unsigned int v53; // r15d
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  unsigned __int64 v58; // r12
  __int64 *v59; // rbx
  __int64 v60; // rsi
  __int64 v61; // rdi
  unsigned int v62; // ebx
  unsigned int v63; // r12d
  size_t v64; // rsi
  unsigned int *v65; // rax
  unsigned int v66; // edx
  __int64 v67; // rax
  _DWORD *v68; // rcx
  unsigned __int64 v69; // r12
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rax
  unsigned int v73; // r12d
  unsigned int v74; // r13d
  unsigned int v75; // eax
  unsigned int *v76; // rax
  unsigned int v77; // edx
  __int64 v78; // rax
  _DWORD *v79; // rcx
  unsigned int v80; // eax
  __int64 v81; // r15
  __int64 v82; // r13
  _QWORD *v83; // rdx
  __int64 v84; // r14
  int v85; // eax
  __int64 *v86; // rcx
  unsigned int v87; // eax
  unsigned int v88; // ecx
  size_t v89; // rsi
  unsigned int *v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // r13
  __int64 *v93; // r12
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rax
  unsigned int v97; // [rsp+Ch] [rbp-BCh]
  unsigned int v99; // [rsp+10h] [rbp-B8h]
  __int64 v100; // [rsp+18h] [rbp-B0h]
  __int64 v101; // [rsp+20h] [rbp-A8h]
  unsigned int v102; // [rsp+28h] [rbp-A0h]
  int v103; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v104; // [rsp+28h] [rbp-A0h]
  _QWORD *v105; // [rsp+28h] [rbp-A0h]
  __int64 v106; // [rsp+28h] [rbp-A0h]
  __int64 v107; // [rsp+30h] [rbp-98h]
  __int64 v108; // [rsp+40h] [rbp-88h]
  __int64 v109; // [rsp+60h] [rbp-68h] BYREF
  __int64 *v110; // [rsp+68h] [rbp-60h]
  __int64 v111[11]; // [rsp+70h] [rbp-58h] BYREF

  v100 = a1[6];
  sub_4334D0(v100, a2, 0);
  v11 = (_QWORD *)a2[1];
  if ( v11 )
    v97 = *((_DWORD *)v11 - 1);
  else
    v97 = 0;
  v12 = a3[1];
  for ( i = 0; v12; *((_DWORD *)v11 - 1) = v17 )
  {
    if ( i >= *(_DWORD *)(v12 - 4) )
      break;
    v14 = *(_QWORD *)(v12 + 8LL * i);
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    if ( v11 )
    {
      v15 = *((_DWORD *)v11 - 1);
      if ( v15 == *((_DWORD *)v11 - 2) )
      {
        v53 = (3 * v15 + 1) >> 1;
        v54 = 8 * v53 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v54 || v15 >= v53 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v111, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v111);
          sub_233E40((__int64)v111);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v55 = (unsigned int *)sub_186B300(v11 - 1, v54);
        v56 = v55[1];
        v11 = v55 + 2;
        *v55 = v53;
        a2[1] = (__int64)(v55 + 2);
        LODWORD(v55) = v56;
        v18 = &v11[v56];
        v12 = a3[1];
        v17 = (_DWORD)v55 + 1;
      }
      else
      {
        v16 = v15;
        v17 = v15 + 1;
        v18 = &v11[v16];
      }
    }
    else
    {
      v57 = (_QWORD *)sub_186B270(0x18u);
      v11 = v57 + 1;
      *v57 = 2;
      v17 = 1;
      a2[1] = (__int64)v11;
      v18 = v11;
      v12 = a3[1];
    }
    *v18 = v14;
    ++i;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1[6] + 216LL))(a1[6], a2, a4);
  if ( v23 == -1 )
  {
    v24 = (_QWORD *)a3[1];
    if ( v24 )
    {
      v25 = *((unsigned int *)v24 - 1);
      if ( (_DWORD)v25 )
      {
        v26 = &v24[v25];
        if ( v24 >= v26 )
          goto LABEL_21;
        do
        {
          while ( 1 )
          {
            v27 = *v24;
            if ( *v24 )
            {
              v28 = *a3;
              v29 = (*(_DWORD *)(v27 + 8))-- == 1;
              if ( v29 )
                break;
            }
            if ( ++v24 >= v26 )
              goto LABEL_20;
          }
          sub_15D7BC0(v28, v27);
          ++v24;
        }
        while ( v24 < v26 );
LABEL_20:
        v24 = (_QWORD *)a3[1];
        if ( v24 )
LABEL_21:
          *((_DWORD *)v24 - 1) = 0;
        v30 = *a1;
        v31 = a1[6];
        v110 = nullptr;
        v108 = v30;
        v109 = v30;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 24LL))(v31, &v109);
        v32 = 0;
        v101 = 8LL * v97;
        v107 = v97 + 1LL;
        while ( 2 )
        {
          v33 = (_DWORD *)a2[1];
          v34 = v33;
          if ( !v33 || (v35 = *(v33 - 1), v102 = v35, v97 >= v35) )
          {
            v103 = -1;
            v38 = v32;
            goto LABEL_95;
          }
          v20 = v110;
          v36 = 8 * (v107 + v35 - 1 - v97);
          v21 = 8LL * v97;
          if ( v110 )
          {
            v22 = &v33[(unsigned __int64)v101 / 4];
            v37 = *((unsigned int *)v110 - 1);
            v19 = &v110[v37];
LABEL_27:
            if ( (_DWORD)v37 )
            {
              v38 = *(_QWORD *)&v33[(unsigned __int64)v21 / 4];
              v39 = v110;
              while ( *v39 != v38 )
              {
                if ( ++v39 == v19 )
                {
                  v21 += 8;
                  if ( v36 == v21 )
                    goto LABEL_65;
                  v22 = &v33[(unsigned __int64)v21 / 4];
                  goto LABEL_27;
                }
              }
              if ( v38 )
                ++*(_DWORD *)(v38 + 8);
              if ( v32 && (v29 = *(_DWORD *)(v32 + 8) == 1, --*(_DWORD *)(v32 + 8), v29) )
              {
                v106 = v21;
                sub_15D7BC0(v108, v32);
                v33 = (_DWORD *)a2[1];
                v41 = 0x1FFFFFFFELL;
                v22 = (_QWORD *)((char *)v33 + v106);
                v40 = *(_QWORD *)((char *)v33 + v106);
                if ( !v33 )
                  goto LABEL_37;
              }
              else
              {
                v40 = v38;
              }
              v41 = 2LL * (unsigned int)(*(v33 - 1) - 1);
LABEL_37:
              v42 = *(_QWORD *)&v33[v41];
              v43 = *a2;
              if ( v42 )
                ++*(_DWORD *)(v42 + 8);
              if ( v40 )
              {
                v29 = (*(_DWORD *)(v40 + 8))-- == 1;
                if ( v29 )
                {
                  v105 = v22;
                  sub_15D7BC0(v43, v40);
                  v43 = *a2;
                  v33 = (_DWORD *)a2[1];
                  v22 = v105;
                }
              }
              v44 = *(v33 - 1);
              *v22 = v42;
              v45 = (unsigned int)(v44 - 1);
              v46 = *(_QWORD *)&v33[2 * v45];
              *(v33 - 1) = v45;
              if ( v46 )
              {
                v29 = (*(_DWORD *)(v46 + 8))-- == 1;
                if ( v29 )
                  sub_15D7BC0(v43, v46);
              }
              v103 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1[6] + 216LL))(a1[6], a2, a4);
              if ( v103 == -1 )
              {
                v47 = v110;
                if ( v110 )
                {
                  v48 = (unsigned __int64)&v110[*((unsigned int *)v110 - 1)];
                  if ( (unsigned __int64)v110 >= v48 )
                    goto LABEL_74;
                  do
                  {
                    v49 = *v47;
                    if ( *v47 )
                    {
                      v50 = v109;
                      v29 = (*(_DWORD *)(v49 + 8))-- == 1;
                      if ( v29 )
                      {
                        v104 = v48;
                        sub_15D7BC0(v50, v49);
                        v48 = v104;
                      }
                    }
                    ++v47;
                  }
                  while ( (unsigned __int64)v47 < v48 );
                  v47 = v110;
                  if ( v110 )
LABEL_74:
                    *((_DWORD *)v47 - 1) = 0;
                }
                (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1[6] + 24LL))(a1[6], &v109);
                v32 = v38;
                continue;
              }
              v33 = (_DWORD *)a2[1];
              v34 = v33;
              if ( v103 != 1 )
                goto LABEL_95;
              if ( !v33 )
                goto LABEL_136;
              v80 = *(v33 - 1);
              if ( v97 >= v80 )
                goto LABEL_97;
              v19 = (__int64 *)a3[1];
              v81 = 8 * (v107 + v80 - v97 - 1);
              v82 = *(_QWORD *)&v33[2 * v97];
              if ( v82 )
                ++*(_DWORD *)(v82 + 8);
              if ( v19 )
              {
                v84 = 8LL * v97;
                goto LABEL_117;
              }
              v83 = (_QWORD *)sub_186B270(0x18u);
              v84 = 8LL * v97;
              *v83 = 2;
              v85 = 1;
              v19 = v83 + 1;
              a3[1] = (__int64)v19;
              v33 = (_DWORD *)a2[1];
              v86 = v19;
              v34 = v33;
              while ( 1 )
              {
                v84 += 8;
                *v86 = v82;
                *((_DWORD *)v19 - 1) = v85;
                if ( v84 == v81 )
                  break;
                while ( 1 )
                {
                  v82 = *(_QWORD *)&v33[(unsigned __int64)v84 / 4];
                  if ( v82 )
                    ++*(_DWORD *)(v82 + 8);
LABEL_117:
                  v87 = *((_DWORD *)v19 - 1);
                  if ( v87 == *((_DWORD *)v19 - 2) )
                    break;
                  v84 += 8;
                  v19[v87] = v82;
                  *((_DWORD *)v19 - 1) = v87 + 1;
                  if ( v84 == v81 )
                    goto LABEL_95;
                }
                v88 = (3 * v87 + 1) >> 1;
                v89 = 8 * v88 + 8;
                if ( 8 * v87 + 8 >= (unsigned int)v89 || v87 >= v88 )
                {
                  v6 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v111, "Overflow encountered when expanding vector");
                  *v6 = (char *)off_1C63128;
                  sub_2333C0(v6 + 1, v111);
                  sub_233E40((__int64)v111);
                  __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v99 = (3 * v87 + 1) >> 1;
                v90 = (unsigned int *)sub_186B300(v19 - 1, v89);
                v19 = (__int64 *)(v90 + 2);
                a3[1] = (__int64)(v90 + 2);
                v33 = (_DWORD *)a2[1];
                *v90 = v99;
                v34 = v33;
                LODWORD(v90) = v90[1];
                v86 = &v19[(unsigned int)v90];
                v85 = (_DWORD)v90 + 1;
              }
LABEL_95:
              if ( v33 )
              {
                v72 = (unsigned int)*(v33 - 1);
                if ( v97 >= (unsigned int)v72 )
                  goto LABEL_97;
                v92 = (unsigned __int64)&v33[2 * v72];
                v93 = (__int64 *)&v33[(unsigned __int64)v101 / 4];
                if ( (unsigned __int64)&v33[(unsigned __int64)v101 / 4] >= v92 )
                  goto LABEL_139;
                do
                {
                  v94 = *v93;
                  if ( *v93 )
                  {
                    v95 = *a2;
                    v29 = (*(_DWORD *)(v94 + 8))-- == 1;
                    if ( v29 )
                      sub_15D7BC0(v95, v94);
                  }
                  ++v93;
                }
                while ( (unsigned __int64)v93 < v92 );
                v33 = (_DWORD *)a2[1];
                v34 = v33;
                if ( v33 )
                {
LABEL_97:
                  v73 = *(v33 - 1);
                  if ( v73 >= v97 )
                  {
LABEL_139:
                    *(v33 - 1) = v97;
                    goto LABEL_105;
                  }
                  while ( 1 )
                  {
                    v77 = *(v34 - 2);
                    if ( v77 >= v97 )
                      break;
LABEL_99:
                    v74 = (3 * v77 + 1) >> 1;
                    v75 = 8 * v74 + 8;
                    if ( 8 * v77 + 8 >= v75 || v77 >= v74 )
                    {
                      v7 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v111, "Overflow encountered when expanding vector");
                      *v7 = (char *)off_1C63128;
                      sub_2333C0(v7 + 1, v111);
                      sub_233E40((__int64)v111);
                      __cxa_throw(
                        v7,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v76 = (unsigned int *)sub_186B300(v34 - 2, v75);
                    v34 = v76 + 2;
                    *v76 = v74;
                    a2[1] = (__int64)(v76 + 2);
                  }
                  *(v34 - 1) = v97;
                  v78 = 8LL * v73;
                  v79 = &v34[(unsigned __int64)v78 / 4];
                  v19 = (__int64 *)&v34[(unsigned __int64)v101 / 4];
                  if ( v78 == v101 )
                    goto LABEL_105;
                  goto LABEL_104;
                }
              }
LABEL_136:
              if ( !v97 )
                goto LABEL_105;
              v96 = sub_186B270(0x18u);
              v34 = (_DWORD *)(v96 + 8);
              v77 = 2;
              *(_QWORD *)v96 = 2;
              a2[1] = v96 + 8;
              if ( v97 > 2 )
              {
                v73 = 0;
                goto LABEL_99;
              }
              *(_DWORD *)(v96 + 4) = v97;
              v79 = (_DWORD *)(v96 + 8);
              v19 = (__int64 *)&v34[(unsigned __int64)v101 / 4];
LABEL_104:
              memset(v79, 0, (char *)v19 - (char *)v79);
LABEL_105:
              v23 = v103;
              v32 = v38;
LABEL_106:
              v20 = v110;
              goto LABEL_87;
            }
            do
              v21 += 8;
            while ( v36 != v21 );
          }
          else
          {
            do
              v21 += 8;
            while ( v36 != v21 );
          }
          break;
        }
LABEL_65:
        v58 = (unsigned __int64)&v33[2 * v102];
        v59 = (__int64 *)&v33[(unsigned __int64)v101 / 4];
        if ( (unsigned __int64)&v33[(unsigned __int64)v101 / 4] >= v58 )
        {
LABEL_123:
          *(v34 - 1) = v97;
LABEL_87:
          v51 = v20;
          if ( v20 )
          {
            v69 = (unsigned __int64)&v20[*((unsigned int *)v20 - 1)];
            if ( (unsigned __int64)v20 >= v69 )
              goto LABEL_54;
            do
            {
              v70 = *v51;
              if ( *v51 )
              {
                v71 = v109;
                v29 = (*(_DWORD *)(v70 + 8))-- == 1;
                if ( v29 )
                  sub_15D7BC0(v71, v70);
              }
              ++v51;
            }
            while ( (unsigned __int64)v51 < v69 );
            v51 = v110;
            if ( v110 )
LABEL_54:
              sub_186B220(v51 - 1);
          }
          if ( v32 )
          {
            v29 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v29 )
              sub_15D7BC0(v108, v32);
          }
          goto LABEL_58;
        }
        do
        {
          v60 = *v59;
          if ( *v59 )
          {
            v61 = *a2;
            v29 = (*(_DWORD *)(v60 + 8))-- == 1;
            if ( v29 )
              sub_15D7BC0(v61, v60);
          }
          ++v59;
        }
        while ( (unsigned __int64)v59 < v58 );
        v34 = (_DWORD *)a2[1];
        if ( v34 )
        {
          v62 = *(v34 - 1);
          v20 = v110;
          if ( v62 >= v97 )
            goto LABEL_123;
          while ( 1 )
          {
            v66 = *(v34 - 2);
            if ( v66 >= v97 )
              break;
LABEL_81:
            v63 = (3 * v66 + 1) >> 1;
            v64 = 8 * v63 + 8;
            if ( 8 * v66 + 8 >= (unsigned int)v64 || v66 >= v63 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v111, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v111);
              sub_233E40((__int64)v111);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v65 = (unsigned int *)sub_186B300(v34 - 2, v64);
            v34 = v65 + 2;
            *v65 = v63;
            a2[1] = (__int64)(v65 + 2);
          }
          *(v34 - 1) = v97;
          v67 = 8LL * v62;
          v68 = &v34[(unsigned __int64)v67 / 4];
          v19 = (__int64 *)&v34[(unsigned __int64)v101 / 4];
          if ( v67 == v101 )
            goto LABEL_106;
        }
        else
        {
          LODWORD(v19) = v97;
          if ( !v97 )
            goto LABEL_106;
          v91 = sub_186B270(0x18u);
          v34 = (_DWORD *)(v91 + 8);
          v66 = 2;
          v62 = 0;
          *(_QWORD *)v91 = 2;
          a2[1] = v91 + 8;
          if ( v97 > 2 )
            goto LABEL_81;
          *(_DWORD *)(v91 + 4) = v97;
          v68 = (_DWORD *)(v91 + 8);
          v19 = (__int64 *)&v34[(unsigned __int64)v101 / 4];
        }
        memset(v68, 0, (char *)v19 - (char *)v68);
        v20 = v110;
        goto LABEL_87;
      }
    }
  }
LABEL_58:
  sub_432170(v100, (_DWORD)a2, (_DWORD)v19, (_DWORD)v20, v21, (_DWORD)v22);
  return v23;
}

