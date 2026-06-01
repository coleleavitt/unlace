_QWORD *__fastcall sub_BF3500(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // r13
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v10; // r14d
  _QWORD *v11; // rax
  _DWORD *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r15d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  _DWORD *v18; // r13
  _QWORD *v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rcx
  int v22; // edx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *result; // rax
  unsigned int *v29; // rax
  __int64 v30; // rcx
  unsigned int *v31; // rcx
  _DWORD *v32; // r12
  _DWORD *v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  __int64 *v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rdi
  bool v39; // zf
  __int64 v40; // rsi
  __int64 v41; // rdi
  _QWORD *v42; // r14
  unsigned int v43; // eax
  _QWORD *v44; // r13
  __int64 *v45; // rbp
  __int64 *v46; // r15
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 *v49; // rbp
  __int64 *v50; // r15
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rax
  _QWORD *v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rdi
  _QWORD *v59; // rsi
  _QWORD *i; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 *v67; // r15
  __int64 v68; // rax
  __int64 *v69; // r13
  __int64 *v70; // r14
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 *v73; // r14
  __int64 *v74; // r13
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdi
  _QWORD *v81; // rdi
  unsigned int v82; // r15d
  unsigned int v83; // edx
  __int64 v84; // rax
  _DWORD *v85; // rdx
  __int64 v86; // rdx
  unsigned int v87; // r15d
  unsigned int v88; // edx
  __int64 v89; // rax
  _DWORD *v90; // rcx
  __int64 v91; // rcx
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  char **v95; // rbx
  char **exception; // r12
  __int64 *v97; // [rsp+8h] [rbp-90h]
  _QWORD *v98; // [rsp+10h] [rbp-88h]
  _QWORD *v99; // [rsp+18h] [rbp-80h]
  _DWORD *v100; // [rsp+20h] [rbp-78h]
  unsigned int v101; // [rsp+2Ch] [rbp-6Ch]
  __int64 v102[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = 4LL * a2;
  v6 = *(_QWORD **)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(unsigned int *)((char *)v6 + v3);
  if ( (unsigned int)v8 < *(_DWORD *)(a1 + 4) )
  {
    if ( v7 )
      v10 = *(_DWORD *)(v7 - 4);
    else
      v10 = 0;
    if ( v6 )
      goto LABEL_7;
    v11 = (_QWORD *)sub_186B270(0x10u);
    v6 = v11 + 1;
    *v11 = 2;
    *(_QWORD *)(a1 + 32) = v11 + 1;
    v12 = v11 + 1;
    while ( 1 )
    {
      *v12 = 0;
      ++*((_DWORD *)v6 - 1);
LABEL_7:
      v13 = *((_DWORD *)v6 - 1);
      if ( a2 < v13 )
        break;
      v12 = (_DWORD *)v6 + v13;
      if ( v13 == *((_DWORD *)v6 - 2) )
      {
        v14 = (3 * v13 + 1) >> 1;
        v15 = 4 * v14 + 8;
        if ( 4 * v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
          goto LABEL_116;
        v16 = (unsigned int *)sub_186B300(v6 - 1, v15);
        v6 = v16 + 2;
        *v16 = v14;
        v17 = v16[1];
        *(_QWORD *)(a1 + 32) = v6;
        v12 = (_DWORD *)v6 + v17;
      }
    }
    if ( a2 < *(_DWORD *)(a1 + 4) )
    {
      v29 = *(unsigned int **)(a1 + 40);
      if ( v29 )
      {
        v30 = *(v29 - 1);
        if ( (_DWORD)v30 == *(v29 - 2) )
        {
          v87 = (unsigned int)(3 * v30 + 1) >> 1;
          v88 = 4 * v87 + 8;
          if ( 4 * (int)v30 + 8 >= v88 || (unsigned int)v30 >= v87 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v102, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v102);
            sub_233E40((__int64)v102);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v89 = sub_186B300(v29 - 2, v88);
          v6 = *(_QWORD **)(a1 + 32);
          v90 = (_DWORD *)v89;
          v29 = (unsigned int *)(v89 + 8);
          *v90 = v87;
          v91 = (unsigned int)v90[1];
          *(_QWORD *)(a1 + 40) = v29;
          v31 = &v29[v91];
        }
        else
        {
          v31 = &v29[v30];
        }
      }
      else
      {
        v93 = (_QWORD *)sub_186B270(0x10u);
        v6 = *(_QWORD **)(a1 + 32);
        *v93 = 2;
        v29 = (unsigned int *)(v93 + 1);
        *(_QWORD *)(a1 + 40) = v29;
        v31 = v29;
      }
      *v31 = a2;
      v32 = (_DWORD *)((char *)v6 + v3);
      ++*(v29 - 1);
      v33 = *(_DWORD **)(a1 + 48);
      if ( v33 )
      {
        v34 = (unsigned int)*(v33 - 1);
        if ( (_DWORD)v34 == *(v33 - 2) )
        {
          v82 = (unsigned int)(3 * v34 + 1) >> 1;
          v83 = 4 * v82 + 8;
          if ( 4 * (int)v34 + 8 >= v83 || (unsigned int)v34 >= v82 )
            goto LABEL_116;
          v84 = sub_186B300(v33 - 2, v83);
          v18 = (_DWORD *)(*(_QWORD *)(a1 + 32) + v3);
          v85 = (_DWORD *)v84;
          v33 = (_DWORD *)(v84 + 8);
          *v85 = v82;
          v86 = (unsigned int)v85[1];
          *(_QWORD *)(a1 + 48) = v33;
          v35 = &v33[v86];
        }
        else
        {
          v35 = &v33[v34];
          v18 = (_DWORD *)((char *)v6 + v3);
        }
      }
      else
      {
        v94 = (_QWORD *)sub_186B270(0x10u);
        v18 = (_DWORD *)(*(_QWORD *)(a1 + 32) + v3);
        *v94 = 2;
        v33 = v94 + 1;
        *(_QWORD *)(a1 + 48) = v33;
        v35 = v33;
      }
      *v35 = *v32;
      ++*(v33 - 1);
    }
    else
    {
      v18 = (_DWORD *)((char *)v6 + v3);
    }
    v19 = *(_QWORD **)(a1 + 16);
    *v18 = v10;
    v98 = v19;
    if ( !v19 )
    {
      v92 = (_QWORD *)sub_186B270(0x78u);
      v22 = 1;
      *v92 = 2;
      v23 = v92 + 1;
      v98 = v23;
      *(_QWORD *)(a1 + 16) = v23;
      goto LABEL_17;
    }
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 != *((_DWORD *)v19 - 2) )
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v19[7 * v21];
LABEL_17:
      v23[1] = a3[1];
      v24 = *a3;
      *a3 = 0;
      *v23 = v24;
      v23[3] = a3[3];
      v25 = a3[2];
      a3[2] = 0;
      v23[2] = v25;
      v26 = a3[4];
      a3[4] = 0;
      v23[4] = v26;
      v27 = a3[5];
      a3[5] = 0;
      v23[5] = v27;
      v23[6] = a3[6];
      *((_DWORD *)v98 - 1) = v22;
      return v98;
    }
    v101 = (3 * v20 + 1) >> 1;
    v54 = 56 * v101 + 8;
    if ( 56 * v20 + 8 < v54 && v20 < (3 * v20 + 1) >> 1 )
    {
      v55 = sub_186B270(v54);
      v56 = *(_QWORD **)(a1 + 16);
      v57 = v55 + 8;
      v100 = (_DWORD *)v55;
      v98 = (_QWORD *)(v55 + 8);
      if ( v56 )
      {
        v58 = *((unsigned int *)v56 - 1);
        *(_DWORD *)(v55 + 4) = v58;
        v59 = &v56[7 * v58];
        for ( i = v56; v59 != i; *(_QWORD *)(v57 - 8) = *(i - 1) )
        {
          v61 = i[1];
          i += 7;
          v57 += 56;
          *(_QWORD *)(v57 - 48) = v61;
          v62 = *(i - 7);
          *(i - 7) = 0;
          *(_QWORD *)(v57 - 56) = v62;
          *(_QWORD *)(v57 - 32) = *(i - 4);
          v63 = *(i - 5);
          *(i - 5) = 0;
          *(_QWORD *)(v57 - 40) = v63;
          v64 = *(i - 3);
          *(i - 3) = 0;
          *(_QWORD *)(v57 - 24) = v64;
          v65 = *(i - 2);
          *(i - 2) = 0;
          *(_QWORD *)(v57 - 16) = v65;
        }
        if ( (_DWORD)v58 )
        {
          v99 = &v56[7 * v58];
          do
          {
            v66 = v56[5];
            if ( v66 )
              sub_186B220((void *)(v66 - 8));
            v67 = (__int64 *)v56[4];
            if ( v67 )
            {
              v68 = *((unsigned int *)v67 - 1);
              if ( (_DWORD)v68 )
              {
                v97 = &v67[4 * v68];
                do
                {
                  v69 = (__int64 *)v67[3];
                  if ( v69 )
                  {
                    v70 = &v69[*((unsigned int *)v69 - 1)];
                    if ( v69 >= v70 )
                      goto LABEL_82;
                    do
                    {
                      while ( 1 )
                      {
                        v71 = *v69;
                        if ( *v69 )
                        {
                          v72 = v67[2];
                          v39 = (*(_DWORD *)(v71 + 8))-- == 1;
                          if ( v39 )
                            break;
                        }
                        if ( ++v69 >= v70 )
                          goto LABEL_81;
                      }
                      sub_15D7BC0(v72, v71);
                      ++v69;
                    }
                    while ( v69 < v70 );
LABEL_81:
                    v69 = (__int64 *)v67[3];
                    if ( v69 )
LABEL_82:
                      sub_186B220(v69 - 1);
                  }
                  v73 = (__int64 *)v67[1];
                  if ( v73 )
                  {
                    v74 = &v73[*((unsigned int *)v73 - 1)];
                    if ( v73 >= v74 )
                      goto LABEL_91;
                    do
                    {
                      while ( 1 )
                      {
                        v75 = *v73;
                        if ( *v73 )
                        {
                          v76 = *v67;
                          v39 = (*(_DWORD *)(v75 + 8))-- == 1;
                          if ( v39 )
                            break;
                        }
                        if ( ++v73 >= v74 )
                          goto LABEL_90;
                      }
                      sub_15D7BC0(v76, v75);
                      ++v73;
                    }
                    while ( v73 < v74 );
LABEL_90:
                    v73 = (__int64 *)v67[1];
                    if ( v73 )
LABEL_91:
                      sub_186B220(v73 - 1);
                  }
                  v67 += 4;
                }
                while ( v67 != v97 );
                v67 = (__int64 *)v56[4];
              }
              sub_186B220(v67 - 1);
            }
            v77 = v56[2];
            if ( v77 )
            {
              v78 = v56[3];
              v39 = (*(_DWORD *)(v77 + 8))-- == 1;
              if ( v39 )
                sub_15D7BC0(v78, v77);
            }
            v79 = *v56;
            if ( *v56 )
            {
              v80 = v56[1];
              v39 = (*(_DWORD *)(v79 + 8))-- == 1;
              if ( v39 )
                sub_15D7BC0(v80, v79);
            }
            v56 += 7;
          }
          while ( v56 != v99 );
          v56 = *(_QWORD **)(a1 + 16);
        }
        sub_186B220(v56 - 1);
        v81 = v98;
        v22 = v100[1] + 1;
        v23 = &v98[7 * (unsigned int)v100[1]];
      }
      else
      {
        *(_DWORD *)(v55 + 4) = 0;
        v23 = (_QWORD *)(v55 + 8);
        v22 = 1;
        v81 = v98;
      }
      *(_QWORD *)(a1 + 16) = v81;
      *v100 = v101;
      goto LABEL_17;
    }
LABEL_116:
    v95 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v102, "Overflow encountered when expanding vector");
    *v95 = (char *)off_1C63128;
    sub_2333C0(v95 + 1, v102);
    sub_233E40((__int64)v102);
    __cxa_throw(v95, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v36 = (__int64 *)(v7 + 56 * v8);
  v37 = *v36;
  *v36 = *a3;
  *a3 = v37;
  if ( v37 )
  {
    v38 = a3[1];
    v39 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v39 )
      sub_15D7BC0(v38, v37);
  }
  *a3 = 0;
  v40 = v36[2];
  v36[2] = a3[2];
  a3[2] = v40;
  if ( v40 )
  {
    v41 = a3[3];
    v39 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v39 )
      sub_15D7BC0(v41, v40);
  }
  a3[2] = 0;
  if ( a3 + 4 != v36 + 4 )
  {
    v42 = (_QWORD *)v36[4];
    if ( v42 )
    {
      v43 = *((_DWORD *)v42 - 1);
      if ( v43 )
      {
        v44 = &v42[4 * v43];
        do
        {
          v45 = (__int64 *)v42[3];
          if ( v45 )
          {
            v46 = &v45[*((unsigned int *)v45 - 1)];
            if ( v45 >= v46 )
              goto LABEL_43;
            do
            {
              while ( 1 )
              {
                v47 = *v45;
                if ( *v45 )
                {
                  v48 = v42[2];
                  v39 = (*(_DWORD *)(v47 + 8))-- == 1;
                  if ( v39 )
                    break;
                }
                if ( ++v45 >= v46 )
                  goto LABEL_42;
              }
              sub_15D7BC0(v48, v47);
              ++v45;
            }
            while ( v45 < v46 );
LABEL_42:
            v45 = (__int64 *)v42[3];
            if ( v45 )
LABEL_43:
              sub_186B220(v45 - 1);
          }
          v49 = (__int64 *)v42[1];
          if ( v49 )
          {
            v50 = &v49[*((unsigned int *)v49 - 1)];
            if ( v49 >= v50 )
              goto LABEL_52;
            do
            {
              while ( 1 )
              {
                v51 = *v49;
                if ( *v49 )
                {
                  v52 = *v42;
                  v39 = (*(_DWORD *)(v51 + 8))-- == 1;
                  if ( v39 )
                    break;
                }
                if ( ++v49 >= v50 )
                  goto LABEL_51;
              }
              sub_15D7BC0(v52, v51);
              ++v49;
            }
            while ( v49 < v50 );
LABEL_51:
            v49 = (__int64 *)v42[1];
            if ( v49 )
LABEL_52:
              sub_186B220(v49 - 1);
          }
          v42 += 4;
        }
        while ( v42 != v44 );
        v42 = (_QWORD *)v36[4];
      }
      sub_186B220(v42 - 1);
    }
    v36[4] = 0;
    v36[4] = a3[4];
    a3[4] = 0;
  }
  if ( v36 + 5 != a3 + 5 )
  {
    v53 = v36[5];
    if ( v53 )
      sub_186B220((void *)(v53 - 8));
    v36[5] = 0;
    v36[5] = a3[5];
    a3[5] = 0;
  }
  result = (_QWORD *)a3[6];
  v36[6] = (__int64)result;
  return result;
}

